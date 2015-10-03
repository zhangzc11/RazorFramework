//C++ INCLUDES
#include <iostream>
#include <fstream>
#include <map>
#include <utility>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TMath.h>
//LOCAL INCLUDES
#include "PlotBias.hh"
#include "CommandLineInput.hh"
#include "HggAux.hh"

int main( int argc, char* argv[])
{
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      std::cerr << "[INFO]: This file is a text file with the path to the bias test root files" << std::endl;
      return -1;
    }

  std::string mode = ParseCommandLine( argc, argv, "-mode=" );

  std::map< std::pair <std::string, std::string>, double > mean_map;//mean values for bias or fit error are strored
  std::map< std::pair <std::string, std::string>, double > mean_map_aux;//use to obtain both bias and fit errors.
  std::map< std::pair <std::string, std::string>, double > rms_map;
  if (  mode == "" )
    {
      std::cerr << "[ERROR]: please provide a mode by using --mode=<plot/table/tableFitErr>" << std::endl;
      return -1;
    }
  
  std::ifstream ifs ( inputFile.c_str(), std::ifstream::in );
  if ( ifs.is_open() )
    {
      while ( ifs.good() )
	{
	  std::string biasFile;
	  ifs >> biasFile;
	  if ( ifs.eof() ) break;
	  if ( mode == "plot" )
	    {
	      PlotBias( biasFile, "plot_bias" );
	    }
	  else if ( mode == "table" )
	    {
	      std::pair<double, double> pair = GetMeanRms( biasFile, "data_bias", "bias" );
	      //-----------------------------------
	      //G e t t i n g   p a i r   n a m e s 
	      //-----------------------------------
	      std::string findName = "biasTest_";
	      int begin_s = biasFile.find( findName ) + findName.size();
	      int end_s   = biasFile.find_last_of( "_" );
	      std::string f1 = biasFile.substr( begin_s, end_s - begin_s);
	      begin_s = end_s + 1;
	      end_s   = biasFile.find( ".root" );
	      std::string f2 = biasFile.substr( begin_s, end_s - begin_s);
	      std::pair< std::string, std::string > tmp_p = std::make_pair( f1, f2 );
	      if ( mean_map.find( tmp_p ) == mean_map.end() )
		{
		  mean_map[tmp_p] = pair.first;
		  rms_map[tmp_p] = pair.second;
		}
	    }
	  else if ( mode == "tableFitErr" )
	    {
	      std::pair<double, double> pair_fe = GetMeanRms( biasFile, "data_Nse", "NsignalError" );
	      std::pair<double, double> pair_bias = GetMeanRms( biasFile, "data_bias", "bias" );
	      //-----------------------------------
	      //G e t t i n g   p a i r   n a m e s 
	      //-----------------------------------
	      std::string findName = "biasTest_";
	      int begin_s = biasFile.find( findName ) + findName.size();
	      int end_s   = biasFile.find_last_of( "_" );
	      std::string f1 = biasFile.substr( begin_s, end_s - begin_s);
	      begin_s = end_s + 1;
	      end_s   = biasFile.find( ".root" );
	      std::string f2 = biasFile.substr( begin_s, end_s - begin_s);
	      std::pair< std::string, std::string > tmp_p = std::make_pair( f1, f2 );
	      if ( mean_map.find( tmp_p ) == mean_map.end() )
		{
		  if ( pair_fe.first != 0 )
		    {
		      mean_map[tmp_p] = pair_bias.first/pair_fe.first;
		    }
		  else
		    {
		      mean_map[tmp_p] = -999;
		    }
		  rms_map[tmp_p] = pair_fe.second;
		}
	    }
	  else
	    {
	      std::cout << "[ERROR]: unrecognized mode -> " << mode << std::endl;
	      return -1;
	    }
	}
    }
  else
    {
      std::cerr << "[ERROR]: unable to open file -> " << inputFile << std::endl;
    }


  if ( mode == "table" )
    {
      MakeTable( mean_map, "mean" );
    }

  if ( mode == "tableFitErr" )
    {
      MakeTable( mean_map, "mean" );
    }
  
  /*
  for ( auto& tmp : mean_map )
    {
      std::cout << tmp.first.first << " " << tmp.first.second << " " << tmp.second << std::endl; 
    }
  */
  std::cout << "[INFO]: finishing... " << std::endl;
  return 0;	
}
