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

// D e f i n e  B i n n i n g
//---------------------------
int HggRazorClass::n_mgg = 38;
float HggRazorClass::mgg_l = 103.;
float HggRazorClass::mgg_h = 160.;

int HggRazorClass::n_ptgg = 100;
float HggRazorClass::ptgg_l = 20.;
float HggRazorClass::ptgg_h = 700.;


TString cut = "MR > 150. && Rsq > 0.05 && abs( pho1Eta ) < 1.44 && abs( pho2Eta ) < 1.44 && ( pho1Pt > 40. || pho2Pt > 40. ) && pho1Pt > 25. && pho2Pt> 25.";

int main ( int argc, char* argv[] )
{
  //Map Containing the lists for different processes 
  std::map< std::string, std::string > mapList;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  FillMapList( mapList, inputFile );
  std::cout << "[INFO]: map size: " << mapList.size() << std::endl;
  for( auto& myMap : mapList )
    {
      std::cout << " first: " << myMap.first << " second: " << myMap.second << std::endl;
    }
  TFile* f;
  f = new TFile("/Users/cmorgoth/Work/data/HggRazorRun2/MC/Run2TTH_Selection.root");
  TTree* tree;
  TTree* cutTree;
  HggRazorClass* tth;
  for( const auto& process : Process() )
    {
      std::string processName = GetProcessString( process );
      std::cout << "[INFO]: process name: " << processName << std::endl;
    }
  for( const auto& box : Boxes() )
    {
      std::string boxName = GetBoxString( box );
      // R e t r i e v i n g  T r e e
      //-----------------------------
      tree    = (TTree*)f->Get( boxName.c_str() );
      
      //need to create temporary root file to store cutTree
      TFile* tmp = new TFile("tmp","recreate");
      //A p p l y i n g  C u t s
      //------------------------
      cutTree = (TTree*)tree->CopyTree( cut );
      std::cout << "[INFO]: Including tree: " << boxName << std::endl;
      //C r e a t in g   S e l e c t i o n   O b j e c t
      //------------------------------------------------
      tth = new HggRazorClass( tree, "TTH", boxName, false, false );
      tth->Loop();
      tth->WriteOutput( boxName );
    }
  
  return 0;
}
