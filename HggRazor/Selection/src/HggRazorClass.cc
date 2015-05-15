//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "HggRazorClass.hh"

int   HggRazorClass::n_mgg;
float HggRazorClass::mgg_l;
float HggRazorClass::mgg_h;

int   HggRazorClass::n_ptgg;
float HggRazorClass::ptgg_l;
float HggRazorClass::ptgg_h;

bool HggRazorClass::InitMggHisto( )
{
  if ( n_mgg != 0 && mgg_l != mgg_h )
    {
      std::cerr << "[ERROR]: mgg histogram parameters not initialized" << std::endl;
      return false;
    }
  h_mgg = new TH1F( this->process_name + "_mgg", "mgg", n_mgg, mgg_l, mgg_h );
  return true;
};

bool HggRazorClass::InitPtggHisto( )
{
  if ( n_ptgg != 0 && ptgg_l != ptgg_h )
    {
      std::cerr << "[ERROR]: ptgg histogram parameters not initialized" << std::endl;
      return false;
    }
  h_ptgg = new TH1F( this->process_name + "_ptgg", "ptgg", n_ptgg, ptgg_l, ptgg_h );
  return true;
};
