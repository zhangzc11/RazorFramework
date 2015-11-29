//C++ INCLUDES
#include <iostream>
#include <math.h>
#include <sstream>
//ROOT INCLUDES
#include <TRandom3.h>
//LOCAL INCLUDES
#include "GenericTreeClass.hh"

GenericTreeClass::GenericTreeClass( ){ };

GenericTreeClass::GenericTreeClass( TTree* tree ) : ControlSampleEvent( tree ), _info( false ), _debug( false )
{
  std::cout << "[DEBUG]: info: " << _info << " debug" << _debug <<  std::endl;
};

GenericTreeClass::GenericTreeClass( TTree* tree, TString processName, TString boxName, bool info, bool debug ) : ControlSampleEvent( tree ), _info( info ), _debug( debug )
{
  //processName
  if ( processName == "" )
    {
      this->processName = "dummy_process";
    }
  else
    {
      this->processName = processName;
    }
  //boxName
  if ( boxName == "" )
    {
      this->boxName = "dummy_box";
    }
  else
    {
      this->boxName = boxName;
    }
  
  this->calib = BTagCalibration("csvv2", "/afs/cern.ch/work/c/cpena/public/CMSSW_7_5_3_patch1/src/RazorFramework/Aux/data/CSVv2.csv");
  this->reader = BTagCalibrationReader(&calib,               // calibration instance
				       BTagEntry::OP_LOOSE,  // operating point
				       "mujets",               // measurement type
				       "central");           // systematics type
  this->reader_up = BTagCalibrationReader(&calib, BTagEntry::OP_LOOSE, "mujets", "up");  // sys up
  this->reader_do = BTagCalibrationReader(&calib, BTagEntry::OP_LOOSE, "mujets", "down");  // sys down
  
};

GenericTreeClass::~GenericTreeClass()
{
  if ( _debug ) std::cout << "[DEBUG]: Entering Destructor" << std::endl;
  if ( _debug ) std::cout << "[DEBUG]: Finishing Destructor" << std::endl;
};

void GenericTreeClass::CreateGenericHisto( TString histoName, TString varName, int nbins, float x_low, float x_high )
{
  //std::cout << "1D var: " << varName << std::endl;
  TH1D* _h = new TH1D( histoName+"_"+this->processName, histoName, nbins, x_low, x_high );
  std::pair<TString, TString> mypair = std::make_pair(histoName, varName);
  if ( map_1D_Histos.find( mypair ) == map_1D_Histos.end() )
    {
      map_1D_Histos[ mypair ] = _h;
    }
  else
    {
      std::cout << "[WARNING]: trying to create histo with variable already used, DO NOTHING" << std::endl;
    }
};

void GenericTreeClass::CreateGenericHisto( TString histoName, TString varName, int nbins_x, float* x_binning, int nbins_y, float* y_binning )
{
  TH2D* _h = new TH2D( histoName+"_"+this->processName, histoName, nbins_x, x_binning, nbins_y, y_binning );
  std::pair<TString, TString> mypair = std::make_pair(histoName, varName);
  //Filling 2d histo map
  if ( map_2D_Histos.find( mypair ) == map_2D_Histos.end() )
    {
      map_2D_Histos[ mypair ] = _h;
    }
  else
    {
      std::cout << "[WARNING]: trying to create histo with variable already used, DO NOTHING" << std::endl;
    }
};

std::pair<TString, TString> GenericTreeClass::SplitVarNames2D( TString varNames )
{
  std::stringstream mySS;
  mySS << varNames;
  std::string myS = mySS.str();
  int commaPlace = myS.find(",");
  std::string firstVar = myS.substr(0,commaPlace);
  std::string secondVar = myS.substr( commaPlace+1, myS.size() );
  TString firstTS = firstVar.c_str();
  TString secondTS = secondVar.c_str();
  std::pair<TString, TString> mypair = std::make_pair( firstTS, secondTS );
  return mypair;
};

void GenericTreeClass::PrintStoredHistos()
{
  std::cout << map_1D_Histos.size() << std::endl;
  for ( auto& tmp : map_1D_Histos ) std::cout << tmp.first.first << " nbins: " << tmp.second->GetNbinsX() << std::endl;
};

void GenericTreeClass::CreateGenericHisto( TString histoName, TString varName, int nbins_x, float x_low, float x_high,
				      int nbins_y, float y_low, float y_high )
{
  std::cout << "2D var: " << varName << std::endl;
};

