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
  std::string category = ParseCommandLine( argc, argv, "-category=" );

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

  if ( category != "highpt" && category != "highres" && category != "lowres" && category != "hbb" && category != "zbb" && category != "inclusive" )
    {
      std::cerr << "[ERROR]: please provide a valid category --category=<highpt/highres/lowres/hbb/zbb/inclusive>" << std::endl;
      return -1;
    }

  
  TString process, rfName;
  std::ifstream ifs ( inputFile.c_str(), std::ifstream::in );

  TFile* fout = new TFile("combineHisto.root", "RECREATE");
  //----------------
  //Define ROOT FILE
  //----------------
  TFile* f;
  TTree* tree;
  TH2F* histo[2];
  float MRedges[] = {150., 250., 500., 800., 10000.};


  //--------------------
  //Define category cuts
  //--------------------
  TString cut = "mGammaGamma > 103. && mGammaGamma < 160. && pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.";
  TString categoryCutString;
  if (category == "highpt") categoryCutString = " && pTGammaGamma >= 110 ";
  else if (category == "hbb") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.)<25";
  else if (category == "zbb") categoryCutString = " && pTGammaGamma < 110 && abs(mbbZ-91.2)<25 ";
  else if (category == "highres") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.)>=25 && abs(mbbZ-91.2)>=25 && pho1sigmaEOverE < 0.015 && pho2sigmaEOverE < 0.015 ";
  else if (category == "lowres") categoryCutString = " && pTGammaGamma < 110  && abs(mbbH-125.)>=25 && abs(mbbZ-91.2)>=25 && !(pho1sigmaEOverE < 0.015 && pho2sigmaEOverE < 0.015) ";
  else if (category == "inclusive") categoryCutString = "";
  
  int nprocess = 0;
  cut = cut + categoryCutString;
  std::cout << "[INFO]: cut applied-> " << cut << std::endl;
  if ( ifs.is_open() )
    {
      while ( ifs.good() )
	{
	  ifs >> process >> rfName;
	  if ( ifs.eof() ) break;
	  std::cout << process << " -> " << rfName << std::endl;
	  f = new TFile( rfName, "READ");
	  assert( f );
	  tree = (TTree*)f->Get("HggRazor");
	  TFile* dummy = new TFile( "dummyFile.root", "RECREATE");
	  histo[nprocess] = new TH2F( *Create2DHisto( tree->CopyTree( cut ), MRedges, 0.01, process ) );
	  
	  nprocess++;
	  delete f;
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
