#include <iostream>
#include <fstream>
#include <assert.h>
//LOCAL INCLUDES
#include "CommandLineInput.hh"


int main( int argc, char* argv[] )
{
  
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      return -1;
    }
  
  std::ifstream ifs( inputFile.c_str(), std::ifstream::in );
  assert(ifs);
  
  std::string configCardName;
  int binNumber = 0;
  while( ifs.good() )
    {
      std::string category, MR_l, MR_h, Rsq_l, Rsq_h, SMH, SMH_Err, Signal, Bkg_f1;
      ifs >> configCardName;
      if( ifs.eof() ) break;
      //std::cout << configCardName << std::endl;
      std::ifstream tmpF( configCardName.c_str(), std::ifstream::in );
      while( tmpF.good() )
	{
	  tmpF >> category >> MR_l >> MR_h >> Rsq_l >> Rsq_h >> SMH >> SMH_Err >> Signal >> Bkg_f1;
	  if ( category.find("#") != std::string::npos ) continue;
	  if ( tmpF.eof() ) break;
	  //std::cout << category << " " << MR_l << " " << MR_h << " " << Rsq_l << " " << Rsq_h << " " << SMH << " " << SMH_Err
	  //		    << " " << Signal << " "  << Bkg_f1 << std::endl;
	  std::cout << "./MakeFitRun2 " 
		    << "--inputFile=/Users/cmorgoth/Work/data/HggRazorRun2/Analysis13TeV/CMSSW_7_6_March15_Ntuples/DoubleEG_Run2015_CMSSW_7_6_March15_GoodLumi.root"
		    << " --inputFileSignal=/Users/cmorgoth/Work/data/HggRazorRun2/Analysis13TeV/CMSSW_7_6_March15_Ntuples/T2bH-Hgg-sbm300-sbw1-chi2m230-chi2w0p1-chi1m100_CMSSW_7_6_March15_1pb_weighted.root"
		    << " --inputFileSMH=/Users/cmorgoth/Work/data/HggRazorRun2/Analysis13TeV/CMSSW_7_6_March15_Ntuples/SM-Higgs_1pb_weighted.root"
		    << " --treeName=HggRazor --dataMode=data+signal --fitMode=datacard --category=" << category<< " --LowMRcut=" << MR_l 
		    << " --HighMRcut=" << MR_h << " --LowRSQcut=" << Rsq_l << " --HighRSQcut=" << Rsq_h << " --f1=" << Bkg_f1
		    << " --SMH_Yield=" << SMH << " --SMH_YieldUn=" << SMH_Err << " --Signal_Yield=" << Signal << " --binNumber=" << binNumber << std::endl;
	  binNumber++;
	}
      tmpF.close();
    }
  ifs.close();

  return 0;
}
