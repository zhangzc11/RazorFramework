//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
#include <TString.h>
//LOCAL INCLUDES
#include "HggTree.hh"
#include "HggRazorClass.hh"

// D e f i n e  B i n n i n g
//---------------------------
int HggRazorClass::n_mgg = 38;
float HggRazorClass::mgg_l = 103.;
float HggRazorClass::mgg_h = 160.;

int HggRazorClass::n_ptgg = 200;
float HggRazorClass::ptgg_l = 20.;
float HggRazorClass::ptgg_h = 320.;


TString cut = "MR > 150. && Rsq > 0.05 && abs( pho1Eta ) < 1.44 && abs( pho2Eta ) < 1.44";

int main ( int argc, char* argv[] )
{
  //TFile* f       = new TFile("/Users/cmorgoth/Work/data/run2Hgg/MC/Run2TTH_Selection.root"); 
  TFile* f       = new TFile("/Users/cmorgoth/Work/data/HggRazorRun2/MC/Run2TTH_Selection.root"); 
  TTree* tree    = (TTree*)f->Get("HighPt");
  std::cout << "n: " << tree->GetEntries() << std::endl;
  //TTree* cutTree = (TTree*)tree->CopyTree( cut );
  //HggTree* tth = new HggTree( tree );
  HggRazorClass* tth = new HggRazorClass( tree );
  //delete f;
  tth->Loop();
  tth->WriteOutput();
  return 0;
}
