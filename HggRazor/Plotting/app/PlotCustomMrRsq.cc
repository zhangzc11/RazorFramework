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
#include "TChainTools.hh"

#define _debug 0

int main ( int argc, char* argv[] )
{
  std::cout << "[INFO]: Initializing program" << std::endl;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if ( inputFile == "" )
    {
      std::cerr << "[ERROR]: Please provide an input file using --inputFile=<your_input_file>" << std::endl;
      return -1;
    }
  std::map< std::string, std::string > mapList;
  FillMapList( mapList, inputFile );
  if ( _debug ) std::cout << "[DEBUG]: map size: " << mapList.size() << std::endl;
  
  TFile* f;
  TH1F* h_mr_rsq;
  
  for( auto& myMap : mapList )
    {
      if ( _debug ) std::cout << "[DEBUG]: first: " << myMap.first << " second: " << myMap.second << std::endl;
    }
  
  //L o o p  o v e r   p r o c e s s e s
  //------------------------------------
  for( const auto& process : Process() )
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
      h_mr_rsq = (TH1F*)f->Get( "mr_rsq_custom" ) ;
      std::cout << "[INFO]: Number of events (5 fb-1) -> " << h_mr_rsq->Integral() << std::endl;
    }
  return 0;
}
