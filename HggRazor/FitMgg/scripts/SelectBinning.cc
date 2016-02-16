#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TF1.h>
#include <TDirectory.h>

void SelectBinning( TString fname, TString categoryMode = "highres" )
{
  TFile* f = new TFile( fname, "READ");
  assert( f );

  TTree* tree = (TTree*)f->Get("HggRazor");
  double MR_max   = 5000.;
  double Rsq_max  = 2.0;
  double MR_step  = 50.;
  double Rsq_step = 0.05;
  double MR_i     = MR_max - MR_step;
  double MR_i     = Rsq_max - Rsq_step;
  
  TString cut = "pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.";
  if (categoryMode == "highpt") categoryCutString = " && pTGammaGamma >= 110 ";
  else if (categoryMode == "hbb") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.)<25";
  else if (categoryMode == "zbb") categoryCutString = " && pTGammaGamma < 110 && abs(mbbZ-91.2)<25 ";
  else if (categoryMode == "highres") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.)>=25 && abs(mbbZ-91.2)>=25 && pho1sigmaEOverE < 0.015 && pho2sigmaEOverE < 0.015 ";
  else if (categoryMode == "lowres") categoryCutString = " && pTGammaGamma < 110  && abs(mbbH-125.)>=25 && abs(mbbZ-91.2)>=25 && !(pho1sigmaEOverE < 0.015 && pho2sigmaEOverE < 0.015) ";
  else if (categoryMode == "inclusive") categoryCutString = "";
   
  for ( int i = 0; i < 1; i++ )
    {
      TString razorCut = Form("MR > %.1f && MR < %.1f && t1Rsq > %.1f && t1Rsq < %1.f", MR_i, MR_max, Rsq_i, Rsq_max );
    }

  /*
  tree->Draw("sigInt_hat>>tmp1(100, 0., 7.)", "", "goff");
  TH1F* h = (TH1F*)gDirectory->Get("tmp1");
  TF1* myF = new TF1("myF", "[0]*( [4]*exp( -(x-[1])*(x-[1])/(2*[2]*[2]) ) + (1-[4])*exp( -(x-[1])*(x-[1])/(2*[3]*[3]) ) )", 1.5, 6.);
  myF->SetParameter(0, 300 );
  myF->SetParameter(1, h->GetMean() );
  myF->SetParameter(2, h->GetStdDev() );
  myF->SetParameter(3, 3*h->GetStdDev() );
  myF->SetParameter(4, 0.9 );
  
  h->Fit( myF, "LR");
  h->Draw();
  */
  return;
};
