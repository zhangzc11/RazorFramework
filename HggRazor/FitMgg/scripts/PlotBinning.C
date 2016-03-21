#include <iostream>
#include <vector>
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TF1.h>
#include <TDirectory.h>
#include <TH2Poly.h>

struct AnaBin
{
  double MR_high;
  double MR_low;
  double Rsq_high;
  double Rsq_low;
  double nevents;
};

void PlotBinning( TString fname, TString categoryMode = "highres", float _binCount = 18. )
{
  TFile* f = new TFile( fname, "READ");
  //assert( f );

  TTree* tree = (TTree*)f->Get("HggRazor");
  double MR_max   = 2000.;
  double Rsq_max  = 1.000;
  double MR_step  = 1000.;
  double Rsq_step = 0.500;
  double MR_i     = MR_max - MR_step;
  double Rsq_i    = Rsq_max - Rsq_step;
  
  TString cut = "mGammaGamma > 103. && mGammaGamma < 160. && pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.";
  TString categoryCutString;
  
  if (categoryMode == "highpt") categoryCutString = " && pTGammaGamma >= 110 ";
  else if (categoryMode == "hbb") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.) < 15.";
  else if (categoryMode == "zbb") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.) >= 15. && abs(mbbZ-91.) < 15. ";
  else if (categoryMode == "highres") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.) >= 15 && abs(mbbZ-91) >= 15 && sigmaMoverM < 0.0085";
  else if (categoryMode == "lowres") categoryCutString = " && pTGammaGamma < 110  && abs(mbbH-125.) >= 15 && abs(mbbZ-91.) >= 15 && sigmaMoverM >= 0.0085 ";
  else if (categoryMode == "inclusive") categoryCutString = "";
  

  const int n_highptMRedges = 5;
  float  highptMRedges[] = {150,250,500,1000,10000};
  const int n_highptRSQedges0 = 5;
  float  highptRSQedges0[] = {0,0.046,0.071,0.121,5.0};
  const int n_highptRSQedges1 = 5;
  float  highptRSQedges1[] = {0,0.044,0.069,0.094,5.0};
  const int n_highptRSQedges2 = 3;
  float  highptRSQedges2[] = {0,0.034,5.0};
  const int n_highptRSQedges3 = 2;
 float  highptRSQedges3[] = {0,5.0};

  TH2Poly *h2p = new TH2Poly();
  Double_t x1[] = {150, 150, 250, 250};
  Double_t y11[] = {0, 0.046, 0.046,0};
  Double_t y12[] = {0.046, 0.071, 0.071, 0.046};
  Double_t y13[] = {0.071, 0.121, 0.121, 0.071};
  Double_t y14[] = {0.121, 1.0, 1.0, 0.121};
  Double_t x2[] = {250, 250, 500, 500};
  Double_t y21[] = {0, 0.044, 0.044, 0};
  Double_t y22[] = {0.044, 0.069, 0.069, 0.044};
  Double_t y23[] = {0.069, 0.094, 0.094, 0.069};
  Double_t y24[] = {0.094, 1.0, 1.0, 0.094};
  Double_t x3[] = {500, 500, 1000, 1000};
  Double_t y31[] = {0, 0.034, 0.034, 0};
  Double_t y32[] = {0.034, 1.0, 1.0, 0.034};
  Double_t x4[] = {1000, 1000, 10000, 10000};
  Double_t y41[] = {0, 1.0, 1.0, 0.0};
  
 
  h2p->AddBin(4, x1, y11);
  h2p->AddBin(4, x1, y12);
  h2p->AddBin(4, x1, y13);
  h2p->AddBin(4, x1, y14);
  
  h2p->AddBin(4, x2, y21);
  h2p->AddBin(4, x2, y22);
  h2p->AddBin(4, x2, y23);
  h2p->AddBin(4, x2, y24);
  
  h2p->AddBin(4, x3, y31);
  h2p->AddBin(4, x3, y32);
  
  h2p->AddBin(4, x4, y41);
  

  h2p->Fill(155, 0.01, 80.);
  h2p->Fill(155, 0.047, 40.);
  h2p->Fill(155, 0.072, 20.);
  h2p->Fill(155, 0.9, 10.);
  
  h2p->Fill(255, 0.010, 80);
  h2p->Fill(255, 0.045, 40.);
  h2p->Fill(255, 0.070, 20.);
  h2p->Fill(255, 0.9, 10.);

  h2p->Fill(505, 0.01, 20.);
  h2p->Fill(505, 0.9, 10.);
  
  h2p->Fill(1005, 0.9, 10.);
  
    
  h2p->Draw("colz text");
  return;
};
