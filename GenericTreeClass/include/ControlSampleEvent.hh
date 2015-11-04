//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov  2 15:30:53 2015 by ROOT version 6.03/03
// from TTree ControlSampleEvent/ControlSampleEvent
// found on file: RunTwoRazorControlRegions_DileptonFull_DileptonSkim_WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_1pb_weighted.root
//////////////////////////////////////////////////////////

#ifndef ControlSampleEvent_h
#define ControlSampleEvent_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TLorentzVector.h"

class ControlSampleEvent {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           option;
   Float_t         weight;
   UInt_t          run;
   UInt_t          lumi;
   UInt_t          event;
   UInt_t          NPU_0;
   UInt_t          NPV;
   Float_t         MR;
   Float_t         Rsq;
   Float_t         MET;
   UInt_t          NJets40;
   UInt_t          NJets80;
   UInt_t          NBJetsLoose;
   UInt_t          NBJetsMedium;
   UInt_t          NBJetsTight;
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_hcalLaserEventFilter;
   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_trackingFailureFilter;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_ecalLaserCorrFilter;
   Bool_t          Flag_trkPOGFilters;
   Bool_t          Flag_trkPOG_manystripclus53X;
   Bool_t          Flag_trkPOG_toomanystripclus53X;
   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
   Bool_t          Flag_METFilters;
   UInt_t          NPU_Minus1;
   UInt_t          NPU_Plus1;
   UInt_t          processID;
   Bool_t          HLTDecision[160];
   Int_t           genlep1Type;
   Int_t           lep1Type;
   Int_t           lep1MatchedGenLepIndex;
   Int_t           genlep2Type;
   Int_t           lep2Type;
   Int_t           lep2MatchedGenLepIndex;
   Bool_t          lep1PassVeto;
   Bool_t          lep1PassLoose;
   Bool_t          lep1PassTight;
   Bool_t          lep1PassVetoID;
   Bool_t          lep1PassLooseID;
   Bool_t          lep1PassTightID;
   Bool_t          lep1PassVetoIso;
   Bool_t          lep1PassLooseIso;
   Bool_t          lep1PassTightIso;
   Float_t         lep1MinDRToBJet;
   Float_t         lep1Activity;
   Bool_t          lep2PassVeto;
   Bool_t          lep2PassLoose;
   Bool_t          lep2PassTight;
   Bool_t          lep2PassVetoID;
   Bool_t          lep2PassLooseID;
   Bool_t          lep2PassTightID;
   Bool_t          lep2PassVetoIso;
   Bool_t          lep2PassLooseIso;
   Bool_t          lep2PassTightIso;
   Float_t         lep2MinDRToBJet;
   Float_t         lep2Activity;
   Bool_t          bjet1PassLoose;
   Bool_t          bjet1PassMedium;
   Bool_t          bjet1PassTight;
   Bool_t          bjet2PassLoose;
   Bool_t          bjet2PassMedium;
   Bool_t          bjet2PassTight;
   Bool_t          jet1PassCSVLoose;
   Bool_t          jet1PassCSVMedium;
   Bool_t          jet1PassCSVTight;
   Bool_t          jet2PassCSVLoose;
   Bool_t          jet2PassCSVMedium;
   Bool_t          jet2PassCSVTight;
   Float_t         lep1MT;
   Float_t         mll;
   Float_t         METPhi;
   Float_t         METnoHF;
   Float_t         METnoHFPhi;
   Float_t         METRaw;
   Float_t         METRawPhi;
   Float_t         dPhiRazor;
   Float_t         HT;
   Float_t         genZpt;
   Float_t         genZphi;
   TLorentzVector* genlep1;
   TLorentzVector* genlep2;
   TLorentzVector* lep1;
   TLorentzVector* lep2;
   TLorentzVector* bjet1;
   TLorentzVector* bjet2;
   TLorentzVector* jet1;
   TLorentzVector* jet2;

