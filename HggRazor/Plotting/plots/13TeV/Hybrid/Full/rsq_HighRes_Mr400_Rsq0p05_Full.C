void rsq_HighRes_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:15 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.694123,1.060241,1.48434);
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
   hs->SetMaximum(12.85313);
   
   TH1F *hs_stack_14 = new TH1F("hs_stack_14","",125,0,5);
   hs_stack_14->SetMinimum(0.04867354);
   hs_stack_14->SetMaximum(18.2746);
   hs_stack_14->SetDirectory(0);
   hs_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_14->SetLineColor(ci);
   hs_stack_14->GetXaxis()->SetTitle("R^{2}");
   hs_stack_14->GetXaxis()->SetRange(1,25);
   hs_stack_14->GetXaxis()->SetLabelFont(42);
   hs_stack_14->GetXaxis()->SetLabelSize(0.035);
   hs_stack_14->GetXaxis()->SetTitleSize(0.06);
   hs_stack_14->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_14->GetXaxis()->SetTitleFont(42);
   hs_stack_14->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_14->GetYaxis()->SetLabelFont(42);
   hs_stack_14->GetYaxis()->SetLabelSize(0.035);
   hs_stack_14->GetYaxis()->SetTitleSize(0.06);
   hs_stack_14->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_14->GetYaxis()->SetTitleFont(42);
   hs_stack_14->GetZaxis()->SetLabelFont(42);
   hs_stack_14->GetZaxis()->SetLabelSize(0.035);
   hs_stack_14->GetZaxis()->SetTitleSize(0.035);
   hs_stack_14->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_14);
   
   
   TH1F *gammaJet_HighRes_rsq__79 = new TH1F("gammaJet_HighRes_rsq__79","rsq",125,0,5);
   gammaJet_HighRes_rsq__79->SetBinContent(2,0.1151994);
   gammaJet_HighRes_rsq__79->SetBinContent(3,0.1151994);
   gammaJet_HighRes_rsq__79->SetBinError(2,0.1151994);
   gammaJet_HighRes_rsq__79->SetBinError(3,0.1151994);
   gammaJet_HighRes_rsq__79->SetEntries(2);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_rsq__79->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_rsq__79->SetLineColor(ci);
   gammaJet_HighRes_rsq__79->GetXaxis()->SetLabelFont(42);
   gammaJet_HighRes_rsq__79->GetXaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_rsq__79->GetXaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_rsq__79->GetXaxis()->SetTitleFont(42);
   gammaJet_HighRes_rsq__79->GetYaxis()->SetLabelFont(42);
   gammaJet_HighRes_rsq__79->GetYaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_rsq__79->GetYaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_rsq__79->GetYaxis()->SetTitleFont(42);
   gammaJet_HighRes_rsq__79->GetZaxis()->SetLabelFont(42);
   gammaJet_HighRes_rsq__79->GetZaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_rsq__79->GetZaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_rsq__79->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_HighRes_rsq,"histo");
   
   TH1F *diphoton_HighRes_rsq__80 = new TH1F("diphoton_HighRes_rsq__80","rsq",125,0,5);
   diphoton_HighRes_rsq__80->SetBinContent(2,1.1527);
   diphoton_HighRes_rsq__80->SetBinContent(3,0.3842333);
   diphoton_HighRes_rsq__80->SetBinError(2,0.4705877);
   diphoton_HighRes_rsq__80->SetBinError(3,0.271694);
   diphoton_HighRes_rsq__80->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_rsq__80->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_rsq__80->SetLineColor(ci);
   diphoton_HighRes_rsq__80->GetXaxis()->SetLabelFont(42);
   diphoton_HighRes_rsq__80->GetXaxis()->SetLabelSize(0.035);
   diphoton_HighRes_rsq__80->GetXaxis()->SetTitleSize(0.035);
   diphoton_HighRes_rsq__80->GetXaxis()->SetTitleFont(42);
   diphoton_HighRes_rsq__80->GetYaxis()->SetLabelFont(42);
   diphoton_HighRes_rsq__80->GetYaxis()->SetLabelSize(0.035);
   diphoton_HighRes_rsq__80->GetYaxis()->SetTitleSize(0.035);
   diphoton_HighRes_rsq__80->GetYaxis()->SetTitleFont(42);
   diphoton_HighRes_rsq__80->GetZaxis()->SetLabelFont(42);
   diphoton_HighRes_rsq__80->GetZaxis()->SetLabelSize(0.035);
   diphoton_HighRes_rsq__80->GetZaxis()->SetTitleSize(0.035);
   diphoton_HighRes_rsq__80->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_HighRes_rsq,"histo");
   
   TH1F *ggH_HighRes_rsq__81 = new TH1F("ggH_HighRes_rsq__81","rsq",125,0,5);
   ggH_HighRes_rsq__81->SetBinContent(2,0.01010909);
   ggH_HighRes_rsq__81->SetBinContent(4,0.001444156);
   ggH_HighRes_rsq__81->SetBinError(2,0.003820879);
   ggH_HighRes_rsq__81->SetBinError(4,0.001444156);
   ggH_HighRes_rsq__81->SetEntries(8);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_rsq__81->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_rsq__81->SetLineColor(ci);
   ggH_HighRes_rsq__81->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_rsq__81->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_rsq__81->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_rsq__81->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_rsq__81->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_rsq__81->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_rsq__81->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_rsq__81->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_rsq__81->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_rsq__81->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_rsq__81->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_rsq__81->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_rsq,"histo");
   
   TH1F *vbfH_HighRes_rsq__82 = new TH1F("vbfH_HighRes_rsq__82","rsq",125,0,5);
   vbfH_HighRes_rsq__82->SetBinContent(2,0.001019873);
   vbfH_HighRes_rsq__82->SetBinContent(3,0.0001274841);
   vbfH_HighRes_rsq__82->SetBinError(2,0.0003605795);
   vbfH_HighRes_rsq__82->SetBinError(3,0.0001274841);
   vbfH_HighRes_rsq__82->SetEntries(9);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_rsq__82->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_rsq__82->SetLineColor(ci);
   vbfH_HighRes_rsq__82->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_rsq__82->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_rsq__82->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_rsq__82->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_rsq__82->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_rsq__82->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_rsq__82->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_rsq__82->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_rsq__82->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_rsq__82->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_rsq__82->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_rsq__82->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_rsq,"histo");
   
   TH1F *vH_HighRes_rsq__83 = new TH1F("vH_HighRes_rsq__83","rsq",125,0,5);
   vH_HighRes_rsq__83->SetBinContent(2,0.0008924361);
   vH_HighRes_rsq__83->SetBinContent(3,0.0001487393);
   vH_HighRes_rsq__83->SetBinContent(5,0.000223109);
   vH_HighRes_rsq__83->SetBinContent(6,0.0001487393);
   vH_HighRes_rsq__83->SetBinContent(7,7.436967e-05);
   vH_HighRes_rsq__83->SetBinContent(12,7.436967e-05);
   vH_HighRes_rsq__83->SetBinError(2,0.0002576241);
   vH_HighRes_rsq__83->SetBinError(3,0.0001051746);
   vH_HighRes_rsq__83->SetBinError(5,0.000128812);
   vH_HighRes_rsq__83->SetBinError(6,0.0001051746);
   vH_HighRes_rsq__83->SetBinError(7,7.436966e-05);
   vH_HighRes_rsq__83->SetBinError(12,7.436966e-05);
   vH_HighRes_rsq__83->SetEntries(21);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_rsq__83->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_rsq__83->SetLineColor(ci);
   vH_HighRes_rsq__83->GetXaxis()->SetLabelFont(42);
   vH_HighRes_rsq__83->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_rsq__83->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_rsq__83->GetXaxis()->SetTitleFont(42);
   vH_HighRes_rsq__83->GetYaxis()->SetLabelFont(42);
   vH_HighRes_rsq__83->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_rsq__83->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_rsq__83->GetYaxis()->SetTitleFont(42);
   vH_HighRes_rsq__83->GetZaxis()->SetLabelFont(42);
   vH_HighRes_rsq__83->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_rsq__83->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_rsq__83->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_rsq,"histo");
   
   TH1F *ttH_HighRes_rsq__84 = new TH1F("ttH_HighRes_rsq__84","rsq",125,0,5);
   ttH_HighRes_rsq__84->SetBinContent(2,0.005392362);
   ttH_HighRes_rsq__84->SetBinContent(3,0.002334497);
   ttH_HighRes_rsq__84->SetBinContent(4,0.00143029);
   ttH_HighRes_rsq__84->SetBinContent(5,0.0007398048);
   ttH_HighRes_rsq__84->SetBinContent(6,0.0003616822);
   ttH_HighRes_rsq__84->SetBinContent(7,0.0002301614);
   ttH_HighRes_rsq__84->SetBinContent(8,0.0002137213);
   ttH_HighRes_rsq__84->SetBinContent(9,0.0001808411);
   ttH_HighRes_rsq__84->SetBinContent(10,3.28802e-05);
   ttH_HighRes_rsq__84->SetBinContent(11,8.22005e-05);
   ttH_HighRes_rsq__84->SetBinContent(13,1.64401e-05);
   ttH_HighRes_rsq__84->SetBinContent(15,3.28802e-05);
   ttH_HighRes_rsq__84->SetBinContent(16,1.64401e-05);
   ttH_HighRes_rsq__84->SetBinError(2,0.0002977429);
   ttH_HighRes_rsq__84->SetBinError(3,0.0001959064);
   ttH_HighRes_rsq__84->SetBinError(4,0.0001533431);
   ttH_HighRes_rsq__84->SetBinError(5,0.0001102835);
   ttH_HighRes_rsq__84->SetBinError(6,7.711091e-05);
   ttH_HighRes_rsq__84->SetBinError(7,6.151322e-05);
   ttH_HighRes_rsq__84->SetBinError(8,5.927563e-05);
   ttH_HighRes_rsq__84->SetBinError(9,5.452565e-05);
   ttH_HighRes_rsq__84->SetBinError(10,2.324981e-05);
   ttH_HighRes_rsq__84->SetBinError(11,3.676118e-05);
   ttH_HighRes_rsq__84->SetBinError(13,1.64401e-05);
   ttH_HighRes_rsq__84->SetBinError(15,2.324981e-05);
   ttH_HighRes_rsq__84->SetBinError(16,1.64401e-05);
   ttH_HighRes_rsq__84->SetEntries(673);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_rsq__84->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_rsq__84->SetLineColor(ci);
   ttH_HighRes_rsq__84->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_rsq__84->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_rsq__84->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_rsq__84->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_rsq__84->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_rsq__84->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_rsq__84->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_rsq__84->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_rsq__84->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_rsq__84->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_rsq__84->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_rsq__84->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_HighRes_rsq","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_HighRes_rsq","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_HighRes_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_rsq","t#bar{t}H + jets","f");

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
