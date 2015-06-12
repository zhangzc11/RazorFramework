void mgg_LowRes_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:16 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.00219143,163.4337,0.01607048);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.05);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.12);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   hs->SetMinimum(0);
   hs->SetMaximum(0.01408776);
   
   TH1F *hs_stack_19 = new TH1F("hs_stack_19","",38,103,160);
   hs_stack_19->SetMinimum(0);
   hs_stack_19->SetMaximum(0.01479215);
   hs_stack_19->SetDirectory(0);
   hs_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_19->SetLineColor(ci);
   hs_stack_19->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   hs_stack_19->GetXaxis()->SetRange(1,38);
   hs_stack_19->GetXaxis()->SetLabelFont(42);
   hs_stack_19->GetXaxis()->SetLabelSize(0.035);
   hs_stack_19->GetXaxis()->SetTitleSize(0.06);
   hs_stack_19->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_19->GetXaxis()->SetTitleFont(42);
   hs_stack_19->GetYaxis()->SetTitle("events / 1.5 (GeV)");
   hs_stack_19->GetYaxis()->SetLabelFont(42);
   hs_stack_19->GetYaxis()->SetLabelSize(0.035);
   hs_stack_19->GetYaxis()->SetTitleSize(0.06);
   hs_stack_19->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_19->GetYaxis()->SetTitleFont(42);
   hs_stack_19->GetZaxis()->SetLabelFont(42);
   hs_stack_19->GetZaxis()->SetLabelSize(0.035);
   hs_stack_19->GetZaxis()->SetTitleSize(0.035);
   hs_stack_19->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_19);
   
   
   TH1F *gammaJet_LowRes_mgg__109 = new TH1F("gammaJet_LowRes_mgg__109","mgg",38,103,160);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_mgg__109->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_mgg__109->SetLineColor(ci);
   gammaJet_LowRes_mgg__109->GetXaxis()->SetLabelFont(42);
   gammaJet_LowRes_mgg__109->GetXaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_mgg__109->GetXaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_mgg__109->GetXaxis()->SetTitleFont(42);
   gammaJet_LowRes_mgg__109->GetYaxis()->SetLabelFont(42);
   gammaJet_LowRes_mgg__109->GetYaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_mgg__109->GetYaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_mgg__109->GetYaxis()->SetTitleFont(42);
   gammaJet_LowRes_mgg__109->GetZaxis()->SetLabelFont(42);
   gammaJet_LowRes_mgg__109->GetZaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_mgg__109->GetZaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_mgg__109->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_LowRes_mgg,"histo");
   
   TH1F *diphoton_LowRes_mgg__110 = new TH1F("diphoton_LowRes_mgg__110","mgg",38,103,160);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_mgg__110->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_mgg__110->SetLineColor(ci);
   diphoton_LowRes_mgg__110->GetXaxis()->SetLabelFont(42);
   diphoton_LowRes_mgg__110->GetXaxis()->SetLabelSize(0.035);
   diphoton_LowRes_mgg__110->GetXaxis()->SetTitleSize(0.035);
   diphoton_LowRes_mgg__110->GetXaxis()->SetTitleFont(42);
   diphoton_LowRes_mgg__110->GetYaxis()->SetLabelFont(42);
   diphoton_LowRes_mgg__110->GetYaxis()->SetLabelSize(0.035);
   diphoton_LowRes_mgg__110->GetYaxis()->SetTitleSize(0.035);
   diphoton_LowRes_mgg__110->GetYaxis()->SetTitleFont(42);
   diphoton_LowRes_mgg__110->GetZaxis()->SetLabelFont(42);
   diphoton_LowRes_mgg__110->GetZaxis()->SetLabelSize(0.035);
   diphoton_LowRes_mgg__110->GetZaxis()->SetTitleSize(0.035);
   diphoton_LowRes_mgg__110->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_LowRes_mgg,"histo");
   
   TH1F *ggH_LowRes_mgg__111 = new TH1F("ggH_LowRes_mgg__111","mgg",38,103,160);
   ggH_LowRes_mgg__111->SetBinContent(14,0.001836866);
   ggH_LowRes_mgg__111->SetBinContent(16,0.005510597);
   ggH_LowRes_mgg__111->SetBinError(14,0.001836866);
   ggH_LowRes_mgg__111->SetBinError(16,0.003181545);
   ggH_LowRes_mgg__111->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mgg__111->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mgg__111->SetLineColor(ci);
   ggH_LowRes_mgg__111->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_mgg__111->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_mgg__111->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_mgg__111->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_mgg__111->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_mgg__111->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_mgg__111->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_mgg__111->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_mgg__111->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_mgg__111->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_mgg__111->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_mgg__111->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_mgg,"histo");
   
   TH1F *vbfH_LowRes_mgg__112 = new TH1F("vbfH_LowRes_mgg__112","mgg",38,103,160);
   vbfH_LowRes_mgg__112->SetBinContent(9,0.0001621509);
   vbfH_LowRes_mgg__112->SetBinContent(13,0.0003243017);
   vbfH_LowRes_mgg__112->SetBinContent(14,0.0003243017);
   vbfH_LowRes_mgg__112->SetBinContent(15,0.0001621509);
   vbfH_LowRes_mgg__112->SetBinContent(16,0.0001621509);
   vbfH_LowRes_mgg__112->SetBinError(9,0.0001621509);
   vbfH_LowRes_mgg__112->SetBinError(13,0.0002293159);
   vbfH_LowRes_mgg__112->SetBinError(14,0.0002293159);
   vbfH_LowRes_mgg__112->SetBinError(15,0.0001621509);
   vbfH_LowRes_mgg__112->SetBinError(16,0.0001621509);
   vbfH_LowRes_mgg__112->SetEntries(7);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mgg__112->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mgg__112->SetLineColor(ci);
   vbfH_LowRes_mgg__112->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_mgg__112->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mgg__112->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mgg__112->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_mgg__112->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_mgg__112->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mgg__112->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mgg__112->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_mgg__112->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_mgg__112->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mgg__112->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mgg__112->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_mgg,"histo");
   
   TH1F *vH_LowRes_mgg__113 = new TH1F("vH_LowRes_mgg__113","mgg",38,103,160);
   vH_LowRes_mgg__113->SetBinContent(10,9.459299e-05);
   vH_LowRes_mgg__113->SetBinContent(12,9.459299e-05);
   vH_LowRes_mgg__113->SetBinContent(13,9.459299e-05);
   vH_LowRes_mgg__113->SetBinContent(14,0.000189186);
   vH_LowRes_mgg__113->SetBinContent(15,0.000189186);
   vH_LowRes_mgg__113->SetBinContent(16,0.000283779);
   vH_LowRes_mgg__113->SetBinContent(17,0.000189186);
   vH_LowRes_mgg__113->SetBinContent(18,0.000189186);
   vH_LowRes_mgg__113->SetBinError(10,9.4593e-05);
   vH_LowRes_mgg__113->SetBinError(12,9.4593e-05);
   vH_LowRes_mgg__113->SetBinError(13,9.4593e-05);
   vH_LowRes_mgg__113->SetBinError(14,0.0001337747);
   vH_LowRes_mgg__113->SetBinError(15,0.0001337747);
   vH_LowRes_mgg__113->SetBinError(16,0.0001638399);
   vH_LowRes_mgg__113->SetBinError(17,0.0001337747);
   vH_LowRes_mgg__113->SetBinError(18,0.0001337747);
   vH_LowRes_mgg__113->SetEntries(14);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mgg__113->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mgg__113->SetLineColor(ci);
   vH_LowRes_mgg__113->GetXaxis()->SetLabelFont(42);
   vH_LowRes_mgg__113->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_mgg__113->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_mgg__113->GetXaxis()->SetTitleFont(42);
   vH_LowRes_mgg__113->GetYaxis()->SetLabelFont(42);
   vH_LowRes_mgg__113->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_mgg__113->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_mgg__113->GetYaxis()->SetTitleFont(42);
   vH_LowRes_mgg__113->GetZaxis()->SetLabelFont(42);
   vH_LowRes_mgg__113->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_mgg__113->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_mgg__113->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_mgg,"histo");
   
   TH1F *ttH_LowRes_mgg__114 = new TH1F("ttH_LowRes_mgg__114","mgg",38,103,160);
   ttH_LowRes_mgg__114->SetBinContent(1,6.273197e-05);
   ttH_LowRes_mgg__114->SetBinContent(2,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(3,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(4,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(5,6.273197e-05);
   ttH_LowRes_mgg__114->SetBinContent(6,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(7,0.0001045533);
   ttH_LowRes_mgg__114->SetBinContent(8,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(9,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(10,0.0001463746);
   ttH_LowRes_mgg__114->SetBinContent(11,0.0001463746);
   ttH_LowRes_mgg__114->SetBinContent(12,0.000543677);
   ttH_LowRes_mgg__114->SetBinContent(13,0.0008782477);
   ttH_LowRes_mgg__114->SetBinContent(14,0.001798318);
   ttH_LowRes_mgg__114->SetBinContent(15,0.00186105);
   ttH_LowRes_mgg__114->SetBinContent(16,0.001087355);
   ttH_LowRes_mgg__114->SetBinContent(17,0.0003136598);
   ttH_LowRes_mgg__114->SetBinContent(18,0.0001672852);
   ttH_LowRes_mgg__114->SetBinContent(19,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(20,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(21,6.273197e-05);
   ttH_LowRes_mgg__114->SetBinContent(23,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(24,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(25,0.0001045533);
   ttH_LowRes_mgg__114->SetBinContent(26,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(27,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(28,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(29,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(31,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(32,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(33,4.182131e-05);
   ttH_LowRes_mgg__114->SetBinContent(34,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinContent(37,2.091065e-05);
   ttH_LowRes_mgg__114->SetBinError(1,3.621832e-05);
   ttH_LowRes_mgg__114->SetBinError(2,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(3,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(4,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(5,3.621832e-05);
   ttH_LowRes_mgg__114->SetBinError(6,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(7,4.675765e-05);
   ttH_LowRes_mgg__114->SetBinError(8,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(9,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(10,5.532439e-05);
   ttH_LowRes_mgg__114->SetBinError(11,5.532439e-05);
   ttH_LowRes_mgg__114->SetBinError(12,0.0001066238);
   ttH_LowRes_mgg__114->SetBinError(13,0.0001355165);
   ttH_LowRes_mgg__114->SetBinError(14,0.0001939174);
   ttH_LowRes_mgg__114->SetBinError(15,0.0001972707);
   ttH_LowRes_mgg__114->SetBinError(16,0.0001507889);
   ttH_LowRes_mgg__114->SetBinError(17,8.098662e-05);
   ttH_LowRes_mgg__114->SetBinError(18,5.914426e-05);
   ttH_LowRes_mgg__114->SetBinError(19,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(20,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(21,3.621832e-05);
   ttH_LowRes_mgg__114->SetBinError(23,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(24,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(25,4.675765e-05);
   ttH_LowRes_mgg__114->SetBinError(26,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(27,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(28,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(29,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(31,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(32,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(33,2.957213e-05);
   ttH_LowRes_mgg__114->SetBinError(34,2.091066e-05);
   ttH_LowRes_mgg__114->SetBinError(37,2.091066e-05);
   ttH_LowRes_mgg__114->SetEntries(379);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mgg__114->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mgg__114->SetLineColor(ci);
   ttH_LowRes_mgg__114->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_mgg__114->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_mgg__114->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_mgg__114->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_mgg__114->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_mgg__114->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_mgg__114->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_mgg__114->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_mgg__114->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_mgg__114->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_mgg__114->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_mgg__114->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_LowRes_mgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_LowRes_mgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_LowRes_mgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_LowRes_mgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_LowRes_mgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_LowRes_mgg","t#bar{t}H + jets","f");

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
