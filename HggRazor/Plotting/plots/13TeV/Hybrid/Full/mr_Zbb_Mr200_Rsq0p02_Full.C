void mr_Zbb_Mr200_Rsq0p02_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:47 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.577974,2147.47,1.010242);
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
   hs->SetMaximum(5.033185);
   
   TH1F *hs_stack_9 = new TH1F("hs_stack_9","",160,130,8130);
   hs_stack_9->SetMinimum(0.05402714);
   hs_stack_9->SetMaximum(6.746324);
   hs_stack_9->SetDirectory(0);
   hs_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_9->SetLineColor(ci);
   hs_stack_9->GetXaxis()->SetTitle("M_{R} (GeV)");
   hs_stack_9->GetXaxis()->SetRange(0,38);
   hs_stack_9->GetXaxis()->SetLabelFont(42);
   hs_stack_9->GetXaxis()->SetLabelSize(0.035);
   hs_stack_9->GetXaxis()->SetTitleSize(0.06);
   hs_stack_9->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_9->GetXaxis()->SetTitleFont(42);
   hs_stack_9->GetYaxis()->SetTitle("events / 50 (GeV)");
   hs_stack_9->GetYaxis()->SetLabelFont(42);
   hs_stack_9->GetYaxis()->SetLabelSize(0.035);
   hs_stack_9->GetYaxis()->SetTitleSize(0.06);
   hs_stack_9->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_9->GetYaxis()->SetTitleFont(42);
   hs_stack_9->GetZaxis()->SetLabelFont(42);
   hs_stack_9->GetZaxis()->SetLabelSize(0.035);
   hs_stack_9->GetZaxis()->SetTitleSize(0.035);
   hs_stack_9->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_9);
   
   
   TH1F *gammaJet_Zbb_mr__49 = new TH1F("gammaJet_Zbb_mr__49","mr",160,130,8130);
   gammaJet_Zbb_mr__49->SetBinContent(3,0.1151994);
   gammaJet_Zbb_mr__49->SetBinContent(4,0.1151994);
   gammaJet_Zbb_mr__49->SetBinContent(5,0.1151994);
   gammaJet_Zbb_mr__49->SetBinError(3,0.1151994);
   gammaJet_Zbb_mr__49->SetBinError(4,0.1151994);
   gammaJet_Zbb_mr__49->SetBinError(5,0.1151994);
   gammaJet_Zbb_mr__49->SetEntries(3);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_mr__49->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_mr__49->SetLineColor(ci);
   gammaJet_Zbb_mr__49->GetXaxis()->SetLabelFont(42);
   gammaJet_Zbb_mr__49->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_mr__49->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_mr__49->GetXaxis()->SetTitleFont(42);
   gammaJet_Zbb_mr__49->GetYaxis()->SetLabelFont(42);
   gammaJet_Zbb_mr__49->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_mr__49->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_mr__49->GetYaxis()->SetTitleFont(42);
   gammaJet_Zbb_mr__49->GetZaxis()->SetLabelFont(42);
   gammaJet_Zbb_mr__49->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_mr__49->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_mr__49->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Zbb_mr,"histo");
   
   TH1F *diphoton_Zbb_mr__50 = new TH1F("diphoton_Zbb_mr__50","mr",160,130,8130);
   diphoton_Zbb_mr__50->SetBinContent(2,0.3842333);
   diphoton_Zbb_mr__50->SetBinContent(4,0.3842333);
   diphoton_Zbb_mr__50->SetBinContent(6,0.1921166);
   diphoton_Zbb_mr__50->SetBinContent(8,0.1921166);
   diphoton_Zbb_mr__50->SetBinError(2,0.271694);
   diphoton_Zbb_mr__50->SetBinError(4,0.271694);
   diphoton_Zbb_mr__50->SetBinError(6,0.1921166);
   diphoton_Zbb_mr__50->SetBinError(8,0.1921166);
   diphoton_Zbb_mr__50->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_mr__50->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_mr__50->SetLineColor(ci);
   diphoton_Zbb_mr__50->GetXaxis()->SetLabelFont(42);
   diphoton_Zbb_mr__50->GetXaxis()->SetLabelSize(0.035);
   diphoton_Zbb_mr__50->GetXaxis()->SetTitleSize(0.035);
   diphoton_Zbb_mr__50->GetXaxis()->SetTitleFont(42);
   diphoton_Zbb_mr__50->GetYaxis()->SetLabelFont(42);
   diphoton_Zbb_mr__50->GetYaxis()->SetLabelSize(0.035);
   diphoton_Zbb_mr__50->GetYaxis()->SetTitleSize(0.035);
   diphoton_Zbb_mr__50->GetYaxis()->SetTitleFont(42);
   diphoton_Zbb_mr__50->GetZaxis()->SetLabelFont(42);
   diphoton_Zbb_mr__50->GetZaxis()->SetLabelSize(0.035);
   diphoton_Zbb_mr__50->GetZaxis()->SetTitleSize(0.035);
   diphoton_Zbb_mr__50->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Zbb_mr,"histo");
   
   TH1F *ggH_Zbb_mr__51 = new TH1F("ggH_Zbb_mr__51","mr",160,130,8130);
   ggH_Zbb_mr__51->SetBinContent(3,0.001444156);
   ggH_Zbb_mr__51->SetBinContent(4,0.001444156);
   ggH_Zbb_mr__51->SetBinError(3,0.001444156);
   ggH_Zbb_mr__51->SetBinError(4,0.001444156);
   ggH_Zbb_mr__51->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mr__51->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mr__51->SetLineColor(ci);
   ggH_Zbb_mr__51->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_mr__51->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_mr__51->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_mr__51->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_mr__51->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_mr__51->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_mr__51->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_mr__51->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_mr__51->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_mr__51->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_mr__51->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_mr__51->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_mr,"histo");
   
   TH1F *vbfH_Zbb_mr__52 = new TH1F("vbfH_Zbb_mr__52","mr",160,130,8130);
   vbfH_Zbb_mr__52->SetBinContent(5,0.0001274841);
   vbfH_Zbb_mr__52->SetBinContent(7,0.0001274841);
   vbfH_Zbb_mr__52->SetBinError(5,0.0001274841);
   vbfH_Zbb_mr__52->SetBinError(7,0.0001274841);
   vbfH_Zbb_mr__52->SetEntries(2);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mr__52->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mr__52->SetLineColor(ci);
   vbfH_Zbb_mr__52->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_mr__52->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mr__52->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mr__52->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_mr__52->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_mr__52->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mr__52->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mr__52->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_mr__52->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_mr__52->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mr__52->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mr__52->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_mr,"histo");
   
   TH1F *vH_Zbb_mr__53 = new TH1F("vH_Zbb_mr__53","mr",160,130,8130);
   vH_Zbb_mr__53->SetBinContent(2,0.0008180664);
   vH_Zbb_mr__53->SetBinContent(3,0.0003718483);
   vH_Zbb_mr__53->SetBinContent(4,7.436967e-05);
   vH_Zbb_mr__53->SetBinContent(5,0.0001487393);
   vH_Zbb_mr__53->SetBinContent(7,7.436967e-05);
   vH_Zbb_mr__53->SetBinContent(8,7.436967e-05);
   vH_Zbb_mr__53->SetBinContent(9,7.436967e-05);
   vH_Zbb_mr__53->SetBinError(2,0.0002466563);
   vH_Zbb_mr__53->SetBinError(3,0.0001662956);
   vH_Zbb_mr__53->SetBinError(4,7.436966e-05);
   vH_Zbb_mr__53->SetBinError(5,0.0001051746);
   vH_Zbb_mr__53->SetBinError(7,7.436966e-05);
   vH_Zbb_mr__53->SetBinError(8,7.436966e-05);
   vH_Zbb_mr__53->SetBinError(9,7.436966e-05);
   vH_Zbb_mr__53->SetEntries(22);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mr__53->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mr__53->SetLineColor(ci);
   vH_Zbb_mr__53->GetXaxis()->SetLabelFont(42);
   vH_Zbb_mr__53->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_mr__53->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_mr__53->GetXaxis()->SetTitleFont(42);
   vH_Zbb_mr__53->GetYaxis()->SetLabelFont(42);
   vH_Zbb_mr__53->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_mr__53->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_mr__53->GetYaxis()->SetTitleFont(42);
   vH_Zbb_mr__53->GetZaxis()->SetLabelFont(42);
   vH_Zbb_mr__53->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_mr__53->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_mr__53->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_mr,"histo");
   
   TH1F *ttH_Zbb_mr__54 = new TH1F("ttH_Zbb_mr__54","mr",160,130,8130);
   ttH_Zbb_mr__54->SetBinContent(2,0.001183688);
   ttH_Zbb_mr__54->SetBinContent(3,0.002597539);
   ttH_Zbb_mr__54->SetBinContent(4,0.002367378);
   ttH_Zbb_mr__54->SetBinContent(5,0.002153656);
   ttH_Zbb_mr__54->SetBinContent(6,0.001496051);
   ttH_Zbb_mr__54->SetBinContent(7,0.001019287);
   ttH_Zbb_mr__54->SetBinContent(8,0.0008220054);
   ttH_Zbb_mr__54->SetBinContent(9,0.0006576041);
   ttH_Zbb_mr__54->SetBinContent(10,0.000641164);
   ttH_Zbb_mr__54->SetBinContent(11,0.0005589634);
   ttH_Zbb_mr__54->SetBinContent(12,0.0002630416);
   ttH_Zbb_mr__54->SetBinContent(13,0.0002794817);
   ttH_Zbb_mr__54->SetBinContent(14,9.86406e-05);
   ttH_Zbb_mr__54->SetBinContent(15,9.86406e-05);
   ttH_Zbb_mr__54->SetBinContent(16,9.86406e-05);
   ttH_Zbb_mr__54->SetBinContent(17,4.93203e-05);
   ttH_Zbb_mr__54->SetBinContent(18,4.93203e-05);
   ttH_Zbb_mr__54->SetBinContent(19,3.28802e-05);
   ttH_Zbb_mr__54->SetBinContent(20,4.93203e-05);
   ttH_Zbb_mr__54->SetBinContent(21,1.64401e-05);
   ttH_Zbb_mr__54->SetBinContent(22,6.57604e-05);
   ttH_Zbb_mr__54->SetBinContent(23,1.64401e-05);
   ttH_Zbb_mr__54->SetBinContent(24,1.64401e-05);
   ttH_Zbb_mr__54->SetBinContent(43,1.64401e-05);
   ttH_Zbb_mr__54->SetBinContent(47,1.64401e-05);
   ttH_Zbb_mr__54->SetBinError(2,0.0001394989);
   ttH_Zbb_mr__54->SetBinError(3,0.0002066489);
   ttH_Zbb_mr__54->SetBinError(4,0.0001972812);
   ttH_Zbb_mr__54->SetBinError(5,0.0001881656);
   ttH_Zbb_mr__54->SetBinError(6,0.0001568286);
   ttH_Zbb_mr__54->SetBinError(7,0.0001294495);
   ttH_Zbb_mr__54->SetBinError(8,0.0001162491);
   ttH_Zbb_mr__54->SetBinError(9,0.0001039763);
   ttH_Zbb_mr__54->SetBinError(10,0.0001026684);
   ttH_Zbb_mr__54->SetBinError(11,9.586144e-05);
   ttH_Zbb_mr__54->SetBinError(12,6.57604e-05);
   ttH_Zbb_mr__54->SetBinError(13,6.778427e-05);
   ttH_Zbb_mr__54->SetBinError(14,4.026986e-05);
   ttH_Zbb_mr__54->SetBinError(15,4.026986e-05);
   ttH_Zbb_mr__54->SetBinError(16,4.026986e-05);
   ttH_Zbb_mr__54->SetBinError(17,2.847509e-05);
   ttH_Zbb_mr__54->SetBinError(18,2.847509e-05);
   ttH_Zbb_mr__54->SetBinError(19,2.324981e-05);
   ttH_Zbb_mr__54->SetBinError(20,2.847509e-05);
   ttH_Zbb_mr__54->SetBinError(21,1.64401e-05);
   ttH_Zbb_mr__54->SetBinError(22,3.28802e-05);
   ttH_Zbb_mr__54->SetBinError(23,1.64401e-05);
   ttH_Zbb_mr__54->SetBinError(24,1.64401e-05);
   ttH_Zbb_mr__54->SetBinError(43,1.64401e-05);
   ttH_Zbb_mr__54->SetBinError(47,1.64401e-05);
   ttH_Zbb_mr__54->SetEntries(892);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mr__54->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mr__54->SetLineColor(ci);
   ttH_Zbb_mr__54->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_mr__54->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_mr__54->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_mr__54->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_mr__54->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_mr__54->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_mr__54->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_mr__54->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_mr__54->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_mr__54->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_mr__54->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_mr__54->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Zbb_mr","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Zbb_mr","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Zbb_mr","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Zbb_mr","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Zbb_mr","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Zbb_mr","t#bar{t}H + jets","f");

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
