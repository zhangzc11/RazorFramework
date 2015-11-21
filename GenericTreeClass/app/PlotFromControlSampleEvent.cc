//C++ INCLUDES
#include <iostream>
#include <map>
//ROOT INCLUDES
#include <TString.h>
#include <THStack.h>
//LOCAL INCLUDES
#include "ControlSampleEvent.hh"
#include "GenericTreeClass.hh"
#include "HggAux.hh"
#include "CommandLineInput.hh"
#include "TChainTools.hh"
#include "PlotCosmetics.hh"

//--------------------------
//HighPt
const int N_HighPt = 5;
float MR_HighPt[N_HighPt+1] = {150,200,300,500,1600,3000};
float Rsq_HighPt[N_HighPt+1] = {0.01,0.05,0.10,0.15,0.20,1.00};

//HighRes
const int N_HighRes = 4;
float MR_HighRes[N_HighRes+1] = {150,250,400,1400,3000};
float Rsq_HighRes[N_HighRes+1] = {0.01,0.05,0.10,0.15,1.00};

//Hbb
const int N_Hbb = 2;
float MR_Hbb[N_Hbb+1] = {150,300,3000};
float Rsq_Hbb[N_Hbb+1] = {0.01,0.05,1.00};

float hpt_k[2]  = { 1.0, 1.0};
float hres_k[2] = { 1.0, 1.0};
float lres_k[2] = { 1.0, 1.0};
//A p p l y   B a s e l i n e   C u t
//-----------------------------------
//DATA
//EBEB
TString cut = "pho1passEleVeto == 0 && pho2passEleVeto == 0 && pho1passIso == 1 && pho2passIso == 1 && abs( pho1Eta ) < 1.479 && abs( pho2Eta ) < 1.479 && ( HLTDecision[30] == 1 || HLTDecision[31] == 1 ) && mGammaGamma>60. && mGammaGamma<120. && pho1Pt>30 && pho2Pt>20";

//MC
//EBEB
TString cut_mc = "pho1passEleVeto == 0 && pho2passEleVeto == 0 && pho1passIso == 1 && pho2passIso == 1 && abs( pho1Eta ) < 1.479 && abs( pho2Eta ) < 1.479  && ( HLTDecision[30] == 1 || HLTDecision[31] == 1 ) && mGammaGamma>60. && mGammaGamma<120. && pho1Pt>30 && pho2Pt>20";

TString mggCut = "1";

#define _debug 1


struct binning
{
  int nbins;
  float x_low;
  float x_high;
  binning(){};
  binning( int nbins, float x_low, float x_high ): nbins(nbins), x_low(x_low), x_high(x_high) {};
};

