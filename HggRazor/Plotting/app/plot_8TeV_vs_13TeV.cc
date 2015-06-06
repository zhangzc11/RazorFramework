{
  gROOT->Reset();

  const int nhistos = 3;
  TString treeName = "HighRes";
  TString cut = "xsecSF*(MR > 200.0 && Rsq > 0.0 && abs( pho1Eta ) < 1.44 && abs( pho2Eta ) < 1.44 && ( pho1Pt > 40. || pho2Pt > 40. ) && pho1Pt > 25. && pho2Pt> 25.)";
  
  TFile* f0 = new TFile("/Users/cmorgoth/Work/data/HggRazorRun1/MC/GJet_Pt-40_doubleEMEnriched_TuneZ2star_8TeV-pythia6_Normalized.root");
  TTree* t0 = (TTree*)f0->Get( treeName );
  t0->Draw("MR>>t0_mr(40, 0, 2000.)", cut, "goff");
  t0->Draw("Rsq>>t0_rsq(30, 0, 1.5)", cut, "goff");
  t0->Draw("mGammaGamma>>t0_mgg(19, 103, 160.)", cut, "goff");
  TH1F* h_t0[nhistos];
  h_t0[0] = (TH1F*)gDirectory->Get("t0_mr");
  h_t0[1] = (TH1F*)gDirectory->Get("t0_rsq");
  h_t0[2] = (TH1F*)gDirectory->Get("t0_mgg");

  TFile* f1 = new TFile("/Users/cmorgoth/Work/data/HggRazorRun2/MC/GJet_Pt40_DoubleEMEnriched_13TeV_Normalized.root");
  TTree* t1 = (TTree*)f1->Get( treeName );
  t1->Draw("MR>>t1_mr(40, 0, 2000.)", cut, "goff");
  t1->Draw("Rsq>>t1_rsq(30, 0, 1.5)", cut, "goff");
  t1->Draw("mGammaGamma>>t1_mgg(19, 103, 160.)", cut, "goff");
  TH1F* h_t1[nhistos];
  h_t1[0] = (TH1F*)gDirectory->Get("t1_mr");
  h_t1[1] = (TH1F*)gDirectory->Get("t1_rsq");
  h_t1[2] = (TH1F*)gDirectory->Get("t1_mgg");

  std::cout << "Box: " << treeName << ", mr 13TeV/8TeV: " <<   h_t1[0]->Integral()/h_t0[0]->Integral() << std::endl;

  //Normalizing to unit integral;
  for (  int i = 0; i < nhistos; i++ )
    {
      h_t0[i]->Scale( 1.0/h_t0[i]->Integral() );
      h_t0[i]->SetLineColor( kRed );
      h_t0[i]->SetLineWidth(2);
      h_t0[i]->SetMarkerStyle(20);
      h_t0[i]->SetMarkerColor( kRed );
      h_t0[i]->SetStats( 0 );
      h_t1[i]->Scale( 1.0/h_t1[i]->Integral() );
      h_t1[i]->SetLineWidth(2);
      h_t1[i]->SetMarkerStyle(20);
      h_t1[i]->SetMarkerColor( kBlue );
    }

  h_t0[2]->SetTitle("");
  h_t0[2]->SetXTitle("m_{#gamma#gamma} (GeV)");

  h_t0[2]->SetYTitle("a.u");
  h_t0[2]->Draw();
  h_t0[2]->GetYaxis()->SetRangeUser(0.0, 2.0*h_t0[2]->GetMaximum() );
  h_t1[2]->Draw("same");
  
}
