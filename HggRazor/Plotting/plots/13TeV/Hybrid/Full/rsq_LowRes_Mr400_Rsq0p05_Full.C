void rsq_LowRes_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:16 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.023122,1.060241,-0.9318618);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.05);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.12);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   hs->SetMinimum(0.1);
   hs->SetMaximum(0.1139832);
   
   TH1F *hs_stack_18 = new TH1F("hs_stack_18","",125,0,5);
   hs_stack_18->SetMinimum(0.0972365);
   hs_stack_18->SetMaximum(0.115279);
   hs_stack_18->SetDirectory(0);
   hs_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_18->SetLineColor(ci);
   hs_stack_18->GetXaxis()->SetTitle("R^{2}");
   hs_stack_18->GetXaxis()->SetRange(1,25);
   hs_stack_18->GetXaxis()->SetLabelFont(42);
   hs_stack_18->GetXaxis()->SetLabelSize(0.035);
   hs_stack_18->GetXaxis()->SetTitleSize(0.06);
   hs_stack_18->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_18->GetXaxis()->SetTitleFont(42);
   hs_stack_18->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_18->GetYaxis()->SetLabelFont(42);
   hs_stack_18->GetYaxis()->SetLabelSize(0.035);
   hs_stack_18->GetYaxis()->SetTitleSize(0.06);
   hs_stack_18->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_18->GetYaxis()->SetTitleFont(42);
   hs_stack_18->GetZaxis()->SetLabelFont(42);
   hs_stack_18->GetZaxis()->SetLabelSize(0.035);
   hs_stack_18->GetZaxis()->SetTitleSize(0.035);
   hs_stack_18->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_18);
   
   
   TH1F *gammaJet_LowRes_rsq__103 = new TH1F("gammaJet_LowRes_rsq__103","rsq",125,0,5);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_rsq__103->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_rsq__103->SetLineColor(ci);
   gammaJet_LowRes_rsq__103->GetXaxis()->SetLabelFont(42);
   gammaJet_LowRes_rsq__103->GetXaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_rsq__103->GetXaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_rsq__103->GetXaxis()->SetTitleFont(42);
   gammaJet_LowRes_rsq__103->GetYaxis()->SetLabelFont(42);
   gammaJet_LowRes_rsq__103->GetYaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_rsq__103->GetYaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_rsq__103->GetYaxis()->SetTitleFont(42);
   gammaJet_LowRes_rsq__103->GetZaxis()->SetLabelFont(42);
   gammaJet_LowRes_rsq__103->GetZaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_rsq__103->GetZaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_rsq__103->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_LowRes_rsq,"histo");
   
   TH1F *diphoton_LowRes_rsq__104 = new TH1F("diphoton_LowRes_rsq__104","rsq",125,0,5);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_rsq__104->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_rsq__104->SetLineColor(ci);
   diphoton_LowRes_rsq__104->GetXaxis()->SetLabelFont(42);
   diphoton_LowRes_rsq__104->GetXaxis()->SetLabelSize(0.035);
   diphoton_LowRes_rsq__104->GetXaxis()->SetTitleSize(0.035);
   diphoton_LowRes_rsq__104->GetXaxis()->SetTitleFont(42);
   diphoton_LowRes_rsq__104->GetYaxis()->SetLabelFont(42);
   diphoton_LowRes_rsq__104->GetYaxis()->SetLabelSize(0.035);
   diphoton_LowRes_rsq__104->GetYaxis()->SetTitleSize(0.035);
   diphoton_LowRes_rsq__104->GetYaxis()->SetTitleFont(42);
   diphoton_LowRes_rsq__104->GetZaxis()->SetLabelFont(42);
   diphoton_LowRes_rsq__104->GetZaxis()->SetLabelSize(0.035);
   diphoton_LowRes_rsq__104->GetZaxis()->SetTitleSize(0.035);
   diphoton_LowRes_rsq__104->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_LowRes_rsq,"histo");
   
   TH1F *ggH_LowRes_rsq__105 = new TH1F("ggH_LowRes_rsq__105","rsq",125,0,5);
   ggH_LowRes_rsq__105->SetBinContent(2,0.005510597);
   ggH_LowRes_rsq__105->SetBinContent(3,0.001836866);
   ggH_LowRes_rsq__105->SetBinError(2,0.003181545);
   ggH_LowRes_rsq__105->SetBinError(3,0.001836866);
   ggH_LowRes_rsq__105->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_rsq__105->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_rsq__105->SetLineColor(ci);
   ggH_LowRes_rsq__105->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_rsq__105->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_rsq__105->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_rsq__105->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_rsq__105->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_rsq__105->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_rsq__105->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_rsq__105->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_rsq__105->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_rsq__105->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_rsq__105->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_rsq__105->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_rsq,"histo");
   
   TH1F *vbfH_LowRes_rsq__106 = new TH1F("vbfH_LowRes_rsq__106","rsq",125,0,5);
   vbfH_LowRes_rsq__106->SetBinContent(2,0.001135056);
   vbfH_LowRes_rsq__106->SetBinError(2,0.0004290108);
   vbfH_LowRes_rsq__106->SetEntries(7);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_rsq__106->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_rsq__106->SetLineColor(ci);
   vbfH_LowRes_rsq__106->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_rsq__106->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_rsq__106->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_rsq__106->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_rsq__106->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_rsq__106->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_rsq__106->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_rsq__106->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_rsq__106->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_rsq__106->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_rsq__106->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_rsq__106->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_rsq,"histo");
   
   TH1F *vH_LowRes_rsq__107 = new TH1F("vH_LowRes_rsq__107","rsq",125,0,5);
   vH_LowRes_rsq__107->SetBinContent(2,0.001135116);
   vH_LowRes_rsq__107->SetBinContent(3,0.000189186);
   vH_LowRes_rsq__107->SetBinError(2,0.0003276797);
   vH_LowRes_rsq__107->SetBinError(3,0.0001337747);
   vH_LowRes_rsq__107->SetEntries(14);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_rsq__107->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_rsq__107->SetLineColor(ci);
   vH_LowRes_rsq__107->GetXaxis()->SetLabelFont(42);
   vH_LowRes_rsq__107->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_rsq__107->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_rsq__107->GetXaxis()->SetTitleFont(42);
   vH_LowRes_rsq__107->GetYaxis()->SetLabelFont(42);
   vH_LowRes_rsq__107->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_rsq__107->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_rsq__107->GetYaxis()->SetTitleFont(42);
   vH_LowRes_rsq__107->GetZaxis()->SetLabelFont(42);
   vH_LowRes_rsq__107->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_rsq__107->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_rsq__107->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_rsq,"histo");
   
   TH1F *ttH_LowRes_rsq__108 = new TH1F("ttH_LowRes_rsq__108","rsq",125,0,5);
   ttH_LowRes_rsq__108->SetBinContent(2,0.003617549);
   ttH_LowRes_rsq__108->SetBinContent(3,0.002132889);
   ttH_LowRes_rsq__108->SetBinContent(4,0.001066444);
   ttH_LowRes_rsq__108->SetBinContent(5,0.0004182131);
   ttH_LowRes_rsq__108->SetBinContent(6,0.0002509278);
   ttH_LowRes_rsq__108->SetBinContent(7,0.0001463746);
   ttH_LowRes_rsq__108->SetBinContent(8,0.0001045533);
   ttH_LowRes_rsq__108->SetBinContent(9,8.364262e-05);
   ttH_LowRes_rsq__108->SetBinContent(10,2.091065e-05);
   ttH_LowRes_rsq__108->SetBinContent(11,2.091065e-05);
   ttH_LowRes_rsq__108->SetBinContent(12,4.182131e-05);
   ttH_LowRes_rsq__108->SetBinContent(19,2.091065e-05);
   ttH_LowRes_rsq__108->SetBinError(2,0.0002750367);
   ttH_LowRes_rsq__108->SetBinError(3,0.0002111873);
   ttH_LowRes_rsq__108->SetBinError(4,0.0001493319);
   ttH_LowRes_rsq__108->SetBinError(5,9.351529e-05);
   ttH_LowRes_rsq__108->SetBinError(6,7.243663e-05);
   ttH_LowRes_rsq__108->SetBinError(7,5.532439e-05);
   ttH_LowRes_rsq__108->SetBinError(8,4.675765e-05);
   ttH_LowRes_rsq__108->SetBinError(9,4.182131e-05);
   ttH_LowRes_rsq__108->SetBinError(10,2.091066e-05);
   ttH_LowRes_rsq__108->SetBinError(11,2.091066e-05);
   ttH_LowRes_rsq__108->SetBinError(12,2.957213e-05);
   ttH_LowRes_rsq__108->SetBinError(19,2.091066e-05);
   ttH_LowRes_rsq__108->SetEntries(379);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_rsq__108->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_rsq__108->SetLineColor(ci);
   ttH_LowRes_rsq__108->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_rsq__108->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_rsq__108->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_rsq__108->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_rsq__108->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_rsq__108->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_rsq__108->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_rsq__108->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_rsq__108->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_rsq__108->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_rsq__108->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_rsq__108->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_LowRes_rsq","#gamma + jets","f");

   ci = TColor::GetColor("#0099ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("diphoton_LowRes_rsq","#gamma#gamma + jets","f");

   ci = TColor::GetColor("#99ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#99ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ggH_LowRes_rsq","ggH + jets","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("vbfH_LowRes_rsq","VBFH + jets","f");

   ci = TColor::GetColor("#ffcc33");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("vH_LowRes_rsq","VH + jets","f");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttH_LowRes_rsq","t#bar{t}H + jets","f");

   ci = TColor::GetColor("#9966ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9966ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.955,0.945,"5 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.33,0.875,"CMS");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.408,0.835,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
