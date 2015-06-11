void mgg_Hbb_Mr350Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:16:09 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.002039356,163.4337,0.01495528);
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
   hs->SetMaximum(0.01311014);
   
   TH1F *hs_stack_7 = new TH1F("hs_stack_7","",38,103,160);
   hs_stack_7->SetMinimum(0);
   hs_stack_7->SetMaximum(0.01376565);
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
   
   
   TH1F *ggH_Hbb_mgg__25 = new TH1F("ggH_Hbb_mgg__25","mgg",38,103,160);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mgg__25->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mgg__25->SetLineColor(ci);
   ggH_Hbb_mgg__25->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_mgg__25->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_mgg__25->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_mgg__25->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_mgg__25->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_mgg__25->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_mgg__25->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_mgg__25->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_mgg__25->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_mgg__25->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_mgg__25->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_mgg__25->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_mgg,"histo");
   
   TH1F *vbfH_Hbb_mgg__26 = new TH1F("vbfH_Hbb_mgg__26","mgg",38,103,160);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mgg__26->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mgg__26->SetLineColor(ci);
   vbfH_Hbb_mgg__26->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_mgg__26->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mgg__26->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mgg__26->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_mgg__26->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_mgg__26->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mgg__26->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mgg__26->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_mgg__26->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_mgg__26->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mgg__26->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mgg__26->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_mgg,"histo");
   
   TH1F *vH_Hbb_mgg__27 = new TH1F("vH_Hbb_mgg__27","mgg",38,103,160);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mgg__27->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mgg__27->SetLineColor(ci);
   vH_Hbb_mgg__27->GetXaxis()->SetLabelFont(42);
   vH_Hbb_mgg__27->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_mgg__27->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_mgg__27->GetXaxis()->SetTitleFont(42);
   vH_Hbb_mgg__27->GetYaxis()->SetLabelFont(42);
   vH_Hbb_mgg__27->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_mgg__27->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_mgg__27->GetYaxis()->SetTitleFont(42);
   vH_Hbb_mgg__27->GetZaxis()->SetLabelFont(42);
   vH_Hbb_mgg__27->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_mgg__27->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_mgg__27->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_mgg,"histo");
   
   TH1F *ttH_Hbb_mgg__28 = new TH1F("ttH_Hbb_mgg__28","mgg",38,103,160);
   ttH_Hbb_mgg__28->SetBinContent(1,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinContent(5,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinContent(6,0.0001140011);
   ttH_Hbb_mgg__28->SetBinContent(9,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinContent(10,0.0001710017);
   ttH_Hbb_mgg__28->SetBinContent(11,0.0002850028);
   ttH_Hbb_mgg__28->SetBinContent(12,0.0002850028);
   ttH_Hbb_mgg__28->SetBinContent(13,0.0006270061);
   ttH_Hbb_mgg__28->SetBinContent(14,0.004275046);
   ttH_Hbb_mgg__28->SetBinContent(15,0.006555072);
   ttH_Hbb_mgg__28->SetBinContent(16,0.002337023);
   ttH_Hbb_mgg__28->SetBinContent(17,0.0001710017);
   ttH_Hbb_mgg__28->SetBinContent(18,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinContent(19,0.0001140011);
   ttH_Hbb_mgg__28->SetBinContent(21,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinContent(39,0.0002280022);
   ttH_Hbb_mgg__28->SetBinError(1,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinError(5,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinError(6,8.061096e-05);
   ttH_Hbb_mgg__28->SetBinError(9,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinError(10,9.872786e-05);
   ttH_Hbb_mgg__28->SetBinError(11,0.0001274571);
   ttH_Hbb_mgg__28->SetBinError(12,0.0001274571);
   ttH_Hbb_mgg__28->SetBinError(13,0.0001890495);
   ttH_Hbb_mgg__28->SetBinError(14,0.0004936393);
   ttH_Hbb_mgg__28->SetBinError(15,0.0006112629);
   ttH_Hbb_mgg__28->SetBinError(16,0.0003649817);
   ttH_Hbb_mgg__28->SetBinError(17,9.872786e-05);
   ttH_Hbb_mgg__28->SetBinError(18,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinError(19,8.061096e-05);
   ttH_Hbb_mgg__28->SetBinError(21,5.700056e-05);
   ttH_Hbb_mgg__28->SetBinError(39,0.0001140011);
   ttH_Hbb_mgg__28->SetEntries(271);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mgg__28->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mgg__28->SetLineColor(ci);
   ttH_Hbb_mgg__28->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_mgg__28->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_mgg__28->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_mgg__28->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_mgg__28->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_mgg__28->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_mgg__28->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_mgg__28->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_mgg__28->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_mgg__28->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_mgg__28->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_mgg__28->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Hbb_mgg","ggH + jets","f");

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
