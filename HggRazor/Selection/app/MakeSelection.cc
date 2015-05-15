//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "HggTree.hh"
#include "HggRazorClass.hh"

int main ( int argc, char* argv[] )
{
  TFile* f     = new TFile("/Users/cmorgoth/Work/data/HggRazorRun2/MC/Run2TTH_Selection.root");
  TTree* tree  = (TTree*)f->Get("HighPt"); 
  HggTree* tth = new HggTree( tree );
  return 0;
}
