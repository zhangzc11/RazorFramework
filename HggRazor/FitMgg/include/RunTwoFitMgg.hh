#ifndef RunTwoFitMgg_HH
#define RunTwoFitMgg_HH
//C++ INCLUDES
//ROOT INCLUDES
#include <TTree.h>
#include <TString.h>
//ROOFIT INCLUDES
#include <RooRealVar.h>
#include <RooWorkspace.h>
//LOCAL INCLUDES

double GetIntegral( RooWorkspace& w, TString pdfName, TString mggName );
void MakePlot( TTree* tree,  RooWorkspace& w, TString pdfName, TString mggName );
RooWorkspace* MakeSideBandFit( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName );
RooWorkspace* MakeSignalBkgFit( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName );
RooWorkspace* MakeSideBandFitAIC( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName, double& AIC, TString ffName );
RooWorkspace* MakeSideBandFitAIC_2( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName, double& AIC, double& AIC_2, double& AIC_3, TString ffName );

#endif
