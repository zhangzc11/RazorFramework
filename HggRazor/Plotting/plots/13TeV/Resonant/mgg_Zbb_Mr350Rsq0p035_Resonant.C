void mgg_Zbb_Mr350Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:16:09 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.001481169,163.4337,0.01086191);
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
   hs->SetMaximum(0.009521801);
   
   TH1F *hs_stack_11 = new TH1F("hs_stack_11","",38,103,160);
   hs_stack_11->SetMinimum(0);
   hs_stack_11->SetMaximum(0.009997891);
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
   
   
   TH1F *ggH_Zbb_mgg__41 = new TH1F("ggH_Zbb_mgg__41","mgg",38,103,160);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mgg__41->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_mgg__41->SetLineColor(ci);
   ggH_Zbb_mgg__41->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_mgg__41->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_mgg__41->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_mgg__41->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_mgg__41->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_mgg__41->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_mgg__41->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_mgg__41->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_mgg__41->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_mgg__41->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_mgg__41->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_mgg__41->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_mgg,"histo");
   
   TH1F *vbfH_Zbb_mgg__42 = new TH1F("vbfH_Zbb_mgg__42","mgg",38,103,160);
   vbfH_Zbb_mgg__42->SetBinContent(14,0.0004420086);
   vbfH_Zbb_mgg__42->SetBinError(14,0.0004420086);
   vbfH_Zbb_mgg__42->SetEntries(1);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mgg__42->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_mgg__42->SetLineColor(ci);
   vbfH_Zbb_mgg__42->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_mgg__42->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mgg__42->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mgg__42->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_mgg__42->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_mgg__42->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mgg__42->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mgg__42->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_mgg__42->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_mgg__42->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_mgg__42->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_mgg__42->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_mgg,"histo");
   
   TH1F *vH_Zbb_mgg__43 = new TH1F("vH_Zbb_mgg__43","mgg",38,103,160);
   vH_Zbb_mgg__43->SetBinContent(14,0.000257852);
   vH_Zbb_mgg__43->SetBinContent(15,0.000257852);
   vH_Zbb_mgg__43->SetBinError(14,0.000257852);
   vH_Zbb_mgg__43->SetBinError(15,0.000257852);
   vH_Zbb_mgg__43->SetEntries(2);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mgg__43->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_mgg__43->SetLineColor(ci);
   vH_Zbb_mgg__43->GetXaxis()->SetLabelFont(42);
   vH_Zbb_mgg__43->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_mgg__43->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_mgg__43->GetXaxis()->SetTitleFont(42);
   vH_Zbb_mgg__43->GetYaxis()->SetLabelFont(42);
   vH_Zbb_mgg__43->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_mgg__43->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_mgg__43->GetYaxis()->SetTitleFont(42);
   vH_Zbb_mgg__43->GetZaxis()->SetLabelFont(42);
   vH_Zbb_mgg__43->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_mgg__43->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_mgg__43->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_mgg,"histo");
   
   TH1F *ttH_Zbb_mgg__44 = new TH1F("ttH_Zbb_mgg__44","mgg",38,103,160);
   ttH_Zbb_mgg__44->SetBinContent(0,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(8,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(9,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(11,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(12,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(13,0.0005700056);
   ttH_Zbb_mgg__44->SetBinContent(14,0.002223022);
   ttH_Zbb_mgg__44->SetBinContent(15,0.004503048);
   ttH_Zbb_mgg__44->SetBinContent(16,0.001083011);
   ttH_Zbb_mgg__44->SetBinContent(17,0.0001710017);
   ttH_Zbb_mgg__44->SetBinContent(20,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(39,0.0001140011);
   ttH_Zbb_mgg__44->SetBinError(0,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(8,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(9,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(11,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(12,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(13,0.0001802516);
   ttH_Zbb_mgg__44->SetBinError(14,0.0003559684);
   ttH_Zbb_mgg__44->SetBinError(15,0.000506632);
   ttH_Zbb_mgg__44->SetBinError(16,0.0002484597);
   ttH_Zbb_mgg__44->SetBinError(17,9.872786e-05);
   ttH_Zbb_mgg__44->SetBinError(20,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(39,8.061096e-05);
   ttH_Zbb_mgg__44->SetEntries(159);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mgg__44->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_mgg__44->SetLineColor(ci);
   ttH_Zbb_mgg__44->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_mgg__44->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_mgg__44->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_mgg__44->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_mgg__44->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_mgg__44->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_mgg__44->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_mgg__44->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_mgg__44->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_mgg__44->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_mgg__44->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_mgg__44->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Zbb_mgg","ggH + jets","f");

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
