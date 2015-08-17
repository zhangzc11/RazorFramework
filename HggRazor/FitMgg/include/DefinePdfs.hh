#ifndef DefinePdfs_HH
#define DefinePdfs_HH
//C++ INCLUDES
//ROOT INCLUDES
#include <TTree.h>
#include <TString.h>
//ROOFIT INCLUDES
#include <RooRealVar.h>
#include <RooWorkspace.h>
//LOCAL INCLUDES

TString MakeDoubleGauss( TString tag, RooRealVar& mgg, RooWorkspace& w );
TString MakeDoubleExp( TString tag, RooRealVar& mgg, RooWorkspace& w );
TString MakeDoubleExpN1N2( TString tag, RooRealVar& mgg, RooWorkspace& w );

#endif
