#include "TTree.h"
#include "RooWorkspace.h"
#include "RooDataSet.h"
#include "RooRealVar.h"
#include "RooExponential.h"
#include "RooAddPdf.h"
#include "RooGaussian.h"
#include "RooFitResult.h"
#include "RooPlot.h"
#include "RooExtendPdf.h"
#include "RooStats/SPlot.h"
#include "RooStats/ModelConfig.h"
#include "RooGenericPdf.h"
#include "RooFormulaVar.h"
#include "RooBernstein.h"
#include "RooMinuit.h"

#include "TLatex.h"
#include "TString.h"
#include "TFile.h"
#include "TH1D.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TRandom3.h"
#include "TLegend.h"
#include "TMath.h"
#include "TBox.h"

#include <vector>

//LOCAL INCLUDES
#include "makeInvertedANFit_v2.hh"


const int nTags=9;
TString alltags[nTags] = {"dexp","sexp","texp","mexp","spow","dpow","pol2","pol3","pol4"};

#define DEBUG 0

RooWorkspace* makeMCFit( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName )
{
  RooWorkspace* ws = new RooWorkspace( "ws", "" );

  RooRealVar mgg(mggName,"m_{#gamma#gamma}",103,160,"GeV");
  mgg.setBins(38);
  mgg.setRange("sideband_low", 103,120);
  mgg.setRange("sideband_high",131,160);
  mgg.setRange("signal",115,135);

  RooRealVar w( "xsecSF", "w", 0, 10000 );

  TString tag3 = makeDoubleGauss( "mc_dg", mgg, *ws );
  //RooDataSet data( "data", "", tree, RooArgSet(mgg) );
  RooDataSet data( "data", "", RooArgSet(mgg, w), RooFit::WeightVar(w), RooFit::Import(*tree) );
  ws->pdf( tag3 )->fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE),RooFit::Range("signal"));
  RooFitResult* bres = ws->pdf( tag3 )->fitTo(data, RooFit::Strategy(2), RooFit::Save(kTRUE), RooFit::Extended(kTRUE), RooFit::Range("signal") );
    
  bres->SetName( tag3 + "_b_fitres" );
  ws->import( *bres );

  RooPlot *fmgg = mgg.frame();
  data.plotOn(fmgg);
  ws->pdf( tag3 )->plotOn(fmgg,RooFit::LineColor(kRed),RooFit::Range("Full"),RooFit::NormRange("Full"));
  fmgg->SetName( tag3 + "_frame" );
  ws->import( *fmgg );

   RooPlot* pdfFrame = mgg.frame();
   ws->pdf( tag3 )->plotOn( pdfFrame, RooFit::LineColor(kViolet), RooFit::Range("Full"), RooFit::NormRange("Full") );
   pdfFrame->SetName( tag3+"_pdfframe" );
   ws->import( *pdfFrame );
  
  return ws;
};

