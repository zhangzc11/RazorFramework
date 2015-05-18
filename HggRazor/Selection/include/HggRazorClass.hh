#ifndef HGG_RAZOR_CLASS_HH
#define HGG_RAZOR_CLASS_HH
//C++ INCLUDES
#include <iostream>
#include <string>
//ROOT INCLUDES
#include <TH1F.h>
#include <TH2F.h>
#include <TString.h>
//LOCAL INCLUDES
#include "HggTree.hh"

class HggRazorClass : public HggTree
{
public:
  HggRazorClass( );
  HggRazorClass( TTree* tree );
  HggRazorClass( TTree* tree, TString processName, TString boxName, bool info = false, bool debug = false );
  ~HggRazorClass( );
  bool InitMggHisto( );
  bool InitPtggHisto( );
  bool InitMrHisto( );
  bool InitRsqHisto( );
  bool InitMrRsqHisto( );
  void Loop();
  bool WriteOutput( TString outName = "default" );
  static float GetHggBF( );
private:

  static constexpr float hggBF = 2.28e-3;
  
  bool _debug;
  bool _info;
  TString processName;
  TString boxName;
  // D e f i n e   B i n n i n g
  //----------------------------
  static int   n_mgg;
  static float mgg_l;
  static float mgg_h;
  TH1F* h_mgg;
  
  static int   n_ptgg;
  static float ptgg_l;
  static float ptgg_h;
  TH1F* h_ptgg;

  static int   n_mr;
  static float mr_l;
  static float mr_h;
  TH1F* h_mr;

  static int   n_rsq;
  static float rsq_l;
  static float rsq_h;
  TH1F* h_rsq;

  //2D Histos
  TH2F* h_mr_rsq;
  TH2F* h_mr_rsq_c;//custom binning
  // o u t p u t  r o o t  f i l e
  //------------------------------
  TFile* fout;
};

#endif
