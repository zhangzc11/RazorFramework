//C++ INCLUDES
#include <iostream>
#include <fstream>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "HggAux.hh"

Boxes& operator++( Boxes& box ){ return box = (Boxes)( std::underlying_type<Boxes>::type( box ) + 1 ); };
Boxes operator*( Boxes box ){ return box; };
Boxes begin( Boxes box ){ return Boxes::HighPt; };
Boxes end( Boxes box ){ return Boxes::Last; };

Process& operator++( Process& process ){ return process = (Process)( std::underlying_type<Process>::type( process ) + 1 ); };
Process operator*( Process process ){ return process; };
Process begin( Process process ){ return Process::gammaJet; };
Process end( Process process ){ return Process::Last; };

HistoTypes& operator++( HistoTypes& htype ){ return htype = (HistoTypes)( std::underlying_type<HistoTypes>::type( htype ) + 1 ); };
HistoTypes operator*( HistoTypes htype ){ return htype; };
HistoTypes begin( HistoTypes htype ){ return HistoTypes:: mr; };
HistoTypes end( HistoTypes htype ){ return HistoTypes::Last; };

bool Histos::AssignHisto( HistoTypes htype, TH1F h )
{
  if ( htype == HistoTypes::mr ) mr = h;
  if ( htype == HistoTypes::rsq ) rsq = h;
  if ( htype == HistoTypes::mgg ) mgg = h;
  if ( htype == HistoTypes::ptgg ) ptgg = h;

  return true;
};

TH1F Histos::GetHisto( HistoTypes htype )
{
  TH1F h;
  if ( htype == HistoTypes::mr ) return mr;
  if ( htype == HistoTypes::rsq ) return rsq;
  if ( htype == HistoTypes::mgg ) return mgg;
  if ( htype == HistoTypes::ptgg ) return ptgg;
  
  return h;
};

std::string GetBoxString( Boxes box )
{
  if ( box == Boxes::HighPt )
    {
      return "HighPt";
    }
  else if ( box == Boxes::Hbb )
    {
      return "Hbb";
    }
  else if ( box == Boxes::Zbb )
    {
      return "Zbb";
    }
  else if ( box == Boxes::HighRes )
    {
      return "HighRes";
    }
  else if( box == Boxes::LowRes )
    {
      return "LowRes";
    }
  else
    {
      std::cerr << "[ERROR]: Box not found" << std::endl;
    }
  return "";
};

std::string GetProcessString( Process process )
{
  if ( process == Process::ttH )
    {
      return "ttH";
    }
  else if ( process == Process::vH )
    {
      return "vH";
    }
  else if ( process == Process::ggH )
    {
      return "ggH";
    }
  else if ( process == Process::vbfH )
    {
      return "vbfH";
    }
  else if( process == Process::qcd )
    {
      return "qcd";
    }
  else if( process == Process::diphoton )
    {
      return "diphoton";
    }
  else if( process == Process::gammaJet )
    {
      return "gammaJet";
    }
  else if( process == Process::data )
    {
      return "data";
    }
  else
    {
      std::cerr << "[ERROR]: Process not found" << std::endl;
    }
  return "";
};

std::string GetHistoTypesString( HistoTypes htype )
{
if ( htype == HistoTypes::mr )
  {
      return "mr";
    }
  else if ( htype == HistoTypes::rsq )
    {
      return "rsq";
    }
  else if ( htype == HistoTypes::mgg )
    {
      return "mgg";
    }
  else if ( htype == HistoTypes::ptgg )
    {
      return "ptgg";
    }
  else
    {
      std::cerr << "[ERROR]: Htype not found" << std::endl;
    }
 return "";
};

//Fill map with input lists
bool FillMapList( std::map< std::string, std::string >& thisMap, std::string inputList )
{
  std::string key;
  std::string val;
  
  std::ifstream ifs ( inputList.c_str(), std::fstream::in );
  if ( ifs.is_open() )
    {
      while( ifs.good() )
	{
	  if ( ifs.eof() ) break;
	  ifs >> key >> val;
	  if ( thisMap.find( key ) == thisMap.end() )
	    {
	      thisMap[key] = val;
	    }
	}
    }
  else
    {
      std::cerr << "[ERROR]: Unable to Open File-> " << inputList << std::endl;
      return false;
    }
  return true;
};
