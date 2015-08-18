//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
//LOCAL INCLUDES
#include "RunTwoFitMgg.hh"
#include "CommandLineInput.hh"

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
      std::cerr << "[ERROR]: please provide the category. Use --category=<data/mc>" << std::endl;
      return -1;
    }
  
  std::string outputfilename = ParseCommandLine( argc, argv, "-outputfile=" );

  std::cout << "[INFO]: tree name is :" << treeName << std::endl;
  std::cout << "[INFO]: data/mc mode :" << dataMode << std::endl;
  std::cout << "[INFO]: category mode :" << categoryMode << std::endl;
  std::cout << "[INFO]: outputfile :" << outputfilename << std::endl;



  
  TFile* f;
  TTree* tree;
  if ( dataMode == "data" )
    {
      f = new TFile( inputFile.c_str() , "READ");
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
  if ( dataMode == "data" )
    {
      w = MakeSideBandFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
      cut = "ptgg > 20 && abs(pho1_eta) < 1.48 && abs(pho2_eta) < 1.48 && (pho1_pt>40 || pho2_pt>40) && pho1_pt > 25 && pho2_pt > 25 && pho1_pass_id == 1 && pho1_pass_iso == 1 && pho2_pass_id == 1 && pho2_pass_iso == 1 && mgg > 100 && mgg < 400." + categoryCutString + BinCutString;
      MakePlot( tree->CopyTree( cut ),  *w, "sideband_fitpdf_dExp_N1N2", mggName );
      GetIntegral( *w, "sideband_fitpdf_dExp_N1N2", mggName );
    }
  else if ( dataMode == "mc" )
    {
      w = MakeSideBandFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
    }
  else if ( dataMode == "hybrid" && inputFile2 != "" )
    {
      w = MakeSideBandFit( tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
      w2 = MakeSideBandFit( mc_tree->CopyTree( cut ), forceSigma, constrainMu, forceMu, mggName );
    }
  else
    {
      std::cout << "[ERROR]: please provide a valid dataMode, i.e data or mc" << std::endl;
      return -1;
    }

  TFile* fout = 0;
  if (outputfilename == "") {
    fout = new TFile( "test_out.root", "recreate" );
  } else {
    fout = new TFile( outputfilename.c_str(), "recreate" );
  }
  w->Write("w1");
  fout->Close();
    
  return 0;	
}