void GenericTreeClass::Loop()
{
  std::cout << "loop begins" << std::endl; 
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  float tmp2;
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    if(jentry % 100000 == 0) std::cout << "Processing entry " << jentry<<std::endl;
    
    double puWeight = puweightHist->GetBinContent( puweightHist->GetXaxis()->FindFixBin( NPU_0 ) );
    if( this->processName == "data" && this->processName == "Data" && this->processName == "DATA" )
      {
	puWeight = 1.0;
	weight = 1.0;
      }
    //Filling 1D Histos
    for ( auto& tmp : map_1D_Histos )
      {
	float varVal= GetVarVal<float>(tmp.first.second);
	if ( varVal != -666. ) tmp.second->Fill( varVal, weight*puWeight );
      }
    //Filling 2D histos
    for ( auto& tmp : map_2D_Histos )
      {
	//std::cout << "2D VarNames: " << tmp.first.second << std::endl;
	std::pair<TString, TString> mypair = SplitVarNames2D( tmp.first.second );
	double var1 = GetVarVal<float>( mypair.first );
	double var2 = GetVarVal<float>( mypair.second );
	tmp.second->Fill( var1, var2, weight*puWeight );
      }
    // if (Cut(ientry) < 0) continue;
  }

  TRandom3 r(0);
  int h_number = r.Integer(10000);
  for ( auto& tmp : map_1D_Histos )
    {
      float varVal = GetVarVal<float>(tmp.first.second);
      std::cout << tmp.first.first << " ,varVal->" << varVal << std::endl;
      int _nbins = tmp.second->GetNbinsX();
      float _xlow = tmp.second->GetXaxis()->GetXmin();
      float _xhigh = tmp.second->GetXaxis()->GetXmax();
      if ( varVal == -666. )
	{
	  gDirectory->Clear(); 
	  //TString _histoName = Form( "tmp_%d", h_number );
	  //std::string _s_histoName = _histoName;
	  std::stringstream _histoName;
	  _histoName << "tmp_" << h_number;
	  //float tmp2 = lep1->Eta(); 
	  TString drawCommand = Form(" >> %s(%d, %f, %f)", _histoName.str().c_str(), _nbins, _xlow, _xhigh );
	  drawCommand = tmp.first.second + drawCommand;
	  std::cout << "drawCommand-> " << drawCommand << std::endl;
	  if( this->processName != "data" && this->processName != "Data" && this->processName != "DATA" )
	    {
	      fChain->Draw(drawCommand, "weight*(1)", "goff");
	    }
	  else
	    {
	      //data
	      std::cout << "Drawing" << std::endl;
	      fChain->Draw(drawCommand, "", "goff");
	    }
	  //fChain->Draw(drawCommand, "", "goff");
	  std::cout << "histName--> " << _histoName.str() << std::endl;
	  tmp.second = (TH1D*)gDirectory->Get(_histoName.str().c_str());
	  tmp.second->Draw();
	  tmp.second->SaveAs("artur.pdf");
	}
    }
  
  for ( auto& tmp : map_1D_Histos )
    {
      std::cout << tmp.first.second << " Yield: " << tmp.second->Integral() << std::endl;
    }
  
};

void GenericTreeClass::SetBtagCalibrator( std::string btagFile )
{
  this->calib = BTagCalibration("csvv2", btagFile);
  this->reader = BTagCalibrationReader(&calib,               // calibration instance
				       BTagEntry::OP_MEDIUM,  // operating point
				       "mujets",               // measurement type
				       "central");           // systematics type
  this->reader_up = BTagCalibrationReader(&calib, BTagEntry::OP_MEDIUM, "mujets", "up");  // sys up
  this->reader_do = BTagCalibrationReader(&calib, BTagEntry::OP_MEDIUM, "mujets", "down");  // sys down 

};

double GenericTreeClass::GetBtagWeight()
{
  
  if( this->processName != "data" && this->processName != "Data" && this->processName != "DATA" ) return 1.0;
  /*
  if ( abs(jetPartonFlavor[i]) == 5 && abs(jetEta[i]) < 2.4 && jetCorrPt > 40 )//NOTE: b-tags only go on 40 GeV jets (this may change)
    {
      double effMedium = btagMediumEfficiencyHist->GetBinContent(
								 btagMediumEfficiencyHist->GetXaxis()->FindFixBin(fmax(fmin(jetCorrPt,199.9),10.0)),
								 btagMediumEfficiencyHist->GetYaxis()->FindFixBin(fabs(jetEta[i])));
    }
  */
  return 1.0;
};
