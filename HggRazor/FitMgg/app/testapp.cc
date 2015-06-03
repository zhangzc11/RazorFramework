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
      std::cout << "[WARNING]: user did not provide a MR cut, if you wish to provide one use --MRcut=<yourMRcut>" << std::endl;
      MRcut = "350.";
    }

  std::string RSQcut = ParseCommandLine( argc, argv, "-RSQcut=" );
  if (  RSQcut == "" )
    {
      std::cout << "[WARNING]: user did not provide a MR cut, if you wish to provide one use --RSQcut=<yourRSQcut>" << std::endl;
      RSQcut = "0.035";
    }

  std::string dataMode = ParseCommandLine( argc, argv, "-dataMode=" );
  if (  dataMode == "" )
    {
      std::cerr << "[ERROR]: please provide a data type, it could be either mc or data. Use --dataMode=<data/mc>" << std::endl;
      return -1;
    }
  
  std::cout << "[INFO]: tree name is :" << treeName << std::endl;
  std::cout << "[INFO]: data/mc mode :" << dataMode << std::endl;
  TFile* f = new TFile( inputFile.c_str() , "update");
  TTree* tree = (TTree*)f->Get( treeName.c_str() );
  TString cut = "abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.&& mGammaGamma > 103. && mGammaGamma<160 && pTGammaGamma > 20";
  cut = cut + " && MR > " + MRcut + " && t1Rsq > " + RSQcut;

  float forceSigma = 1.5;
  bool constrainMu = false;
  float forceMu    = -1;
  TString mggName  = "mGammaGamma";
  RooWorkspace* w;
  if ( dataMode == "data" )
    {
      w = makeInvertedANFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
    }
  else if ( dataMode == "mc" )
    {
      w = makeMCFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
    }
  else
    {
      std::cout << "[ERROR]: please provide a valid dataMode, i.e data or mc" << std::endl;
      return -1;
    }

  std::cout << "test0" << std::endl;
  TFile* fout = new TFile( "test_out.root", "recreate" );
  std::cout << "test1" << std::endl;
  w->Write("myws");
  std::cout << "test2" << std::endl;
  fout->Close();
  std::cout << "test3" << std::endl;
  
  return 0;	
}
