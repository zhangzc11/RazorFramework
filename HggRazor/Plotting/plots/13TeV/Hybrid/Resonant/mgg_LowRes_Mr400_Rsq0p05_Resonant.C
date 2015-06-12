void mgg_LowRes_Mr400_Rsq0p05_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:11:47 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.00597364,163.4337,0.04380669);
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
   hs->SetMaximum(0.03840197);
   
   TH1F *hs_stack_19 = new TH1F("hs_stack_19","",38,103,160);
   hs_stack_19->SetMinimum(0);
   hs_stack_19->SetMaximum(0.04032207);
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
   ggH_LowRes_mgg__73->SetBinContent(14,0.00500713);
   ggH_LowRes_mgg__73->SetBinContent(16,0.01502139);
   ggH_LowRes_mgg__73->SetBinError(14,0.00500713);
   ggH_LowRes_mgg__73->SetBinError(16,0.008672604);
   ggH_LowRes_mgg__73->SetEntries(4);

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
   vbfH_LowRes_mgg__74->SetBinContent(9,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinContent(13,0.0008840172);
   vbfH_LowRes_mgg__74->SetBinContent(14,0.0008840172);
   vbfH_LowRes_mgg__74->SetBinContent(15,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinContent(16,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinError(9,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinError(13,0.0006250945);
   vbfH_LowRes_mgg__74->SetBinError(14,0.0006250945);
   vbfH_LowRes_mgg__74->SetBinError(15,0.0004420086);
   vbfH_LowRes_mgg__74->SetBinError(16,0.0004420086);
   vbfH_LowRes_mgg__74->SetEntries(7);

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
   vH_LowRes_mgg__75->SetBinContent(10,0.000257852);
   vH_LowRes_mgg__75->SetBinContent(12,0.000257852);
   vH_LowRes_mgg__75->SetBinContent(13,0.000257852);
   vH_LowRes_mgg__75->SetBinContent(14,0.0005157039);
   vH_LowRes_mgg__75->SetBinContent(15,0.0005157039);
   vH_LowRes_mgg__75->SetBinContent(16,0.0007735559);
   vH_LowRes_mgg__75->SetBinContent(17,0.0005157039);
   vH_LowRes_mgg__75->SetBinContent(18,0.0005157039);
   vH_LowRes_mgg__75->SetBinError(10,0.000257852);
   vH_LowRes_mgg__75->SetBinError(12,0.000257852);
   vH_LowRes_mgg__75->SetBinError(13,0.000257852);
   vH_LowRes_mgg__75->SetBinError(14,0.0003646577);
   vH_LowRes_mgg__75->SetBinError(15,0.0003646577);
   vH_LowRes_mgg__75->SetBinError(16,0.0004466127);
   vH_LowRes_mgg__75->SetBinError(17,0.0003646577);
   vH_LowRes_mgg__75->SetBinError(18,0.0003646577);
   vH_LowRes_mgg__75->SetEntries(14);

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
   ttH_LowRes_mgg__76->SetBinContent(1,0.0001710017);
   ttH_LowRes_mgg__76->SetBinContent(2,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(3,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(4,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(5,0.0001710017);
   ttH_LowRes_mgg__76->SetBinContent(6,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(7,0.0002850028);
   ttH_LowRes_mgg__76->SetBinContent(8,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(9,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(10,0.0003990039);
   ttH_LowRes_mgg__76->SetBinContent(11,0.0003990039);
   ttH_LowRes_mgg__76->SetBinContent(12,0.001482014);
   ttH_LowRes_mgg__76->SetBinContent(13,0.002394024);
   ttH_LowRes_mgg__76->SetBinContent(14,0.004902053);
   ttH_LowRes_mgg__76->SetBinContent(15,0.005073055);
   ttH_LowRes_mgg__76->SetBinContent(16,0.002964031);
   ttH_LowRes_mgg__76->SetBinContent(17,0.0008550083);
   ttH_LowRes_mgg__76->SetBinContent(18,0.0004560044);
   ttH_LowRes_mgg__76->SetBinContent(19,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(20,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(21,0.0001710017);
   ttH_LowRes_mgg__76->SetBinContent(23,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(24,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(25,0.0002850028);
   ttH_LowRes_mgg__76->SetBinContent(26,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(27,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(28,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(29,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(31,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(32,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(33,0.0001140011);
   ttH_LowRes_mgg__76->SetBinContent(34,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinContent(37,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(1,9.872786e-05);
   ttH_LowRes_mgg__76->SetBinError(2,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(3,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(4,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(5,9.872786e-05);
   ttH_LowRes_mgg__76->SetBinError(6,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(7,0.0001274571);
   ttH_LowRes_mgg__76->SetBinError(8,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(9,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(10,0.0001508093);
   ttH_LowRes_mgg__76->SetBinError(11,0.0001508093);
   ttH_LowRes_mgg__76->SetBinError(12,0.000290647);
   ttH_LowRes_mgg__76->SetBinError(13,0.0003694058);
   ttH_LowRes_mgg__76->SetBinError(14,0.0005286014);
   ttH_LowRes_mgg__76->SetBinError(15,0.0005377422);
   ttH_LowRes_mgg__76->SetBinError(16,0.0004110369);
   ttH_LowRes_mgg__76->SetBinError(17,0.0002207622);
   ttH_LowRes_mgg__76->SetBinError(18,0.0001612219);
   ttH_LowRes_mgg__76->SetBinError(19,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(20,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(21,9.872786e-05);
   ttH_LowRes_mgg__76->SetBinError(23,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(24,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(25,0.0001274571);
   ttH_LowRes_mgg__76->SetBinError(26,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(27,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(28,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(29,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(31,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(32,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(33,8.061096e-05);
   ttH_LowRes_mgg__76->SetBinError(34,5.700056e-05);
   ttH_LowRes_mgg__76->SetBinError(37,5.700056e-05);
   ttH_LowRes_mgg__76->SetEntries(379);

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
