void mgg_LowRes_Mr350Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:16:10 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.01378473,163.4337,0.1010881);
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
   hs->SetMaximum(0.08861616);
   
   TH1F *hs_stack_19 = new TH1F("hs_stack_19","",38,103,160);
   hs_stack_19->SetMinimum(0);
   hs_stack_19->SetMaximum(0.09304696);
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
   
   
   TH1F *ggH_LowRes_mgg__73 = new TH1F("ggH_LowRes_mgg__73","mgg",38,103,160);
   ggH_LowRes_mgg__73->SetBinContent(11,0.005047461);
   ggH_LowRes_mgg__73->SetBinContent(13,0.005047461);
   ggH_LowRes_mgg__73->SetBinContent(15,0.02523731);
   ggH_LowRes_mgg__73->SetBinContent(16,0.01009492);
   ggH_LowRes_mgg__73->SetBinContent(23,0.005047461);
   ggH_LowRes_mgg__73->SetBinError(11,0.005047461);
   ggH_LowRes_mgg__73->SetBinError(13,0.005047461);
   ggH_LowRes_mgg__73->SetBinError(15,0.01128647);
   ggH_LowRes_mgg__73->SetBinError(16,0.007138188);
   ggH_LowRes_mgg__73->SetBinError(23,0.005047461);
   ggH_LowRes_mgg__73->SetEntries(10);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mgg__73->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mgg__73->SetLineColor(ci);
   ggH_LowRes_mgg__73->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_mgg__73->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_mgg__73->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_mgg__73->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_mgg__73->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_mgg__73->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_mgg__73->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_mgg__73->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_mgg__73->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_mgg__73->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_mgg__73->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_mgg__73->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_mgg,"histo");
   
   TH1F *vbfH_LowRes_mgg__74 = new TH1F("vbfH_LowRes_mgg__74","mgg",38,103,160);
   vbfH_LowRes_mgg__74->SetBinContent(10,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinContent(12,0.0008840172);
   vbfH_LowRes_mgg__74->SetBinContent(13,0.002210043);
   vbfH_LowRes_mgg__74->SetBinContent(14,0.004862094);
   vbfH_LowRes_mgg__74->SetBinContent(15,0.008398162);
   vbfH_LowRes_mgg__74->SetBinContent(16,0.005746111);
   vbfH_LowRes_mgg__74->SetBinContent(17,0.0008840172);
   vbfH_LowRes_mgg__74->SetBinContent(18,0.0008840172);
   vbfH_LowRes_mgg__74->SetBinContent(19,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinError(10,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinError(12,0.0006250945);
   vbfH_LowRes_mgg__74->SetBinError(13,0.0009883612);
   vbfH_LowRes_mgg__74->SetBinError(14,0.001465977);
   vbfH_LowRes_mgg__74->SetBinError(15,0.001926671);
   vbfH_LowRes_mgg__74->SetBinError(16,0.001593685);
   vbfH_LowRes_mgg__74->SetBinError(17,0.0006250945);
   vbfH_LowRes_mgg__74->SetBinError(18,0.0006250945);
   vbfH_LowRes_mgg__74->SetBinError(19,0.0004420086);
   vbfH_LowRes_mgg__74->SetEntries(56);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mgg__74->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mgg__74->SetLineColor(ci);
   vbfH_LowRes_mgg__74->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_mgg__74->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mgg__74->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mgg__74->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_mgg__74->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_mgg__74->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mgg__74->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mgg__74->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_mgg__74->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_mgg__74->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mgg__74->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mgg__74->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_mgg,"histo");
   
   TH1F *vH_LowRes_mgg__75 = new TH1F("vH_LowRes_mgg__75","mgg",38,103,160);
   vH_LowRes_mgg__75->SetBinContent(10,0.0007735559);
   vH_LowRes_mgg__75->SetBinContent(12,0.000257852);
   vH_LowRes_mgg__75->SetBinContent(13,0.001031408);
   vH_LowRes_mgg__75->SetBinContent(14,0.002062816);
   vH_LowRes_mgg__75->SetBinContent(15,0.00257852);
   vH_LowRes_mgg__75->SetBinContent(16,0.001547112);
   vH_LowRes_mgg__75->SetBinContent(17,0.001031408);
   vH_LowRes_mgg__75->SetBinContent(18,0.0007735559);
   vH_LowRes_mgg__75->SetBinContent(25,0.000257852);
   vH_LowRes_mgg__75->SetBinContent(39,0.000257852);
   vH_LowRes_mgg__75->SetBinError(10,0.0004466127);
   vH_LowRes_mgg__75->SetBinError(12,0.000257852);
   vH_LowRes_mgg__75->SetBinError(13,0.0005157039);
   vH_LowRes_mgg__75->SetBinError(14,0.0007293155);
   vH_LowRes_mgg__75->SetBinError(15,0.0008153995);
   vH_LowRes_mgg__75->SetBinError(16,0.0006316057);
   vH_LowRes_mgg__75->SetBinError(17,0.0005157039);
   vH_LowRes_mgg__75->SetBinError(18,0.0004466127);
   vH_LowRes_mgg__75->SetBinError(25,0.000257852);
   vH_LowRes_mgg__75->SetBinError(39,0.000257852);
   vH_LowRes_mgg__75->SetEntries(41);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mgg__75->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mgg__75->SetLineColor(ci);
   vH_LowRes_mgg__75->GetXaxis()->SetLabelFont(42);
   vH_LowRes_mgg__75->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_mgg__75->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_mgg__75->GetXaxis()->SetTitleFont(42);
   vH_LowRes_mgg__75->GetYaxis()->SetLabelFont(42);
   vH_LowRes_mgg__75->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_mgg__75->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_mgg__75->GetYaxis()->SetTitleFont(42);
   vH_LowRes_mgg__75->GetZaxis()->SetLabelFont(42);
   vH_LowRes_mgg__75->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_mgg__75->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_mgg__75->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_mgg,"histo");
   
   TH1F *ttH_LowRes_mgg__76 = new TH1F("ttH_LowRes_mgg__76","mgg",38,103,160);
   ttH_LowRes_mgg__76->SetBinContent(0,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(1,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(3,0.0001710017);
   ttH_LowRes_mgg__76->SetBinContent(7,0.0002850028);
   ttH_LowRes_mgg__76->SetBinContent(9,0.0003420033);
   ttH_LowRes_mgg__76->SetBinContent(10,0.0004560044);
   ttH_LowRes_mgg__76->SetBinContent(11,0.0007410072);
   ttH_LowRes_mgg__76->SetBinContent(12,0.001482014);
   ttH_LowRes_mgg__76->SetBinContent(13,0.002679027);
   ttH_LowRes_mgg__76->SetBinContent(14,0.006726074);
   ttH_LowRes_mgg__76->SetBinContent(15,0.00809409);
   ttH_LowRes_mgg__76->SetBinContent(16,0.003078032);
   ttH_LowRes_mgg__76->SetBinContent(17,0.0009690094);
   ttH_LowRes_mgg__76->SetBinContent(18,0.0003420033);
   ttH_LowRes_mgg__76->SetBinContent(19,0.0002280022);
   ttH_LowRes_mgg__76->SetBinContent(27,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(29,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(32,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(34,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(39,0.0002280022);
   ttH_LowRes_mgg__76->SetBinError(0,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(1,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(3,9.872786e-05);
   ttH_LowRes_mgg__76->SetBinError(7,0.0001274571);
   ttH_LowRes_mgg__76->SetBinError(9,0.0001396223);
   ttH_LowRes_mgg__76->SetBinError(10,0.0001612219);
   ttH_LowRes_mgg__76->SetBinError(11,0.0002055184);
   ttH_LowRes_mgg__76->SetBinError(12,0.000290647);
   ttH_LowRes_mgg__76->SetBinError(13,0.0003907761);
   ttH_LowRes_mgg__76->SetBinError(14,0.0006191845);
   ttH_LowRes_mgg__76->SetBinError(15,0.00067924);
   ttH_LowRes_mgg__76->SetBinError(16,0.0004188668);
   ttH_LowRes_mgg__76->SetBinError(17,0.0002350193);
   ttH_LowRes_mgg__76->SetBinError(18,0.0001396223);
   ttH_LowRes_mgg__76->SetBinError(19,0.0001140011);
   ttH_LowRes_mgg__76->SetBinError(27,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(29,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(32,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(34,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(39,0.0001140011);
   ttH_LowRes_mgg__76->SetEntries(461);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mgg__76->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mgg__76->SetLineColor(ci);
   ttH_LowRes_mgg__76->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_mgg__76->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_mgg__76->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_mgg__76->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_mgg__76->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_mgg__76->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_mgg__76->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_mgg__76->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_mgg__76->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_mgg__76->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_mgg__76->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_mgg__76->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_LowRes_mgg","ggH + jets","f");

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
