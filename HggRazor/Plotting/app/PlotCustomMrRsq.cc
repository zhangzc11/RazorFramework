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
#include "PlotCosmetics.hh"

#define _debug 1

int main ( int argc, char* argv[] )
{
  std::cout << "[INFO]: Initializing program" << std::endl;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  std::string histoMake = ParseCommandLine( argc, argv, "-histoMake=" );
  std::string option = ParseCommandLine( argc, argv, "-option=" );
  std::string histoName = histoMake;
  if ( inputFile == "" )
    {
      std::cerr << "[ERROR]: Please provide an input file using --inputFile=<your_input_file>" << std::endl;
      return -1;
    }
  std::map< std::string, std::string > mapList;
  FillMapList( mapList, inputFile );
  if ( _debug ) std::cout << "[DEBUG]: map size: " << mapList.size() << std::endl;
  
  TFile* f;
  TH2F* h_mr_rsq;
  TH1F* h;
  THStack* stack = new THStack( "hs" , "Hgg Stack " );
  TLegend* leg = new TLegend( 0.63, 0.7, 0.85, 0.89, NULL, "brNDC" );
  
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
      if ( histoName == "" || histoName == "MrRsqCustom" )
	{
	  h_mr_rsq = (TH2F*)f->Get( "mr_rsq_custom" );
	  std::cout << "[INFO]: Number of events (5 fb-1) -> " << h_mr_rsq->Integral() << std::endl;
	  MakeCustomMrRsq( h_mr_rsq, processName );
	}
      else if ( histoName == "mgg" )
	{
	  h = (TH1F*)f->Get( "mgg" );
	  TH1F* h_s = GetStyledHisto( h, process );
	  if ( option == "stack" )
	    {
	      stack->Add( h_s, "histo" );
	      AddLegend( h_s, leg, process );
	    }
	}
      else if ( histoName == "ptgg" )
	{
	  h = (TH1F*)f->Get( "ptgg" );
	  TH1F* h_s = GetStyledHisto( h, process );
	  if ( option == "stack" )
	    {
	      stack->Add( h_s, "histo" );
	      AddLegend( h_s, leg, process );
	    }
	}
      else if ( histoName == "mr" )
	{
	  h = (TH1F*)f->Get( "mr" );
	  TH1F* h_s = GetStyledHisto( h, process );
	  if ( option == "stack" )
	    {
	      stack->Add( h_s, "histo" );
	      AddLegend( h_s, leg, process );
	    }
	}
      else if ( histoName == "rsq" )
	{
	  h = (TH1F*)f->Get( "rsq" );
	  TH1F* h_s = GetStyledHisto( h, process );
	  if ( option == "stack" )
	    {
	      stack->Add( h_s, "histo" );
	      AddLegend( h_s, leg, process );
	    }
	}
    }
  
  MakeStackPlot( stack, histoName, histoName, leg );
  return 0;
}