   // List of branches
   TBranch        *b_option;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_event;   //!
   TBranch        *b_NPU_0;   //!
   TBranch        *b_NPV;   //!
   TBranch        *b_MR;   //!
   TBranch        *b_Rsq;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_NJets40;   //!
   TBranch        *b_NJets80;   //!
   TBranch        *b_NBJetsLoose;   //!
   TBranch        *b_NBJetsMedium;   //!
   TBranch        *b_NBJetsTight;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_NPU_Minus1;   //!
   TBranch        *b_NPU_Plus1;   //!
   TBranch        *b_processID;   //!
   TBranch        *b_HLTDecision;   //!
   TBranch        *b_genlep1Type;   //!
   TBranch        *b_lep1Type;   //!
   TBranch        *b_lep1MatchedGenLepIndex;   //!
   TBranch        *b_genlep2Type;   //!
   TBranch        *b_lep2Type;   //!
   TBranch        *b_lep2MatchedGenLepIndex;   //!
   TBranch        *b_lep1PassVeto;   //!
   TBranch        *b_lep1PassLoose;   //!
   TBranch        *b_lep1PassTight;   //!
   TBranch        *b_lep1PassVetoID;   //!
   TBranch        *b_lep1PassLooseID;   //!
   TBranch        *b_lep1PassTightID;   //!
   TBranch        *b_lep1PassVetoIso;   //!
   TBranch        *b_lep1PassLooseIso;   //!
   TBranch        *b_lep1PassTightIso;   //!
   TBranch        *b_lep1MinDRToBJet;   //!
   TBranch        *b_lep1Activity;   //!
   TBranch        *b_lep2PassVeto;   //!
   TBranch        *b_lep2PassLoose;   //!
   TBranch        *b_lep2PassTight;   //!
   TBranch        *b_lep2PassVetoID;   //!
   TBranch        *b_lep2PassLooseID;   //!
   TBranch        *b_lep2PassTightID;   //!
   TBranch        *b_lep2PassVetoIso;   //!
   TBranch        *b_lep2PassLooseIso;   //!
   TBranch        *b_lep2PassTightIso;   //!
   TBranch        *b_lep2MinDRToBJet;   //!
   TBranch        *b_lep2Activity;   //!
   TBranch        *b_bjet1PassLoose;   //!
   TBranch        *b_bjet1PassMedium;   //!
   TBranch        *b_bjet1PassTight;   //!
   TBranch        *b_bjet2PassLoose;   //!
   TBranch        *b_bjet2PassMedium;   //!
   TBranch        *b_bjet2PassTight;   //!
   TBranch        *b_jet1PassCSVLoose;   //!
   TBranch        *b_jet1PassCSVMedium;   //!
   TBranch        *b_jet1PassCSVTight;   //!
   TBranch        *b_jet2PassCSVLoose;   //!
   TBranch        *b_jet2PassCSVMedium;   //!
   TBranch        *b_jet2PassCSVTight;   //!
   TBranch        *b_lep1MT;   //!
   TBranch        *b_mll;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_METnoHF;   //!
   TBranch        *b_METnoHFPhi;   //!
   TBranch        *b_METRaw;   //!
   TBranch        *b_METRawPhi;   //!
   TBranch        *b_dPhiRazor;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_genZpt;   //!
   TBranch        *b_genZphi;   //!
   TBranch        *b_genlep1;   //!
   TBranch        *b_genlep2;   //!
   TBranch        *b_lep1;   //!
   TBranch        *b_lep2;   //!
   TBranch        *b_bjet1;   //!
   TBranch        *b_bjet2;   //!
   TBranch        *b_jet1;   //!
   TBranch        *b_jet2;   //!

   ControlSampleEvent(TTree *tree=0);
   virtual ~ControlSampleEvent();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   template < typename retType > retType GetVarVal( TString varName );
};

#endif

