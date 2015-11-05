#ifndef GenericTreeClass_HH
#define GenericTreeClass_HH
//C++ INCLUDES
#include <iostream>
#include <string>
#include <map>
//ROOT INCLUDES
#include <TH1F.h>
#include <TH2F.h>
#include <TString.h>
//LOCAL INCLUDES
#include "ControlSampleEvent.hh"
#include "GenericTreeClass.hh"

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
  std::map< std::pair<TString, TString>, TH1F* > map_1D_Histos;
  
private:

  static constexpr float hggBF = 2.28e-3;
  
  bool _debug;
  bool _info;
  TString processName;
  TString boxName;
  
  std::map<TString, TH2F*> map_2D_Histos;
  
};

#endif
