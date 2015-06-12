void mgg_HighRes_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:15 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.1244948,163.4337,0.9129619);
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
   hs->SetMaximum(0.8003238);
   
   TH1F *hs_stack_15 = new TH1F("hs_stack_15","",38,103,160);
   hs_stack_15->SetMinimum(0);
   hs_stack_15->SetMaximum(0.84034);
   hs_stack_15->SetDirectory(0);
   hs_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_15->SetLineColor(ci);
   hs_stack_15->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   hs_stack_15->GetXaxis()->SetRange(1,38);
   hs_stack_15->GetXaxis()->SetLabelFont(42);
   hs_stack_15->GetXaxis()->SetLabelSize(0.035);
   hs_stack_15->GetXaxis()->SetTitleSize(0.06);
   hs_stack_15->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_15->GetXaxis()->SetTitleFont(42);
   hs_stack_15->GetYaxis()->SetTitle("events / 1.5 (GeV)");
   hs_stack_15->GetYaxis()->SetLabelFont(42);
   hs_stack_15->GetYaxis()->SetLabelSize(0.035);
   hs_stack_15->GetYaxis()->SetTitleSize(0.06);
   hs_stack_15->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_15->GetYaxis()->SetTitleFont(42);
   hs_stack_15->GetZaxis()->SetLabelFont(42);
   hs_stack_15->GetZaxis()->SetLabelSize(0.035);
   hs_stack_15->GetZaxis()->SetTitleSize(0.035);
   hs_stack_15->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_15);
   
   
   TH1F *gammaJet_HighRes_mgg__85 = new TH1F("gammaJet_HighRes_mgg__85","mgg",38,103,160);
   gammaJet_HighRes_mgg__85->SetBinContent(9,0.1151994);
   gammaJet_HighRes_mgg__85->SetBinContent(17,0.1151994);
   gammaJet_HighRes_mgg__85->SetBinError(9,0.1151994);
   gammaJet_HighRes_mgg__85->SetBinError(17,0.1151994);
   gammaJet_HighRes_mgg__85->SetEntries(2);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_mgg__85->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_mgg__85->SetLineColor(ci);
   gammaJet_HighRes_mgg__85->GetXaxis()->SetLabelFont(42);
   gammaJet_HighRes_mgg__85->GetXaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_mgg__85->GetXaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_mgg__85->GetXaxis()->SetTitleFont(42);
   gammaJet_HighRes_mgg__85->GetYaxis()->SetLabelFont(42);
   gammaJet_HighRes_mgg__85->GetYaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_mgg__85->GetYaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_mgg__85->GetYaxis()->SetTitleFont(42);
   gammaJet_HighRes_mgg__85->GetZaxis()->SetLabelFont(42);
   gammaJet_HighRes_mgg__85->GetZaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_mgg__85->GetZaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_mgg__85->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_HighRes_mgg,"histo");
   
   TH1F *diphoton_HighRes_mgg__86 = new TH1F("diphoton_HighRes_mgg__86","mgg",38,103,160);
   diphoton_HighRes_mgg__86->SetBinContent(3,0.1921166);
   diphoton_HighRes_mgg__86->SetBinContent(4,0.1921166);
   diphoton_HighRes_mgg__86->SetBinContent(8,0.1921166);
   diphoton_HighRes_mgg__86->SetBinContent(14,0.1921166);
   diphoton_HighRes_mgg__86->SetBinContent(15,0.3842333);
   diphoton_HighRes_mgg__86->SetBinContent(18,0.1921166);
   diphoton_HighRes_mgg__86->SetBinContent(28,0.1921166);
   diphoton_HighRes_mgg__86->SetBinError(3,0.1921166);
   diphoton_HighRes_mgg__86->SetBinError(4,0.1921166);
   diphoton_HighRes_mgg__86->SetBinError(8,0.1921166);
   diphoton_HighRes_mgg__86->SetBinError(14,0.1921166);
   diphoton_HighRes_mgg__86->SetBinError(15,0.271694);
   diphoton_HighRes_mgg__86->SetBinError(18,0.1921166);
   diphoton_HighRes_mgg__86->SetBinError(28,0.1921166);
   diphoton_HighRes_mgg__86->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_mgg__86->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_mgg__86->SetLineColor(ci);
   diphoton_HighRes_mgg__86->GetXaxis()->SetLabelFont(42);
   diphoton_HighRes_mgg__86->GetXaxis()->SetLabelSize(0.035);
   diphoton_HighRes_mgg__86->GetXaxis()->SetTitleSize(0.035);
   diphoton_HighRes_mgg__86->GetXaxis()->SetTitleFont(42);
   diphoton_HighRes_mgg__86->GetYaxis()->SetLabelFont(42);
   diphoton_HighRes_mgg__86->GetYaxis()->SetLabelSize(0.035);
   diphoton_HighRes_mgg__86->GetYaxis()->SetTitleSize(0.035);
   diphoton_HighRes_mgg__86->GetYaxis()->SetTitleFont(42);
   diphoton_HighRes_mgg__86->GetZaxis()->SetLabelFont(42);
   diphoton_HighRes_mgg__86->GetZaxis()->SetLabelSize(0.035);
   diphoton_HighRes_mgg__86->GetZaxis()->SetTitleSize(0.035);
   diphoton_HighRes_mgg__86->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_HighRes_mgg,"histo");
   
   TH1F *ggH_HighRes_mgg__87 = new TH1F("ggH_HighRes_mgg__87","mgg",38,103,160);
   ggH_HighRes_mgg__87->SetBinContent(15,0.008664938);
   ggH_HighRes_mgg__87->SetBinContent(16,0.001444156);
   ggH_HighRes_mgg__87->SetBinContent(17,0.001444156);
   ggH_HighRes_mgg__87->SetBinError(15,0.003537446);
   ggH_HighRes_mgg__87->SetBinError(16,0.001444156);
   ggH_HighRes_mgg__87->SetBinError(17,0.001444156);
   ggH_HighRes_mgg__87->SetEntries(8);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mgg__87->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mgg__87->SetLineColor(ci);
   ggH_HighRes_mgg__87->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_mgg__87->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_mgg__87->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_mgg__87->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_mgg__87->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_mgg__87->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_mgg__87->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_mgg__87->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_mgg__87->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_mgg__87->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_mgg__87->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_mgg__87->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_mgg,"histo");
   
   TH1F *vbfH_HighRes_mgg__88 = new TH1F("vbfH_HighRes_mgg__88","mgg",38,103,160);
   vbfH_HighRes_mgg__88->SetBinContent(14,0.0003824523);
   vbfH_HighRes_mgg__88->SetBinContent(15,0.0005099364);
   vbfH_HighRes_mgg__88->SetBinContent(16,0.0002549682);
   vbfH_HighRes_mgg__88->SetBinError(14,0.000220809);
   vbfH_HighRes_mgg__88->SetBinError(15,0.0002549682);
   vbfH_HighRes_mgg__88->SetBinError(16,0.0001802898);
   vbfH_HighRes_mgg__88->SetEntries(9);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mgg__88->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mgg__88->SetLineColor(ci);
   vbfH_HighRes_mgg__88->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_mgg__88->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mgg__88->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mgg__88->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_mgg__88->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_mgg__88->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mgg__88->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mgg__88->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_mgg__88->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_mgg__88->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mgg__88->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mgg__88->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_mgg,"histo");
   
   TH1F *vH_HighRes_mgg__89 = new TH1F("vH_HighRes_mgg__89","mgg",38,103,160);
   vH_HighRes_mgg__89->SetBinContent(12,7.436967e-05);
   vH_HighRes_mgg__89->SetBinContent(13,7.436967e-05);
   vH_HighRes_mgg__89->SetBinContent(14,0.0002974787);
   vH_HighRes_mgg__89->SetBinContent(15,0.0009668058);
   vH_HighRes_mgg__89->SetBinContent(16,7.436967e-05);
   vH_HighRes_mgg__89->SetBinContent(18,7.436967e-05);
   vH_HighRes_mgg__89->SetBinError(12,7.436966e-05);
   vH_HighRes_mgg__89->SetBinError(13,7.436966e-05);
   vH_HighRes_mgg__89->SetBinError(14,0.0001487393);
   vH_HighRes_mgg__89->SetBinError(15,0.0002681436);
   vH_HighRes_mgg__89->SetBinError(16,7.436966e-05);
   vH_HighRes_mgg__89->SetBinError(18,7.436966e-05);
   vH_HighRes_mgg__89->SetEntries(21);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mgg__89->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mgg__89->SetLineColor(ci);
   vH_HighRes_mgg__89->GetXaxis()->SetLabelFont(42);
   vH_HighRes_mgg__89->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_mgg__89->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_mgg__89->GetXaxis()->SetTitleFont(42);
   vH_HighRes_mgg__89->GetYaxis()->SetLabelFont(42);
   vH_HighRes_mgg__89->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_mgg__89->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_mgg__89->GetYaxis()->SetTitleFont(42);
   vH_HighRes_mgg__89->GetZaxis()->SetLabelFont(42);
   vH_HighRes_mgg__89->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_mgg__89->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_mgg__89->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_mgg,"histo");
   
   TH1F *ttH_HighRes_mgg__90 = new TH1F("ttH_HighRes_mgg__90","mgg",38,103,160);
   ttH_HighRes_mgg__90->SetBinContent(2,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(3,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(4,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(7,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(8,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(9,6.57604e-05);
   ttH_HighRes_mgg__90->SetBinContent(10,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(11,0.0001315208);
   ttH_HighRes_mgg__90->SetBinContent(12,0.0001479609);
   ttH_HighRes_mgg__90->SetBinContent(13,0.0004274426);
   ttH_HighRes_mgg__90->SetBinContent(14,0.00263042);
   ttH_HighRes_mgg__90->SetBinContent(15,0.005786925);
   ttH_HighRes_mgg__90->SetBinContent(16,0.001200128);
   ttH_HighRes_mgg__90->SetBinContent(17,0.0001150807);
   ttH_HighRes_mgg__90->SetBinContent(18,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(19,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(20,6.57604e-05);
   ttH_HighRes_mgg__90->SetBinContent(22,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(24,4.93203e-05);
   ttH_HighRes_mgg__90->SetBinContent(25,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(27,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(28,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(30,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(31,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(32,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinContent(33,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(34,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(37,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinContent(38,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(2,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(3,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(4,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(7,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(8,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(9,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinError(10,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(11,4.649963e-05);
   ttH_HighRes_mgg__90->SetBinError(12,4.93203e-05);
   ttH_HighRes_mgg__90->SetBinError(13,8.382839e-05);
   ttH_HighRes_mgg__90->SetBinError(14,0.0002079527);
   ttH_HighRes_mgg__90->SetBinError(15,0.0003084436);
   ttH_HighRes_mgg__90->SetBinError(16,0.0001404643);
   ttH_HighRes_mgg__90->SetBinError(17,4.349642e-05);
   ttH_HighRes_mgg__90->SetBinError(18,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(19,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(20,3.28802e-05);
   ttH_HighRes_mgg__90->SetBinError(22,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(24,2.847509e-05);
   ttH_HighRes_mgg__90->SetBinError(25,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(27,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(28,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(30,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(31,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(32,2.324981e-05);
   ttH_HighRes_mgg__90->SetBinError(33,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(34,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(37,1.64401e-05);
   ttH_HighRes_mgg__90->SetBinError(38,1.64401e-05);
   ttH_HighRes_mgg__90->SetEntries(673);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mgg__90->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mgg__90->SetLineColor(ci);
   ttH_HighRes_mgg__90->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_mgg__90->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_mgg__90->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_mgg__90->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_mgg__90->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_mgg__90->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_mgg__90->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_mgg__90->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_mgg__90->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_mgg__90->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_mgg__90->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_mgg__90->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_HighRes_mgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_HighRes_mgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_HighRes_mgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_mgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_mgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_mgg","t#bar{t}H + jets","f");

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