RooWorkspace* makeInvertedANFit(TTree* tree, float forceSigma=-1, bool constrainMu=false, float forceMu=-1, TString mggName = "mGammaGamma") {
  RooWorkspace *ws = new RooWorkspace("ws","");

  std::vector< TString (*)(TString, RooRealVar&, RooWorkspace&) > bkgPdfList;
  bkgPdfList.push_back(makeDoubleExp);
#if DEBUG==0
  bkgPdfList.push_back(makeSingleExp);
  bkgPdfList.push_back(makeTripleExp);
  bkgPdfList.push_back(makeModExp);
  bkgPdfList.push_back(makeSinglePow);
  bkgPdfList.push_back(makeDoublePow);
  bkgPdfList.push_back(makePoly2);
#endif
  bkgPdfList.push_back(makePoly3);
  bkgPdfList.push_back(makePoly4);



  RooRealVar mgg(mggName,"m_{#gamma#gamma}",103,160,"GeV");
  
  mgg.setBins(38);

  mgg.setRange("sideband_low", 103,120);
  mgg.setRange("sideband_high",131,160);
  mgg.setRange("signal",120,131);

  RooRealVar MR("MR","",0,3000,"GeV");
  MR.setBins(60);
  
  RooRealVar Rsq("t1Rsq","",0,1,"GeV");
  Rsq.setBins(20);

  RooRealVar hem1_M("hem1_M","",-1,2000,"GeV");
  hem1_M.setBins(40);

  RooRealVar hem2_M("hem2_M","",-1,2000,"GeV");
  hem2_M.setBins(40);

  RooRealVar ptgg("ptgg","p_{T}^{#gamma#gamma}",0,500,"GeV");
  ptgg.setBins(50);

  //RooDataSet data("data","",tree,RooArgSet(mgg,MR,Rsq,hem1_M,hem2_M,ptgg));
  RooDataSet data("data","",tree,RooArgSet(mgg));

  RooDataSet* blind_data = (RooDataSet*)data.reduce("mgg<121 || mgg>130");

  std::vector<TString> tags;
  //fit many different background models
  for(auto func = bkgPdfList.begin(); func != bkgPdfList.end(); func++) {
    TString tag = (*func)("b",mgg,*ws);
    tags.push_back(tag);
    ws->pdf("b_"+tag+"_ext")->fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE),RooFit::Range("sideband_low,sideband_high"));
    RooFitResult* bres = ws->pdf("b_"+tag+"_ext")->fitTo(data,RooFit::Strategy(2),RooFit::Save(kTRUE),RooFit::Extended(kTRUE),RooFit::Range("sideband_low,sideband_high"));
    bres->SetName(tag+"_b_fitres");
    ws->import(*bres);

    //make blinded fit
    RooPlot *fmgg_b = mgg.frame();
    blind_data->plotOn(fmgg_b,RooFit::Range("sideband_low,sideband_high"));
    TBox blindBox(121,fmgg_b->GetMinimum()-(fmgg_b->GetMaximum()-fmgg_b->GetMinimum())*0.015,130,fmgg_b->GetMaximum());
    blindBox.SetFillColor(kGray);
    fmgg_b->addObject(&blindBox);
    ws->pdf("b_"+tag+"_ext")->plotOn(fmgg_b,RooFit::LineColor(kRed),RooFit::Range("Full"),RooFit::NormRange("sideband_low,sideband_high"));
    fmgg_b->SetName(tag+"_blinded_frame");
    ws->import(*fmgg_b);
    delete fmgg_b;
    

    //set all the parameters constant
    RooArgSet* vars = ws->pdf("b_"+tag)->getVariables();
    RooFIter iter = vars->fwdIterator();
    RooAbsArg* a;
    while( (a = iter.next()) ){
      if(std::string(a->GetName()).compare(mggName.Data())==0) continue;
      static_cast<RooRealVar*>(a)->setConstant(kTRUE);
    }

    RooRealVar sigma(tag+"_s_sigma","",5,0,100);
    if(forceSigma!=-1) {
      sigma.setVal(forceSigma);
      sigma.setConstant(true);
    }
    RooRealVar mu(tag+"_s_mu","",126,120,130);
    if(forceMu!=-1) {
      mu.setVal(forceMu);
      mu.setConstant(true);
    }
    RooGaussian sig(tag+"_sig_model","",mgg,mu,sigma);
    RooRealVar Nsig(tag+"_sb_Ns","",5,0,100);
    RooRealVar Nbkg(tag+"_sb_Nb","",100,0,100000);
    

    RooRealVar HiggsMass("HiggsMass","",125.7);
    RooRealVar HiggsMassError("HiggsMassError","",0.4);
    RooGaussian HiggsMassConstraint("HiggsMassConstraint","",mu,HiggsMass,HiggsMassError);


    RooAddPdf fitModel(tag+"_sb_model","",RooArgList( *ws->pdf("b_"+tag), sig ),RooArgList(Nbkg,Nsig));

    RooFitResult* sbres;
    if(constrainMu) {
      fitModel.fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE),RooFit::ExternalConstraints(RooArgSet(HiggsMassConstraint)));
      sbres = fitModel.fitTo(data,RooFit::Strategy(2),RooFit::Save(kTRUE),RooFit::Extended(kTRUE),RooFit::ExternalConstraints(RooArgSet(HiggsMassConstraint)));
    } else {
      fitModel.fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE));
      sbres = fitModel.fitTo(data,RooFit::Strategy(2),RooFit::Save(kTRUE),RooFit::Extended(kTRUE));
    }
    sbres->SetName(tag+"_sb_fitres");
    ws->import(*sbres);
    ws->import(fitModel);

    RooPlot *fmgg = mgg.frame();
    data.plotOn(fmgg);
    fitModel.plotOn(fmgg);
    ws->pdf("b_"+tag+"_ext")->plotOn(fmgg,RooFit::LineColor(kRed),RooFit::Range("Full"),RooFit::NormRange("Full"));
    fmgg->SetName(tag+"_frame");
    ws->import(*fmgg);
    delete fmgg;

    RooPlot *fNs = Nsig.frame(0,25);
    fNs->SetName(tag+"_Nsig_pll");
    RooAbsReal *nll = fitModel.createNLL(data,RooFit::NumCPU(4));
    RooMinuit(*nll).migrad();
    RooAbsReal *pll = nll->createProfile(Nsig);
    //nll->plotOn(fNs,RooFit::ShiftToZero(),RooFit::LineColor(kRed));
    pll->plotOn(fNs);
    ws->import(*fNs);
    delete fNs;
  }

  RooArgSet weights("weights");
  RooArgSet pdfs("pdfs");

  RooRealVar minAIC("minAIC","",1E10);
  float aicExpSum=0;
  //compute AIC stuff
  for(auto t = tags.begin(); t!=tags.end(); t++) {
    RooAbsPdf *p = ws->pdf("b_"+*t);
    RooFitResult *sb = (RooFitResult*)ws->obj(*t+"_b_fitres");
    RooRealVar k(*t+"_b_k","",p->getParameters(RooArgSet(mgg))->getSize());
    RooRealVar nll(*t+"_b_minNll","",sb->minNll());
    RooFormulaVar AIC(*t+"_b_AIC","2*@0+2*@1",RooArgSet(nll,k));
    ws->import(AIC);
    if(AIC.getVal() < minAIC.getVal()) {
      minAIC.setVal(AIC.getVal());
    }
    aicExpSum+=TMath::Exp(-0.5*AIC.getVal()); //we will need this precomputed  for the next step
    pdfs.add(*p);
  }
  ws->import(minAIC);
  //compute the AIC weight

  for(auto t = tags.begin(); t!=tags.end(); t++) {
    RooFormulaVar *AIC = (RooFormulaVar*)ws->obj(*t+"_b_AIC");
    RooRealVar *AICw = new RooRealVar(*t+"_b_AICWeight","",TMath::Exp(-0.5*(AIC->getVal()-minAIC.getVal()))/aicExpSum/TMath::Exp(0.5*minAIC.getVal()));
    ws->import(*AICw);
    std::cout << *t << ":  " << AIC->getVal()-minAIC.getVal() << "    " << AICw->getVal() << std::endl;
    weights.add(*AICw);
  }
  RooAddPdf b_AIC("b_AIC","",pdfs,weights);

  b_AIC.fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE),RooFit::Range("sideband_low,sideband_high"));
  RooFitResult* bres = b_AIC.fitTo(data,RooFit::Strategy(2),RooFit::Save(kTRUE),RooFit::Extended(kTRUE),RooFit::Range("sideband_low,sideband_high"));
  bres->SetName("AIC_b_fitres");
  ws->import(*bres);

  //make blinded fit
  RooPlot *fmgg_b = mgg.frame(RooFit::Range("sideband_low,sideband_high"));
  blind_data->plotOn(fmgg_b,RooFit::Range("sideband_low,sideband_high"));
  TBox blindBox(121,fmgg_b->GetMinimum()-(fmgg_b->GetMaximum()-fmgg_b->GetMinimum())*0.015,130,fmgg_b->GetMaximum());
  blindBox.SetFillColor(kGray);
  fmgg_b->addObject(&blindBox);
  b_AIC.plotOn(fmgg_b,RooFit::LineColor(kRed),RooFit::Range("Full"),RooFit::NormRange("sideband_low,sideband_high"));
  fmgg_b->SetName("AIC_blinded_frame");
  ws->import(*fmgg_b);
  delete fmgg_b;
    
  

  RooRealVar sigma("AIC_s_sigma","",5,0,100);
  if(forceSigma!=-1) {
    sigma.setVal(forceSigma);
    sigma.setConstant(true);
  }
  RooRealVar mu("AIC_s_mu","",126,120,130);
  if(forceMu!=-1) {
    mu.setVal(forceMu);
    mu.setConstant(true);
  }
  RooGaussian sig("AIC_sig_model","",mgg,mu,sigma);
  RooRealVar Nsig("AIC_sb_Ns","",5,0,100);
  RooRealVar Nbkg("AIC_sb_Nb","",100,0,100000);
  
  
  RooRealVar HiggsMass("HiggsMass","",125.7);
  RooRealVar HiggsMassError("HiggsMassError","",0.4);
  RooGaussian HiggsMassConstraint("HiggsMassConstraint","",mu,HiggsMass,HiggsMassError);
  
  
  RooAddPdf fitModel("AIC_sb_model","",RooArgList( b_AIC, sig ),RooArgList(Nbkg,Nsig));

  RooFitResult* sbres;
  if(constrainMu) {
    fitModel.fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE),RooFit::ExternalConstraints(RooArgSet(HiggsMassConstraint)));
    sbres = fitModel.fitTo(data,RooFit::Strategy(2),RooFit::Save(kTRUE),RooFit::Extended(kTRUE),RooFit::ExternalConstraints(RooArgSet(HiggsMassConstraint)));
  } else {
    fitModel.fitTo(data,RooFit::Strategy(0),RooFit::Extended(kTRUE));
    sbres = fitModel.fitTo(data,RooFit::Strategy(2),RooFit::Save(kTRUE),RooFit::Extended(kTRUE));
  }
  
  sbres->SetName("AIC_sb_fitres");
  ws->import(*sbres);
  ws->import(fitModel);
  
  RooPlot *fmgg = mgg.frame();
  data.plotOn(fmgg);
  fitModel.plotOn(fmgg);
  ws->pdf("b_AIC")->plotOn(fmgg,RooFit::LineColor(kRed),RooFit::Range("Full"),RooFit::NormRange("Full"));
  fmgg->SetName("AIC_frame");
  ws->import(*fmgg);
  delete fmgg;
  
  RooPlot *fNs = Nsig.frame(0,25);
  fNs->SetName("AIC_Nsig_pll");
  RooAbsReal *nll = fitModel.createNLL(data,RooFit::NumCPU(4));
  RooMinuit(*nll).migrad();
  RooAbsReal *pll = nll->createProfile(Nsig);
  //nll->plotOn(fNs,RooFit::ShiftToZero(),RooFit::LineColor(kRed));
  pll->plotOn(fNs);
  ws->import(*fNs);
  delete fNs;

  std::cout << "min AIC: " << minAIC.getVal() << std::endl;
  for(auto t = tags.begin(); t!=tags.end(); t++) {
    RooFormulaVar *AIC = (RooFormulaVar*)ws->obj(*t+"_b_AIC");
    RooRealVar *AICw = ws->var(*t+"_b_AICWeight");
    RooRealVar* k = ws->var(*t+"_b_k");
    printf("%s & %0.0f & %0.2f & %0.2f \\\\\n",t->Data(),k->getVal(),AIC->getVal()-minAIC.getVal(),AICw->getVal());
    //std::cout << k->getVal() << " " << AIC->getVal()-minAIC.getVal() << " " << AICw->getVal() << std::endl;
  }

  return ws;
}

