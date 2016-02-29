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
  std::string outputDir = ParseCommandLine( argc, argv, "-outputDir=" );

  if (outputDir == "")
    {
      outputDir = "plot_bias";
    }
  std::string cmd_mkdir = "mkdir -p "+outputDir;
  system(cmd_mkdir.c_str());	
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

   
  std::string fitStatus = ParseCommandLine( argc, argv, "-requireFitStatus=" );
  bool _fitStatus = false;
  if (  fitStatus == "" )
    {
      std::cerr << "[WARNING]: please provide a fitStatus option by using --requireFitStatus=<yes/no>" << std::endl;
    }
  
  if ( fitStatus == "yes" || fitStatus == "Yes" || fitStatus == "YES" ) _fitStatus = true;
  /*
  std::string doubleGaus = ParseCommandLine( argc, argv, "-useDoubleGaus=" );
  bool _doubleGaus = false;
  if (  doubleGaus == "" )
    {
      std::cerr << "[WARNING]: please indicate whether to use double gaus to fit bias or not by using --useDoubleGaus=<yes/no>" << std::endl;
    }
  
  if ( doubleGaus == "yes" || doubleGaus == "Yes" || doubleGaus == "YES" ) _doubleGaus = true;
 
*/
  std::string fitFunc = ParseCommandLine( argc, argv, "-fitFunc=" );
  if (fitFunc == "") 
  {
      std::cerr << "[WARNING]: please provide the bias fit function by using --fitFunc=<singleGaus/doubleGaus/crystalBall>" << std::endl;
      std::cerr << "[WARNING]: fit function not indicated, use default one: singleGaus" <<std::endl;
      fitFunc = "singleGaus";
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
	      PlotBias( biasFile, outputDir );
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
	      std::cout << "pass" << std::endl;
	    }
	  else if ( mode == "table2" )
	    {
	      std::string rootFile;
	      rootFile = biasFile;
	      //-----------------------------------
	      //G e t t i n g   p a i r   n a m e s 
	      //-----------------------------------
	      std::string findName = "biasTest_";
	      std::string findName2 = "_Tree.root";
	      int begin_s = biasFile.find( findName );
	      int aux_end_s =  biasFile.find( findName2 );
	      std::string aux_s = biasFile.substr(begin_s, aux_end_s - begin_s );
	      begin_s = aux_s.find( findName ) + findName.size();
	      int end_s   = aux_s.find_last_of( "_" );
	      std::string f1 = aux_s.substr( begin_s, end_s - begin_s);
	      begin_s = end_s + 1;
	      end_s   = aux_s.size();
	      std::string f2 = aux_s.substr( begin_s, end_s - begin_s );
	      std::pair< std::string, std::string > tmp_p = std::make_pair( f1, f2 );
	      std::cout << "f1: " << f1 << " f2: " << f2 << std::endl;
	      double mean = FitBias( rootFile.c_str(), f1.c_str(), f2.c_str(), outputDir, _fitStatus, fitFunc );
	       if ( mean_map.find( tmp_p ) == mean_map.end() )
		 {
		   mean_map[tmp_p] = mean;
		 }
	       std::cout << "mean--> " << mean << std::endl;
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
      MakeTable( rms_map, "rms" );
    }

  if ( mode == "table2" )
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
