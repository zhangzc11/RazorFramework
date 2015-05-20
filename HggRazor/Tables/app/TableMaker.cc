//C++ INCLUDES
#include <iostream>
#include <map>
//ROOT INCLUDES
#include <TString.h>
#include <TH1F.h>
#include <TFile.h>
//LOCAL INCLUDES
#include "HggAux.hh"
#include "CommandLineInput.hh"
#include "TableMakerAux.hh"

#define _debug 1
#define TYPES 4
std::string plots[TYPES] = { "mgg", "ptgg", "mr", "rsq" };

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
  std::cout << "[INFO]: Initializing program" << std::endl;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  std::string tableMake = ParseCommandLine( argc, argv, "-histoMake=" );
  std::string outDir    = ParseCommandLine( argc, argv, "-outDir=" );
  std::string option    = ParseCommandLine( argc, argv, "-option=" );
  std::string boxName   = ParseCommandLine( argc, argv, "-boxName=" );
  if ( inputFile == "" )
    {
      std::cerr << "[ERROR]: Please provide an input file using --inputFile=<your_input_file>" << std::endl;
      return -1;
    }
  std::map< std::string, std::string > mapList;
  FillMapList( mapList, inputFile );
  if ( _debug ) std::cout << "[DEBUG]: map size: " << mapList.size() << std::endl;
  
  TFile* f;
  TH1F* h;
  FullBkg fb;
  
  for ( const auto& process : Process() )
    {
      std::string processName = GetProcessString( process );
      std::cout << "[INFO]: process name: " << processName << std::endl;
      if ( mapList.find( processName ) == mapList.end() )
	{
	  std::cout << "[WARNING]: missing process-> " << processName << std::endl;
	  continue;
	}
      // R e t r i e v i n g  H i s t o
      //-------------------------------
      f = new TFile( mapList[processName].c_str() );
      h = (TH1F*)f->Get("mr");
      // A s s i g n   h i s t o g r a m   t o   s t r u c t
      //----------------------------------------------------
      if ( process == Process::ggH )
	{
	  fb.ggH = h;
	}
      else if ( process == Process::vbfH )
	{
	  fb.vbfH = h;
	}
      else if ( process == Process::vH )
	{
	  fb.vH = h;
	}
      else if ( process == Process::ttH )
	{
	  fb.ttH = h;
	}
      else if ( process == Process::gammaJet )
	{
	  fb.gammaJet = h;
	}
      else
	{
	  std::cout << "[WARNING]: Unknown category" << std::endl;
	}
    }

  std::cout << "[TEST]: ttH-> " << fb.ttH->Integral() << std::endl;
  std::cout << "[TEST]: vH-> " << fb.vH->Integral() << std::endl;
  std::cout << "[TEST]: vbfH-> " << fb.vbfH->Integral() << std::endl;
  std::cout << "[TEST]: ggH-> " << fb.ggH->Integral() << std::endl;
  std::cout << "[TEST]: gammaJet-> " << fb.gammaJet->Integral() << std::endl;
  return 0;
}
