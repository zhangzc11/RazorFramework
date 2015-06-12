void mgg_Zbb_Mr350_Rsq0p035_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:18 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.0006802557,163.4337,0.004988542);
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
   hs->SetMaximum(0.004373073);
   
   TH1F *hs_stack_11 = new TH1F("hs_stack_11","",38,103,160);
   hs_stack_11->SetMinimum(0);
   hs_stack_11->SetMaximum(0.004591726);
   hs_stack_11->SetDirectory(0);
   hs_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_11->SetLineColor(ci);
   hs_stack_11->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   hs_stack_11->GetXaxis()->SetRange(1,38);
   hs_stack_11->GetXaxis()->SetLabelFont(42);
   hs_stack_11->GetXaxis()->SetLabelSize(0.035);
   hs_stack_11->GetXaxis()->SetTitleSize(0.06);
   hs_stack_11->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_11->GetXaxis()->SetTitleFont(42);
   hs_stack_11->GetYaxis()->SetTitle("events / 1.5 (GeV)");
   hs_stack_11->GetYaxis()->SetLabelFont(42);
   hs_stack_11->GetYaxis()->SetLabelSize(0.035);
   hs_stack_11->GetYaxis()->SetTitleSize(0.06);
   hs_stack_11->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_11->GetYaxis()->SetTitleFont(42);
   hs_stack_11->GetZaxis()->SetLabelFont(42);
   hs_stack_11->GetZaxis()->SetLabelSize(0.035);
   hs_stack_11->GetZaxis()->SetTitleSize(0.035);
   hs_stack_11->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_11);
   
   
   TH1F *gammaJet_Zbb_mgg__61 = new TH1F("gammaJet_Zbb_mgg__61","mgg",38,103,160);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_mgg__61->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_mgg__61->SetLineColor(ci);
   gammaJet_Zbb_mgg__61->GetXaxis()->SetLabelFont(42);
   gammaJet_Zbb_mgg__61->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_mgg__61->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_mgg__61->GetXaxis()->SetTitleFont(42);
   gammaJet_Zbb_mgg__61->GetYaxis()->SetLabelFont(42);
   gammaJet_Zbb_mgg__61->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_mgg__61->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_mgg__61->GetYaxis()->SetTitleFont(42);
   gammaJet_Zbb_mgg__61->GetZaxis()->SetLabelFont(42);
   gammaJet_Zbb_mgg__61->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_mgg__61->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_mgg__61->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Zbb_mgg,"histo");
   
   TH1F *diphoton_Zbb_mgg__62 = new TH1F("diphoton_Zbb_mgg__62","mgg",38,103,160);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_mgg__62->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_mgg__62->SetLineColor(ci);
   diphoton_Zbb_mgg__62->GetXaxis()->SetLabelFont(42);
   diphoton_Zbb_mgg__62->GetXaxis()->SetLabelSize(0.035);
   diphoton_Zbb_mgg__62->GetXaxis()->SetTitleSize(0.035);
   diphoton_Zbb_mgg__62->GetXaxis()->SetTitleFont(42);
   diphoton_Zbb_mgg__62->GetYaxis()->SetLabelFont(42);
   diphoton_Zbb_mgg__62->GetYaxis()->SetLabelSize(0.035);
   diphoton_Zbb_mgg__62->GetYaxis()->SetTitleSize(0.035);
   diphoton_Zbb_mgg__62->GetYaxis()->SetTitleFont(42);
   diphoton_Zbb_mgg__62->GetZaxis()->SetLabelFont(42);
   diphoton_Zbb_mgg__62->GetZaxis()->SetLabelSize(0.035);
   diphoton_Zbb_mgg__62->GetZaxis()->SetTitleSize(0.035);
   diphoton_Zbb_mgg__62->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Zbb_mgg,"histo");
   
   TH1F *ggH_Zbb_mgg__63 = new TH1F("ggH_Zbb_mgg__63","mgg",38,103,160);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mgg__63->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mgg__63->SetLineColor(ci);
   ggH_Zbb_mgg__63->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_mgg__63->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_mgg__63->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_mgg__63->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_mgg__63->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_mgg__63->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_mgg__63->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_mgg__63->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_mgg__63->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_mgg__63->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_mgg__63->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_mgg__63->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_mgg,"histo");
   
   TH1F *vbfH_Zbb_mgg__64 = new TH1F("vbfH_Zbb_mgg__64","mgg",38,103,160);
   vbfH_Zbb_mgg__64->SetBinContent(14,0.0001274841);
   vbfH_Zbb_mgg__64->SetBinError(14,0.0001274841);
   vbfH_Zbb_mgg__64->SetEntries(1);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mgg__64->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mgg__64->SetLineColor(ci);
   vbfH_Zbb_mgg__64->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_mgg__64->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mgg__64->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mgg__64->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_mgg__64->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_mgg__64->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mgg__64->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mgg__64->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_mgg__64->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_mgg__64->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mgg__64->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mgg__64->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_mgg,"histo");
   
   TH1F *vH_Zbb_mgg__65 = new TH1F("vH_Zbb_mgg__65","mgg",38,103,160);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mgg__65->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mgg__65->SetLineColor(ci);
   vH_Zbb_mgg__65->GetXaxis()->SetLabelFont(42);
   vH_Zbb_mgg__65->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_mgg__65->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_mgg__65->GetXaxis()->SetTitleFont(42);
   vH_Zbb_mgg__65->GetYaxis()->SetLabelFont(42);
   vH_Zbb_mgg__65->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_mgg__65->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_mgg__65->GetYaxis()->SetTitleFont(42);
   vH_Zbb_mgg__65->GetZaxis()->SetLabelFont(42);
   vH_Zbb_mgg__65->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_mgg__65->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_mgg__65->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_mgg,"histo");
   
   TH1F *ttH_Zbb_mgg__66 = new TH1F("ttH_Zbb_mgg__66","mgg",38,103,160);
   ttH_Zbb_mgg__66->SetBinContent(7,4.93203e-05);
   ttH_Zbb_mgg__66->SetBinContent(8,4.93203e-05);
   ttH_Zbb_mgg__66->SetBinContent(9,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinContent(10,3.28802e-05);
   ttH_Zbb_mgg__66->SetBinContent(11,4.93203e-05);
   ttH_Zbb_mgg__66->SetBinContent(12,9.86406e-05);
   ttH_Zbb_mgg__66->SetBinContent(13,0.0003452421);
   ttH_Zbb_mgg__66->SetBinContent(14,0.001216569);
   ttH_Zbb_mgg__66->SetBinContent(15,0.002186536);
   ttH_Zbb_mgg__66->SetBinContent(16,0.0007398048);
   ttH_Zbb_mgg__66->SetBinContent(17,6.57604e-05);
   ttH_Zbb_mgg__66->SetBinContent(18,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinContent(19,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinContent(22,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinContent(25,3.28802e-05);
   ttH_Zbb_mgg__66->SetBinContent(29,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinContent(31,3.28802e-05);
   ttH_Zbb_mgg__66->SetBinContent(33,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinContent(37,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(7,2.847509e-05);
   ttH_Zbb_mgg__66->SetBinError(8,2.847509e-05);
   ttH_Zbb_mgg__66->SetBinError(9,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(10,2.324981e-05);
   ttH_Zbb_mgg__66->SetBinError(11,2.847509e-05);
   ttH_Zbb_mgg__66->SetBinError(12,4.026986e-05);
   ttH_Zbb_mgg__66->SetBinError(13,7.533801e-05);
   ttH_Zbb_mgg__66->SetBinError(14,0.0001414231);
   ttH_Zbb_mgg__66->SetBinError(15,0.0001895965);
   ttH_Zbb_mgg__66->SetBinError(16,0.0001102835);
   ttH_Zbb_mgg__66->SetBinError(17,3.28802e-05);
   ttH_Zbb_mgg__66->SetBinError(18,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(19,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(22,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(25,2.324981e-05);
   ttH_Zbb_mgg__66->SetBinError(29,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(31,2.324981e-05);
   ttH_Zbb_mgg__66->SetBinError(33,1.64401e-05);
   ttH_Zbb_mgg__66->SetBinError(37,1.64401e-05);
   ttH_Zbb_mgg__66->SetEntries(305);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mgg__66->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mgg__66->SetLineColor(ci);
   ttH_Zbb_mgg__66->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_mgg__66->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_mgg__66->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_mgg__66->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_mgg__66->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_mgg__66->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_mgg__66->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_mgg__66->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_mgg__66->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_mgg__66->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_mgg__66->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_mgg__66->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Zbb_mgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Zbb_mgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Zbb_mgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Zbb_mgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Zbb_mgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Zbb_mgg","t#bar{t}H + jets","f");

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
