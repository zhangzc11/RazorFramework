#ifndef HGG_RAZOR_CLASS_HH
#define HGG_RAZOR_CLASS_HH
//C++ INCLUDES
#include <iostream>
#include <string>
//ROOT INCLUDES
#include <TH1F.h>
#include <TString.h>
//LOCAL INCLUDES
#include "HggTree.hh"
class HggRazorClass : public HggTree
{
public:
  HggRazorClass( );
  HggRazorClass( TTree* tree );
  ~HggRazorClass( );
  bool InitMggHisto( );
  bool InitPtggHisto( );
private:
  TString process_name;
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
};

#endif
