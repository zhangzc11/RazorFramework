void mgg_Zbb_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:12:35 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(94.75904,-0.01355433,163.4337,0.09939844);
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
   hs->SetMaximum(0.08713499);
   
   TH1F *hs_stack_11 = new TH1F("hs_stack_11","",38,103,160);
   hs_stack_11->SetMinimum(0);
   hs_stack_11->SetMaximum(0.09149174);
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
   ggH_Zbb_mgg__41->SetBinContent(10,0.005047461);
   ggH_Zbb_mgg__41->SetBinContent(15,0.01514238);
   ggH_Zbb_mgg__41->SetBinError(10,0.005047461);
   ggH_Zbb_mgg__41->SetBinError(15,0.00874246);
   ggH_Zbb_mgg__41->SetEntries(4);

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
   vbfH_Zbb_mgg__42->SetBinContent(14,0.002652051);
   vbfH_Zbb_mgg__42->SetBinContent(15,0.001768034);
   vbfH_Zbb_mgg__42->SetBinContent(16,0.001326026);
   vbfH_Zbb_mgg__42->SetBinError(14,0.001082695);
   vbfH_Zbb_mgg__42->SetBinError(15,0.0008840172);
   vbfH_Zbb_mgg__42->SetBinError(16,0.0007655813);
   vbfH_Zbb_mgg__42->SetEntries(13);

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
   vH_Zbb_mgg__43->SetBinContent(1,0.000257852);
   vH_Zbb_mgg__43->SetBinContent(7,0.000257852);
   vH_Zbb_mgg__43->SetBinContent(8,0.000257852);
   vH_Zbb_mgg__43->SetBinContent(9,0.000257852);
   vH_Zbb_mgg__43->SetBinContent(10,0.000257852);
   vH_Zbb_mgg__43->SetBinContent(11,0.0005157039);
   vH_Zbb_mgg__43->SetBinContent(12,0.0005157039);
   vH_Zbb_mgg__43->SetBinContent(13,0.001031408);
   vH_Zbb_mgg__43->SetBinContent(14,0.004125632);
   vH_Zbb_mgg__43->SetBinContent(15,0.007219856);
   vH_Zbb_mgg__43->SetBinContent(16,0.003094224);
   vH_Zbb_mgg__43->SetBinContent(17,0.0005157039);
   vH_Zbb_mgg__43->SetBinContent(18,0.000257852);
   vH_Zbb_mgg__43->SetBinError(1,0.000257852);
   vH_Zbb_mgg__43->SetBinError(7,0.000257852);
   vH_Zbb_mgg__43->SetBinError(8,0.000257852);
   vH_Zbb_mgg__43->SetBinError(9,0.000257852);
   vH_Zbb_mgg__43->SetBinError(10,0.000257852);
   vH_Zbb_mgg__43->SetBinError(11,0.0003646577);
   vH_Zbb_mgg__43->SetBinError(12,0.0003646577);
   vH_Zbb_mgg__43->SetBinError(13,0.0005157039);
   vH_Zbb_mgg__43->SetBinError(14,0.001031408);
   vH_Zbb_mgg__43->SetBinError(15,0.001364424);
   vH_Zbb_mgg__43->SetBinError(16,0.0008932254);
   vH_Zbb_mgg__43->SetBinError(17,0.0003646577);
   vH_Zbb_mgg__43->SetBinError(18,0.000257852);
   vH_Zbb_mgg__43->SetEntries(72);

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
   ttH_Zbb_mgg__44->SetBinContent(0,0.0001710017);
   ttH_Zbb_mgg__44->SetBinContent(1,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(2,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(3,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(5,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(6,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(8,0.0002280022);
   ttH_Zbb_mgg__44->SetBinContent(9,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(10,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(11,0.0008550083);
   ttH_Zbb_mgg__44->SetBinContent(12,0.0007980078);
   ttH_Zbb_mgg__44->SetBinContent(13,0.003306035);
   ttH_Zbb_mgg__44->SetBinContent(14,0.01122913);
   ttH_Zbb_mgg__44->SetBinContent(15,0.01943722);
   ttH_Zbb_mgg__44->SetBinContent(16,0.006042066);
   ttH_Zbb_mgg__44->SetBinContent(17,0.00102601);
   ttH_Zbb_mgg__44->SetBinContent(18,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(20,0.0001140011);
   ttH_Zbb_mgg__44->SetBinContent(22,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinContent(39,0.0003420033);
   ttH_Zbb_mgg__44->SetBinError(0,9.872786e-05);
   ttH_Zbb_mgg__44->SetBinError(1,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(2,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(3,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(5,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(6,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(8,0.0001140011);
   ttH_Zbb_mgg__44->SetBinError(9,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(10,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(11,0.0002207622);
   ttH_Zbb_mgg__44->SetBinError(12,0.0002132766);
   ttH_Zbb_mgg__44->SetBinError(13,0.0004341033);
   ttH_Zbb_mgg__44->SetBinError(14,0.000800041);
   ttH_Zbb_mgg__44->SetBinError(15,0.001052583);
   ttH_Zbb_mgg__44->SetBinError(16,0.0005868567);
   ttH_Zbb_mgg__44->SetBinError(17,0.0002418329);
   ttH_Zbb_mgg__44->SetBinError(18,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(20,8.061096e-05);
   ttH_Zbb_mgg__44->SetBinError(22,5.700056e-05);
   ttH_Zbb_mgg__44->SetBinError(39,0.0001396223);
   ttH_Zbb_mgg__44->SetEntries(779);

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
