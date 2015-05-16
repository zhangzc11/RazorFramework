//C++ INCLUDES
#include <fstream>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "TChainTools.hh"

bool AddTChain( TChain* chain, std::string fileList )
{
  std::ifstream ifs ( fileList.c_str(), std::fstream::in );
  std::string tmpRootFile;
  if( ifs.is_open() )
    {
      while( ifs.good() )
	{
	  if ( ifs.eof() ) break;
	  ifs >> tmpRootFile;
	  std::cout << "[INFO]: chaininig-> " << tmpRootFile << std::endl;
	  chain->Add( tmpRootFile.c_str() );
	}
    }
  else
    {
      std::cerr << "[ERROR]: Unable to open file-> " << fileList << std::endl;
      return false;
    }
  return true;
};