float getDLL(RooWorkspace* w, TString tag) {
  //RooFitResult::sexp_b_fitres

  RooFitResult *b = (RooFitResult*)w->obj(tag+"_b_fitres");
  RooFitResult *sb = (RooFitResult*)w->obj(tag+"_sb_fitres");

  return -2*(sb->minNll()-b->minNll());
}

TString makeDoubleExp(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *alpha1 = new RooRealVar(tag+"_dexp_alpha1","#alpha_{1}",-0.03,-4.,4.);
  RooRealVar *alpha2 = new RooRealVar(tag+"_dexp_alpha2","#alpha_{2}",-0.01,-4.,4.);

  RooFormulaVar *asq1 = new RooFormulaVar(tag+"_dexp_asq1","","-1*@0^2",*alpha1);
  RooFormulaVar *asq2 = new RooFormulaVar(tag+"_dexp_asq2","","-1*@0^2",*alpha2);

  RooRealVar *f      = new RooRealVar(tag+"_dexp_f","f",0.3,0.001,0.999);
  RooRealVar *Nbkg   = new RooRealVar(tag+"_dexp_Nbkg","N_{bkg}",10,0.001,1E9);

  //RooFormulaVar *fn = new RooFormulaVar(tag+"_dexp_fn","","0.5*(tanh(@0)+1)",*f);

  //RooExponential *exp1 = new RooExponential(tag+"_dexp_exp1","",mgg,*alpha1);
  //RooExponential *exp2 = new RooExponential(tag+"_dexp_exp2","",mgg,*alpha2);

  RooExponential *exp1 = new RooExponential(tag+"_dexp_exp1","",mgg,*asq1);
  RooExponential *exp2 = new RooExponential(tag+"_dexp_exp2","",mgg,*asq2);

  RooAddPdf *add       = new RooAddPdf(tag+"_dexp","",*exp1,*exp2,*f);

  w.import(*(new RooExtendPdf(tag+"_dexp_ext","",*add,*Nbkg)));;

  return "dexp";
}

