#include <iostream>
#include <vector>
//ROOT
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TString.h>
#include <TDirectory.h>

void CreateROC( TString fnSignal, TString fnBkg, float valCut )
{
  
  TString cut = "weight*(mGammaGamma > 103. && mGammaGamma < 160. && pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.)";
  
  //Signal ROOT file
  TFile* fs = new TFile( fnSignal, "READ");
  assert( fs );
  //Signal Tree
  TTree* ts = (TTree*)fs->Get("HggRazor");

  //sigmaMoverM
  ts->Draw("sigmaMoverM>>sMoverM(500,0, 0.1)", cut);
  TH1F* h_sMoverM = (TH1F*)gDirectory->Get("sMoverM");
  h_sMoverM->Scale( 1./h_sMoverM->Integral() );
  h_sMoverM->Draw();
  
  //2dsigmaEoverE
  ts->Draw("pho1sigmaEOverE:pho2sigmaEOverE>>s2dCut(1000, 0, 0.2, 1000, 0, 0.2)", cut);
  TH2F* h_s2dCut  = (TH2F*)gDirectory->Get("s2dCut");
  h_s2dCut->Scale( 1./h_s2dCut->Integral() );
  
  
 

  //Bkg ROOT file
  TFile* fb = new TFile( fnBkg, "READ");
  assert( fb );
  //Bkg Tree
  TTree* tb = (TTree*)fb->Get("HggRazor");
  //sigmaMoverM
  tb->Draw("sigmaMoverM>>sMoverM_bkg(500,0, 0.1)", cut);
  TH1F* h_sMoverM_bkg = (TH1F*)gDirectory->Get("sMoverM_bkg");
  h_sMoverM_bkg->Scale( 1./h_sMoverM_bkg->Integral() );
  h_sMoverM_bkg->Draw();
  //2dsigmaEoverE
  tb->Draw("pho1sigmaEOverE:pho2sigmaEOverE>>bkg2dCut(1000, 0, 0.2, 1000, 0, 0.2)", cut);
  TH2F* h_bkg2dCut  = (TH2F*)gDirectory->Get("bkg2dCut");
  h_bkg2dCut->Scale( 1.0/h_bkg2dCut->Integral() );
  
  
  const int npoints = 100;
  float _seff[npoints], _bkgR[npoints];
  
  //TGraph* g = new TGraph("ROC")
  
  //------------------------
  //SigmaMoverM ROC
  //------------------------
  float step = 0.10/500.00;
  float cutStep = valCut/npoints;
  for ( int j = 0; j < npoints; j++)
    {
      int bins = cutStep*j/step;
      float _signalEff = 0;
      float _bkgEff    = 0;
      for ( int i = 1; i <= bins; i++ )
	{
	  //std::cout << "sMoverM: " << (i-1)*step << ", bc: " << h_sMoverM->GetBinContent( i ) << std::endl;
	  _signalEff += h_sMoverM->GetBinContent( i );
	  _bkgEff    += h_sMoverM_bkg->GetBinContent( i );
	}
      _seff[j]   = _signalEff;
      _bkgR[j]   = 1.0 - _bkgEff;
      std::cout << "bin: " << bins << " cut values: " << cutStep*j << " signalEff: " << _seff[j] << " bkgRej: " << _bkgR[j] << std::endl;
    }

  //----------------------------------
  //pho1SigmaEoverE && pho2SigmaEoverE
  //----------------------------------
  float _seff2d[npoints], _bkgR2d[npoints];
  step = 0.20/1000.00;//binwidth
  valCut = 0.03;
  cutStep = valCut/npoints;//simaEoverE real step size
  for ( int j = 0; j < npoints; j++)
    {
      int bins = cutStep*j/step;//bin to be summed
      std::cout << bins << " Scut: " << cutStep*j << ", signalEff sigmaEoverE: " << h_s2dCut->Integral(1,bins, 1, bins) << std::endl;
      std::cout << bins << " Bkgcut: " << cutStep*j << ", signalEff sigmaEoverE: " << h_bkg2dCut->Integral(1,bins, 1, bins) << std::endl;
      if( j != 0 )
	{
	  _seff2d[j] = h_s2dCut->Integral(1,bins, 1, bins);
	  _bkgR2d[j] = 1.0 - h_bkg2dCut->Integral(1,bins, 1, bins);
	}
      else
	{
	  _seff2d[j] = 0;
	  _bkgR2d[j] = 1.0;
	}
    }
  
  TGraph* g = new TGraph(npoints, _seff, _bkgR );
  g->SetLineColor(kRed);
  g->SetLineWidth( 2 );
  g->Draw("AC");
  //h_bkg2dCut->Draw("colz");
  TGraph* g2 = new TGraph(npoints, _seff2d, _bkgR2d );
  g2->SetLineColor( kBlue );
  g2->SetLineWidth( 2 );
  g2->Draw("same");
  //Master ROOT file
  TFile* fout = new TFile("test_out.root", "RECREATE");
  
  h_sMoverM->Write();
  h_sMoverM_bkg->Write();
  g->Write("sigmaMoveM_roc");
  fout->Close();
};
