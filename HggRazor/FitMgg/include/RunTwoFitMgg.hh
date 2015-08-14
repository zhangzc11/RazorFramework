#ifndef RunTwoFitMgg_HH
#define RunTwoFitMgg_HH
//C++ INCLUDES
//ROOT INCLUDES
#include <TTree.h>
#include <TString.h>
//ROOFIT INCLUDES
#include <RooRealVar.h>
#include <RooWorkSpace.h>
//LOCAL INCLUDES

RooWorkspace* MakeSideBandFit( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName );
void MakePlot( TTree* tree,  RooWorkspace& w, TString pdfName, TString mggName );

#endif