TString makeSingleExp(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *alpha1 = new RooRealVar(tag+"_sexp_alpha1","#alpha_{1}",-1,-10,-0.0001);
  RooRealVar *Nbkg   = new RooRealVar(tag+"_sexp_Nbkg","N_{bkg}",10,1,1E9);

  RooExponential *exp1 = new RooExponential(tag+"_sexp","",mgg,*alpha1);

  w.import(*(new RooExtendPdf(tag+"_sexp_ext","",*exp1,*Nbkg)));;

  return "sexp";
}

TString makeTripleExp(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *alpha1 = new RooRealVar(tag+"_texp_alpha1","#alpha_{1}",-0.03,-4.,4.);
  RooRealVar *alpha2 = new RooRealVar(tag+"_texp_alpha2","#alpha_{2}",-0.01,-4.,4.);
  RooRealVar *alpha3 = new RooRealVar(tag+"_texp_alpha3","#alpha_{3}",-0.0001,-4.,4.);

  RooFormulaVar *asq1 = new RooFormulaVar(tag+"_texp_asq1","","-1*@0^2",*alpha1);
  RooFormulaVar *asq2 = new RooFormulaVar(tag+"_texp_asq2","","-1*@0^2",*alpha2);
  RooFormulaVar *asq3 = new RooFormulaVar(tag+"_texp_asq2","","-1*@0^2",*alpha3);

  RooRealVar *f1      = new RooRealVar(tag+"_texp_f1","f1",0.3,0.001,0.999);
  RooRealVar *f2      = new RooRealVar(tag+"_texp_f2","f2",0.01,0.001,0.999);
  RooRealVar *Nbkg   = new RooRealVar(tag+"_texp_Nbkg","N_{bkg}",10,0.001,1E9);

  RooExponential *exp1 = new RooExponential(tag+"_texp_exp1","",mgg,*asq1);
  RooExponential *exp2 = new RooExponential(tag+"_texp_exp2","",mgg,*asq2);
  RooExponential *exp3 = new RooExponential(tag+"_texp_exp3","",mgg,*asq3);

  RooAddPdf *add       = new RooAddPdf(tag+"_texp","",RooArgSet(*exp1,*exp2,*exp3),RooArgSet(*f1,*f2));

  w.import(*(new RooExtendPdf(tag+"_texp_ext","",*add,*Nbkg)));;

  return "texp";
}

