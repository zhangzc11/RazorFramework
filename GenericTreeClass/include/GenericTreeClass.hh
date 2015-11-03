#ifndef GenericTreeClass_HH
#define GenericTreeClass_HH
//C++ INCLUDES
#include <iostream>
#include <string>
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

  CreateGenericHisto( TString histoName, TString varName, int nbins, float x_low, float x_high );
  CreateGenericHisto( TString histoName, TString varName, int nbins_x, float x_low, float x_high,
		      int nbins_y, float y_low, float y_high );
  
private:

  static constexpr float hggBF = 2.28e-3;
  
  bool _debug;
  bool _info;
  TString processName;
  TString boxName;
  std::map<TString, TH1F*> map_1D_Histos;
  std::map<TString, TH2F*> map_2D_Histos;
  
};

#endif