int main ( int argc, char* argv[] )
{
  std::cout << "[INFO]: Initializing program" << std::endl;
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      return -1;
    }
  std::string run = ParseCommandLine( argc, argv, "-run=" );
  if (  run == "" )
    {
      std::cout << "[WARNING]: please provide a valid run, use --run=<run1/run2>" << std::endl;
      run = "run1";
    }
  std::string treeType = ParseCommandLine( argc, argv, "-treeType=" );
  if (  treeType == "" )
    {
      std::cout << "[WARNING]: please provide a valid treeType, use --treeType=<inclusive/category>" << std::endl;
      treeType = "inclusive";
    }
  
  std::cout << "=================================" << std::endl;
  std::cout << "===========set parameters========" << std::endl;
  std::cout << "[INFO]: input file: " << inputFile << std::endl;
  std::cout << "[INFO]: run: " << run << std::endl;
  std::cout << "=================================" << std::endl;
  
  //------------------------------------------------
  //Map Containing the lists for different processes
  //------------------------------------------------
  std::map< std::string, std::string > mapList;
  FillMapList( mapList, inputFile );
  if ( _debug ) std::cout << "[DEBUG]: map size: " << mapList.size() << std::endl;
  
  TFile* f;
  TTree* tree;
  TChain* chain;
  TTree* cutTree;
  GenericTreeClass* myClass = new GenericTreeClass();
  THStack* stack;
  TLegend* leg;
  TH1F* data;
  TH1F* mc;
  TH1F* mc2 = new TH1F();

  std::map < std::string, TChain* > processNtuples;
  std::map < std::string, GenericTreeClass* > listGTC;
  for( auto& myMap : mapList )
    {
      if ( _debug ) std::cout << "[DEBUG]: first: " << myMap.first << " second: " << myMap.second << std::endl;
      //-----------------------------
      // R e t r i e v i n g  T r e e
      //-----------------------------
      if ( processNtuples.find( myMap.first ) == processNtuples.end() )
	{
	  processNtuples[myMap.first] = new TChain( "ControlSampleEvent" );
	  AddTChain( processNtuples[myMap.first], myMap.second );
	  listGTC[myMap.first] = new GenericTreeClass(processNtuples[myMap.first]);
	}
    }
  
  const int nprocesses = 2;
  const int nplots = 4;
  double k_f = 1.0;
  const double lumi_frac = 1.0; // (5./19.8)
  const int mod = 0; 
  

  TString plots[] = {"MR", "Rsq", "NJets40", "sqrt(Rsq)*MR"};
  TString plotNames[] = {"MR", "Rsq", "NJets40", "lep1Pt"};
  /*
    myClass->CreateGenericHisto( plotNames[0], plots[0], 25, 0, 2500 );
    myClass->CreateGenericHisto( plotNames[1], plots[1], 25, 0, 1.5 );
    myClass->CreateGenericHisto( plotNames[2], plots[2], 10, 0, 10 );
    myClass->CreateGenericHisto( plotNames[3], plots[3], 25, 0, 2000 );
    myClass->PrintStoredHistos();
    myClass->Loop();
  */
  
  for( auto process : listGTC )
    {
      process.second->CreateGenericHisto( plotNames[0], plots[0], 25, 0, 2500 );
      process.second->CreateGenericHisto( plotNames[1], plots[1], 25, 0, 1.5 );
      process.second->CreateGenericHisto( plotNames[2], plots[2], 10, 0, 10 );
      process.second->CreateGenericHisto( plotNames[3], plots[3], 25, 0, 2000 );
      process.second->PrintStoredHistos();
      process.second->Loop();
    }

  
  
  std::cout << "before loop" << std::endl;
  
  std::cout << "pass loop" << std::endl;
  
  for ( int i = 0; i < 4; i++)
    {
      //------------------------------
      //Stack Histogram
      //------------------------------
      stack = new THStack( "hs" , "Hgg Stack " );
      int ctrHisto = 0;
      leg = new TLegend( 0.7, 0.58, 0.93, 0.89, NULL, "brNDC" );
      //for( const auto& process : Process() )
      for( auto process : listGTC )
	{
	  //std::string processName = GetProcessString( process );
	  std::string processName = process.first;
	  Process myprocess = GetProcessString( process.first );
	  //TH1F* tmp_h  = new TH1F( *(myClass->map_1D_Histos[ std::make_pair(plotNames[i],plots[i]) ]) );
	  TH1F* tmp_h  = new TH1F( *(process.second->map_1D_Histos[ std::make_pair(plotNames[i],plots[i]) ]) );
	  TH1F* h_s    = GetStyledHisto( tmp_h, myprocess );
	  stack->Add( h_s, "histo" );
	  TH1F* h_data = GetStyledHisto( tmp_h, Process::data );
	  
	  if ( ctrHisto == 0 )
	    {
	      data = new TH1F ( *h_data );
	      mc   = new TH1F( *tmp_h );
	    }
	  else
	    {
	      mc->Add( tmp_h );
	      data->Add( h_data );
	    }
	  
	  AddLegend( h_s, leg, myprocess );
	  ctrHisto++;
	}
      MakeStackPlot( stack, data, mc, plots[i], "plots/" + plotNames[i] + "_" + "INCLUSIVE", leg );
    }
  
  return 0;
}