TString makeModExp(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *alpha1 = new RooRealVar(tag+"_mexp_alpha1","#alpha_{1}",-1,-10,-0.0001);
  RooRealVar *m1 = new RooRealVar(tag+"_mexp_m1","m_{1}",1.,0.,10.);
  RooRealVar *Nbkg   = new RooRealVar(tag+"_mexp_Nbkg","N_{bkg}",10,1,1E9);

  RooGenericPdf *mexp1 = new RooGenericPdf(tag+"_mexp","","exp(@0,*@1^@2)",RooArgList(*alpha1,mgg,*m1));

  w.import(*(new RooExtendPdf(tag+"_mexp_ext","",*mexp1,*Nbkg)));;

  return "mexp";
}

TString makeSinglePow(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *alpha1 = new RooRealVar(tag+"_spow_alpha1","#alpha_{1}",-1,-10,-0.0001);
  RooRealVar *Nbkg   = new RooRealVar(tag+"_spow_Nbkg","N_{bkg}",10,1,1E9);

  RooGenericPdf *pow1 = new RooGenericPdf(tag+"_spow","","@0^@1",RooArgList(mgg,*alpha1));

  w.import(*(new RooExtendPdf(tag+"_spow_ext","",*pow1,*Nbkg)));;

  return "spow";
}

