#ifndef GenericTreeClass_HH
#define GenericTreeClass_HH
//C++ INCLUDES
#include <iostream>
#include <string>
#include <map>
//ROOT INCLUDES
#include <TH1D.h>
#include <TH2F.h>
#include <TH2D.h>
#include <TString.h>
//LOCAL INCLUDES
#include "ControlSampleEvent.hh"
#include "GenericTreeClass.hh"
#include "BTagCalibrationStandalone.hh"

class GenericTreeClass : public ControlSampleEvent
{
public:
  
  GenericTreeClass( );
  GenericTreeClass( TTree* tree );
  GenericTreeClass( TTree* tree, TString processName, TString boxName, bool info = false, bool debug = false );
  ~GenericTreeClass( );
  
  void Loop();
  void CreateGenericHisto( TString histoName, TString varName, int nbins = 0, float x_low = 0, float x_high = 0 );
  void PrintStoredHistos();
  void CreateGenericHisto( TString histoName, TString varName, int nbins_x, float x_low, float x_high,
		      int nbins_y, float y_low, float y_high );
  void CreateGenericHisto( TString histoName, TString varName, int nbins_x, float* x_binning,
			   int nbins_y, float* y_binning );
  
  //Histo Maps
  std::map< std::pair<TString, TString>, TH1D* > map_1D_Histos;
  std::map< std::pair<TString, TString>, TH2D* > map_2D_Histos;
  
  //Helper Methods
  TString GetProcessName(){ return this->processName; };
  void SetPuHisto( TH1D* histo ){ this->puweightHist = new TH1D( *histo ); }
  void SetBtagEffHisto( TH2D* histo ){ this->btagEffHist = new TH2D( *histo ); }
  void SetBtagCalibrator( std::string );
  double GetBtagWeight();
  std::pair<TString, TString> SplitVarNames2D( TString varNames );
  
private:

  static constexpr float hggBF = 2.28e-3;
  
  bool _debug;
  bool _info;
  TString processName;
  TString boxName;
  
  TH1D* puweightHist;
  
  TH2D* btagEffHist;
  BTagCalibration calib;
  BTagCalibrationReader reader;
  BTagCalibrationReader reader_up;
  BTagCalibrationReader reader_do;
  
  //std::map<TString, TH2F*> map_2D_Histos;
  
};

#endif
