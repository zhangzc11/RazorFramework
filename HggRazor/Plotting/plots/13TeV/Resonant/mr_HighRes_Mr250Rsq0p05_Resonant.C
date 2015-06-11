void mr_HighRes_Mr250Rsq0p05_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:17:23 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.424557,2147.47,0.4175335);
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
   hs->SetMaximum(1.568491);
   
   TH1F *hs_stack_13 = new TH1F("hs_stack_13","",160,130,8130);
   hs_stack_13->SetMinimum(0.06258837);
   hs_stack_13->SetMaximum(1.943512);
   hs_stack_13->SetDirectory(0);
   hs_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_13->SetLineColor(ci);
   hs_stack_13->GetXaxis()->SetTitle("M_{R} (GeV)");
   hs_stack_13->GetXaxis()->SetRange(0,38);
   hs_stack_13->GetXaxis()->SetLabelFont(42);
   hs_stack_13->GetXaxis()->SetLabelSize(0.035);
   hs_stack_13->GetXaxis()->SetTitleSize(0.06);
   hs_stack_13->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_13->GetXaxis()->SetTitleFont(42);
   hs_stack_13->GetYaxis()->SetTitle("events / 50 (GeV)");
   hs_stack_13->GetYaxis()->SetLabelFont(42);
   hs_stack_13->GetYaxis()->SetLabelSize(0.035);
   hs_stack_13->GetYaxis()->SetTitleSize(0.06);
   hs_stack_13->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_13->GetYaxis()->SetTitleFont(42);
   hs_stack_13->GetZaxis()->SetLabelFont(42);
   hs_stack_13->GetZaxis()->SetLabelSize(0.035);
   hs_stack_13->GetZaxis()->SetTitleSize(0.035);
   hs_stack_13->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_13);
   
   
   TH1F *ggH_HighRes_mr__49 = new TH1F("ggH_HighRes_mr__49","mr",160,130,8130);
   ggH_HighRes_mr__49->SetBinContent(3,0.1059967);
   ggH_HighRes_mr__49->SetBinContent(4,0.07571193);
   ggH_HighRes_mr__49->SetBinContent(6,0.005047461);
   ggH_HighRes_mr__49->SetBinError(3,0.02313037);
   ggH_HighRes_mr__49->SetBinError(4,0.01954873);
   ggH_HighRes_mr__49->SetBinError(6,0.005047461);
   ggH_HighRes_mr__49->SetEntries(37);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mr__49->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mr__49->SetLineColor(ci);
   ggH_HighRes_mr__49->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_mr__49->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_mr__49->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_mr__49->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_mr__49->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_mr__49->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_mr__49->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_mr__49->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_mr__49->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_mr__49->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_mr__49->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_mr__49->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_mr,"histo");
   
   TH1F *vbfH_HighRes_mr__50 = new TH1F("vbfH_HighRes_mr__50","mr",160,130,8130);
   vbfH_HighRes_mr__50->SetBinContent(3,0.03094063);
   vbfH_HighRes_mr__50->SetBinContent(4,0.02784656);
   vbfH_HighRes_mr__50->SetBinContent(5,0.009282179);
   vbfH_HighRes_mr__50->SetBinContent(6,0.002210043);
   vbfH_HighRes_mr__50->SetBinContent(7,0.0008840172);
   vbfH_HighRes_mr__50->SetBinContent(8,0.0008840172);
   vbfH_HighRes_mr__50->SetBinContent(10,0.0004420086);
   vbfH_HighRes_mr__50->SetBinError(3,0.003698109);
   vbfH_HighRes_mr__50->SetBinError(4,0.003508334);
   vbfH_HighRes_mr__50->SetBinError(5,0.002025538);
   vbfH_HighRes_mr__50->SetBinError(6,0.0009883612);
   vbfH_HighRes_mr__50->SetBinError(7,0.0006250945);
   vbfH_HighRes_mr__50->SetBinError(8,0.0006250945);
   vbfH_HighRes_mr__50->SetBinError(10,0.0004420086);
   vbfH_HighRes_mr__50->SetEntries(164);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mr__50->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mr__50->SetLineColor(ci);
   vbfH_HighRes_mr__50->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_mr__50->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mr__50->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mr__50->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_mr__50->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_mr__50->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mr__50->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mr__50->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_mr__50->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_mr__50->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mr__50->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mr__50->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_mr,"histo");
   
   TH1F *vH_HighRes_mr__51 = new TH1F("vH_HighRes_mr__51","mr",160,130,8130);
   vH_HighRes_mr__51->SetBinContent(3,0.0144397);
   vH_HighRes_mr__51->SetBinContent(4,0.007477708);
   vH_HighRes_mr__51->SetBinContent(5,0.005930596);
   vH_HighRes_mr__51->SetBinContent(6,0.001547112);
   vH_HighRes_mr__51->SetBinContent(7,0.001031408);
   vH_HighRes_mr__51->SetBinContent(8,0.000257852);
   vH_HighRes_mr__51->SetBinContent(9,0.001031408);
   vH_HighRes_mr__51->SetBinContent(10,0.000257852);
   vH_HighRes_mr__51->SetBinContent(13,0.000257852);
   vH_HighRes_mr__51->SetBinError(3,0.001929587);
   vH_HighRes_mr__51->SetBinError(4,0.001388575);
   vH_HighRes_mr__51->SetBinError(5,0.001236615);
   vH_HighRes_mr__51->SetBinError(6,0.0006316057);
   vH_HighRes_mr__51->SetBinError(7,0.0005157039);
   vH_HighRes_mr__51->SetBinError(8,0.000257852);
   vH_HighRes_mr__51->SetBinError(9,0.0005157039);
   vH_HighRes_mr__51->SetBinError(10,0.000257852);
   vH_HighRes_mr__51->SetBinError(13,0.000257852);
   vH_HighRes_mr__51->SetEntries(125);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mr__51->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mr__51->SetLineColor(ci);
   vH_HighRes_mr__51->GetXaxis()->SetLabelFont(42);
   vH_HighRes_mr__51->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_mr__51->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_mr__51->GetXaxis()->SetTitleFont(42);
   vH_HighRes_mr__51->GetYaxis()->SetLabelFont(42);
   vH_HighRes_mr__51->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_mr__51->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_mr__51->GetYaxis()->SetTitleFont(42);
   vH_HighRes_mr__51->GetZaxis()->SetLabelFont(42);
   vH_HighRes_mr__51->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_mr__51->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_mr__51->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_mr,"histo");
   
   TH1F *ttH_HighRes_mr__52 = new TH1F("ttH_HighRes_mr__52","mr",160,130,8130);
   ttH_HighRes_mr__52->SetBinContent(3,0.00547206);
   ttH_HighRes_mr__52->SetBinContent(4,0.009975112);
   ttH_HighRes_mr__52->SetBinContent(5,0.006441071);
   ttH_HighRes_mr__52->SetBinContent(6,0.005358058);
   ttH_HighRes_mr__52->SetBinContent(7,0.003876041);
   ttH_HighRes_mr__52->SetBinContent(8,0.002394024);
   ttH_HighRes_mr__52->SetBinContent(9,0.00205202);
   ttH_HighRes_mr__52->SetBinContent(10,0.00102601);
   ttH_HighRes_mr__52->SetBinContent(11,0.0009690094);
   ttH_HighRes_mr__52->SetBinContent(12,0.0005700056);
   ttH_HighRes_mr__52->SetBinContent(13,0.0005700056);
   ttH_HighRes_mr__52->SetBinContent(14,0.0002280022);
   ttH_HighRes_mr__52->SetBinContent(15,0.0001140011);
   ttH_HighRes_mr__52->SetBinContent(16,0.0002280022);
   ttH_HighRes_mr__52->SetBinContent(17,0.0001140011);
   ttH_HighRes_mr__52->SetBinContent(18,0.0001710017);
   ttH_HighRes_mr__52->SetBinContent(20,0.0001140011);
   ttH_HighRes_mr__52->SetBinContent(21,5.700056e-05);
   ttH_HighRes_mr__52->SetBinContent(22,0.0001710017);
   ttH_HighRes_mr__52->SetBinContent(23,5.700056e-05);
   ttH_HighRes_mr__52->SetBinContent(25,0.0001710017);
   ttH_HighRes_mr__52->SetBinContent(27,5.700056e-05);
   ttH_HighRes_mr__52->SetBinContent(39,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(3,0.0005584891);
   ttH_HighRes_mr__52->SetBinError(4,0.0007540465);
   ttH_HighRes_mr__52->SetBinError(5,0.0006059242);
   ttH_HighRes_mr__52->SetBinError(6,0.0005526409);
   ttH_HighRes_mr__52->SetBinError(7,0.0004700386);
   ttH_HighRes_mr__52->SetBinError(8,0.0003694058);
   ttH_HighRes_mr__52->SetBinError(9,0.0003420033);
   ttH_HighRes_mr__52->SetBinError(10,0.0002418329);
   ttH_HighRes_mr__52->SetBinError(11,0.0002350193);
   ttH_HighRes_mr__52->SetBinError(12,0.0001802516);
   ttH_HighRes_mr__52->SetBinError(13,0.0001802516);
   ttH_HighRes_mr__52->SetBinError(14,0.0001140011);
   ttH_HighRes_mr__52->SetBinError(15,8.061096e-05);
   ttH_HighRes_mr__52->SetBinError(16,0.0001140011);
   ttH_HighRes_mr__52->SetBinError(17,8.061096e-05);
   ttH_HighRes_mr__52->SetBinError(18,9.872786e-05);
   ttH_HighRes_mr__52->SetBinError(20,8.061096e-05);
   ttH_HighRes_mr__52->SetBinError(21,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(22,9.872786e-05);
   ttH_HighRes_mr__52->SetBinError(23,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(25,9.872786e-05);
   ttH_HighRes_mr__52->SetBinError(27,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(39,5.700056e-05);
   ttH_HighRes_mr__52->SetEntries(706);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mr__52->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mr__52->SetLineColor(ci);
   ttH_HighRes_mr__52->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_mr__52->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_mr__52->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_mr__52->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_mr__52->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_mr__52->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_mr__52->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_mr__52->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_mr__52->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_mr__52->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_mr__52->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_mr__52->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_HighRes_mr","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_mr","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_mr","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_mr","t#bar{t}H + jets","f");

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
