#ifndef PLOT_COSMETICS_HH
#define PLOT_COSMETICS_HH 1
//C++ INCLUDES
#include <iostream>
#include <string>
//ROOT INCLUDES
#include <TChain.h>
#include <TString.h>
#include <TH1F.h>
#include <TH2F.h>
#include <THStack.h>
#include <TLegend.h>
#include <TCanvas.h>
#include <TLatex.h>
//LOCAL INCLUDES
#include "HggAux.hh"

bool MakeCustomMrRsq( TH2F* h, TString outName );
bool MakeStackPlot( THStack* s, TString var, TString outName, TLegend* leg = NULL );
bool MakeStackPlot( THStack* s, TH1F* data, TH1F* mc, TString var, TString outName );

//Create Histogram with style based in the process
TH1F* GetStyledHisto( TH1F* h, Process process );
bool SetHistoStyle( TH1F* h, Process process );


//Legend
bool AddLegend( TH1F* h, TLegend* leg, Process process );
bool AddCMS( TCanvas* C );

#endif
