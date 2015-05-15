//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "HggRazorClass.hh"
/*
int   HggRazorClass::n_mgg;
float HggRazorClass::mgg_l;
float HggRazorClass::mgg_h;

int   HggRazorClass::n_ptgg;
float HggRazorClass::ptgg_l;
float HggRazorClass::ptgg_h;
*/
HggRazorClass::HggRazorClass( )
{
};
HggRazorClass::HggRazorClass( TTree* tree ) : HggTree( tree ), _info( false ), _debug( true )
{
  std::cout << "[DEBUG]: n_mgg: " << n_mgg << std::endl;
  InitMggHisto();
  InitPtggHisto();
};

HggRazorClass::~HggRazorClass()
{
};

bool HggRazorClass::InitMggHisto( )
{
  if ( n_mgg == 0 || mgg_l == mgg_h )
    {
      std::cerr << "[ERROR]: mgg histogram parameters not initialized" << std::endl;
      return false;
    }
  std::cout << "[INFO]: Initializing mgg histogram" << std::endl;
  h_mgg = new TH1F( this->process_name + "_mgg", "mgg", n_mgg, mgg_l, mgg_h );
  return true;
};

bool HggRazorClass::InitPtggHisto( )
{
  if ( n_ptgg == 0 || ptgg_l == ptgg_h )
    {
      std::cerr << "[ERROR]: ptgg histogram parameters not initialized" << std::endl;
      return false;
    }
  h_ptgg = new TH1F( this->process_name + "_ptgg", "ptgg", n_ptgg, ptgg_l, ptgg_h );
  return true;
};

void HggRazorClass::Loop()
{
  std::cout << "n3: " << fChain->GetEntriesFast() << std::endl;
  if (fChain == 0) return;
  if ( h_mgg == NULL || h_ptgg == NULL )
    {
      std::cerr << "[ERROR]: Histograms are nor initialized" << std::endl;
      return;
    }
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry < nentries; jentry++ )
    {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      h_mgg->Fill( mGammaGamma );
      h_ptgg->Fill( pTGammaGamma );
      std::cout << "mgg: " << mGammaGamma << std::endl;
    }
};

bool HggRazorClass::WriteOutput()
{
  this->fout = new TFile("test_tth.root", "recreate");
  h_mgg->Write("mgg");
  h_ptgg->Write("ptgg");
  fout->Close();
  return true;
};
