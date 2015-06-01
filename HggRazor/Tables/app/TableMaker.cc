//C++ INCLUDES
#include <iostream>
#include <map>
#include <math.h>
#include <fstream>
#include <iomanip> 
//ROOT INCLUDES
#include <TString.h>
#include <TH1F.h>
#include <TFile.h>
//LOCAL INCLUDES
#include "HggTree.hh"
#include "HggRazorClass.hh"
#include "CommandLineInput.hh"
#include "HggAux.hh"
#include "CommandLineInput.hh"
#include "TChainTools.hh"
//#include "TableMakerAux.hh"

#define _debug 1
#define TYPES 4

// D e f i n e  B i n n i n g
//---------------------------
int HggRazorClass::n_mgg = 57;
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

std::string plots[TYPES] = { "mgg", "ptgg", "mr", "rsq" };

TString cut = "MR > 150.0 && Rsq > 0.01 && abs( pho1Eta ) < 1.44 && abs( pho2Eta ) < 1.44 && ( pho1Pt > 40. || pho2Pt > 40. ) && pho1Pt > 25. && pho2Pt> 25.";
//TString cut = "MR > 150.0 && t1Rsq > 0.01 && abs( pho1Eta ) < 1.44 && abs( pho2Eta ) < 1.44 && ( pho1Pt > 40. || pho2Pt > 40. ) && pho1Pt > 25. && pho2Pt> 25. && trigger == 1";
//TString mggCut = "mGammaGamma > 117. 5 && mGammaGamma < 132.5";
TString mggCut = "1";

struct FullBkg
{
  TH1F* ggH;
  TH1F* vH;
  TH1F* vbfH;
  TH1F* ttH;
  TH1F* gammaJet;
};
  
int main ( int argc, char* argv[] )
{
  //std::cout.unsetf ( std::ios::floatfield );
  //std::cout.precision(1);
  std::cout << std::fixed;
  std::cout << std::setprecision(2);

  std::cout << "[INFO]: Initializing program" << std::endl;
  std::cout << "[INFO]: Hgg Branching Fraction = " << HggRazorClass::GetHggBF() << std::endl;
  //Map Containing the lists for different processes 
  std::map< std::string, std::string > mapList;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      return -1;
    }
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
  
  Yields incYield;
  Yields signalYield;

  for( const auto& box : Boxes() )
    {
      std::string boxName = GetBoxString( box );
      for( const auto& process : Process() )
	{
	  std::string processName = GetProcessString( process );
	  std::cout << "[INFO]: process name: " << processName << std::endl;
	  // R e t r i e v i n g  T r e e
	  //-----------------------------
	  chain   = new TChain( boxName.c_str() );
	  AddTChain( chain, mapList[processName] );
	  
	  //need to create temporary root file to store cutTree
	  TFile* tmp = new TFile("tmp","recreate");
	  //A p p l y i n g  C u t s
	  //------------------------
	  cutTree = (TTree*)chain->CopyTree( cut + " && " + mggCut );
	  if ( cutTree == NULL )
	    {
	      std::cout << "[WARNING]: Empty selected tree: " << boxName << std::endl;
	      continue;
	    }
	  //C r e a t in g   S e l e c t i o n   O b j e c t
	  //------------------------------------------------
	  hggclass = new HggRazorClass( cutTree, processName, boxName, false, false );
	  float n_events = hggclass->GetYields( 350., 0.035, 121., 131. );
	  //13/8TeV R A T I O S (remove if running @ 8 TeV)
	  n_events *= 0.2525252525;
	  if ( process == Process::gammaJet || process == Process::diphoton || process == Process::qcd )
	    {
	      if ( box == Boxes::HighPt ) n_events *= 9.688840e-01;
	      if ( box == Boxes::HighRes ) n_events *= 6.244856e-01;
	      if ( box == Boxes::LowRes ) n_events *= 6.361398e-01;
	    }
	  if ( process == Process::gammaJet ) signalYield.gammaJet = n_events;
	  if ( process == Process::diphoton ) signalYield.diphoton = n_events;
	  if ( process == Process::ttH ) signalYield.ttH = n_events;
	  if ( process == Process::ggH ) signalYield.ggH = n_events;
	  if ( process == Process::vbfH ) signalYield.vbfH = n_events;
	  if ( process == Process::vH ) signalYield.vH = n_events;
	  if ( process == Process::data ) signalYield.data = n_events;
	  //hggclass->Loop();
	  //hggclass->WriteOutput( boxName );
	}
      std::string tmp_s = boxName+"_yields.txt";
      std::ofstream ofs ( tmp_s.c_str(), std::fstream::out );
      ofs.precision(2);
      ofs << "\\begin{center}\n";
      ofs << "\\captionof{table}{" << boxName << "}\n";
      ofs << "\\begin{tabular}{|c|c|}\n";
      ofs << "\\hline\n";
      ofs << "process & yield \\\\ \\hline\n";
      ofs << "gammaJet & " << signalYield.gammaJet << " \\\\ \\hline\n";
      ofs << "diphoton & " << signalYield.diphoton << "\\\\ \\hline\n";
      ofs << "ttH & " << signalYield.ttH << "\\\\ \\hline\n";
      ofs << "ggH & " << signalYield.ggH << "\\\\ \\hline\n";
      ofs << "vH & " << signalYield.vH << "\\\\ \\hline\n";
      ofs << "vbfH &" << signalYield.vbfH << "\\\\ \\hline\n";
      ofs << "observed &" << signalYield.data << "\\\\ \\hline\n";
      ofs << "\\end{tabular}\n";
      ofs << "\\end{center}\n";
      
      ofs.close();
      std::cout << "[INFO]: Box name: " << boxName << std::endl;
      std::cout << "gammaJet: " << signalYield.gammaJet << std::endl;
      std::cout << "diphoton: " << signalYield.diphoton << std::endl;
      std::cout << "ttH: " << signalYield.ttH << std::endl;
      std::cout << "ggH: " << signalYield.ggH << std::endl;
      std::cout << "vH: " << signalYield.vH << std::endl;
      std::cout << "vbfH: " << signalYield.vbfH << std::endl;
      std::cout << "data: " << signalYield.data << std::endl;
    }

  return 0;
}
