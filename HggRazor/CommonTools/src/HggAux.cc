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
Process begin( Process process ){ return Process::ttH; };
Process end( Process process ){ return Process::Last; };

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
      return "tth";
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
  else if( process == Process::gammaJet )
    {
      return "gammaJet";
    }
  else
    {
      std::cerr << "[ERROR]: Process not found" << std::endl;
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
