#ifndef DefinePdfs_HH
#define DefinePdfs_HH
//C++ INCLUDES
//ROOT INCLUDES
#include <TTree.h>
#include <TString.h>
//ROOFIT INCLUDES
#include <RooRealVar.h>
#include <RooWorkSpace.h>
//LOCAL INCLUDES

TString MakeDoubleGauss( TString tag, RooRealVar& mgg, RooWorkspace& w );
TString MakeDoubleExp( TString tag, RooRealVar& mgg, RooWorkspace& w );
#endif
