//ROOT
#include <TTree.h>
#include <TFile.h>
#include <TString.h>
//RooFit
#include <RooRealVar.h>
#include <RooWorkspace.h>
#include <RooDataSet.h>

void PlotBias(TString fname = "")
{
  TFile* f = new TFile( fname , "READ" );
  RooWorkspace* w = (RooWorkspace*)f->Get("w_bias");
  RooRealVar* bias = w->var("bias");
  RooDataSet* data_bias = (RooDataSet*)w->obj("data_bias");
  
  double bias_min = data_bias->mean( *bias ) - 3.*data_bias->rmsVar( *bias )->getVal();
  double bias_max = data_bias->mean( *bias ) + 3.*data_bias->rmsVar( *bias )->getVal();
  
  bias->setMin( bias_min );
  bias->setMax( bias_max );
  bias->setBins(100);
  
  RooPlot* frame = bias->frame();
  data_bias->plotOn(frame)->Draw();
  //RooPlot* plot = data_bias->plotOn( frame );
  //plot->Draw();
  
  return;
};