TString makeDoublePow(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *alpha1 = new RooRealVar(tag+"_dpow_alpha1","#alpha_{1}",-1,-10,-0.0001);
  RooRealVar *alpha2 = new RooRealVar(tag+"_dpow_alpha2","#alpha_{2}",-2,-10,-0.0001);
  RooRealVar *f      = new RooRealVar(tag+"_dpow_f","f",0.3,0.0001,0.9999);
  RooRealVar *Nbkg   = new RooRealVar(tag+"_dpow_Nbkg","N_{bkg}",10,1,1E9);

  RooGenericPdf *pow1 = new RooGenericPdf(tag+"_dpow_pow1","","@0^@1",RooArgList(mgg,*alpha1));
  RooGenericPdf *pow2 = new RooGenericPdf(tag+"_dpow_pow2","","@0^@1",RooArgList(mgg,*alpha2));

  RooAddPdf *add       = new RooAddPdf(tag+"_dpow","",*pow1,*pow2,*f);

  w.import(*(new RooExtendPdf(tag+"_dpow_ext","",*add,*Nbkg)));

  return "dpow";
}

TString makePoly2(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *pC = new RooRealVar(tag+"_pol2_pC","C",1,-10,10);
  RooRealVar *p0 = new RooRealVar(tag+"_pol2_p0","p_0",0,-10,10);
  RooRealVar *p1 = new RooRealVar(tag+"_pol2_p1","p_1",0,-10,10);

  RooRealVar *Nbkg   = new RooRealVar(tag+"_pol2_Nbkg","N_{bkg}",10,1,1E9);

  RooFormulaVar *pCmod = new RooFormulaVar(tag+"_pol2_pCmod","@0*@0",*pC);
  RooFormulaVar *p0mod = new RooFormulaVar(tag+"_pol2_p0mod","@0*@0",*p0);
  RooFormulaVar *p1mod = new RooFormulaVar(tag+"_pol2_p1mod","@0*@0",*p1);

  RooBernstein* bern = new RooBernstein(tag+"_pol2","",mgg,RooArgList(*pCmod,*p0mod,*p1mod));

  w.import(*(new RooExtendPdf(tag+"_pol2_ext","",*bern,*Nbkg)));

  return "pol2";
}

