//C++ INCLUDES
#include <iostream>
#include <string>
#include <assert.h> 

//ROOT INCLUDES
#include <TTree.h>
//LOCAL INCLUDES
#include "CommandLineInput.hh"
#include "pulse.hh"

int main( int argc, char* argv[])
{
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      return -1;
    }
  
  std::cout << "inputFile: " << inputFile << std::endl;
  TFile* f = new TFile( inputFile.c_str(), "READ" );
  assert(f);
  TTree* tree = (TTree*)f->Get("pulse");
  
  pulse* pulseTree = new pulse( tree );
  pulseTree->Loop();
  return 0;
}
