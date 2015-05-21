//C++ INCLUDES
#include <iostream>
#include <map>
//ROOT INCLUDES
#include <TString.h>
//LOCAL INCLUDES
#include "HggTree.hh"
#include "HggRazorClass.hh"
#include "HggAux.hh"
#include "CommandLineInput.hh"
#include "TChainTools.hh"

// D e f i n e  B i n n i n g
//---------------------------
int HggRazorClass::n_mgg = 19;
float HggRazorClass::mgg_l = 103.;
float HggRazorClass::mgg_h = 160.;
/*
int HggRazorClass::n_mgg = 5;
float HggRazorClass::mgg_l = 117.5;
float HggRazorClass::mgg_h = 132.5;
*/
int HggRazorClass::n_ptgg = 70;
float HggRazorClass::ptgg_l = 20.;
float HggRazorClass::ptgg_h = 720.;

int HggRazorClass::n_mr = 80;
float HggRazorClass::mr_l = 130.;
float HggRazorClass::mr_h = 8130.;

int HggRazorClass::n_rsq = 125;
float HggRazorClass::rsq_l = .0;
float HggRazorClass::rsq_h = 5.0;

//C u s t o m MR_RSQ_BINNING
//--------------------------
//HighPt
const int N_HighPt = 5;
float MR_HighPt[N_HighPt+1] = {150,200,300,500,1600,3000};
float Rsq_HighPt[N_HighPt+1] = {0.01,0.05,0.10,0.15,0.20,1.00};

//HighRes
const int N_HighRes = 4;
float MR_HighRes[N_HighRes+1] = {150,250,400,1400,3000};
float Rsq_HighRes[N_HighRes+1] = {0.01,0.05,0.10,0.15,1.00};

//Hbb
const int N_Hbb = 2;
float MR_Hbb[N_Hbb+1] = {150,300,3000};
float Rsq_Hbb[N_Hbb+1] = {0.01,0.05,1.00};


//A p p l y   B a s e l i n e   C u t
//-----------------------------------
TString cut = "MR > 100. && Rsq > 0.0 && abs( Pho1Eta ) < 1.44 && abs( Pho2Eta ) < 1.44 && ( pho1Pt > 40. || pho2Pt > 40. ) && pho1Pt > 25. && pho2Pt> 25.";
//TString mggCut = "mGammaGamma > 117. 5 && mGammaGamma < 132.5";
TString mggCut = "1";

#define _debug 1

int main ( int argc, char* argv[] )
{
  std::cout << "[INFO]: Initializing program" << std::endl;
  std::cout << "[INFO]: Hgg Branching Fraction = " << HggRazorClass::GetHggBF() << std::endl;
  //Map Containing the lists for different processes 
  std::map< std::string, std::string > mapList;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  FillMapList( mapList, inputFile );
  if ( _debug ) std::cout << "[DEBUG]: map size: " << mapList.size() << std::endl;
  
  for( auto& myMap : mapList )
    {
      if ( _debug ) std::cout << "[DEBUG]: first: " << myMap.first << " second: " << myMap.second << std::endl;
    }
  
  TFile* f;
  TTree* tree;
  TChain* chain;
  TTree* cutTree;
  HggRazorClass* hggclass;
  
  for( const auto& process : Process() )
    {
      std::string processName = GetProcessString( process );
      std::cout << "[INFO]: process name: " << processName << std::endl;
      for( const auto& box : Boxes() )
	{
	  std::string boxName = GetBoxString( box );
	  // R e t r i e v i n g  T r e e
	  //-----------------------------
	  //tree    = (TTree*)f->Get( boxName.c_str() );
	  chain   = new TChain( boxName.c_str() );
	  AddTChain( chain, mapList[processName] );
	  
	  //need to create temporary root file to store cutTree
	  TFile* tmp = new TFile("tmp","recreate");
	  //A p p l y i n g  C u t s
	  //------------------------
	  cutTree = (TTree*)chain->CopyTree( cut + " && " + mggCut );
	  std::cout << "[INFO]: Including tree: " << boxName << std::endl;
	  //C r e a t in g   S e l e c t i o n   O b j e c t
	  //------------------------------------------------
	  hggclass = new HggRazorClass( cutTree, processName, boxName, false, false );
	  if ( box == Boxes::HighPt )
	    {
	      hggclass->InitMrRsqCustomHisto( N_HighPt, MR_HighPt, N_HighPt, Rsq_HighPt );
	    }
	  else if ( box == Boxes::HighRes || box == Boxes::LowRes )
	    {
	      hggclass->InitMrRsqCustomHisto( N_HighRes, MR_HighRes, N_HighRes, Rsq_HighRes );
	    }
	  else if( box == Boxes::Hbb || box == Boxes::Zbb )
	    {
	      hggclass->InitMrRsqCustomHisto( N_Hbb, MR_Hbb, N_Hbb, Rsq_Hbb );
	    }
	  else
	    {
	      std::cout << "[WARNING]: Undefined box->" << std::endl;
	    }
	  hggclass->Loop();
	  hggclass->WriteOutput( boxName );
	}
    }
  return 0;
}
