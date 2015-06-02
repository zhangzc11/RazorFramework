//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
//LOCAL INCLUDES
#include "makeInvertedANFit_v2.hh"
#include "CommandLineInput.hh"

int main( int argc, char* argv[])
{
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      return -1;
    }

  std::string treeName = ParseCommandLine( argc, argv, "-treeName=" );
  if (  treeName == "" )
    {
      std::cout << "[WARNING]: user did not provide a tree name, if you wish to provide one use --treeName=<yourTreeName>" << std::endl;
      treeName = "HighRes";
    }

  std::string MRcut = ParseCommandLine( argc, argv, "-MRcut=" );
  if (  MRcut == "" )
    {
      std::cout << "[WARNING]: user did not provide a MR cut, if you wish to provide one use --treeName=<yourMRcut>" << std::endl;
      MRcut = "350.";
    }

  std::string RSQcut = ParseCommandLine( argc, argv, "-RSQcut=" );
  if (  RSQcut == "" )
    {
      std::cout << "[WARNING]: user did not provide a MR cut, if you wish to provide one use --treeName=<yourRSQcut>" << std::endl;
      RSQcut = "0.035";
    }
  
  std::cout << "[INFO]: tree name is :" << treeName << std::endl;
  
  TFile* f = new TFile( inputFile.c_str() );
  TTree* tree = (TTree*)f->Get( treeName.c_str() );
  TString cut = "abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.&& mGammaGamma > 103. && mGammaGamma<160 && pTGammaGamma > 20";
  cut = cut + " && MR > " + MRcut + " && t1Rsq > " + RSQcut;

  float forceSigma = 1.5;
  bool constrainMu = false;
  float forceMu    = -1;
  TString mggName  = "mGammaGamma";
  RooWorkspace* w   = makeInvertedANFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );

  TFile* fout = new TFile( "test_out.root", "recreate" );
  w->Write("myws");
  
  return 0;	
}
