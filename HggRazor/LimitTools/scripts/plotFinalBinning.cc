#include <iostream>
#include <assert.h>
//ROOT INCLUDES
#include <TFile.h>
#include <TH2F.h>
#include <TH2Poly.h>
#include <TAxis.h>
#include <TCanvas.h>

void plotFinalBinning( TString fname, TString category)
{
  TFile* f = new TFile( fname );
  assert( f );
  TH2Poly* h2p = (TH2Poly*)f->Get("h2p_bFull");

  h2p->SetStats( 0 );
  h2p->SetTitle("");
  h2p->SetYTitle("R^{2}");
  h2p->SetXTitle("M_{R} (GeV)");
  h2p->Draw("colz+text");

  return;
};
