//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jun 26 15:10:43 2015 by ROOT version 6.03/03
// from TTree LowRes/LowRes
// found on file: DataPhoton_MT2_HT_MggRes_SplitTreeGoodLumi.root
//////////////////////////////////////////////////////////

#ifndef HggTree_h
#define HggTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class HggTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         weight;
   UInt_t          lumi;
   UInt_t          run;
   UInt_t          event;
   Bool_t          trigger;
   Int_t           nLooseBTaggedJets;
   Int_t           nMediumBTaggedJets;
   Int_t           nLooseMuons;
   Int_t           nTightMuons;
   Int_t           nLooseElectrons;
   Int_t           nTightElectrons;
   Int_t           nTightTaus;
   Float_t         HT;
   Float_t         MR;
   Float_t         MR_pho;
   Float_t         Rsq;
   Float_t         t1Rsq;
   Float_t         t1Rsq_pho;
   Float_t         MET;
   Float_t         phiMET;
   Float_t         t1MET;
   Float_t         phit1MET;
   Float_t         MT2;
   Int_t           nSelectedPhotons;
   Float_t         mGammaGamma;
   Float_t         mggRes;
   Float_t         pTGammaGamma;
   Float_t         etaGammaGamma;
   Float_t         phiGammaGamma;
   Float_t         mGammaGammaCorr;
   Float_t         pTGammaGammaCorr;
   Float_t         pho1E;
   Float_t         pho1Pt;
   Float_t         pho1ECorr;
   Float_t         pho1PtCorr;
   Float_t         pho1Eta;
   Float_t         pho1Phi;
   Float_t         pho1SigmaIetaIeta;
   Float_t         pho1R9;
   Float_t         pho1HoverE;
   Float_t         pho1sumChargedHadronPt;
   Float_t         pho1sumNeutralHadronEt;
   Float_t         pho1sumPhotonEt;
   Float_t         pho1sigmaEOverE;
   Bool_t          pho1passEleVeto;
   Bool_t          pho1passIso;
   Float_t         pho2E;
   Float_t         pho2Pt;
   Float_t         pho2ECorr;
   Float_t         pho2PtCorr;
   Float_t         pho2Eta;
   Float_t         pho2Phi;
   Float_t         pho2SigmaIetaIeta;
   Float_t         pho2R9;
   Float_t         pho2HoverE;
   Float_t         pho2sumChargedHadronPt;
   Float_t         pho2sumNeutralHadronEt;
   Float_t         pho2sumPhotonEt;
   Float_t         pho2sigmaEOverE;
   Bool_t          pho2passEleVeto;
   Bool_t          pho2passIso;
   Float_t         mbbZ;
   Float_t         mbbH;
   Int_t           n_Jets;
   Float_t         jet_E[8];   //[n_Jets]
   Float_t         jet_Pt[8];   //[n_Jets]
   Float_t         jet_Eta[8];   //[n_Jets]
   Float_t         jet_Phi[8];   //[n_Jets]
   Float_t         jet_CSV[8];   //[n_Jets]
   Int_t           jet_HighestCSVindex[8];   //[n_Jets]
   Float_t         mHJ[8];   //[n_Jets]
   Int_t           nMT;
   Float_t         MT[9];   //[nMT]
   Float_t         Mhb;
   Float_t         mHem1;
   Float_t         ptHem1;
   Float_t         etaHem1;
   Float_t         phiHem1;
   Int_t           n_JetsHem1;
   Int_t           jetIndexHem1[5];   //[n_JetsHem1]
   Float_t         mHem2;
   Float_t         ptHem2;
   Float_t         etaHem2;
   Float_t         phiHem2;
   Int_t           n_JetsHem2;
   Int_t           jetIndexHem2[6];   //[n_JetsHem2]
   Float_t         evtMass;
   Float_t         evtMT;
   Float_t         evtMTEnergy;
   Float_t         evtDphi;
   Float_t         xsecSF;
  
   // List of branches
   TBranch        *b_weight;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_trigger;   //!
   TBranch        *b_nLooseBTaggedJets;   //!
   TBranch        *b_nMediumBTaggedJets;   //!
   TBranch        *b_nLooseMuons;   //!
   TBranch        *b_nTightMuons;   //!
   TBranch        *b_nLooseElectrons;   //!
   TBranch        *b_nTightElectrons;   //!
   TBranch        *b_nTightTaus;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_MR;   //!
   TBranch        *b_MR_pho;   //!
   TBranch        *b_Rsq;   //!
   TBranch        *b_t1Rsq;   //!
   TBranch        *b_t1Rsq_pho;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_phiMET;   //!
   TBranch        *b_t1MET;   //!
   TBranch        *b_phit1MET;   //!
   TBranch        *b_MT2;   //!
   TBranch        *b_nSelectedPhotons;   //!
   TBranch        *b_mGammaGamma;   //!
   TBranch        *b_mggRes;   //!
   TBranch        *b_pTGammaGamma;   //!
   TBranch        *b_etaGammaGamma;   //!
   TBranch        *b_phiGammaGamma;   //!
   TBranch        *b_mGammaGammaCorr;   //!
   TBranch        *b_pTGammaGammaCorr;   //!
   TBranch        *b_pho1E;   //!
   TBranch        *b_pho1Pt;   //!
   TBranch        *b_pho1ECorr;   //!
   TBranch        *b_pho1PtCorr;   //!
   TBranch        *b_pho1Eta;   //!
   TBranch        *b_pho1Phi;   //!
   TBranch        *b_pho1SigmaIetaIeta;   //!
   TBranch        *b_pho1R9;   //!
   TBranch        *b_pho1HoverE;   //!
   TBranch        *b_pho1sumChargedHadronPt;   //!
   TBranch        *b_pho1sumNeutralHadronEt;   //!
   TBranch        *b_pho1sumPhotonEt;   //!
   TBranch        *b_pho1sigmaEOverE;   //!
   TBranch        *b_pho1passEleVeto;   //!
   TBranch        *b_pho1passIso;   //!
   TBranch        *b_pho2E;   //!
   TBranch        *b_pho2Pt;   //!
   TBranch        *b_pho2ECorr;   //!
   TBranch        *b_pho2PtCorr;   //!
   TBranch        *b_pho2Eta;   //!
   TBranch        *b_pho2Phi;   //!
   TBranch        *b_pho2SigmaIetaIeta;   //!
   TBranch        *b_pho2R9;   //!
   TBranch        *b_pho2HoverE;   //!
   TBranch        *b_pho2sumChargedHadronPt;   //!
   TBranch        *b_pho2sumNeutralHadronEt;   //!
   TBranch        *b_pho2sumPhotonEt;   //!
   TBranch        *b_pho2sigmaEOverE;   //!
   TBranch        *b_pho2passEleVeto;   //!
   TBranch        *b_pho2passIso;   //!
   TBranch        *b_mbbZ;   //!
   TBranch        *b_mbbH;   //!
   TBranch        *b_n_Jets;   //!
   TBranch        *b_jet_E;   //!
   TBranch        *b_jet_Pt;   //!
   TBranch        *b_jet_Eta;   //!
   TBranch        *b_jet_Phi;   //!
   TBranch        *b_jet_CSV;   //!
   TBranch        *b_jet_HighestCSVindex;   //!
   TBranch        *b_mHJ;   //!
   TBranch        *b_nMT;   //!
   TBranch        *b_MT;   //!
   TBranch        *b_Mhb;   //!
   TBranch        *b_mHem1;   //!
   TBranch        *b_ptHem1;   //!
   TBranch        *b_etaHem1;   //!
   TBranch        *b_phiHem1;   //!
   TBranch        *b_n_JetsHem1;   //!
   TBranch        *b_jetIndexHem1;   //!
   TBranch        *b_mHem2;   //!
   TBranch        *b_ptHem2;   //!
   TBranch        *b_etaHem2;   //!
   TBranch        *b_phiHem2;   //!
   TBranch        *b_n_JetsHem2;   //!
   TBranch        *b_jetIndexHem2;   //!
   TBranch        *b_evtMass;   //!
   TBranch        *b_evtMT;   //!
   TBranch        *b_evtMTEnergy;   //!
   TBranch        *b_evtDphi;   //!
   TBranch        *b_xsecSF;//!
  
   HggTree(TTree *tree=0);
   virtual ~HggTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef HggTree_cxx