TString makePoly3(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *pC = new RooRealVar(tag+"_pol3_pC","C",1,-10,10);
  RooRealVar *p0 = new RooRealVar(tag+"_pol3_p0","p_0",0,-10,10);
  RooRealVar *p1 = new RooRealVar(tag+"_pol3_p1","p_1",0,-10,10);
  RooRealVar *p2 = new RooRealVar(tag+"_pol3_p2","p_2",0,-10,10);

  RooRealVar *Nbkg   = new RooRealVar(tag+"_pol3_Nbkg","N_{bkg}",10,1,1E9);

  RooFormulaVar *pCmod = new RooFormulaVar(tag+"_pol3_pCmod","@0*@0",*pC);
  RooFormulaVar *p0mod = new RooFormulaVar(tag+"_pol3_p0mod","@0*@0",*p0);
  RooFormulaVar *p1mod = new RooFormulaVar(tag+"_pol3_p1mod","@0*@0",*p1);
  RooFormulaVar *p2mod = new RooFormulaVar(tag+"_pol3_p2mod","@0*@0",*p2);

  RooBernstein* bern = new RooBernstein(tag+"_pol3","",mgg,RooArgList(*pCmod,*p0mod,*p1mod,*p2mod));

  w.import(*(new RooExtendPdf(tag+"_pol3_ext","",*bern,*Nbkg)));

  return "pol3";
}
TString makePoly4(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar *pC = new RooRealVar(tag+"_pol4_pC","C",1,-10,10);
  RooRealVar *p0 = new RooRealVar(tag+"_pol4_p0","p_0",0,-10,10);
  RooRealVar *p1 = new RooRealVar(tag+"_pol4_p1","p_1",0,-10,10);
  RooRealVar *p2 = new RooRealVar(tag+"_pol4_p2","p_2",0,-10,10);
  RooRealVar *p3 = new RooRealVar(tag+"_pol4_p3","p_3",0,-10,10);

  RooRealVar *Nbkg   = new RooRealVar(tag+"_pol4_Nbkg","N_{bkg}",10,1,1E9);

  RooFormulaVar *pCmod = new RooFormulaVar(tag+"_pol4_pCmod","@0*@0",*pC);
  RooFormulaVar *p0mod = new RooFormulaVar(tag+"_pol4_p0mod","@0*@0",*p0);
  RooFormulaVar *p1mod = new RooFormulaVar(tag+"_pol4_p1mod","@0*@0",*p1);
  RooFormulaVar *p2mod = new RooFormulaVar(tag+"_pol4_p2mod","@0*@0",*p2);
  RooFormulaVar *p3mod = new RooFormulaVar(tag+"_pol4_p3mod","@0*@0",*p3);

  RooBernstein* bern = new RooBernstein(tag+"_pol4","",mgg,RooArgList(*pCmod,*p0mod,*p1mod,*p2mod,*p3mod));

  w.import(*(new RooExtendPdf(tag+"_pol4_ext","",*bern,*Nbkg)));

  return "pol4";
}

TString makeGauss(TString tag, RooRealVar& mgg,RooWorkspace& w) {
  RooRealVar* mu = new RooRealVar( tag+"_gauss_mu", "#mu", 125, 120., 135. );
  RooRealVar* sigma = new RooRealVar( tag+"_gauss_sigma", "#sigma", 1.0, .0, 50. );
  
  RooRealVar* Nbkg   = new RooRealVar( tag+"_gauss_Nbkg", "N_{bkg}", 100, 1, 1E9 );

  RooGaussian* gauss = new RooGaussian( tag+"_gauss", "", mgg, *mu, *sigma );

  w.import( *( new RooExtendPdf( tag+"_gaus_ext", "", *gauss, *Nbkg ) ) );

  return tag+"_gaus_ext";
}


TString makeDoubleGauss( TString tag, RooRealVar& mgg, RooWorkspace& w )
{
  RooRealVar* mu = new RooRealVar( tag+"_gauss_mu", "#mu", 125, 0., 1000. );
  RooRealVar* sigma1 = new RooRealVar( tag+"_gauss_sigma1", "#sigma_{1}", 1.0, .0, 5000. );
  RooRealVar* sigma2 = new RooRealVar( tag+"_gauss_sigma2", "#sigma_{2}", 1.0, .0, 5000. );
  
  RooRealVar* frac = new RooRealVar( tag+"_frac", "frac", 0.5, .0, 1.0 );
  
  RooRealVar* Nbkg   = new RooRealVar( tag+"_gauss_Nbkg", "N_{bkg}", 1, 1e-10, 1e8 );

  RooGaussian* gauss1 = new RooGaussian( tag+"_gauss1", "", mgg, *mu, *sigma1 );
  RooGaussian* gauss2 = new RooGaussian( tag+"_gauss2", "", mgg, *mu, *sigma2 );
  RooAddPdf* doublegauss = new RooAddPdf( tag + "_doublegauss", "", RooArgList( *gauss1, *gauss2 ), *frac );

  w.import( *( new RooExtendPdf( tag+"_doublegauss_ext", "", *doublegauss, *Nbkg ) ) );

  return tag+"_doublegauss_ext";
};
