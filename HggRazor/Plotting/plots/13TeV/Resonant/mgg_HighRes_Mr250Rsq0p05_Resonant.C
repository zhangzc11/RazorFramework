void mgg_HighRes_Mr250Rsq0p05_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:17:23 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.0464277,163.4337,0.3404698);
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
   hs->SetMaximum(0.2984638);
   
   TH1F *hs_stack_15 = new TH1F("hs_stack_15","",38,103,160);
   hs_stack_15->SetMinimum(0);
   hs_stack_15->SetMaximum(0.3133869);
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
   
   
   TH1F *ggH_HighRes_mgg__57 = new TH1F("ggH_HighRes_mgg__57","mgg",38,103,160);
   ggH_HighRes_mgg__57->SetBinContent(8,0.005047461);
   ggH_HighRes_mgg__57->SetBinContent(10,0.005047461);
   ggH_HighRes_mgg__57->SetBinContent(13,0.01514238);
   ggH_HighRes_mgg__57->SetBinContent(14,0.04542715);
   ggH_HighRes_mgg__57->SetBinContent(15,0.07571193);
   ggH_HighRes_mgg__57->SetBinContent(16,0.03533223);
   ggH_HighRes_mgg__57->SetBinContent(18,0.005047461);
   ggH_HighRes_mgg__57->SetBinError(8,0.005047461);
   ggH_HighRes_mgg__57->SetBinError(10,0.005047461);
   ggH_HighRes_mgg__57->SetBinError(13,0.00874246);
   ggH_HighRes_mgg__57->SetBinError(14,0.01514238);
   ggH_HighRes_mgg__57->SetBinError(15,0.01954873);
   ggH_HighRes_mgg__57->SetBinError(16,0.01335433);
   ggH_HighRes_mgg__57->SetBinError(18,0.005047461);
   ggH_HighRes_mgg__57->SetEntries(37);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mgg__57->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mgg__57->SetLineColor(ci);
   ggH_HighRes_mgg__57->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_mgg__57->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_mgg__57->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_mgg__57->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_mgg__57->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_mgg__57->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_mgg__57->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_mgg__57->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_mgg__57->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_mgg__57->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_mgg__57->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_mgg__57->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_mgg,"histo");
   
   TH1F *vbfH_HighRes_mgg__58 = new TH1F("vbfH_HighRes_mgg__58","mgg",38,103,160);
   vbfH_HighRes_mgg__58->SetBinContent(11,0.0008840172);
   vbfH_HighRes_mgg__58->SetBinContent(12,0.0004420086);
   vbfH_HighRes_mgg__58->SetBinContent(13,0.003978077);
   vbfH_HighRes_mgg__58->SetBinContent(14,0.01723834);
   vbfH_HighRes_mgg__58->SetBinContent(15,0.03624474);
   vbfH_HighRes_mgg__58->SetBinContent(16,0.01105021);
   vbfH_HighRes_mgg__58->SetBinContent(17,0.001768034);
   vbfH_HighRes_mgg__58->SetBinContent(19,0.0004420086);
   vbfH_HighRes_mgg__58->SetBinContent(22,0.0004420086);
   vbfH_HighRes_mgg__58->SetBinError(11,0.0006250945);
   vbfH_HighRes_mgg__58->SetBinError(12,0.0004420086);
   vbfH_HighRes_mgg__58->SetBinError(13,0.001326026);
   vbfH_HighRes_mgg__58->SetBinError(14,0.002760343);
   vbfH_HighRes_mgg__58->SetBinError(15,0.004002558);
   vbfH_HighRes_mgg__58->SetBinError(16,0.002210043);
   vbfH_HighRes_mgg__58->SetBinError(17,0.0008840172);
   vbfH_HighRes_mgg__58->SetBinError(19,0.0004420086);
   vbfH_HighRes_mgg__58->SetBinError(22,0.0004420086);
   vbfH_HighRes_mgg__58->SetEntries(164);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mgg__58->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mgg__58->SetLineColor(ci);
   vbfH_HighRes_mgg__58->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_mgg__58->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mgg__58->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mgg__58->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_mgg__58->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_mgg__58->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mgg__58->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mgg__58->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_mgg__58->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_mgg__58->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mgg__58->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mgg__58->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_mgg,"histo");
   
   TH1F *vH_HighRes_mgg__59 = new TH1F("vH_HighRes_mgg__59","mgg",38,103,160);
   vH_HighRes_mgg__59->SetBinContent(11,0.000257852);
   vH_HighRes_mgg__59->SetBinContent(13,0.0007735559);
   vH_HighRes_mgg__59->SetBinContent(14,0.008766967);
   vH_HighRes_mgg__59->SetBinContent(15,0.01572896);
   vH_HighRes_mgg__59->SetBinContent(16,0.00515704);
   vH_HighRes_mgg__59->SetBinContent(17,0.0005157039);
   vH_HighRes_mgg__59->SetBinContent(21,0.000257852);
   vH_HighRes_mgg__59->SetBinContent(32,0.000257852);
   vH_HighRes_mgg__59->SetBinContent(39,0.0005157039);
   vH_HighRes_mgg__59->SetBinError(11,0.000257852);
   vH_HighRes_mgg__59->SetBinError(13,0.0004466127);
   vH_HighRes_mgg__59->SetBinError(14,0.001503522);
   vH_HighRes_mgg__59->SetBinError(15,0.002013888);
   vH_HighRes_mgg__59->SetBinError(16,0.001153149);
   vH_HighRes_mgg__59->SetBinError(17,0.0003646577);
   vH_HighRes_mgg__59->SetBinError(21,0.000257852);
   vH_HighRes_mgg__59->SetBinError(32,0.000257852);
   vH_HighRes_mgg__59->SetBinError(39,0.0003646577);
   vH_HighRes_mgg__59->SetEntries(125);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mgg__59->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mgg__59->SetLineColor(ci);
   vH_HighRes_mgg__59->GetXaxis()->SetLabelFont(42);
   vH_HighRes_mgg__59->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_mgg__59->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_mgg__59->GetXaxis()->SetTitleFont(42);
   vH_HighRes_mgg__59->GetYaxis()->SetLabelFont(42);
   vH_HighRes_mgg__59->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_mgg__59->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_mgg__59->GetYaxis()->SetTitleFont(42);
   vH_HighRes_mgg__59->GetZaxis()->SetLabelFont(42);
   vH_HighRes_mgg__59->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_mgg__59->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_mgg__59->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_mgg,"histo");
   
   TH1F *ttH_HighRes_mgg__60 = new TH1F("ttH_HighRes_mgg__60","mgg",38,103,160);
   ttH_HighRes_mgg__60->SetBinContent(0,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(5,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(7,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(8,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(10,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(11,0.0003420033);
   ttH_HighRes_mgg__60->SetBinContent(12,0.0002280022);
   ttH_HighRes_mgg__60->SetBinContent(13,0.001140011);
   ttH_HighRes_mgg__60->SetBinContent(14,0.01003211);
   ttH_HighRes_mgg__60->SetBinContent(15,0.02154625);
   ttH_HighRes_mgg__60->SetBinContent(16,0.005871064);
   ttH_HighRes_mgg__60->SetBinContent(17,0.0001140011);
   ttH_HighRes_mgg__60->SetBinContent(21,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(33,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinContent(39,0.0005700056);
   ttH_HighRes_mgg__60->SetBinError(0,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(5,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(7,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(8,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(10,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(11,0.0001396223);
   ttH_HighRes_mgg__60->SetBinError(12,0.0001140011);
   ttH_HighRes_mgg__60->SetBinError(13,0.0002549142);
   ttH_HighRes_mgg__60->SetBinError(14,0.0007561979);
   ttH_HighRes_mgg__60->SetBinError(15,0.001108218);
   ttH_HighRes_mgg__60->SetBinError(16,0.0005784925);
   ttH_HighRes_mgg__60->SetBinError(17,8.061096e-05);
   ttH_HighRes_mgg__60->SetBinError(21,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(33,5.700056e-05);
   ttH_HighRes_mgg__60->SetBinError(39,0.0001802516);
   ttH_HighRes_mgg__60->SetEntries(706);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mgg__60->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mgg__60->SetLineColor(ci);
   ttH_HighRes_mgg__60->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_mgg__60->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_mgg__60->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_mgg__60->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_mgg__60->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_mgg__60->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_mgg__60->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_mgg__60->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_mgg__60->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_mgg__60->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_mgg__60->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_mgg__60->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_mgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_HighRes_mgg","ggH + jets","f");

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
