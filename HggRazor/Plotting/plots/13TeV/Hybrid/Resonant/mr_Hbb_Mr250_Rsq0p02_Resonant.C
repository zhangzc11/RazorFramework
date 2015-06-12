void mr_Hbb_Mr250_Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:03 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.043873,2147.47,-0.8697842);
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
   hs->SetMaximum(0.128437);
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5","",160,130,8130);
   hs_stack_5->SetMinimum(0.09484562);
   hs_stack_5->SetMaximum(0.1312289);
   hs_stack_5->SetDirectory(0);
   hs_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_5->SetLineColor(ci);
   hs_stack_5->GetXaxis()->SetTitle("M_{R} (GeV)");
   hs_stack_5->GetXaxis()->SetRange(0,38);
   hs_stack_5->GetXaxis()->SetLabelFont(42);
   hs_stack_5->GetXaxis()->SetLabelSize(0.035);
   hs_stack_5->GetXaxis()->SetTitleSize(0.06);
   hs_stack_5->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_5->GetXaxis()->SetTitleFont(42);
   hs_stack_5->GetYaxis()->SetTitle("events / 50 (GeV)");
   hs_stack_5->GetYaxis()->SetLabelFont(42);
   hs_stack_5->GetYaxis()->SetLabelSize(0.035);
   hs_stack_5->GetYaxis()->SetTitleSize(0.06);
   hs_stack_5->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_5->GetYaxis()->SetTitleFont(42);
   hs_stack_5->GetZaxis()->SetLabelFont(42);
   hs_stack_5->GetZaxis()->SetLabelSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_5);
   
   
   TH1F *ggH_Hbb_mr__17 = new TH1F("ggH_Hbb_mr__17","mr",160,130,8130);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mr__17->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mr__17->SetLineColor(ci);
   ggH_Hbb_mr__17->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_mr__17->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_mr__17->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_mr__17->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_mr__17->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_mr__17->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_mr__17->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_mr__17->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_mr__17->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_mr__17->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_mr__17->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_mr__17->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_mr,"histo");
   
   TH1F *vbfH_Hbb_mr__18 = new TH1F("vbfH_Hbb_mr__18","mr",160,130,8130);
   vbfH_Hbb_mr__18->SetBinContent(4,0.0004420086);
   vbfH_Hbb_mr__18->SetBinError(4,0.0004420086);
   vbfH_Hbb_mr__18->SetEntries(1);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mr__18->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mr__18->SetLineColor(ci);
   vbfH_Hbb_mr__18->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_mr__18->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mr__18->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mr__18->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_mr__18->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_mr__18->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mr__18->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mr__18->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_mr__18->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_mr__18->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mr__18->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mr__18->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_mr,"histo");
   
   TH1F *vH_Hbb_mr__19 = new TH1F("vH_Hbb_mr__19","mr",160,130,8130);
   vH_Hbb_mr__19->SetBinContent(3,0.0007735559);
   vH_Hbb_mr__19->SetBinContent(4,0.0007735559);
   vH_Hbb_mr__19->SetBinContent(5,0.000257852);
   vH_Hbb_mr__19->SetBinError(3,0.0004466127);
   vH_Hbb_mr__19->SetBinError(4,0.0004466127);
   vH_Hbb_mr__19->SetBinError(5,0.000257852);
   vH_Hbb_mr__19->SetEntries(7);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mr__19->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mr__19->SetLineColor(ci);
   vH_Hbb_mr__19->GetXaxis()->SetLabelFont(42);
   vH_Hbb_mr__19->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_mr__19->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_mr__19->GetXaxis()->SetTitleFont(42);
   vH_Hbb_mr__19->GetYaxis()->SetLabelFont(42);
   vH_Hbb_mr__19->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_mr__19->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_mr__19->GetYaxis()->SetTitleFont(42);
   vH_Hbb_mr__19->GetZaxis()->SetLabelFont(42);
   vH_Hbb_mr__19->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_mr__19->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_mr__19->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_mr,"histo");
   
   TH1F *ttH_Hbb_mr__20 = new TH1F("ttH_Hbb_mr__20","mr",160,130,8130);
   ttH_Hbb_mr__20->SetBinContent(3,0.007410083);
   ttH_Hbb_mr__20->SetBinContent(4,0.01162813);
   ttH_Hbb_mr__20->SetBinContent(5,0.01020311);
   ttH_Hbb_mr__20->SetBinContent(6,0.007638085);
   ttH_Hbb_mr__20->SetBinContent(7,0.005871064);
   ttH_Hbb_mr__20->SetBinContent(8,0.004047043);
   ttH_Hbb_mr__20->SetBinContent(9,0.003705039);
   ttH_Hbb_mr__20->SetBinContent(10,0.002394024);
   ttH_Hbb_mr__20->SetBinContent(11,0.001482014);
   ttH_Hbb_mr__20->SetBinContent(12,0.001482014);
   ttH_Hbb_mr__20->SetBinContent(13,0.001140011);
   ttH_Hbb_mr__20->SetBinContent(14,0.00102601);
   ttH_Hbb_mr__20->SetBinContent(15,0.0007980078);
   ttH_Hbb_mr__20->SetBinContent(16,0.0003990039);
   ttH_Hbb_mr__20->SetBinContent(17,0.0001710017);
   ttH_Hbb_mr__20->SetBinContent(18,0.0001710017);
   ttH_Hbb_mr__20->SetBinContent(19,0.0001710017);
   ttH_Hbb_mr__20->SetBinContent(20,5.700056e-05);
   ttH_Hbb_mr__20->SetBinContent(21,0.0002280022);
   ttH_Hbb_mr__20->SetBinContent(22,0.0001710017);
   ttH_Hbb_mr__20->SetBinContent(23,5.700056e-05);
   ttH_Hbb_mr__20->SetBinContent(26,0.0001140011);
   ttH_Hbb_mr__20->SetBinError(3,0.0006499064);
   ttH_Hbb_mr__20->SetBinError(4,0.0008141308);
   ttH_Hbb_mr__20->SetBinError(5,0.0007626155);
   ttH_Hbb_mr__20->SetBinError(6,0.0006598292);
   ttH_Hbb_mr__20->SetBinError(7,0.0005784925);
   ttH_Hbb_mr__20->SetBinError(8,0.0004802952);
   ttH_Hbb_mr__20->SetBinError(9,0.0004595532);
   ttH_Hbb_mr__20->SetBinError(10,0.0003694058);
   ttH_Hbb_mr__20->SetBinError(11,0.000290647);
   ttH_Hbb_mr__20->SetBinError(12,0.000290647);
   ttH_Hbb_mr__20->SetBinError(13,0.0002549142);
   ttH_Hbb_mr__20->SetBinError(14,0.0002418329);
   ttH_Hbb_mr__20->SetBinError(15,0.0002132766);
   ttH_Hbb_mr__20->SetBinError(16,0.0001508093);
   ttH_Hbb_mr__20->SetBinError(17,9.872786e-05);
   ttH_Hbb_mr__20->SetBinError(18,9.872786e-05);
   ttH_Hbb_mr__20->SetBinError(19,9.872786e-05);
   ttH_Hbb_mr__20->SetBinError(20,5.700056e-05);
   ttH_Hbb_mr__20->SetBinError(21,0.0001140011);
   ttH_Hbb_mr__20->SetBinError(22,9.872786e-05);
   ttH_Hbb_mr__20->SetBinError(23,5.700056e-05);
   ttH_Hbb_mr__20->SetBinError(26,8.061096e-05);
   ttH_Hbb_mr__20->SetEntries(1059);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mr__20->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mr__20->SetLineColor(ci);
   ttH_Hbb_mr__20->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_mr__20->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_mr__20->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_mr__20->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_mr__20->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_mr__20->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_mr__20->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_mr__20->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_mr__20->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_mr__20->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_mr__20->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_mr__20->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Hbb_mr","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_mr","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_mr","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_mr","t#bar{t}H + jets","f");

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
