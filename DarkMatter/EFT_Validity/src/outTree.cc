#define outTree_cxx
#include "outTree.hh"
//ROOT INCLUDES
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
//C++ INCLUDES
#include <math.h>

TH1F* outTree::Loop()
{
  TH1F* h_Qtr = new TH1F( "h_Qtr", "h_Qtr", 100, 0.0, 5000. );
  
  if (fChain == 0) return NULL;
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    TLorentzVector j1, j2;
    j1.SetPtEtaPhiE(pTHem1, etaHem1, phiHem1, pTHem1*cosh(etaHem1));//Hemisphere
    j2.SetPtEtaPhiE(pTHem2, etaHem2, phiHem2, pTHem2*cosh(etaHem2));//Hemisphere
    double Dphi = j1.DeltaPhi(j2);
    
    if ( fabs( Dphi ) < 2.5 && MR[2] > 200.0 && RSQ[2] > 0.5 && nBtag == 0 )
      {
	h_Qtr->Fill( Qtr );
      }
  }//end tree loop

  return h_Qtr;
}
