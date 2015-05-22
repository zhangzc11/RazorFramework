//C++ INCLUDES
#include <iostream>
#include <map>
#include <fstream>
//ROOT INCLUDES
#include <TString.h>
#include <TH1F.h>
#include <TFile.h>
#include <TTree.h>
//LOCAL INCLUDES
#include "CommandLineInput.hh"
#include "TChainTools.hh"
#include "HggAux.hh"

const float lumi = 19.8e3;

int main ( int argc, char* argv[] )
{
  //getting lists of root files to scale 
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if ( inputFile == "" )
    {
      std::cerr << "[ERROR]: Please provide a valid input list" << std::endl;
      return -1;
    }
  
  TFile* f;
  TFile* fout;
  TH1F*  h_ngen;
  TTree* tree;
  TTree* newTree;
  //L o o p i n g  o v e r   l i s t
  //--------------------------------
  std::ifstream ifs ( inputFile.c_str(), std::fstream::in );
  std::string rootFile;
  float xsec;
  std::string outRootFile;
  if ( ifs.is_open() )
    {
      while ( ifs.good() )
	{
	  ifs >> xsec >> rootFile;
	  if ( ifs.eof() ) break;
	  float sf = -99.0;
	  f = new TFile( rootFile.c_str() );
	  outRootFile = rootFile.substr( 0, rootFile.find( ".root" ) ) + "_Normalized.root";
	  if ( xsec > .0 )
	    {
	      h_ngen = (TH1F*)f->Get("NEvents");
	      double ngen = h_ngen->Integral();
	      sf = GetXsecSF( lumi , xsec, ngen );
	      std::cout << "[INFO]: Normalizing file -> " << outRootFile << std::endl;
	      std::cout << "[INFO]: xsec -> " << xsec << " ngen-> " << ngen << " sf-> " << sf << std::endl;
	    }
	  else
	    {
	      sf = 1.0;
	      std::cout << "[INFO]: Data detected, using xsecSF = 1.0 in -> " << outRootFile << std::endl;
	    }
	  fout = new TFile( outRootFile.c_str(), "recreate" );
	  // L o o p i n g   o v e r   b o x e s
	  //------------------------------------
	  for ( const auto& box : Boxes() )
	    {
	      std::string boxName = GetBoxString( box );
	      std::cout << "[INFO]: box = " << boxName << std::endl;
  	      tree   = (TTree*)f->Get( boxName.c_str() );
	      newTree = CloneAndAddSF( tree, sf );
	      newTree->Write();
	    }
	  
	  delete fout;
	}
    }
  else
    {
      std::cerr << "[ERROR]: Unable to open file-> " << inputFile << std::endl;
      return -1;
    }
  
  return 0;
}
