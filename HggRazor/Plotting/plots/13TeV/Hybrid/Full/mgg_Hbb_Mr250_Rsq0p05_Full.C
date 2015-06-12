void mgg_Hbb_Mr250_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:15:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.0605473,163.4337,0.4440135);
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
   hs->SetMaximum(0.3892326);
   
   TH1F *hs_stack_7 = new TH1F("hs_stack_7","",38,103,160);
   hs_stack_7->SetMinimum(0);
   hs_stack_7->SetMaximum(0.4086943);
   hs_stack_7->SetDirectory(0);
   hs_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_7->SetLineColor(ci);
   hs_stack_7->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   hs_stack_7->GetXaxis()->SetRange(1,38);
   hs_stack_7->GetXaxis()->SetLabelFont(42);
   hs_stack_7->GetXaxis()->SetLabelSize(0.035);
   hs_stack_7->GetXaxis()->SetTitleSize(0.06);
   hs_stack_7->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_7->GetXaxis()->SetTitleFont(42);
   hs_stack_7->GetYaxis()->SetTitle("events / 1.5 (GeV)");
   hs_stack_7->GetYaxis()->SetLabelFont(42);
   hs_stack_7->GetYaxis()->SetLabelSize(0.035);
   hs_stack_7->GetYaxis()->SetTitleSize(0.06);
   hs_stack_7->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_7->GetYaxis()->SetTitleFont(42);
   hs_stack_7->GetZaxis()->SetLabelFont(42);
   hs_stack_7->GetZaxis()->SetLabelSize(0.035);
   hs_stack_7->GetZaxis()->SetTitleSize(0.035);
   hs_stack_7->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_7);
   
   
   TH1F *gammaJet_Hbb_mgg__37 = new TH1F("gammaJet_Hbb_mgg__37","mgg",38,103,160);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_mgg__37->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_mgg__37->SetLineColor(ci);
   gammaJet_Hbb_mgg__37->GetXaxis()->SetLabelFont(42);
   gammaJet_Hbb_mgg__37->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_mgg__37->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_mgg__37->GetXaxis()->SetTitleFont(42);
   gammaJet_Hbb_mgg__37->GetYaxis()->SetLabelFont(42);
   gammaJet_Hbb_mgg__37->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_mgg__37->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_mgg__37->GetYaxis()->SetTitleFont(42);
   gammaJet_Hbb_mgg__37->GetZaxis()->SetLabelFont(42);
   gammaJet_Hbb_mgg__37->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_mgg__37->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_mgg__37->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Hbb_mgg,"histo");
   
   TH1F *diphoton_Hbb_mgg__38 = new TH1F("diphoton_Hbb_mgg__38","mgg",38,103,160);
   diphoton_Hbb_mgg__38->SetBinContent(14,0.1921166);
   diphoton_Hbb_mgg__38->SetBinContent(37,0.1921166);
   diphoton_Hbb_mgg__38->SetBinError(14,0.1921166);
   diphoton_Hbb_mgg__38->SetBinError(37,0.1921166);
   diphoton_Hbb_mgg__38->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_mgg__38->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_mgg__38->SetLineColor(ci);
   diphoton_Hbb_mgg__38->GetXaxis()->SetLabelFont(42);
   diphoton_Hbb_mgg__38->GetXaxis()->SetLabelSize(0.035);
   diphoton_Hbb_mgg__38->GetXaxis()->SetTitleSize(0.035);
   diphoton_Hbb_mgg__38->GetXaxis()->SetTitleFont(42);
   diphoton_Hbb_mgg__38->GetYaxis()->SetLabelFont(42);
   diphoton_Hbb_mgg__38->GetYaxis()->SetLabelSize(0.035);
   diphoton_Hbb_mgg__38->GetYaxis()->SetTitleSize(0.035);
   diphoton_Hbb_mgg__38->GetYaxis()->SetTitleFont(42);
   diphoton_Hbb_mgg__38->GetZaxis()->SetLabelFont(42);
   diphoton_Hbb_mgg__38->GetZaxis()->SetLabelSize(0.035);
   diphoton_Hbb_mgg__38->GetZaxis()->SetTitleSize(0.035);
   diphoton_Hbb_mgg__38->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Hbb_mgg,"histo");
   
   TH1F *ggH_Hbb_mgg__39 = new TH1F("ggH_Hbb_mgg__39","mgg",38,103,160);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mgg__39->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mgg__39->SetLineColor(ci);
   ggH_Hbb_mgg__39->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_mgg__39->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_mgg__39->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_mgg__39->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_mgg__39->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_mgg__39->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_mgg__39->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_mgg__39->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_mgg__39->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_mgg__39->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_mgg__39->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_mgg__39->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_mgg,"histo");
   
   TH1F *vbfH_Hbb_mgg__40 = new TH1F("vbfH_Hbb_mgg__40","mgg",38,103,160);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mgg__40->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mgg__40->SetLineColor(ci);
   vbfH_Hbb_mgg__40->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_mgg__40->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mgg__40->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mgg__40->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_mgg__40->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_mgg__40->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mgg__40->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mgg__40->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_mgg__40->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_mgg__40->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mgg__40->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mgg__40->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_mgg,"histo");
   
   TH1F *vH_Hbb_mgg__41 = new TH1F("vH_Hbb_mgg__41","mgg",38,103,160);
   vH_Hbb_mgg__41->SetBinContent(7,7.436967e-05);
   vH_Hbb_mgg__41->SetBinContent(14,0.0001487393);
   vH_Hbb_mgg__41->SetBinContent(15,7.436967e-05);
   vH_Hbb_mgg__41->SetBinError(7,7.436966e-05);
   vH_Hbb_mgg__41->SetBinError(14,0.0001051746);
   vH_Hbb_mgg__41->SetBinError(15,7.436966e-05);
   vH_Hbb_mgg__41->SetEntries(4);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mgg__41->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mgg__41->SetLineColor(ci);
   vH_Hbb_mgg__41->GetXaxis()->SetLabelFont(42);
   vH_Hbb_mgg__41->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_mgg__41->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_mgg__41->GetXaxis()->SetTitleFont(42);
   vH_Hbb_mgg__41->GetYaxis()->SetLabelFont(42);
   vH_Hbb_mgg__41->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_mgg__41->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_mgg__41->GetYaxis()->SetTitleFont(42);
   vH_Hbb_mgg__41->GetZaxis()->SetLabelFont(42);
   vH_Hbb_mgg__41->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_mgg__41->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_mgg__41->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_mgg,"histo");
   
   TH1F *ttH_Hbb_mgg__42 = new TH1F("ttH_Hbb_mgg__42","mgg",38,103,160);
   ttH_Hbb_mgg__42->SetBinContent(1,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(3,4.93203e-05);
   ttH_Hbb_mgg__42->SetBinContent(4,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(5,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(6,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(7,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(8,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(9,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(10,0.0001479609);
   ttH_Hbb_mgg__42->SetBinContent(11,0.0001972812);
   ttH_Hbb_mgg__42->SetBinContent(12,0.0002466015);
   ttH_Hbb_mgg__42->SetBinContent(13,0.0007562449);
   ttH_Hbb_mgg__42->SetBinContent(14,0.002350938);
   ttH_Hbb_mgg__42->SetBinContent(15,0.003699028);
   ttH_Hbb_mgg__42->SetBinContent(16,0.001265889);
   ttH_Hbb_mgg__42->SetBinContent(17,0.0001315208);
   ttH_Hbb_mgg__42->SetBinContent(18,6.57604e-05);
   ttH_Hbb_mgg__42->SetBinContent(19,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(20,4.93203e-05);
   ttH_Hbb_mgg__42->SetBinContent(21,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(24,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(26,8.22005e-05);
   ttH_Hbb_mgg__42->SetBinContent(28,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(29,4.93203e-05);
   ttH_Hbb_mgg__42->SetBinContent(30,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(32,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(33,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(34,6.57604e-05);
   ttH_Hbb_mgg__42->SetBinContent(35,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(36,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinContent(37,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinContent(38,4.93203e-05);
   ttH_Hbb_mgg__42->SetBinError(1,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(3,2.847509e-05);
   ttH_Hbb_mgg__42->SetBinError(4,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(5,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(6,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(7,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(8,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(9,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(10,4.93203e-05);
   ttH_Hbb_mgg__42->SetBinError(11,5.695018e-05);
   ttH_Hbb_mgg__42->SetBinError(12,6.367224e-05);
   ttH_Hbb_mgg__42->SetBinError(13,0.0001115022);
   ttH_Hbb_mgg__42->SetBinError(14,0.000196595);
   ttH_Hbb_mgg__42->SetBinError(15,0.0002466015);
   ttH_Hbb_mgg__42->SetBinError(16,0.0001442613);
   ttH_Hbb_mgg__42->SetBinError(17,4.649963e-05);
   ttH_Hbb_mgg__42->SetBinError(18,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinError(19,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(20,2.847509e-05);
   ttH_Hbb_mgg__42->SetBinError(21,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(24,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(26,3.676118e-05);
   ttH_Hbb_mgg__42->SetBinError(28,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(29,2.847509e-05);
   ttH_Hbb_mgg__42->SetBinError(30,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(32,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(33,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(34,3.28802e-05);
   ttH_Hbb_mgg__42->SetBinError(35,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(36,2.324981e-05);
   ttH_Hbb_mgg__42->SetBinError(37,1.64401e-05);
   ttH_Hbb_mgg__42->SetBinError(38,2.847509e-05);
   ttH_Hbb_mgg__42->SetEntries(587);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mgg__42->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mgg__42->SetLineColor(ci);
   ttH_Hbb_mgg__42->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_mgg__42->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_mgg__42->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_mgg__42->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_mgg__42->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_mgg__42->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_mgg__42->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_mgg__42->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_mgg__42->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_mgg__42->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_mgg__42->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_mgg__42->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Hbb_mgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Hbb_mgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Hbb_mgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_mgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_mgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_mgg","t#bar{t}H + jets","f");

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
