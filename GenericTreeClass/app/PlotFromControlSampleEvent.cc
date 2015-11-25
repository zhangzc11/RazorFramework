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


const float lumi = 2100.;

TString ZLL_cut = "(abs(lep1Type) == 13 && abs(lep2Type) == 13) && lep1.Pt() > 30. && lep2.Pt() > 30.  && lep1PassTight == 1 && lep2PassTight == 1 && mll > 60. && mll < 120.";

TString emu_cut = "( (abs(lep1Type) == 11 && abs(lep2Type) == 13) || (abs(lep1Type) == 13 && abs(lep2Type) == 11) ) && lep1.Pt() > 30. && lep2.Pt() > 30.  && lep1PassTight == 1 && lep2PassTight == 1 && mll > 20.";

TString dataTrigger = "(HLTDecision[2] == 1 || HLTDecision[7] == 1 || HLTDecision[12] == 1 || HLTDecision[11] == 1 || HLTDecision[15] == 1 || HLTDecision[22] == 1 || HLTDecision[23] == 1 || HLTDecision[24] == 1 || HLTDecision[25] == 1 || HLTDecision[26] == 1 || HLTDecision[27] == 1 || HLTDecision[28] == 1 || HLTDecision[29] == 1)";

TString mcTrigger = "(HLTDecision[2] == 1 || HLTDecision[7] == 1 || HLTDecision[12] == 1 || HLTDecision[11] == 1 || HLTDecision[15] == 1 || HLTDecision[18] == 1 || HLTDecision[19] == 1 || HLTDecision[20] == 1 || HLTDecision[21] == 1 || HLTDecision[28] == 1 || HLTDecision[29] == 1)";

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
  
  //----------------------
  //pileup weights
  //----------------------
  TFile* puFile = new TFile("/afs/cern.ch/work/c/cpena/public/CMSSW_7_5_3_patch1/src/RazorAnalyzer/data/PileupReweight_Spring15MCTo2015Data.root");
  TH1D* puweightHist = (TH1D*)puFile->Get("PileupReweight");
  
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
  //GenericTreeClass* myClass = new GenericTreeClass();
  THStack* stack;
  TLegend* leg;
  TH1D* data;
  TH1D* mc;
  TH1D* mc2 = new TH1D();


  const int nplots = 11;
  TString plots[] = {"MR", "Rsq", "NJets40", "mll", "HT", "MET", "NBJetsMedium", "lep1Pt", "MR*Rsq", "MyMT_lep1", "MyMT_lep2"};
  TString plotNames[] = {"MR", "Rsq", "NJets40", "mll", "HT", "MET", "NBJetsMedium", "lep1Pt", "MR_Rsq", "MyMT_lep1", "MyMT_lep2"};
  TString varNames[] = {"MR", "Rsq", "NJets40", "lep1", "lep2", "mll", "HT", "MET", "METPhi", "NBJetsMedium", "weight", "NPU_0"};
  std::map < std::string, TChain* > processNtuples;
  std::map < std::string, GenericTreeClass* > listGTC;
  int varNamesLen = sizeof(varNames)/sizeof(TString);

  //----------------                                                                                                     
  //DummyRootFile
  //----------------                                                                                                     
  TFile* ftmp = new TFile("ftmp.root", "RECREATE");
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
	  if ( myMap.first == "data" )
	    {
	      cutTree = (TTree*)processNtuples[myMap.first]->CopyTree( emu_cut + "&&" + dataTrigger);
	    }
	  else
	    {
	      cutTree = (TTree*)processNtuples[myMap.first]->CopyTree( emu_cut + "&&" + mcTrigger);
	    }
	  listGTC[myMap.first] = new GenericTreeClass( cutTree, myMap.first, "dummy");
	  listGTC[myMap.first]->SetPuHisto( puweightHist );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[0], plots[0], 50, 200, 2700 );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[1], plots[1], 20, 0, 1.0 );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[2], plots[2], 10, 0, 10 );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[3], plots[3], 120, 20., 500. );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[4], plots[4], 100, 0., 1000. );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[5], plots[5], 50, 0., 200. );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[6], plots[6], 10, 0, 10 );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[7], plots[7], 100, 0, 1000. );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[8], plots[8], 50, 0, 2500. );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[9], plots[9], 100, 0, 500. );
	  listGTC[myMap.first]->CreateGenericHisto( plotNames[10], plots[10], 100, 0, 500. );
	  listGTC[myMap.first]->PrintStoredHistos();
	  listGTC[myMap.first]->DeActivateAllBranches();
	  for( int i  = 0; i < varNamesLen; i ++ )listGTC[myMap.first]->ActivateBranch( varNames[i] );
	  listGTC[myMap.first]->Loop();
	  listGTC[myMap.first]->DeleteTree();
	}
    }
  
  const int nprocesses = 2;
  double k_f = 1.0;
  const double lumi_frac = 1.0; // (5./19.8)
  const int mod = 0; 
    
  std::cout << "before loop" << std::endl;
  
  for ( int i = 0; i < nplots; i++)
    {
      //------------------------------
      //Stack Histogram
      //------------------------------
      stack = new THStack( "hs" , "Hgg Stack " );
      int ctrHisto = 0;
      leg = new TLegend( 0.7, 0.58, 0.93, 0.89, NULL, "brNDC" );
      //for( const auto& process : Process() )
      TH1D* h_data;
      for( auto process : listGTC )
	{
	  std::string processName = process.first;
	  Process myprocess = GetProcessString( process.first );
	  TH1D* tmp_h  = new TH1D( *(process.second->map_1D_Histos[ std::make_pair(plotNames[i],plots[i]) ]) );
	  std::cout << "debug " << tmp_h->Integral() << std::endl;
	  if ( myprocess != Process::data )
	    {
	      //Scale to corresponding lumi
	      tmp_h->Scale( lumi );
	      TH1D* h_s    = GetStyledHisto( tmp_h, myprocess );
	      stack->Add( h_s, "histo" );
	      
	      if ( ctrHisto == 0 )
		{
		  mc   = new TH1D( *tmp_h );
		}
	      else
		{
		  mc->Add( tmp_h );
		}
	      AddLegend( h_s, leg, myprocess );
	      ctrHisto++;
	    }
	  else
	    {
	      std::cout << "Making Data Histo" << std::endl;
	      h_data = GetStyledHisto( tmp_h, Process::data );
	      std::cout << "Data Yield" << h_data->Integral() << std::endl;
	    }
	}
      
      std::cout << "make data histo" << std::endl;
      data = new TH1D ( *h_data );
      std::cout << "data histo created" << std::endl;
      AddLegend( data, leg, Process::data );
      std::cout << "data: " << data->Integral() << " mc: " << mc->Integral() << std::endl;
      MakeStackPlot( stack, data, mc, plots[i], "plots/" + plotNames[i] + "_" + "INCLUSIVE", leg );
    }
  

  TFile* fout = new TFile("fout_test.root", "RECREATE");
  for( auto process : listGTC )
    {
      for ( int i = 0; i < nplots; i++)
	{
	  std::string processName = process.first;
	  Process myprocess = GetProcessString( process.first );
	  TH1D* tmp_h  = new TH1D( *(process.second->map_1D_Histos[ std::make_pair(plotNames[i],plots[i]) ]) );
	  if ( myprocess != Process::data ) tmp_h->Scale( lumi );
	  TString pName = "_" + plotNames[i];
	  tmp_h->Write( processName.c_str() + pName );
	}
    }
  fout->Close();
  
  return 0;
}
