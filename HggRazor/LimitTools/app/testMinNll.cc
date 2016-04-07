#include <assert.h>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TROOT.h>
#include <TRandom3.h>
//LOCAL INCLUDES
#include "AssortedFunctions.hh"
#include "CommandLineInput.hh"

int main( int argc, char* argv[] )
{
  gROOT->Reset();
  const int n = 2;
  double b_nr[n]  = {100, 50};//non-resonant bkg
  double b_smh[n] = {10, 10};//smh bkg
  
  
  double b[n];
  double s[n] = {10, 20};//signal is fixed
  double obs[n];

  TRandom3 r1(0);
  TRandom3 r2(0);
  TH1F* h_qnot = new TH1F("h_qnot", "h_qnot", 1000, 0, 10);
  for ( int i = 0; i < 10000; i ++ )
    {
      for ( int j = 0; j < n; j++ )
	{
	  b[j] = b_nr[j] + b_nr[j];
	  double bNonRes = r1.PoissonD( b_nr[j] );
	  double bSMH = r2.PoissonD( b_smh[j] );
	  obs[j] = bNonRes + bSMH;
	}
      double mu   = GetBestFitSignalStrength( n, b, s, obs );
      std::cout << "best mu: " << mu << std::endl;
      double qnot = GetQnotTestStatistics( n, b, s, obs, mu );
      h_qnot->Fill( qnot );
    }
  
  TFile* fout = new TFile("test_qnot.root", "RECREATE");
  h_qnot->Write();
  fout->Close();
  
  return 0;
}
