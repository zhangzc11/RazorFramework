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

struct binEdges
{
  int xl;
  int yl;
  int xh;
  int yh;
};

struct finalBin
{
  int xl;
  int yl;
  int xh;
  int yh;
  float b_nr;
  float b_smh;
  float s;
};

int main( int argc, char* argv[] )
{
  gROOT->Reset();
  TString categoryMode = "highres";
  
  TString cut = "mGammaGamma > 103. && mGammaGamma < 160. && pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25. && MR > 150. && t1Rsq > 0.0";
  TString categoryCutString;
  TString massWindowCut;
  if (categoryMode == "highpt")
    {
      categoryCutString = " && pTGammaGamma >= 110 ";
      massWindowCut     = " && mGammaGamma > 122.96 && mGammaGamma < 127.04";
    }
  else if (categoryMode == "hzbb")
    {
      categoryCutString = " && pTGammaGamma < 110 && ( abs(mbbH_L-125.) < 15. || ( abs(mbbH_L-125.) >= 15. && abs(mbbZ_L-91.) < 15 ) )";
      massWindowCut     = " && mGammaGamma > 122.5 && mGammaGamma < 127.5";
    }
  else if (categoryMode == "highres")
    {
      categoryCutString = " && pTGammaGamma < 110 && abs(mbbH_L-125.) >= 15 && abs(mbbZ_L-91.) >= 15 && sigmaMoverM < 0.0085";
      massWindowCut     = " && mGammaGamma > 122.98 && mGammaGamma < 127.02";
    }
  else if (categoryMode == "lowres")
    {
      categoryCutString  = " && pTGammaGamma < 110 && abs(mbbH_L-125.) >= 15 && abs(mbbZ_L-91.) >= 15 && sigmaMoverM >= 0.0085 ";
      massWindowCut      = " && mGammaGamma > 120.0 && mGammaGamma < 130.00";
    }
  else
    {
      std::cerr << "[ERROR]: please provide a valid category: <highpt,hzbb,highres, lowres>" << std::endl;
      return -1;
    }

  cut = cut + categoryCutString;
  massWindowCut = cut + categoryCutString + massWindowCut;
  
  TFile* fb = new TFile("/Users/cmorgoth/Work/data/HggRazorRun2/MC/CMSSW_7_6_March15_Ntuples/NonResonant_CMSSW_7_6_March15_1pb_weighted.root");
  assert(fb);
  TTree* bkgTree = (TTree*)fb->Get("HggRazor");
  assert(bkgTree);

  TFile* fsmh = new TFile("/Users/cmorgoth/Work/data/HggRazorRun2/MC/CMSSW_7_6_March15_Ntuples/SystematicsNtuples/SMH_CMSSW_7_6_X_systematics_1pb_weighted.root");
  assert(fsmh);
  TTree* smhTree = (TTree*)fsmh->Get("HggRazor");
  assert(smhTree);

  TFile* fs = new TFile("~/Work/data/HggRazorRun2/MC/CMSSW_7_6_March15_Ntuples/T2bH-Hgg-sbm300-sbw1-chi2m230-chi2w0p1-chi1m100_CMSSW_7_6_March15_1pb_weighted.root");
  assert(fs);
  TTree* sTree = (TTree*)fs->Get("HggRazor");
  assert(sTree);
  
 

  //------------------------------
  //------------------------------
  //Non-resonant bkg histograms
  //------------------------------
  //------------------------------
    
  //---------------
  //full mgg region
  //---------------
  TString bkgCut = "1.37*weight*pileupWeight*2300.*(" + cut + ")";
  bkgTree->Draw("t1Rsq:MR>>bkgH(197,150,10000, 2000,0, 10)", bkgCut, "goff");
  TH2F* bkgH = (TH2F*)gDirectory->Get("bkgH");
  //-----------------
  //mgg signal region
  //-----------------
  TString bkgCutSR = "1.37*weight*pileupWeight*2300.*(" + massWindowCut + ")";
  bkgTree->Draw("t1Rsq:MR>>bkgSRH(197,150,10000, 2000,0, 10)", bkgCutSR, "goff");
  TH2F* bkgSRH = (TH2F*)gDirectory->Get("bkgSRH");
  
  //------------------------------
  //------------------------------
  //SM higgs bkg histograms
  //------------------------------
  //------------------------------
  TString smhCutSR = "weight*pileupWeight*2300.*(" + massWindowCut + ")";
  smhTree->Draw("t1Rsq:MR>>smhSRH(197,150,10000, 2000,0, 10)", smhCutSR, "goff");
  TH2F* smhSRH = (TH2F*)gDirectory->Get("smhSRH");

  //------------------------------
  //------------------------------
  //signal model histogram
  //------------------------------
  //------------------------------
  TString sCutSR = "weight*2300.*(" + massWindowCut + ")";//SR:Signal Region
  sTree->Draw("t1Rsq:MR>>sSRH(197,150, 10000, 2000, 0, 10)", sCutSR, "goff");
  TH2F* sSRH = (TH2F*)gDirectory->Get("sSRH");
  
  
  TFile* fout = new TFile("test_qnot.root", "RECREATE");
  bkgH->Write("bkgH");
  bkgSRH->Write("bkgSRH");
  smhSRH->Write("smhSRH");
  sSRH->Write("sSRH");
  

  double b_nr[50];//non-resonant bkg
  double b_smh[50];//smh bkg
  double b[50];
  double s[50];//signal is fixed
  double obs[50];
  double bFull[50];

  //------------------------
  //------------------------
  //Binning Algorithm 
  //------------------------
  //------------------------
  //MR
  TH1F* sigmaMR = new TH1F("sigmaMR", "sigma-MR", 27, 150, 1500);
  TH1F* fbkg0MR = new TH1F("fbk0MR", "fbkg0-MR", 27, 150, 1500);
  TH1F* fbkg1MR = new TH1F("fbk1MR", "fbkg1-MR", 27, 150, 1500);
  TH1F* bkg0MR  = new TH1F("bk0MR", "bkg0-MR", 27, 150, 1500);
  TH1F* bkg1MR  = new TH1F("bk1MR", "bkg1-MR", 27, 150, 1500);
  TH1F* smh0MR  = new TH1F("smh0MR", "smh0-MR", 27, 150, 1500);
  TH1F* smh1MR  = new TH1F("smh1MR", "smh1-MR", 27, 150, 1500);
  TH1F* s0MR    = new TH1F("s0MR", "s0-MR", 27, 150, 1500);
  TH1F* s1MR    = new TH1F("s1MR", "s1-MR", 27, 150, 1500);
  //Rsq
  TH1F* sigmaRsq = new TH1F("sigmaRsq", "sigma-Rsq", 200, 0, 1);
  TH1F* fbkg0Rsq = new TH1F("fbkg0Rsq", "fbkg0-Rsq", 200, 0, 1);//full bkg bin0
  TH1F* fbkg1Rsq = new TH1F("fbkg1Rsq", "fbkg1-Rsq", 200, 0, 1);//full bkg bin1
  TH1F* bkg0Rsq  = new TH1F("bkg0Rsq", "bkg0-Rsq", 200, 0, 1);//sr bkg bin0
  TH1F* bkg1Rsq  = new TH1F("bkg1Rsq", "bkg1-Rsq", 200, 0, 1);//sr bkg bin1
  TH1F* smh0Rsq  = new TH1F("smh0Rsq", "smh0-Rsq", 200, 0, 1);//sr smh bin0
  TH1F* smh1Rsq  = new TH1F("smh1Rsq", "smh1-Rsq", 200, 0, 1);//sr smh bin1
  TH1F* s0Rsq    = new TH1F("s0Rsq", "s0-Rsq", 200, 0, 1);//sr signal bin0
  TH1F* s1Rsq    = new TH1F("s1Rsq", "s1-Rsq", 200, 0, 1);//sr signal bin1

  bool splitI     = true;
  bool splitII    = true;
  int binMRsplit  = 1;
  int binRSQsplit = 1;
  int nsplits = 2;
  int nMRbins  = 197;
  int nRSQbins = 10000;

  int nPlaneBins = 1;
  binEdges bE;
  bE.xl = 1;
  bE.xh = nMRbins;
  bE.yl = 1;
  bE.yh = nRSQbins;
  std::map<int, binEdges> myMap;
  std::map<int, finalBin> fBinMap;
  myMap[nPlaneBins] = bE;
  int nfbins = 0;
  for ( int k = 0; k < 1; k++ )
    {
      float MR  = 175.;
      int mapBin = myMap.size() - k;

      for ( int ifb = 0; ifb < nfbins; ifb++ )
	{
	  b[ifb]   = fBinMap[ifb].b_nr + fBinMap[ifb].b_smh;
	  s[ifb]   = fBinMap[ifb].s;
	  obs[ifb] = b[ifb] + s[ifb];
	}
      
      for ( int i = 0; i <= 27; i++ )
	{
	  if ( i >= myMap[mapBin].xl ) 
	    {
	      bFull[nfbins+0] = bkgH->Integral( myMap[mapBin].xl, i, myMap[mapBin].yl, myMap[mapBin].yh );
	      bFull[nfbins+1] = bkgH->Integral( i+1, myMap[mapBin].xh, myMap[mapBin].yl, myMap[mapBin].yh );
	      b_nr[nfbins+0]  = bkgSRH->Integral( myMap[mapBin].xl, i, myMap[mapBin].yl, myMap[mapBin].yh );
	      b_nr[nfbins+1]  = bkgSRH->Integral( i+1, myMap[mapBin].xh, myMap[mapBin].yl, myMap[mapBin].yh );
	      b_smh[nfbins+0] = smhSRH->Integral( myMap[mapBin].xl, i, myMap[mapBin].yl, myMap[mapBin].yh );
	      b_smh[nfbins+1] = smhSRH->Integral( i+1, myMap[mapBin].xh, myMap[mapBin].yl, myMap[mapBin].yh );
	      s[nfbins+0]     = sSRH->Integral( myMap[mapBin].xl, i, myMap[mapBin].yl, myMap[mapBin].yh );
	      s[nfbins+1]     = sSRH->Integral( i+1, myMap[mapBin].xh, myMap[mapBin].yl, myMap[mapBin].yh );
	      b[nfbins+0]     = b_nr[nfbins+0] + b_smh[nfbins+0];
	      b[nfbins+1]     = b_nr[nfbins+1] + b_smh[nfbins+1];
	      obs[nfbins+0]   = b[nfbins+0] + s[nfbins+0];
	      obs[nfbins+1]   = b[nfbins+1] + s[nfbins+1];
	    }
	  else
	    {
	      continue;
	    }
	  if ( b[nfbins+0] == 0  || b[nfbins+1] == 0 ) continue;//avoid nans
	  if ( bFull[nfbins+0] < 10. || bFull[nfbins+1] <= 10 ) continue;//avoid bins with small counts
	  double mu   = GetBestFitSignalStrength( nfbins+2, b, s, obs );
	  double qnot = GetQnotTestStatistics( nfbins+2, b, s, obs, mu );
	  std::cout << "==========" << std::endl;
	  std::cout << "MR: " << MR << " best fit mu: " << mu << " ==> nsigma = " << sqrt( qnot )
		    << " --> b: " << b[nfbins+0] << ", " << b[nfbins+1] << "; obs: " << obs[nfbins+0] << ", " << obs[nfbins+1] << std::endl;
	  //-----------------------
	  //filling info histograms
	  //-----------------------
	  sigmaMR->SetBinContent(i, sqrt(qnot) );
	  fbkg0MR->SetBinContent( i, bFull[nfbins+0] );
	  fbkg1MR->SetBinContent( i, bFull[nfbins+1] );
	  bkg0MR->SetBinContent( i, b_nr[nfbins+0] );
	  bkg1MR->SetBinContent( i, b_nr[nfbins+1] );
	  smh0MR->SetBinContent( i, b_smh[nfbins+0] );
	  smh1MR->SetBinContent( i, b_smh[nfbins+1] );
	  s0MR->SetBinContent( i, s[nfbins+0] );
	  s1MR->SetBinContent( i, s[nfbins+1] );
	  MR += 50.; 
	}
      double maxMRsignificance         = sigmaMR->GetMaximum();
      double maxMRsignificanceLocation = sigmaMR->GetBinLowEdge( sigmaMR->GetMaximumBin() );
            
      float Rsq  = 0.0025;
      for ( int i = 0; i <= 200; i++ )
	{
	  if ( i >= myMap[mapBin].yl ) 
	    {
	      bFull[nfbins+0] = bkgH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, myMap[mapBin].yl, i );
	      bFull[nfbins+1] = bkgH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, i+1, myMap[mapBin].yh );
	      b_nr[nfbins+0]  = bkgSRH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, myMap[mapBin].yl, i );
	      b_nr[nfbins+1]  = bkgSRH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, i+1, myMap[mapBin].yh );
	      b_smh[nfbins+0] = smhSRH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, myMap[mapBin].yl, i );
	      b_smh[nfbins+1] = smhSRH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, i+1, myMap[mapBin].yh );
	      s[nfbins+0]     = sSRH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, myMap[mapBin].yl, i );
	      s[nfbins+1]     = sSRH->Integral( myMap[mapBin].xl, myMap[mapBin].xh, i+1, myMap[mapBin].yh );
	      b[nfbins+0]     = b_nr[nfbins+0] + b_smh[nfbins+0];
	      b[nfbins+1]     = b_nr[nfbins+1] + b_smh[nfbins+1];
	      obs[nfbins+0]   = b[nfbins+0] + s[nfbins+0];
	      obs[nfbins+1]   = b[nfbins+1] + s[nfbins+1];
	    }
	  else
	    {
	      continue;
	    }
	  if ( b[nfbins+0] == 0 || b[nfbins+1] == 0 ) continue;
	  if ( bFull[nfbins+0] <= 10. || bFull[nfbins+1] <= 10 ) continue;//avoid bins with small counts
	  double mu   = GetBestFitSignalStrength( nfbins+2, b, s, obs );
	  double qnot = GetQnotTestStatistics( nfbins+2, b, s, obs, mu );
	  std::cout << "==========" << std::endl;
	  std::cout << " Rsq: " << Rsq << " best fit mu: " << mu << " ==> nsigma = " << sqrt( qnot )
		    << " --> b: " << b[nfbins+0] << ", " << b[nfbins+1] << "; obs: " << obs[nfbins+0] << ", " << obs[nfbins+1] << std::endl;
	  //-----------------------
	  //filling info histograms
	  //-----------------------
	  sigmaRsq->SetBinContent(i, sqrt(qnot) );
	  fbkg0Rsq->SetBinContent( i, bFull[nfbins+0] );
	  fbkg1Rsq->SetBinContent( i, bFull[nfbins+1] );
	  bkg0Rsq->SetBinContent( i, b_nr[nfbins+0] );
	  bkg1Rsq->SetBinContent( i, b_nr[nfbins+1] );
	  smh0Rsq->SetBinContent( i, b_smh[nfbins+0] );
	  smh1Rsq->SetBinContent( i, b_smh[nfbins+1] );
	  s0Rsq->SetBinContent( i, s[nfbins+0] );
	  s1Rsq->SetBinContent( i, s[nfbins+1] );
	  Rsq += 0.005; 
	}
      double maxRSQsignificance         = sigmaRsq->GetMaximum();
      double maxRSQsignificanceLocation = sigmaRsq->GetBinLowEdge( sigmaRsq->GetMaximumBin() );
      
      if ( maxMRsignificance > maxRSQsignificance )
	{
	  std::cout << "splitting in MR @ " << maxMRsignificanceLocation << ", significance = " << maxMRsignificance << " nsigmas" << std::endl;
	  int maxBin  = sigmaMR->GetMaximumBin();
	  float Nbkg0 = fbkg0MR->GetBinContent( maxBin );
	  float Nbkg1 = fbkg1MR->GetBinContent( maxBin );
	  std::cout << "splitting in MR @ " << maxRSQsignificanceLocation << ", significance = " << maxRSQsignificance << " nsigmas" << std::endl;
	  std::cout << "Rsq @ " << maxBin << " NBkg0: " << Nbkg0
		    << " NBkg1: " << Nbkg1 << std::endl;
	  if ( (Nbkg0 - 10.) < 10.0 )
	    {
	      std::cout << "First Partition is at minimum bkg events: " << Nbkg0 << std::endl;
	      finalBin fb;
	      fb.xl    = myMap[mapBin].xl;
	      fb.xh    = maxBin;
	      fb.yl    = myMap[mapBin].yl;
	      fb.yh    = myMap[mapBin].yh;
	      fb.b_nr  = bkg1MR->GetBinContent( maxBin );
	      fb.b_smh = smh1MR->GetBinContent( maxBin );
	      fb.s     = s1MR->GetBinContent( maxBin );
	      fBinMap[nfbins] = fb;
	      nfbins++;
	    }
	  if ( (Nbkg1 - 10.) < 10.0 )
	    {
	      std::cout << "Second Partition is at minimum bkg events: " << Nbkg1 << std::endl;
	      finalBin fb;
	      fb.xl    = maxBin;
	      fb.xh    = myMap[mapBin].xh;
	      fb.yl    = myMap[mapBin].yl;
	      fb.yh    = myMap[mapBin].yh;
	      fb.b_nr  = bkg1MR->GetBinContent( maxBin );
	      fb.b_smh = smh1MR->GetBinContent( maxBin );
	      fb.s     = s1MR->GetBinContent( maxBin );
	      fBinMap[nfbins] = fb;
	      nfbins++;
	    }
	  
	}
      else
	{
	  int maxBin  = sigmaRsq->GetMaximumBin();
	  float Nbkg0 = fbkg0Rsq->GetBinContent( maxBin );
	  float Nbkg1 = fbkg1Rsq->GetBinContent( maxBin );
	  std::cout << "splitting in Rsq @ " << maxRSQsignificanceLocation << ", significance = " << maxRSQsignificance << " nsigmas" << std::endl;
	  std::cout << "Rsq @ " << maxBin << " NBkg0: " << Nbkg0
		    << " NBkg1: " << Nbkg1 << std::endl;
	  
	  if ( (Nbkg0 - 10.) < 10.0 )
	    {
	      std::cout << "First Partition is at minimum bkg events: " << Nbkg0 << std::endl;
	      finalBin fb;
	      fb.xl    = myMap[mapBin].xl;
	      fb.xh    = myMap[mapBin].xh;
	      fb.yl    = myMap[mapBin].yl;
	      fb.yh    = maxBin;
	      fb.b_nr  = bkg1Rsq->GetBinContent( maxBin );
	      fb.b_smh = smh1Rsq->GetBinContent( maxBin );
	      fb.s     = s1Rsq->GetBinContent( maxBin );
	      fBinMap[nfbins] = fb;
	      nfbins++;
	    }
	  if ( (Nbkg1 - 10.) < 10.0 )
	    {
	      std::cout << "Second Partition is at minimum bkg events: " << Nbkg1 << std::endl;
	      finalBin fb;
	      fb.xl    = myMap[mapBin].xl;
	      fb.xh    = myMap[mapBin].xh;
	      fb.yl    = maxBin;
	      fb.yh    = myMap[mapBin].yh;
	      fb.b_nr  = bkg1Rsq->GetBinContent( maxBin );
	      fb.b_smh = smh1Rsq->GetBinContent( maxBin );
	      fb.s     = s1Rsq->GetBinContent( maxBin );
	      fBinMap[nfbins] = fb;
	      nfbins++;
	    }
	  
	}
      nsplits++;
      
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

  for ( auto tmp : fBinMap )
    {
      std::cout << "BIN #" << tmp.first << "--> xl: " << tmp.second.xl << ", xh: " << tmp.second.xh
		<< ", yl: " << tmp.second.yl << ", yh: " << tmp.second.yh
		<< "; b_nr: " << tmp.second.b_nr << ", b_smh: " << tmp.second.b_smh 
		<< ", s: " << tmp.second.s << std::endl;
    }
  
   //h_qnot->Write();
  sigmaMR->Write();
  fbkg0MR->Write();
  fbkg1MR->Write();
  bkg0MR->Write();
  bkg1MR->Write();
  smh0MR->Write();
  smh1MR->Write();
  s0MR->Write();
  s1MR->Write();
  
  sigmaRsq->Write();
  fbkg0Rsq->Write();
  fbkg1Rsq->Write();
  bkg0Rsq->Write();
  bkg1Rsq->Write();
  smh0Rsq->Write();
  smh1Rsq->Write();
  s0Rsq->Write();
  s1Rsq->Write();
  
  fout->Close();
  
  return 0;
}
