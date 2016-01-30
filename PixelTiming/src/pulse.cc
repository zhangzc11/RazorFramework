#define pulse_cxx

//C++ INCLUDE
#include <iostream>
#include <map>
//LOCAL INCLUDES
#include "pulse.hh"
//ROOT INCLUDES
#include <TH2.h>
#include <TH1F.h>
#include <TF1.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLatex.h>

void pulse::Loop()
{
//   In a ROOT session, you can do:
//      root> .L pulse.C
//      root> pulse t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
  
  std::map<int, int> pixelMap;
  
  
  TCanvas* c = new TCanvas("canvas", "canvas", 640, 640);
  
  TH1F* chAmp[36];
  for ( int i = 0; i < 36; i++ )
    {
      TString hName = Form("histoAmp_%d", i);
      chAmp[i] = new TH1F(hName,hName, 100 , 0, 0.5);
    }
  
  TH1F* deltaT[32];
  for ( int i = 0; i < 32; i++ )
    {
      TString hName = Form("histodeltaT_%d", i);
      deltaT[i] = new TH1F(hName,hName, 20000 , -200, 200);
    }
  
  TH1F* deltaTGroup[4];
  for ( int i = 0; i < 4; i++ )
    {
      TString hName = Form("histodeltaT_Group_%d", i);
      deltaTGroup[i] = new TH1F(hName,hName, 20000 , -200, 200);
    }
  
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      for ( int i = 0; i < 36; i++)
	{
	  if ( amp[14] > 0.05 && amp[9] > 0.05 ) chAmp[i]->Fill(amp[i], 1.0);
	}

      for(int k = 0; k < 4; k++ )
	{
	  float timeGroup = 0;
	  for ( int i = 0; i < 7; i++ )
	    {
	      if ( amp[k*9 + (i+1)] > 0.05 ) timeGroup += gauspeak[k*9 + (i+1)]/7.;
	    }
	  
	  deltaTGroup[k]->Fill( timeGroup - gauspeak[k*9] );
	  for ( int i = 0; i < 8; i++ )
	    {
	      //std::cout << "index1: " << k*9 + (i+1) << " index photek" << k*9 << std::endl;
	      if ( amp[14] > 0.05 && amp[9] > 0.05 ) deltaT[k*8+i]->Fill( gauspeak[k*9 + (i+1)] - gauspeak[k*9], 1.0 );
	    }
	}
   }
   
   for ( int i = 0; i < 36; i++) 
     {
       TString hName = Form("histoAmp_%d", i);
       chAmp[i]->Draw();
       c->SetLogy();
       c->SaveAs(hName+".pdf");
     }

   for(int k = 0; k < 4; k++ )
     {
       TString hNameGroup = Form("histodeltaT_Group_%d", k);
       GausFit( deltaTGroup[k], hNameGroup );
       for ( int i = 0; i < 8; i++ )
	 {
	   TString hName = Form("histodeltaT_%d_%d", k*9 + (i+1), k*9 );
	   GausFit( deltaT[k*8+i], hName );
	 }
     }
   
}

double   pulse::GausFit( TH1F* h, TString hName )
{
  TCanvas* c = new TCanvas("canvas", "canvas", 640, 640);
  double dtimeMax = h->GetBinCenter( h->GetMaximumBin() );
  h->SetAxisRange( dtimeMax-1, dtimeMax+1);
  double rms = h->GetRMS();
  //std::cout << "max: "<< dtimeMax << " rms: " << rms << std::endl;
  float _tlow, _thigh;
  if ( rms < 0.1 ) 
    {
      _tlow  = dtimeMax - 2.*rms;
      _thigh = dtimeMax + 2.*rms;
    }
  else
    {
      _tlow  = dtimeMax - 0.5*rms;
      _thigh = dtimeMax + 0.5*rms;
    }
  TF1* gaus = new TF1("gaus", "gaus(0)", _tlow, _thigh );
  h->Fit(gaus, "R");
  h->Draw();
  double sigma = gaus->GetParameter(2);
  //std::cout << "sigma: " << sigma << std::endl;
  TString Sigma = Form("#sigma = %.2f (ps)", sigma*1000. );
  TLatex latex;
  latex.SetNDC();
  latex.SetTextAngle(0);
  latex.SetTextColor(kBlack);    
  latex.SetTextFont(42);
  latex.SetTextAlign(31); 
  latex.SetTextSize(0.04);    
  latex.DrawLatex( 0.4, 0.87, Sigma );
  
  h->SetAxisRange( dtimeMax-1, dtimeMax+1);
  c->SaveAs(hName+".pdf");
  delete c;
  return -1;
};
