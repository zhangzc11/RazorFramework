//C++ INCLUDES
#include <iostream>
#include <fstream>
#include <map>
#include <utility>
#include <assert.h>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TMath.h>
//LOCAL INCLUDES
#include "CountingExperiment.hh"
#include "CommandLineInput.hh"
#include "HggAux.hh"

int main( int argc, char* argv[])
{
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  std::string outputDir = ParseCommandLine( argc, argv, "-outputDir=" );

  if (outputDir == "")
    {
      outputDir = "combineCards/CountingExp";
    }
  std::string cmd_mkdir = "mkdir -p "+outputDir;
  system(cmd_mkdir.c_str());	

  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      std::cerr << "[INFO]: This file is a text file with the path to the bias test root files" << std::endl;
      return -1;
    }

  
  std::string process, rfName;
  std::ifstream ifs ( inputFile.c_str(), std::ifstream::in );

  TFile* fout = new TFile("combineHisto.root", "RECREATE");
  //----------------
  //Define ROOT FILE
  //----------------
  TFile* f;
  TTree* tree;
  TH2F* histo[2];
  float MRedges[] = {150., 250., 500., 800., 2000.};

  int nprocess = 0;
  if ( ifs.is_open() )
    {
      while ( ifs.good() )
	{
	  ifs >> process >> rfName;
	  if ( ifs.eof() ) break;
	  std::cout << process << " -> " << rfName << std::endl;
	  f = new TFile( rfName.c_str(), "READ");
	  assert( f );
	  tree = (TTree*)f->Get("HggRazor");
	  histo[nprocess] = new TH2F( *Create2DHisto( tree, MRedges, 0.01 ) );
	  nprocess++;
	  //delete f;
	}
    }
  else
    {
      std::cerr << "[ERROR]: unable to open file -> " << inputFile << std::endl;
    }
  
  fout->cd();
  histo[0]->Write("p0_razor");
  histo[1]->Write("p1_razor");
  fout->Close();
  std::cout << "[INFO]: finishing... " << std::endl;
  return 0;	
}