#ifdef ControlSampleEvent_cxx
ControlSampleEvent::ControlSampleEvent(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("RunTwoRazorControlRegions_DileptonFull_DileptonSkim_WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_1pb_weighted.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("RunTwoRazorControlRegions_DileptonFull_DileptonSkim_WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_1pb_weighted.root");
      }
      f->GetObject("ControlSampleEvent",tree);

   }
   Init(tree);
}

ControlSampleEvent::~ControlSampleEvent()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ControlSampleEvent::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ControlSampleEvent::LoadTree(Long64_t entry)
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

template < typename retType >
retType ControlSampleEvent::GetVarVal( TString varName )
{
  if ( varName == "option" ) return option;
  if ( varName == "weight" ) return weight;
  if ( varName == "run" ) return run;
  if ( varName == "lumi" ) return lumi;
  if ( varName == "event" ) return event;
  if ( varName == "NPU_0") return NPU_0;
  if ( varName == "NPV" ) return NPV;
  if ( varName == "MR" ) return MR;
  if ( varName == "Rsq" ) return Rsq;
  if ( varName == "MET" ) return MET;
  if ( varName == "NJets40" ) return NJets40;
  if ( varName == "NJets80") return NJets80;
  if ( varName == "NBJetsLoose" ) return NBJetsLoose;
  if ( varName == "NBJetsMedium" ) return NBJetsMedium;
  if ( varName == "NBJetsTight") return NBJetsTight;
  if ( varName == "Flag_HBHENoiseFilter" ) return Flag_HBHENoiseFilter;
  if ( varName == "Flag_CSCTightHaloFilter" ) return Flag_CSCTightHaloFilter;
  if ( varName == "Flag_hcalLaserEventFilter" ) return Flag_hcalLaserEventFilter;
  if ( varName == "Flag_EcalDeadCellTriggerPrimitiveFilter" ) return Flag_EcalDeadCellTriggerPrimitiveFilter;
  if ( varName == "Flag_goodVertices" ) return Flag_goodVertices;
  if ( varName == "Flag_trackingFailureFilter" ) return Flag_trackingFailureFilter;
  if ( varName == "Flag_eeBadScFilter" ) return Flag_eeBadScFilter;
  if ( varName == "Flag_ecalLaserCorrFilter" ) return Flag_ecalLaserCorrFilter;
  if ( varName == "Flag_trkPOGFilters" ) return Flag_trkPOGFilters;
  if ( varName == "Flag_trkPOG_manystripclus53X" ) return Flag_trkPOG_manystripclus53X;
  if ( varName == "Flag_trkPOG_toomanystripclus53X" ) return Flag_trkPOG_toomanystripclus53X;
  if ( varName == "Flag_trkPOG_logErrorTooManyClusters" ) return Flag_trkPOG_logErrorTooManyClusters;
  if ( varName == "Flag_METFilters" ) return Flag_METFilters;
  if ( varName == "NPU_Minus1" ) return NPU_Minus1;
  if ( varName == "NPU_Plus1" ) return NPU_Plus1;
  if ( varName == "processID" ) return processID;
  if ( varName == "HLTDecision" ) return *HLTDecision;
  if ( varName == "genlep1Type" ) return genlep1Type;
  if ( varName == "lep1Type" ) return lep1Type;
  if ( varName == "lep1MatchedGenLepIndex" ) return lep1MatchedGenLepIndex;
  if ( varName == "genlep2Type" ) return genlep2Type;
  if ( varName == "lep2Type" ) return lep2Type;
  if ( varName == "lep2MatchedGenLepIndex" ) return lep2MatchedGenLepIndex;
  if ( varName == "lep1PassVeto" ) return lep1PassVeto;
  if ( varName == "lep1PassLoose" ) return lep1PassLoose;
  if ( varName == "lep1PassTight" ) return lep1PassTight;
  if ( varName == "lep1PassVetoID" ) return lep1PassVetoID;
  if ( varName == "lep1PassLooseID" ) return lep1PassLooseID;
  if ( varName == "lep1PassTightID" ) return lep1PassTightID;
  if ( varName == "lep1PassVetoIso" ) return lep1PassVetoIso;
  if ( varName == "lep1PassLooseIso" ) return lep1PassLooseIso;
  if ( varName == "lep1PassTightIso" ) return lep1PassTightIso;
  if ( varName == "lep1MinDRToBJet" ) return lep1MinDRToBJet;
  if ( varName == "lep1Activity" ) return lep1Activity;
  if ( varName == "lep2PassVeto" ) return lep2PassVeto;
  if ( varName == "lep2PassLoose" ) return lep2PassLoose;
  if ( varName == "lep2PassTight" ) return lep2PassTight;
  if ( varName == "lep2PassVetoID" ) return lep2PassVetoID;
  if ( varName == "lep2PassLooseID" ) return lep2PassLooseID;
  if ( varName == "lep2PassTightID" ) return lep2PassTightID;
  if ( varName == "lep2PassVetoIso" ) return lep2PassVetoIso;
  if ( varName == "lep2PassLooseIso" ) return lep2PassLooseIso;
  if ( varName == "lep2PassTightIso" ) return lep2PassTightIso;
  if ( varName == "lep2MinDRToBJet" ) return lep2MinDRToBJet;
  if ( varName == "lep2Activity" ) return lep2Activity;
  if ( varName == "bjet1PassLoose" ) return bjet1PassLoose;
  if ( varName == "bjet1PassMedium" ) return bjet1PassMedium;
  if ( varName == "bjet1PassTight" ) return bjet1PassTight;
  if ( varName == "bjet2PassLoose" ) return bjet2PassLoose;
  if ( varName == "bjet2PassMedium" ) return bjet2PassMedium;
  if ( varName == "bjet2PassTight" ) return bjet2PassTight;
  if ( varName == "jet1PassCSVLoose" ) return jet1PassCSVLoose;
  if ( varName == "jet1PassCSVMedium" ) return jet1PassCSVMedium;
  if ( varName == "jet1PassCSVTight" ) return jet1PassCSVTight;
  if ( varName == "jet2PassCSVLoose" ) return jet2PassCSVLoose;
  if ( varName == "jet2PassCSVMedium" ) return jet2PassCSVMedium;
  if ( varName == "jet2PassCSVTight" ) return jet2PassCSVTight;
  if ( varName == "lep1MT" ) return lep1MT;
  if ( varName == "mll" ) return mll;
  if ( varName == "METPhi" ) return METPhi;
  if ( varName == "METnoHF" ) return METnoHF;
  if ( varName == "METnoHFPhi" ) return METnoHFPhi;
  if ( varName == "METRaw" ) return METRaw;
  if ( varName == "METRawPhi" ) return METRawPhi;
  if ( varName == "dPhiRazor" ) return dPhiRazor;
  if ( varName == "HT" ) return HT;
  if ( varName == "genZpt" ) return genZpt;
  if ( varName == "genZphi" ) return genZphi;
  //if ( varName == "genlep1" ) return genlep1;
  //if ( varName == "genlep2" ) return genlep2;
  //if ( varName == "lep1" ) return lep1;
  //if ( varName == "lep2" ) return lep2;
  //if ( varName == "bjet1" ) return bjet1;
  //if ( varName == "bjet2" ) return bjet2;
  //if ( varName == "jet1" ) return jet1;
  //if ( varName == "jet2" ) return jet2;
};

