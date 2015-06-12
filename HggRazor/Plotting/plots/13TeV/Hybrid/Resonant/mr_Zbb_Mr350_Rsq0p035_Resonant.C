void mr_Zbb_Mr350_Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-4.85476,2147.47,-1.151056);
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
   hs->SetMaximum(0.04204049);
   
   TH1F *hs_stack_9 = new TH1F("hs_stack_9","",160,130,8130);
   hs_stack_9->SetMinimum(0.1231779);
   hs_stack_9->SetMaximum(0.03887625);
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
   
   
   TH1F *ggH_Zbb_mr__33 = new TH1F("ggH_Zbb_mr__33","mr",160,130,8130);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mr__33->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mr__33->SetLineColor(ci);
   ggH_Zbb_mr__33->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_mr__33->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_mr__33->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_mr__33->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_mr__33->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_mr__33->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_mr__33->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_mr__33->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_mr__33->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_mr__33->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_mr__33->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_mr__33->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_mr,"histo");
   
   TH1F *vbfH_Zbb_mr__34 = new TH1F("vbfH_Zbb_mr__34","mr",160,130,8130);
   vbfH_Zbb_mr__34->SetBinContent(5,0.0004420086);
   vbfH_Zbb_mr__34->SetBinError(5,0.0004420086);
   vbfH_Zbb_mr__34->SetEntries(1);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mr__34->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mr__34->SetLineColor(ci);
   vbfH_Zbb_mr__34->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_mr__34->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mr__34->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mr__34->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_mr__34->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_mr__34->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mr__34->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mr__34->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_mr__34->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_mr__34->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mr__34->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mr__34->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_mr,"histo");
   
   TH1F *vH_Zbb_mr__35 = new TH1F("vH_Zbb_mr__35","mr",160,130,8130);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mr__35->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mr__35->SetLineColor(ci);
   vH_Zbb_mr__35->GetXaxis()->SetLabelFont(42);
   vH_Zbb_mr__35->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_mr__35->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_mr__35->GetXaxis()->SetTitleFont(42);
   vH_Zbb_mr__35->GetYaxis()->SetLabelFont(42);
   vH_Zbb_mr__35->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_mr__35->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_mr__35->GetYaxis()->SetTitleFont(42);
   vH_Zbb_mr__35->GetZaxis()->SetLabelFont(42);
   vH_Zbb_mr__35->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_mr__35->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_mr__35->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_mr,"histo");
   
   TH1F *ttH_Zbb_mr__36 = new TH1F("ttH_Zbb_mr__36","mr",160,130,8130);
   ttH_Zbb_mr__36->SetBinContent(5,0.00376204);
   ttH_Zbb_mr__36->SetBinContent(6,0.003876041);
   ttH_Zbb_mr__36->SetBinContent(7,0.002280023);
   ttH_Zbb_mr__36->SetBinContent(8,0.00205202);
   ttH_Zbb_mr__36->SetBinContent(9,0.001140011);
   ttH_Zbb_mr__36->SetBinContent(10,0.001254012);
   ttH_Zbb_mr__36->SetBinContent(11,0.00102601);
   ttH_Zbb_mr__36->SetBinContent(12,0.0003990039);
   ttH_Zbb_mr__36->SetBinContent(13,0.0005700056);
   ttH_Zbb_mr__36->SetBinContent(14,0.0002850028);
   ttH_Zbb_mr__36->SetBinContent(15,0.0001140011);
   ttH_Zbb_mr__36->SetBinContent(16,0.0001140011);
   ttH_Zbb_mr__36->SetBinContent(17,5.700056e-05);
   ttH_Zbb_mr__36->SetBinContent(18,5.700056e-05);
   ttH_Zbb_mr__36->SetBinContent(19,5.700056e-05);
   ttH_Zbb_mr__36->SetBinContent(20,5.700056e-05);
   ttH_Zbb_mr__36->SetBinContent(22,0.0001710017);
   ttH_Zbb_mr__36->SetBinContent(23,5.700056e-05);
   ttH_Zbb_mr__36->SetBinContent(24,5.700056e-05);
   ttH_Zbb_mr__36->SetBinError(5,0.0004630747);
   ttH_Zbb_mr__36->SetBinError(6,0.0004700386);
   ttH_Zbb_mr__36->SetBinError(7,0.0003605032);
   ttH_Zbb_mr__36->SetBinError(8,0.0003420033);
   ttH_Zbb_mr__36->SetBinError(9,0.0002549142);
   ttH_Zbb_mr__36->SetBinError(10,0.0002673563);
   ttH_Zbb_mr__36->SetBinError(11,0.0002418329);
   ttH_Zbb_mr__36->SetBinError(12,0.0001508093);
   ttH_Zbb_mr__36->SetBinError(13,0.0001802516);
   ttH_Zbb_mr__36->SetBinError(14,0.0001274571);
   ttH_Zbb_mr__36->SetBinError(15,8.061096e-05);
   ttH_Zbb_mr__36->SetBinError(16,8.061096e-05);
   ttH_Zbb_mr__36->SetBinError(17,5.700056e-05);
   ttH_Zbb_mr__36->SetBinError(18,5.700056e-05);
   ttH_Zbb_mr__36->SetBinError(19,5.700056e-05);
   ttH_Zbb_mr__36->SetBinError(20,5.700056e-05);
   ttH_Zbb_mr__36->SetBinError(22,9.872786e-05);
   ttH_Zbb_mr__36->SetBinError(23,5.700056e-05);
   ttH_Zbb_mr__36->SetBinError(24,5.700056e-05);
   ttH_Zbb_mr__36->SetEntries(305);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mr__36->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mr__36->SetLineColor(ci);
   ttH_Zbb_mr__36->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_mr__36->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_mr__36->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_mr__36->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_mr__36->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_mr__36->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_mr__36->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_mr__36->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_mr__36->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_mr__36->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_mr__36->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_mr__36->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Zbb_mr","ggH + jets","f");

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
