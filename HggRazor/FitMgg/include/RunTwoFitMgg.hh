#ifndef RunTwoFitMgg_HH
#define RunTwoFitMgg_HH
//C++ INCLUDES
//ROOT INCLUDES
#include <TTree.h>
#include <TString.h>
//ROOFIT INCLUDES
#include <RooRealVar.h>
#include <RooWorkspace.h>
#include <RooDataSet.h>
#include <RooAbsPdf.h>
//LOCAL INCLUDES

RooWorkspace* DoubleGausFit( TTree* tree, float forceSigma, bool sameMu, float forceMu, TString mggName );
double GetIntegral( RooWorkspace& w, TString pdfName, TString mggName );
void MakePlot( TTree* tree,  RooWorkspace& w, TString pdfName, TString mggName );
RooWorkspace* MakeSideBandFit( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName );
RooWorkspace* MakeSignalBkgFit( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName );
RooWorkspace* MakeSignalBkgFit( TTree* treeData, TTree* treeSignal, TString mggName );
RooWorkspace* MakeSideBandFitAIC( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName, double& AIC, TString ffName );
RooWorkspace* DoBiasTest( TTree* tree, TString mggName, TString f1, TString f2, int ntoys = 1e2, int npoints = 1e4 );
RooWorkspace* SelectBinning( TH1F* mggData, TString mggName, TString f1, TString f2, int ntoys = 1e2, int npoints = 1e4 , TString outName = "dummy" );
RooWorkspace* DoBiasTestSignal( TTree* tree, TString mggName, TString f1, TString f2, int ntoys = 1e2, double frac = 1.0, TString outName = "dummy" );
RooDataSet* GenerateToys( RooAbsPdf* pdf, RooRealVar x, int ntoys);
RooWorkspace* MakeSideBandFitAIC_2( TTree* tree, float forceSigma, bool constrainMu, float forceMu, TString mggName, double& AIC, double& AIC_2, double& AIC_3, TString ffName );

#endif
