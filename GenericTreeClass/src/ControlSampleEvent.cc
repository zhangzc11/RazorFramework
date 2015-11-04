#define ControlSampleEvent_cxx
#include "ControlSampleEvent.hh"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

void ControlSampleEvent::Loop()
{
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    std::cout << "MR-> " << GetVarVal<float>("lep1Type") << std::endl;
    // if (Cut(ientry) < 0) continue;
  }
};
