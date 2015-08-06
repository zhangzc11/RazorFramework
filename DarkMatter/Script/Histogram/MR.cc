{
gStyle->SetOptStat(0);
TFile *DYJetsToLL = new TFile("/afs/cern.ch/user/q/qnguyen/RazorAnalyzer/submission/Total_Normalized/DYJetsToLL_HT_Total_Normalized.root");
TFile *TTJets = new TFile("/afs/cern.ch/user/q/qnguyen/RazorAnalyzer/submission/Total_Normalized/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola_30bx50_PHYS14_Total_Normalized.root");
TFile *T_tW = new TFile("/afs/cern.ch/user/q/qnguyen/RazorAnalyzer/submission/Total_Normalized/T_tW_20bx25_0_Normalized.root");
TFile *TToLeptons = new TFile("/afs/cern.ch/user/q/qnguyen/RazorAnalyzer/submission/Total_Normalized/TToLeptons_20bx25_0_Normalized.root");
TFile *WJetsToLNu_HT = new TFile("/afs/cern.ch/user/q/qnguyen/RazorAnalyzer/submission/Total_Normalized/WJetsToLNu_HT_Total_Normalized.root");
TFile *ZJetsToNuNu_HT = new TFile("/afs/cern.ch/user/q/qnguyen/RazorAnalyzer/submission/Total_Normalized/ZJetsToNuNu_HT_Total_Normalized.root");

TCanvas *MR = new TCanvas("MR","",900,600);
	MR->cd();
	MR->SetLeftMargin(0.15);
	MR->SetRightMargin(0.05);

TH1D *DYJetsToLL_MR = new TH1D("DYJetsToLL_MR","DYJetsToLL_MR;M_{R} (GeV);Events/(40 GeV)",100,0,4000);
TTree* DYJetsToLL_Tree = (TTree*) DYJetsToLL->Get("MultiJet");
DYJetsToLL_Tree->Draw("MR>>DYJetsToLL_MR","xsecSF*(1)");
  	DYJetsToLL_MR->SetFillColor(kBlue);
      	DYJetsToLL_MR->SetFillStyle(3001);
      	DYJetsToLL_MR->SetLineWidth(2);
	DYJetsToLL_MR->SetLineColor(kBlue);

TH1D *TTJets_MR = new TH1D("TTJets_MR","TTJets_MR; M_{R} (GeV); Events/(40 GeV)",100,0,4000);
TTree* TTJets_Tree = (TTree*) TTJets->Get("MultiJet");
TTJets_Tree->Draw("MR>>TTJets_MR","xsecSF*(1)");
  	TTJets_MR->SetFillColor(2);
	TTJets_MR->SetFillStyle(3001);
	TTJets_MR->SetLineColor(2);
	TTJets_MR->SetLineWidth(2);

TH1D *T_tW_MR = new TH1D("T_tW_MR","T_tW_MR; M_{R} (GeV); Events/(40 GeV)",100,0,4000);
TTree* T_tW_Tree = (TTree*) T_tW->Get("MultiJet");
T_tW_Tree->Draw("MR>>T_tW_MR","xsecSF*(1)");
  	T_tW_MR->SetFillColor(3);
	T_tW_MR->SetFillStyle(3001);
	T_tW_MR->SetLineColor(TColor::GetColor("#339900"));
	T_tW_MR->SetLineWidth(2);

TH1D *TToLeptons_MR = new TH1D("TToLeptons_MR","TToLeptons_MR; M_{R} (GeV); Events/(40 GeV)",100,0,4000);
TTree* TToLeptons_Tree = (TTree*) TToLeptons->Get("MultiJet");
TToLeptons_Tree->Draw("MR>>TToLeptons_MR","xsecSF*(1)");
  	TToLeptons_MR->SetFillColor(6);
	TToLeptons_MR->SetFillStyle(3001);
	TToLeptons_MR->SetLineColor(6);
	TToLeptons_MR->SetLineWidth(2);

TH1D *WJetsToLNu_HT_MR = new TH1D("WJetsToLNu_HT_MR","WJetsToLNu_HT_MR; M_{R} (GeV); Events/(40 GeV)",100,0,4000);
TTree* WJetsToLNu_HT_Tree = (TTree*) WJetsToLNu_HT->Get("MultiJet");
WJetsToLNu_HT_Tree->Draw("MR>>WJetsToLNu_HT_MR","xsecSF*(1)");
	WJetsToLNu_HT_MR->SetFillColor(TColor::GetColor("#0099ff"));
	WJetsToLNu_HT_MR->SetFillStyle(3020);
      	WJetsToLNu_HT_MR->SetLineColor(TColor::GetColor("#0099ff"));
	WJetsToLNu_HT_MR->SetLineWidth(2);

TH1D *ZJetsToNuNu_HT_MR = new TH1D("ZJetsToNuNu_HT_MR","ZJetsToNuNu_HT_MR; M_{R} (GeV); Events/(40 GeV)",100,0,4000);
TTree* ZJetsToNuNu_HT_Tree = (TTree*) ZJetsToNuNu_HT->Get("MultiJet");
ZJetsToNuNu_HT_Tree->Draw("MR>>ZJetsToNuNu_HT_MR","xsecSF*(1)");
  	ZJetsToNuNu_HT_MR->SetFillColor(TColor::GetColor("#333300"));
	ZJetsToNuNu_HT_MR->SetFillStyle(3016);
	ZJetsToNuNu_HT_MR->SetLineColor(TColor::GetColor("#333300"));
	ZJetsToNuNu_HT_MR->SetLineWidth(2);

THStack *MR_Stack = new THStack("MR","");
	MR_Stack->Add(DYJetsToLL_MR);
	MR_Stack->Add(TTJets_MR);
	MR_Stack->Add(T_tW_MR);
	MR_Stack->Add(TToLeptons_MR);
	MR_Stack->Add(WJetsToLNu_HT_MR);
	MR_Stack->Add(ZJetsToNuNu_HT_MR);

	MR_Stack->Draw();
	MR_Stack->GetYaxis()->SetTitleOffset(1.4);
	MR_Stack->SetTitle("M_{R}; M_{R} (GeV); Events/(40 GeV)");
	gPad->Modified();


 TLegend *lg = new TLegend(0.492,0.443,0.894,0.816);
	lg->SetBorderSize(0);
        lg->SetFillColor(10);
	lg->SetNColumns(2);
	lg->AddEntry(DYJetsToLL_MR,"DYJetsToLL","f");
	lg->AddEntry(TTJets_MR,"TTJets","f");
	lg->AddEntry(T_tW_MR,"T_tW","f");
	lg->AddEntry(TToLeptons_MR,"TToLeptons","f");
	lg->AddEntry(WJetsToLNu_HT_MR,"WJetsToLNu_HT","f");
	lg->AddEntry(ZJetsToNuNu_HT_MR,"ZJetsToNuNu_HT","f");
	lg->SetHeader("Processes:");
	lg->Draw();

TCanvas *MR_indi = new TCanvas("MR_indi","",900,600);
//	gStyle->SetOptStat(0);
	MR_indi->Divide(3,2);
	MR_indi->cd(1);
		gPad->SetLeftMargin(0.15);
		gPad->SetRightMargin(0.02);
		DYJetsToLL_MR->GetYaxis()->SetTitleOffset(1.75);
		DYJetsToLL_MR->Draw();
	MR_indi->cd(2);
		gPad->SetLeftMargin(0.15);
		gPad->SetRightMargin(0.02);
		TTJets_MR->GetYaxis()->SetTitleOffset(1.75);
		TTJets_MR->Draw();
	MR_indi->cd(3);
		gPad->SetLeftMargin(0.15);
		gPad->SetRightMargin(0.02);
		T_tW_MR->GetYaxis()->SetTitleOffset(1.75);
		T_tW_MR->Draw();
	MR_indi->cd(4);
		gPad->SetLeftMargin(0.15);
		gPad->SetRightMargin(0.02);
		TToLeptons_MR->GetYaxis()->SetTitleOffset(1.75);
		TToLeptons_MR->Draw();
	MR_indi->cd(5);
		gPad->SetLeftMargin(0.15);
		gPad->SetRightMargin(0.02);
		WJetsToLNu_HT_MR->GetYaxis()->SetTitleOffset(1.75);
		WJetsToLNu_HT_MR->Draw();
	MR_indi->cd(6);
		gPad->SetLeftMargin(0.15);
		gPad->SetRightMargin(0.02);
		ZJetsToNuNu_HT_MR->GetYaxis()->SetTitleOffset(1.75);
		ZJetsToNuNu_HT_MR->Draw();


TFile *fo = new TFile("MR.root","recreate");
MR->Write();
MR_indi->Write();
DYJetsToLL_MR->Write();
TTJets_MR->Write();
T_tW_MR->Write();
TToLeptons_MR->Write();
WJetsToLNu_HT_MR->Write();
ZJetsToNuNu_HT_MR->Write();
fo->Close();
}
