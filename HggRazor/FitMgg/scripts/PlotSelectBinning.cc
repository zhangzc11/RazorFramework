#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TF1.h>
#include <TDirectory.h>

void PlotSigInt( TString fname )
{
  TFile* f = new TFile( fname, "READ");
  assert( f );
  TTree* tree = (TTree*)f->Get("biasTree");
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
  return;
};

void PlotSigIntBias( TString fname , float ntrue = 1.)
{
  TFile* f = new TFile( fname, "READ");
  assert( f );
  TTree* tree = (TTree*)f->Get("biasTree");
  TString drawCommand = Form("sigInt_hat/(%f*sigInt_true/n_true) - 1.0 >>tmp1(50, -3, 3)", ntrue);
  tree->Draw( drawCommand, "", "goff");
  TH1F* h = (TH1F*)gDirectory->Get("tmp1");
  TF1* myF = new TF1("myF", "[0]*( [4]*exp( -(x-[1])*(x-[1])/(2*[2]*[2]) ) + (1-[4])*exp( -(x-[1])*(x-[1])/(2*[3]*[3]) ) )", -5, 5.);
  myF->SetParameter(0, 300 );
  myF->SetParameter(1, h->GetMean() );
  myF->SetParameter(2, h->GetStdDev() );
  myF->SetParameter(3, 3*h->GetStdDev() );
  myF->SetParameter(4, 0.9 );
  
  h->Fit( myF, "LR");
  h->Draw();
  return;
};
