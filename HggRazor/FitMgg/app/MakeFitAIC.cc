//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TMath.h>
//LOCAL INCLUDES
#include "RunTwoFitMgg.hh"
#include "CommandLineInput.hh"
#include "PrintAIC.hh"

int main( int argc, char* argv[])
{
  std::string inputFile = ParseCommandLine( argc, argv, "-inputFile=" );
  if (  inputFile == "" )
    {
      std::cerr << "[ERROR]: please provide an input file using --inputFile=<path_to_file>" << std::endl;
      return -1;
    }

  std::string inputFile2 = ParseCommandLine( argc, argv, "-inputFile2=" );
  if (  inputFile2 == "" )
    {
      std::cerr << "[INFO]: using a single root file, provide an second input file using --inputFile2=<path_to_file>" << std::endl;
    }

  std::string treeName = ParseCommandLine( argc, argv, "-treeName=" );
  if (  treeName == "" )
    {
      std::cout << "[WARNING]: user did not provide a tree name, if you wish to provide one use --treeName=<yourTreeName>" << std::endl;
      treeName = "HighRes";
    }

  std::string MRcut = ParseCommandLine( argc, argv, "-MRcut=" );
  std::string RSQcut = ParseCommandLine( argc, argv, "-RSQcut=" );
  std::string BinSelection = ParseCommandLine( argc, argv, "-BinSelection=" );
  if (  BinSelection == "" && ( MRcut == "" || RSQcut == "" ) )
    {
      std::cout << "[WARNING]: user must provide either a BinSelection or an MR cut and Rsq cut. use --BinSelection=<yourBin> or --MRcut=<yourMRCut> --RSQcut=<yourRSQCut>" << std::endl;
      BinSelection = "0";
      MRcut = "";
      RSQcut = "";
    }


  std::string dataMode = ParseCommandLine( argc, argv, "-dataMode=" );
  if (  dataMode == "" )
    {
      std::cerr << "[ERROR]: please provide a data type, it could be either mc or data. Use --dataMode=<data/mc>" << std::endl;
      return -1;
    }
  
  std::string categoryMode = ParseCommandLine( argc, argv, "-category=" );
  if (  categoryMode == "" )
    {
      std::cerr << "[ERROR]: please provide the category. Use --category=<highpt,highres,lowres>" << std::endl;
      return -1;
    }

  std::string AIC = ParseCommandLine( argc, argv, "-AIC=" );
  if ( AIC == "" )
    {
      std::cerr << "[INFO]: AIC not provided. Use --category=<yes/no>. Using <no> in this execution" << std::endl;
    }
  
  std::string fitMode = ParseCommandLine( argc, argv, "-fitMode=" );
  if (  fitMode == "" )
    {
      std::cerr << "[ERROR]: please provide a fit mode, options are: sideband\nsb (signal+bkg)\nAIC" << std::endl;
      return -1;
    }
  
  std::string outputfilename = ParseCommandLine( argc, argv, "-outputfile=" );
  
  std::cout << "[INFO]: tree name is  :" << treeName << std::endl;
  std::cout << "[INFO]: data/mc mode  :" << dataMode << std::endl;
  std::cout << "[INFO]: category mode :" << categoryMode << std::endl;
  std::cout << "[INFO]: fit mode      :" << fitMode << std::endl;
  std::cout << "[INFO]: outputfile    :" << outputfilename << std::endl;
  
  TFile* f;
  TTree* tree;
  if ( dataMode == "data" )
    {
      //f = new TFile( inputFile.c_str() , "READ");
      f = new TFile( inputFile.c_str() , "UPDATE");
      tree = (TTree*)f->Get( treeName.c_str() );
    }
  else if ( dataMode == "mc" )
    {
      f = new TFile( inputFile.c_str() , "READ");
      tree = (TTree*)f->Get( treeName.c_str() );
    }
 
  TTree* mc_tree;
  if ( inputFile2 != "" )
    {
      f = new TFile( inputFile2.c_str(), "READ" );
      mc_tree = (TTree*)f->Get( treeName.c_str() );
    }
  
  //****************************************************
  //MR-Rsq Bin Cut String
  //****************************************************  
  TString BinCutString = "";
  if (  MRcut != "" || RSQcut != "" )
    {
      BinCutString = " && MR > " + MRcut + " && t1Rsq > " + RSQcut;
    }
  if (categoryMode == "highpt") {
    if (BinSelection == "0") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq < 0.05 ";
    if (BinSelection == "1") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "2") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.10 && t1Rsq < 0.15 ";
    if (BinSelection == "3") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.15 && t1Rsq < 0.20 ";
    if (BinSelection == "4") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.20 ";
    if (BinSelection == "5") BinCutString = " && MR > 200 && MR <= 300 && t1Rsq < 0.05";
    if (BinSelection == "6") BinCutString = " && MR > 200 && MR <= 300 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "7") BinCutString = " && MR > 200 && MR <= 300 && t1Rsq >= 0.10 && t1Rsq < 0.15 ";
    if (BinSelection == "8") BinCutString = " && MR > 200 && MR <= 300 && t1Rsq >= 0.15 ";
    if (BinSelection == "9") BinCutString = " && MR > 300 && MR <= 500 && t1Rsq < 0.05";
    if (BinSelection == "10") BinCutString = " && MR > 300 && MR <= 500 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "11") BinCutString = " && MR > 300 && MR <= 500 && t1Rsq >= 0.10 ";
    if (BinSelection == "12") BinCutString = " && MR > 500 && MR <= 1600 && t1Rsq < 0.05";
    if (BinSelection == "13") BinCutString = " && MR > 500 && MR <= 1600 && t1Rsq >= 0.05 ";
    if (BinSelection == "14") BinCutString = " && MR > 1600  ";
  }
  if (categoryMode == "hbb") {
    if (BinSelection == "0") BinCutString = " && MR > 150 && MR <= 300 && t1Rsq < 0.05 ";
    if (BinSelection == "1") BinCutString = " && MR > 150 && MR <= 300 && t1Rsq >= 0.05 ";
    if (BinSelection == "2") BinCutString = " && MR > 300 && MR <= 3000 ";
  }
  if (categoryMode == "zbb") {
    if (BinSelection == "0") BinCutString = " && MR > 150 && MR <= 450 && t1Rsq < 0.05 ";
    if (BinSelection == "1") BinCutString = " && MR > 150 && MR <= 450 && t1Rsq >= 0.05 ";
    if (BinSelection == "2") BinCutString = " && MR > 450 && MR <= 3000 ";
  }
  if (categoryMode == "highres") {
    if (BinSelection == "0") BinCutString = " && MR > 150 && MR <= 250 && t1Rsq < 0.05 ";
    if (BinSelection == "1") BinCutString = " && MR > 150 && MR <= 250 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "2") BinCutString = " && MR > 150 && MR <= 250 && t1Rsq >= 0.10 && t1Rsq < 0.15 ";
    if (BinSelection == "3") BinCutString = " && MR > 150 && MR <= 250 && t1Rsq >= 0.15 ";
    if (BinSelection == "4") BinCutString = " && MR > 250 && MR <= 400 && t1Rsq < 0.05";
    if (BinSelection == "5") BinCutString = " && MR > 250 && MR <= 400 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "6") BinCutString = " && MR > 250 && MR <= 400 && t1Rsq >= 0.10 ";
    if (BinSelection == "7") BinCutString = " && MR > 400 && MR <= 1400 && t1Rsq < 0.05";
    if (BinSelection == "8") BinCutString = " && MR > 400 && MR <= 1400 && t1Rsq >= 0.05  ";
    if (BinSelection == "9") BinCutString = " && MR > 1400 ";
  }
  if (categoryMode == "lowres") {
    if (BinSelection == "0") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq < 0.05 ";
    if (BinSelection == "1") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "2") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.10 && t1Rsq < 0.15 ";
    if (BinSelection == "3") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.15 && t1Rsq < 0.20 ";
    if (BinSelection == "4") BinCutString = " && MR > 150 && MR <= 200 && t1Rsq >= 0.20 ";
    if (BinSelection == "5") BinCutString = " && MR > 200 && MR <= 250 && t1Rsq < 0.05";
    if (BinSelection == "6") BinCutString = " && MR > 200 && MR <= 250 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "7") BinCutString = " && MR > 200 && MR <= 250 && t1Rsq >= 0.10 && t1Rsq < 0.15 ";
    if (BinSelection == "8") BinCutString = " && MR > 200 && MR <= 250 && t1Rsq >= 0.15 ";
    if (BinSelection == "9") BinCutString = " && MR > 250 && MR <= 400 && t1Rsq < 0.05";
    if (BinSelection == "10") BinCutString = " && MR > 250 && MR <= 400 && t1Rsq >= 0.05 && t1Rsq < 0.10 ";
    if (BinSelection == "11") BinCutString = " && MR > 250 && MR <= 400 && t1Rsq >= 0.10 ";
    if (BinSelection == "12") BinCutString = " && MR > 400 && MR <= 1200 && t1Rsq < 0.05";
    if (BinSelection == "13") BinCutString = " && MR > 400 && MR <= 1200 && t1Rsq >= 0.05 ";
    if (BinSelection == "14") BinCutString = " && MR > 1200  ";
  }
 

  //****************************************************
  //Category Cut String
  //****************************************************  
  TString categoryCutString = "";
  if (categoryMode == "highpt") categoryCutString = " && ptgg >= 110 ";
  else if (categoryMode == "hbb") categoryCutString = " && ptgg < 110 && abs(mbb-125)<25";
  else if (categoryMode == "zbb") categoryCutString = " && ptgg < 110 && abs(mbb-91.2)<25 ";
  else if (categoryMode == "highres") categoryCutString = " && ptgg < 110 && abs(mbb-125)>=25 && abs(mbb-91.2)>=25 && pho1_sigEoE < 0.015 && pho2_sigEoE < 0.015 ";
  else if (categoryMode == "lowres") categoryCutString = " && ptgg < 110  && abs(mbb-125)>=25 && abs(mbb-91.2)>=25 && !(pho1_sigEoE < 0.015 && pho2_sigEoE < 0.015) ";
  
  TString cut = "abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.&& mGammaGamma > 103. && mGammaGamma<160 && pTGammaGamma > 20 && trigger == 1 && pho1R9>0.9 && pho2R9>0.9 && pTGammaGamma < 110.";
  if ( treeName == "SusyHggTree" )
    {
      cut = "ptgg > 20 && abs(pho1_eta) < 1.48 && abs(pho2_eta) < 1.48 && (pho1_pt>40 || pho2_pt>40) && pho1_pt > 25 && pho2_pt > 25 && pho1_pass_id == 1 && pho1_pass_iso == 1 && pho2_pass_id == 1 && pho2_pass_iso == 1 && mgg > 103 && mgg < 160" + categoryCutString + BinCutString;
    }
  
  float forceSigma = 1.5;
  bool constrainMu = false;
  float forceMu    = -1;
  TString mggName  = "mgg";
  RooWorkspace* w;
  RooWorkspace* w2;

  //---
  //AIC
  //---
  RooWorkspace* w_aic[7];
  double aic[7];
  std::map< std::string, double > aic_map;
  //--------------------
  //D e f i n e  c u t s
  //--------------------
  cut = "ptgg > 20 && abs(pho1_eta) < 1.48 && abs(pho2_eta) < 1.48 && (pho1_pt>40 || pho2_pt>40) && pho1_pt > 25 && pho2_pt > 25 && pho1_pass_id == 1 && pho1_pass_iso == 1 && pho2_pass_id == 1 && pho2_pass_iso == 1 && mgg > 103 && mgg < 160." + categoryCutString + BinCutString;
  std::cout << "[INFO]: cut -> " << cut << std::endl;
  
  if ( fitMode == "sideband" )
    {
      w = MakeSideBandFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
      MakePlot( tree->CopyTree( cut ),  *w, "sideband_fitpdf_dExp_N1N2", mggName );
      GetIntegral( *w, "sideband_fitpdf_dExp_N1N2", mggName );
    }
  else if ( fitMode == "sb" )
    {
      w = MakeSignalBkgFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
    }
  else if ( fitMode == "AIC" )
    {
      w_aic[0] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[0], "doubleExp" );
      if( aic_map.find("doubleExp") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("doubleExp",aic[0]));
      w_aic[1] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[1], "singleExp" );
      if( aic_map.find("singleExp") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("singleExp",aic[1]));
      w_aic[2] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[2], "singlePow" );
      if( aic_map.find("singlePow") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("singlePow",aic[2]));
      w_aic[3] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[3], "doublePow" );
      if( aic_map.find("doublePow") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("doublePow",aic[3]));
      w_aic[4] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[4], "poly2" );
      if( aic_map.find("poly2") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("poly2",aic[4]));
      w_aic[5] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[5], "poly3" );
      if( aic_map.find("poly3") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("poly3",aic[5]));
      w_aic[6] = MakeSideBandFitAIC( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName, aic[6], "modExp" );
      if( aic_map.find("modExp") == aic_map.end() ) aic_map.insert( std::pair<std::string, double>("modExp",aic[6]));
    }
  else
    {
      std::cout << "[ERROR]: please provide a valid fitMode!!" << std::endl;
      return -1;
    }

  TFile* fout = 0;
  if (outputfilename == "") {
    fout = new TFile( "test_out.root", "recreate" );
  } else {
    fout = new TFile( outputfilename.c_str(), "recreate" );
  }
  //w->Write("w1");
  //w2->Write("w2");
  if ( fitMode == "AIC" )
    {
      w_aic[0]->Write("w3");
      w_aic[1]->Write("w4");
      w_aic[2]->Write("w5");
      w_aic[3]->Write("w6");
      w_aic[4]->Write("w7");
      w_aic[5]->Write("w8");
      w_aic[6]->Write("w9");
      std::cout.precision(10);
      double min_aic = 99999999;
      std::string func_min = "";
      std::cout << "MIN AIC->" << min_aic << std::endl;
      for ( auto tmp : aic_map )
	{
	  if (  tmp.second < min_aic )
	    {
	      min_aic  = tmp.second;
	      func_min = tmp.first;
	    }
	}
      std::cout << "MIN AIC function is: " << func_min << " AICc is: " << aic_map[func_min] << std::endl;
      //------------------------------
      //c o m p u t e   d e l t a  AIC
      //------------------------------
      std::map<std::string, double> delta_aic_map;
      double sumweights = 0.0;
      for ( auto tmp : aic_map )
	{
	  delta_aic_map[tmp.first] = tmp.second - min_aic;
	  sumweights += TMath::Exp( -0.5*delta_aic_map[tmp.first] ); 
	  //std::cout << tmp.first << " deltaAICc: " << delta_aic_map[tmp.first] << std::endl;
	}
      //------------------------------
      //c o m p u t e   AIC  weights
      //------------------------------
      std::map<std::string, double> aic_weight_map;
      for ( auto tmp : delta_aic_map )
	{
	  aic_weight_map[tmp.first] = TMath::Exp( -0.5*delta_aic_map[tmp.first] )/sumweights;
	  std::cout << tmp.first << " AICc Weights: " << aic_weight_map[tmp.first] << std::endl;
	}

     PrintAICTable(MRcut, RSQcut,delta_aic_map,aic_weight_map);

    }
  
  fout->Close();
    
  return 0;	
}