void ControlSampleEvent::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   genlep1 = 0;
   genlep2 = 0;
   lep1 = 0;
   lep2 = 0;
   bjet1 = 0;
   bjet2 = 0;
   jet1 = 0;
   jet2 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("option", &option, &b_option);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("NPU_0", &NPU_0, &b_NPU_0);
   fChain->SetBranchAddress("NPV", &NPV, &b_NPV);
   fChain->SetBranchAddress("MR", &MR, &b_MR);
   fChain->SetBranchAddress("Rsq", &Rsq, &b_Rsq);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("NJets40", &NJets40, &b_NJets40);
   fChain->SetBranchAddress("NJets80", &NJets80, &b_NJets80);
   fChain->SetBranchAddress("NBJetsLoose", &NBJetsLoose, &b_NBJetsLoose);
   fChain->SetBranchAddress("NBJetsMedium", &NBJetsMedium, &b_NBJetsMedium);
   fChain->SetBranchAddress("NBJetsTight", &NBJetsTight, &b_NBJetsTight);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_trackingFailureFilter", &Flag_trackingFailureFilter, &b_Flag_trackingFailureFilter);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("NPU_Minus1", &NPU_Minus1, &b_NPU_Minus1);
   fChain->SetBranchAddress("NPU_Plus1", &NPU_Plus1, &b_NPU_Plus1);
   fChain->SetBranchAddress("processID", &processID, &b_processID);
   fChain->SetBranchAddress("HLTDecision", HLTDecision, &b_HLTDecision);
   fChain->SetBranchAddress("genlep1Type", &genlep1Type, &b_genlep1Type);
   fChain->SetBranchAddress("lep1Type", &lep1Type, &b_lep1Type);
   fChain->SetBranchAddress("lep1MatchedGenLepIndex", &lep1MatchedGenLepIndex, &b_lep1MatchedGenLepIndex);
   fChain->SetBranchAddress("genlep2Type", &genlep2Type, &b_genlep2Type);
   fChain->SetBranchAddress("lep2Type", &lep2Type, &b_lep2Type);
   fChain->SetBranchAddress("lep2MatchedGenLepIndex", &lep2MatchedGenLepIndex, &b_lep2MatchedGenLepIndex);
   fChain->SetBranchAddress("lep1PassVeto", &lep1PassVeto, &b_lep1PassVeto);
   fChain->SetBranchAddress("lep1PassLoose", &lep1PassLoose, &b_lep1PassLoose);
   fChain->SetBranchAddress("lep1PassTight", &lep1PassTight, &b_lep1PassTight);
   fChain->SetBranchAddress("lep1PassVetoID", &lep1PassVetoID, &b_lep1PassVetoID);
   fChain->SetBranchAddress("lep1PassLooseID", &lep1PassLooseID, &b_lep1PassLooseID);
   fChain->SetBranchAddress("lep1PassTightID", &lep1PassTightID, &b_lep1PassTightID);
   fChain->SetBranchAddress("lep1PassVetoIso", &lep1PassVetoIso, &b_lep1PassVetoIso);
   fChain->SetBranchAddress("lep1PassLooseIso", &lep1PassLooseIso, &b_lep1PassLooseIso);
   fChain->SetBranchAddress("lep1PassTightIso", &lep1PassTightIso, &b_lep1PassTightIso);
   fChain->SetBranchAddress("lep1MinDRToBJet", &lep1MinDRToBJet, &b_lep1MinDRToBJet);
   fChain->SetBranchAddress("lep1Activity", &lep1Activity, &b_lep1Activity);
   fChain->SetBranchAddress("lep2PassVeto", &lep2PassVeto, &b_lep2PassVeto);
   fChain->SetBranchAddress("lep2PassLoose", &lep2PassLoose, &b_lep2PassLoose);
   fChain->SetBranchAddress("lep2PassTight", &lep2PassTight, &b_lep2PassTight);
   fChain->SetBranchAddress("lep2PassVetoID", &lep2PassVetoID, &b_lep2PassVetoID);
   fChain->SetBranchAddress("lep2PassLooseID", &lep2PassLooseID, &b_lep2PassLooseID);
   fChain->SetBranchAddress("lep2PassTightID", &lep2PassTightID, &b_lep2PassTightID);
   fChain->SetBranchAddress("lep2PassVetoIso", &lep2PassVetoIso, &b_lep2PassVetoIso);
   fChain->SetBranchAddress("lep2PassLooseIso", &lep2PassLooseIso, &b_lep2PassLooseIso);
   fChain->SetBranchAddress("lep2PassTightIso", &lep2PassTightIso, &b_lep2PassTightIso);
   fChain->SetBranchAddress("lep2MinDRToBJet", &lep2MinDRToBJet, &b_lep2MinDRToBJet);
   fChain->SetBranchAddress("lep2Activity", &lep2Activity, &b_lep2Activity);
   fChain->SetBranchAddress("bjet1PassLoose", &bjet1PassLoose, &b_bjet1PassLoose);
   fChain->SetBranchAddress("bjet1PassMedium", &bjet1PassMedium, &b_bjet1PassMedium);
   fChain->SetBranchAddress("bjet1PassTight", &bjet1PassTight, &b_bjet1PassTight);
   fChain->SetBranchAddress("bjet2PassLoose", &bjet2PassLoose, &b_bjet2PassLoose);
   fChain->SetBranchAddress("bjet2PassMedium", &bjet2PassMedium, &b_bjet2PassMedium);
   fChain->SetBranchAddress("bjet2PassTight", &bjet2PassTight, &b_bjet2PassTight);
   fChain->SetBranchAddress("jet1PassCSVLoose", &jet1PassCSVLoose, &b_jet1PassCSVLoose);
   fChain->SetBranchAddress("jet1PassCSVMedium", &jet1PassCSVMedium, &b_jet1PassCSVMedium);
   fChain->SetBranchAddress("jet1PassCSVTight", &jet1PassCSVTight, &b_jet1PassCSVTight);
   fChain->SetBranchAddress("jet2PassCSVLoose", &jet2PassCSVLoose, &b_jet2PassCSVLoose);
   fChain->SetBranchAddress("jet2PassCSVMedium", &jet2PassCSVMedium, &b_jet2PassCSVMedium);
   fChain->SetBranchAddress("jet2PassCSVTight", &jet2PassCSVTight, &b_jet2PassCSVTight);
   fChain->SetBranchAddress("lep1MT", &lep1MT, &b_lep1MT);
   fChain->SetBranchAddress("mll", &mll, &b_mll);
   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
   fChain->SetBranchAddress("METnoHF", &METnoHF, &b_METnoHF);
   fChain->SetBranchAddress("METnoHFPhi", &METnoHFPhi, &b_METnoHFPhi);
   fChain->SetBranchAddress("METRaw", &METRaw, &b_METRaw);
   fChain->SetBranchAddress("METRawPhi", &METRawPhi, &b_METRawPhi);
   fChain->SetBranchAddress("dPhiRazor", &dPhiRazor, &b_dPhiRazor);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("genZpt", &genZpt, &b_genZpt);
   fChain->SetBranchAddress("genZphi", &genZphi, &b_genZphi);
   fChain->SetBranchAddress("genlep1", &genlep1, &b_genlep1);
   fChain->SetBranchAddress("genlep2", &genlep2, &b_genlep2);
   fChain->SetBranchAddress("lep1", &lep1, &b_lep1);
   fChain->SetBranchAddress("lep2", &lep2, &b_lep2);
   fChain->SetBranchAddress("bjet1", &bjet1, &b_bjet1);
   fChain->SetBranchAddress("bjet2", &bjet2, &b_bjet2);
   fChain->SetBranchAddress("jet1", &jet1, &b_jet1);
   fChain->SetBranchAddress("jet2", &jet2, &b_jet2);
   Notify();
}

Bool_t ControlSampleEvent::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ControlSampleEvent::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ControlSampleEvent::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ControlSampleEvent_cxx
