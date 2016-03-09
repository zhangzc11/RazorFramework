//C++ INCLUDES
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <utility>
#include <assert.h>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TMath.h>
//LOCAL INCLUDES
#include "CountingExperiment.hh"
#include "CommandLineInput.hh"
#include "HggAux.hh"



const float lumi = 2300.;
const float nonRes_kfactor = 1.37;

//-------------
//B i n n i n g 
//-------------
float MRedges[]   = {150., 187.5, 375., 750., 10000.};
float RSQedges0[] = {0.0, 0.06, 0.11, 0.16, 10.0};
float RSQedges1[] = {0.0, 0.07, 0.12, 10.0};
float RSQedges2[] = {0.0, 0.03, 10.0};
float RSQedges3[] = {0.0, 10.0};

std::vector<float*> stripesBins;
//stripesBins.push_back(RSQedges0);

int main( int argc, char* argv[])
{
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  std::string outputDir = ParseCommandLine( argc, argv, "-outputDir=" );
  std::string category = ParseCommandLine( argc, argv, "-category=" );

  if (outputDir == "")
    {
      outputDir = "combineCards/CountingExp";
    }
  std::string cmd_mkdir = "mkdir -p "+outputDir;
  system(cmd_mkdir.c_str());	

  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      std::cerr << "[INFO]: This file is a text file with the path to the bias test root files" << std::endl;
      return -1;
    }

  if ( category != "highpt" && category != "highres" && category != "lowres" && category != "hbb" && category != "zbb" && category != "inclusive" )
    {
      std::cerr << "[ERROR]: please provide a valid category --category=<highpt/highres/lowres/hbb/zbb/inclusive>" << std::endl;
      return -1;
    }

  
  TString process, rfName;
  std::ifstream ifs ( inputFile.c_str(), std::ifstream::in );
  std::map<TString, TString> pMap;
  //-----------------
  //reading inputlist
  //-----------------
  if ( ifs.is_open() )
    {
      while ( ifs.good() )
	{
	  ifs >> process >> rfName;
	  if ( ifs.eof() ) break;
	  if ( pMap.find( process ) == pMap.end() ) pMap[process] = rfName;
	}
    }
  else
    {
      std::cerr << "[ERROR]: unable to open file -> " << inputFile << std::endl;
    }
  ifs.close();

  //----------------------------
  //Printing process information
  //----------------------------
  for ( auto& tmp : pMap )
    {
      std::cout << "[INFO]: process-> " << tmp.first << ", file-> " << tmp.second << std::endl;
    }
  
  TFile* fout = new TFile("combineHisto.root", "RECREATE");
  //----------------
  //Define ROOT FILE
  //----------------
  TFile* f;
  TTree* tree;
  
  //-------------------
  //Number of processes
  //-------------------
  const int nProcess = pMap.size();
  TH2F* histoInc[nProcess];//Inclusive mgg histos
  TH2F* histoSR[nProcess];//mgg Signal Region (SR) histos
  std::cout << "[INFO]: number of processes is " << nProcess << std::endl;

  //--------------------
  //Define category cuts
  //--------------------
  TString cut = "pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.";
  TString mggInclusiveCut = " && mGammaGamma > 103. && mGammaGamma < 160.";
  TString categoryCutString, mggCutSR;
  
  if (category == "highpt")
    {
      categoryCutString = " && pTGammaGamma >= 110 ";
      mggCutSR = " && mGammaGamma > 122.04 && mGammaGamma < 128.96";
    }
  else if (category == "hbb")
    {
      categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.)<25";
      mggCutSR = " && mGammaGamma > 121.0 && mGammaGamma < 130.";
    }
  else if (category == "zbb")
    {
      categoryCutString = " && pTGammaGamma < 110 && abs(mbbZ-91.2)<25 ";
      mggCutSR = " && mGammaGamma > 121.0 && mGammaGamma < 130.0";
    }
  else if (category == "highres")
    {
      categoryCutString = " && pTGammaGamma < 110 && abs(mbbH-125.)>=25 && abs(mbbZ-91.2)>=25 && pho1sigmaEOverE < 0.015 && pho2sigmaEOverE < 0.015 ";
      mggCutSR = " && mGammaGamma > 122.04 && mGammaGamma < 128.96";
    }
  else if (category == "lowres")
    {
      categoryCutString = " && pTGammaGamma < 110  && abs(mbbH-125.)>=25 && abs(mbbZ-91.2)>=25 && !(pho1sigmaEOverE < 0.015 && pho2sigmaEOverE < 0.015) ";
      mggCutSR = " && mGammaGamma > 122.04 && mGammaGamma < 128.96";
    }
  else if (category == "inclusive")
    {
      categoryCutString = "";
      mggCutSR = " && mGammaGamma > 103.0 && mGammaGamma < 160.0";
    }
  
  int nprocess = 0;
  cut = cut + mggInclusiveCut + categoryCutString;
  TString cutSR = cut + mggCutSR + categoryCutString;
  std::cout << "[INFO]: cut applied-> " << cut << std::endl;

  //-------------------
  //Filling Rsq binning
  //-------------------
  stripesBins.push_back(RSQedges0);
  stripesBins.push_back(RSQedges1);
  stripesBins.push_back(RSQedges2);
  stripesBins.push_back(RSQedges3);

  //processstruct map
  std::map<TString, ProcessStruct> psMap;
  for ( auto& tmp : pMap )
    {
      f = new TFile( tmp.second, "READ");
      assert( f );
      tree = (TTree*)f->Get("HggRazor");
      TFile* dummy = new TFile( "dummyFile.root", "RECREATE");
      if ( tmp.first == "NonRes" )
	{
	  histoInc[nprocess] = new TH2F( *Create2DHisto( tree->CopyTree( cut ), MRedges, 0.01, tmp.first, lumi, nonRes_kfactor ) );
	  histoSR[nprocess]  = new TH2F( *Create2DHisto( tree->CopyTree( cutSR ), MRedges, 0.01, tmp.first+"_SR", lumi, nonRes_kfactor ) );
	}
      else
	{
	  histoInc[nprocess] = new TH2F( *Create2DHisto( tree->CopyTree( cut ), MRedges, 0.01, tmp.first , lumi ) );
	  histoSR[nprocess]  = new TH2F( *Create2DHisto( tree->CopyTree( cutSR ), MRedges, 0.01, tmp.first+"_SR", lumi ) );
	}
      ProcessStruct myps;
      myps.h_inc = histoInc[nprocess];
      myps.h_sr  = histoSR[nprocess];
      if ( psMap.find( tmp.first ) == psMap.end() ) psMap[tmp.first] = myps;
      nprocess++;
      delete f;
    }

  CreateDataCard( psMap, MRedges, stripesBins, 0.05 );
  
  fout->cd();
  histoInc[0]->Write("p0_razor");
  histoInc[1]->Write("p1_razor");

  histoSR[0]->Write("p0_razor_sr");
  histoSR[1]->Write("p1_razor_sr");
  
  
  fout->Close();
  std::cout << "[INFO]: finishing... " << std::endl;
  return 0;	
}
