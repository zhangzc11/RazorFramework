#include <assert.h>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TDirectory.h>
#include <TROOT.h>
#include <TRandom3.h>
//LOCAL INCLUDES
#include "AssortedFunctions.hh"
#include "CommandLineInput.hh"

int main( int argc, char* argv[] )
{
  gROOT->Reset();
  TString categoryMode;
  TString cut = "mGammaGamma > 103. && mGammaGamma < 160. && pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.";
  TString categoryCutString;

  if (categoryMode == "highpt") categoryCutString = " && pTGammaGamma >= 110 ";
  else if (categoryMode == "hzbb") categoryCutString = " && pTGammaGamma < 110 && ( abs(mbbH_L-125.) < 15. || ( abs(mbbH_L-125.) >= 15. && abs(mbbZ_L-91.) < 15 ) )";
  else if (categoryMode == "highres") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH_L-125.) >= 15 && abs(mbbZ_L-91.) >= 15 && sigmaMoverM < 0.0085";
  else if (categoryMode == "lowres") categoryCutString  = " && pTGammaGamma < 110 && abs(mbbH_L-125.) >= 15 && abs(mbbZ_L-91.) >= 15 && sigmaMoverM >= 0.0085 ";
  else if (categoryMode == "inclusive") categoryCutString = "";

  cut = cut + categoryCutString;
  
  TFile* fb = new TFile("~/Work/data/HggRazorRun2/MC/CMSSW_7_6_March15_Ntuples/GluGluHToGG_M-125_13TeV_powheg_pythia8_CMSSW_7_6_X_systematics_1pb_weighted.root");
  assert(fb);
  TTree* bkgTree = (TTree*)fb->Get("HggRazor");
  assert(bkgTree);

  TFile* fs = new TFile("~/Work/data/HggRazorRun2/MC/CMSSW_7_6_March15_Ntuples/T2bH-Hgg-sbm300-sbw1-chi2m230-chi2w0p1-chi1m100_CMSSW_7_6_March15_1pb_weighted.root");
  assert(fs);
  TTree* sTree = (TTree*)fs->Get("HggRazor");
  assert(sTree);
  
  TString bkgCut = "weight*pileupWeight*2300.*(" + cut + ")";
  bkgTree->Draw("t1Rsq:MR>>bkgH(197,150,10000, 1000,0, 10)", bkgCut, "goff");
  TH2F* bkgH = (TH2F*)gDirectory->Get("bkgH");


  TString sCut = "weight*2300.*(" + cut + ")";
  sTree->Draw("t1Rsq:MR>>sH(197,150, 10000, 1000, 0, 10)", sCut, "goff");
  TH2F* sH = (TH2F*)gDirectory->Get("sH");
  

  TFile* fout = new TFile("test_qnot.root", "RECREATE");
  bkgH->Write("bkgH");
  sH->Write("sH");
  

  const int n = 2;
  double b_nr[n]  = {100, 50};//non-resonant bkg
  double b_smh[n] = {10, 10};//smh bkg
  
  
  double b[n];
  double s[n] = {3, 2};//signal is fixed
  double obs[n];

  TH1F* sigmaMR = new TH1F("sigmaMR", "sigma-MR", 27, 150, 1500);
  float MR  = 175.;
  for ( int i = 0; i <= 27; i++ )
    {
      std::cout << "==========" << std::endl;
      if ( i >= 1 ) 
	{
	  b[0] = bkgH->Integral( 1, i, 1, 1000);
	  b[1] = bkgH->Integral( i+1, 197, 1, 1000);
	  s[0] = sH->Integral( 1, i, 1, 1000);;
	  s[1] = sH->Integral( i+1, 197, 1, 1000);
	  obs[0] = b[0] + s[0];
	  obs[1] = b[1] + s[1];
	}
      else
	{
	  continue;
	  b[0] = 0;
	  b[1] = bkgH->Integral( i+1, 197, 1, 1000);
	  s[0] = 0;
	  s[1] = sH->Integral( i+1, 197, 1, 1000);
	  obs[0] = b[0] + s[0];
	  obs[1] = b[1] + s[1];
	}
      
      double mu   = GetBestFitSignalStrength( n, b, s, obs );
      double qnot = GetQnotTestStatistics( n, b, s, obs, mu );
      std::cout << "best fit mu: " << mu << " ==> qnot = " << qnot 
		<< " --> b: " << b[0] << ", " << b[1] << "; obs: " << obs[0] << ", " << obs[1] << std::endl;
      sigmaMR->SetBinContent(i, sqrt(qnot) );
      MR += 50.; 
    }


  TH1F* sigmaRsq = new TH1F("sigmaRsq", "sigma-Rsq", 100, 0, 1);
  float Rsq  = 0.005;
  for ( int i = 0; i <= 100; i++ )
    {
      std::cout << "==========" << std::endl;
      if ( i >= 1 ) 
	{
	  b[0] = bkgH->Integral( 1, 197, 1, i);
	  b[1] = bkgH->Integral( 1, 197, i+1, 1000);
	  s[0] = sH->Integral( 1, 197, 1, i);;
	  s[1] = sH->Integral( 1, 197, 1+1, 1000);
	  obs[0] = b[0] + s[0];
	  obs[1] = b[1] + s[1];
	}
      else
	{
	  continue;
	}
      if ( b[0] == 0 || b[1] == 0 ) continue; 
      double mu   = GetBestFitSignalStrength( n, b, s, obs );
      double qnot = GetQnotTestStatistics( n, b, s, obs, mu );
      std::cout << "best fit mu: " << mu << " ==> qnot = " << qnot 
		<< " --> b: " << b[0] << ", " << b[1] << "; obs: " << obs[0] << ", " << obs[1] << std::endl;
      sigmaRsq->SetBinContent(i, sqrt(qnot) );
      Rsq += 0.01; 
    }
  /*
  TRandom3 r1(0);
  TRandom3 r2(0);
  TH1F* h_qnot = new TH1F("h_qnot", "h_qnot", 1000, 0, 20);
  for ( int i = 0; i < 1e7; i ++ )
    {
      for ( int j = 0; j < n; j++ )
	{
	  b[j] = b_nr[j] + b_smh[j];
	  double bNonRes = r1.PoissonD( b_nr[j] );
	  double bSMH = r2.PoissonD( b_smh[j] );
	  obs[j] = bNonRes + bSMH;
	}
      double mu   = GetBestFitSignalStrength( n, b, s, obs );
      double qnot = GetQnotTestStatistics( n, b, s, obs, mu );
      h_qnot->Fill( qnot );
    }
  */
  b[0] = b_nr[0] + b_smh[0];
  b[1] = b_nr[1] + b_smh[1];
  obs[0] = b_nr[0] + 50;
  obs[1] = b_nr[1] + 30;
  double mu   = GetBestFitSignalStrength( n, b, s, obs );
  double qnot = GetQnotTestStatistics( n, b, s, obs, mu );
  std::cout << "best fit mu: " << mu << " ==> qnot = " << qnot 
	    << " --> b: " << b[0] << ", " << b[1] << "; obs: " << obs[0] << ", " << obs[1] << std::endl;
  
   //h_qnot->Write();
  sigmaMR->Write();
  sigmaRsq->Write();
  fout->Close();
  
  return 0;
}