HggTree::HggTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("DataPhoton_MT2_HT_MggRes_SplitTreeGoodLumi.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("DataPhoton_MT2_HT_MggRes_SplitTreeGoodLumi.root");
      }
      f->GetObject("LowRes",tree);

   }
   Init(tree);
}

HggTree::~HggTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t HggTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t HggTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void HggTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("trigger", &trigger, &b_trigger);
   fChain->SetBranchAddress("nLooseBTaggedJets", &nLooseBTaggedJets, &b_nLooseBTaggedJets);
   fChain->SetBranchAddress("nMediumBTaggedJets", &nMediumBTaggedJets, &b_nMediumBTaggedJets);
   fChain->SetBranchAddress("nLooseMuons", &nLooseMuons, &b_nLooseMuons);
   fChain->SetBranchAddress("nTightMuons", &nTightMuons, &b_nTightMuons);
   fChain->SetBranchAddress("nLooseElectrons", &nLooseElectrons, &b_nLooseElectrons);
   fChain->SetBranchAddress("nTightElectrons", &nTightElectrons, &b_nTightElectrons);
   fChain->SetBranchAddress("nTightTaus", &nTightTaus, &b_nTightTaus);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("MR", &MR, &b_MR);
   fChain->SetBranchAddress("MR_pho", &MR_pho, &b_MR_pho);
   fChain->SetBranchAddress("Rsq", &Rsq, &b_Rsq);
   fChain->SetBranchAddress("t1Rsq", &t1Rsq, &b_t1Rsq);
   fChain->SetBranchAddress("t1Rsq_pho", &t1Rsq_pho, &b_t1Rsq_pho);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("phiMET", &phiMET, &b_phiMET);
   fChain->SetBranchAddress("t1MET", &t1MET, &b_t1MET);
   fChain->SetBranchAddress("phit1MET", &phit1MET, &b_phit1MET);
   fChain->SetBranchAddress("MT2", &MT2, &b_MT2);
   fChain->SetBranchAddress("nSelectedPhotons", &nSelectedPhotons, &b_nSelectedPhotons);
   fChain->SetBranchAddress("mGammaGamma", &mGammaGamma, &b_mGammaGamma);
   fChain->SetBranchAddress("mggRes", &mggRes, &b_mggRes);
   fChain->SetBranchAddress("pTGammaGamma", &pTGammaGamma, &b_pTGammaGamma);
   fChain->SetBranchAddress("etaGammaGamma", &etaGammaGamma, &b_etaGammaGamma);
   fChain->SetBranchAddress("phiGammaGamma", &phiGammaGamma, &b_phiGammaGamma);
   fChain->SetBranchAddress("mGammaGammaCorr", &mGammaGammaCorr, &b_mGammaGammaCorr);
   fChain->SetBranchAddress("pTGammaGammaCorr", &pTGammaGammaCorr, &b_pTGammaGammaCorr);
   fChain->SetBranchAddress("pho1E", &pho1E, &b_pho1E);
   fChain->SetBranchAddress("pho1Pt", &pho1Pt, &b_pho1Pt);
   fChain->SetBranchAddress("pho1ECorr", &pho1ECorr, &b_pho1ECorr);
   fChain->SetBranchAddress("pho1PtCorr", &pho1PtCorr, &b_pho1PtCorr);
   fChain->SetBranchAddress("pho1Eta", &pho1Eta, &b_pho1Eta);
   fChain->SetBranchAddress("pho1Phi", &pho1Phi, &b_pho1Phi);
   fChain->SetBranchAddress("pho1SigmaIetaIeta", &pho1SigmaIetaIeta, &b_pho1SigmaIetaIeta);
   fChain->SetBranchAddress("pho1R9", &pho1R9, &b_pho1R9);
   fChain->SetBranchAddress("pho1HoverE", &pho1HoverE, &b_pho1HoverE);
   fChain->SetBranchAddress("pho1sumChargedHadronPt", &pho1sumChargedHadronPt, &b_pho1sumChargedHadronPt);
   fChain->SetBranchAddress("pho1sumNeutralHadronEt", &pho1sumNeutralHadronEt, &b_pho1sumNeutralHadronEt);
   fChain->SetBranchAddress("pho1sumPhotonEt", &pho1sumPhotonEt, &b_pho1sumPhotonEt);
   fChain->SetBranchAddress("pho1sigmaEOverE", &pho1sigmaEOverE, &b_pho1sigmaEOverE);
   fChain->SetBranchAddress("pho1passEleVeto", &pho1passEleVeto, &b_pho1passEleVeto);
   fChain->SetBranchAddress("pho1passIso", &pho1passIso, &b_pho1passIso);
   fChain->SetBranchAddress("pho2E", &pho2E, &b_pho2E);
   fChain->SetBranchAddress("pho2Pt", &pho2Pt, &b_pho2Pt);
   fChain->SetBranchAddress("pho2ECorr", &pho2ECorr, &b_pho2ECorr);
   fChain->SetBranchAddress("pho2PtCorr", &pho2PtCorr, &b_pho2PtCorr);
   fChain->SetBranchAddress("pho2Eta", &pho2Eta, &b_pho2Eta);
   fChain->SetBranchAddress("pho2Phi", &pho2Phi, &b_pho2Phi);
   fChain->SetBranchAddress("pho2SigmaIetaIeta", &pho2SigmaIetaIeta, &b_pho2SigmaIetaIeta);
   fChain->SetBranchAddress("pho2R9", &pho2R9, &b_pho2R9);
   fChain->SetBranchAddress("pho2HoverE", &pho2HoverE, &b_pho2HoverE);
   fChain->SetBranchAddress("pho2sumChargedHadronPt", &pho2sumChargedHadronPt, &b_pho2sumChargedHadronPt);
   fChain->SetBranchAddress("pho2sumNeutralHadronEt", &pho2sumNeutralHadronEt, &b_pho2sumNeutralHadronEt);
   fChain->SetBranchAddress("pho2sumPhotonEt", &pho2sumPhotonEt, &b_pho2sumPhotonEt);
   fChain->SetBranchAddress("pho2sigmaEOverE", &pho2sigmaEOverE, &b_pho2sigmaEOverE);
   fChain->SetBranchAddress("pho2passEleVeto", &pho2passEleVeto, &b_pho2passEleVeto);
   fChain->SetBranchAddress("pho2passIso", &pho2passIso, &b_pho2passIso);
   fChain->SetBranchAddress("mbbZ", &mbbZ, &b_mbbZ);
   fChain->SetBranchAddress("mbbH", &mbbH, &b_mbbH);
   fChain->SetBranchAddress("n_Jets", &n_Jets, &b_n_Jets);
   fChain->SetBranchAddress("jet_E", jet_E, &b_jet_E);
   fChain->SetBranchAddress("jet_Pt", jet_Pt, &b_jet_Pt);
   fChain->SetBranchAddress("jet_Eta", jet_Eta, &b_jet_Eta);
   fChain->SetBranchAddress("jet_Phi", jet_Phi, &b_jet_Phi);
   fChain->SetBranchAddress("jet_CSV", jet_CSV, &b_jet_CSV);
   fChain->SetBranchAddress("jet_HighestCSVindex", jet_HighestCSVindex, &b_jet_HighestCSVindex);
   fChain->SetBranchAddress("mHJ", mHJ, &b_mHJ);
   fChain->SetBranchAddress("nMT", &nMT, &b_nMT);
   fChain->SetBranchAddress("MT", MT, &b_MT);
   fChain->SetBranchAddress("Mhb", &Mhb, &b_Mhb);
   fChain->SetBranchAddress("mHem1", &mHem1, &b_mHem1);
   fChain->SetBranchAddress("ptHem1", &ptHem1, &b_ptHem1);
   fChain->SetBranchAddress("etaHem1", &etaHem1, &b_etaHem1);
   fChain->SetBranchAddress("phiHem1", &phiHem1, &b_phiHem1);
   fChain->SetBranchAddress("n_JetsHem1", &n_JetsHem1, &b_n_JetsHem1);
   fChain->SetBranchAddress("jetIndexHem1", jetIndexHem1, &b_jetIndexHem1);
   fChain->SetBranchAddress("mHem2", &mHem2, &b_mHem2);
   fChain->SetBranchAddress("ptHem2", &ptHem2, &b_ptHem2);
   fChain->SetBranchAddress("etaHem2", &etaHem2, &b_etaHem2);
   fChain->SetBranchAddress("phiHem2", &phiHem2, &b_phiHem2);
   fChain->SetBranchAddress("n_JetsHem2", &n_JetsHem2, &b_n_JetsHem2);
   fChain->SetBranchAddress("jetIndexHem2", jetIndexHem2, &b_jetIndexHem2);
   fChain->SetBranchAddress("evtMass", &evtMass, &b_evtMass);
   fChain->SetBranchAddress("evtMT", &evtMT, &b_evtMT);
   fChain->SetBranchAddress("evtMTEnergy", &evtMTEnergy, &b_evtMTEnergy);
   fChain->SetBranchAddress("evtDphi", &evtDphi, &b_evtDphi);
   fChain->SetBranchAddress("xsecSF", &xsecSF, &b_xsecSF);
   Notify();
}

Bool_t HggTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void HggTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t HggTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef HggTree_cxx
