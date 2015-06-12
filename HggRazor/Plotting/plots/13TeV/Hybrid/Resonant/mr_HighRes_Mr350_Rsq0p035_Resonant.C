void mr_HighRes_Mr350_Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.412307,2147.47,0.3719327);
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
   hs->SetMaximum(1.434368);
   
   TH1F *hs_stack_13 = new TH1F("hs_stack_13","",160,130,8130);
   hs_stack_13->SetMinimum(0.06335809);
   hs_stack_13->SetMaximum(1.766184);
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
   ggH_HighRes_mr__49->SetBinContent(5,0.1101569);
   ggH_HighRes_mr__49->SetBinContent(6,0.1051497);
   ggH_HighRes_mr__49->SetBinContent(7,0.03004278);
   ggH_HighRes_mr__49->SetBinContent(8,0.01502139);
   ggH_HighRes_mr__49->SetBinContent(14,0.00500713);
   ggH_HighRes_mr__49->SetBinError(5,0.02348552);
   ggH_HighRes_mr__49->SetBinError(6,0.02294555);
   ggH_HighRes_mr__49->SetBinError(7,0.01226491);
   ggH_HighRes_mr__49->SetBinError(8,0.008672604);
   ggH_HighRes_mr__49->SetBinError(14,0.00500713);
   ggH_HighRes_mr__49->SetEntries(53);

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
   vbfH_HighRes_mr__50->SetBinContent(5,0.01414427);
   vbfH_HighRes_mr__50->SetBinContent(6,0.01502829);
   vbfH_HighRes_mr__50->SetBinContent(7,0.007514145);
   vbfH_HighRes_mr__50->SetBinContent(8,0.003536068);
   vbfH_HighRes_mr__50->SetBinContent(9,0.001326026);
   vbfH_HighRes_mr__50->SetBinContent(10,0.0008840172);
   vbfH_HighRes_mr__50->SetBinError(5,0.002500378);
   vbfH_HighRes_mr__50->SetBinError(6,0.002577331);
   vbfH_HighRes_mr__50->SetBinError(7,0.001822448);
   vbfH_HighRes_mr__50->SetBinError(8,0.001250189);
   vbfH_HighRes_mr__50->SetBinError(9,0.0007655813);
   vbfH_HighRes_mr__50->SetBinError(10,0.0006250945);
   vbfH_HighRes_mr__50->SetEntries(96);

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
   vH_HighRes_mr__51->SetBinContent(5,0.00773556);
   vH_HighRes_mr__51->SetBinContent(6,0.00515704);
   vH_HighRes_mr__51->SetBinContent(7,0.004383484);
   vH_HighRes_mr__51->SetBinContent(8,0.002062816);
   vH_HighRes_mr__51->SetBinContent(9,0.001031408);
   vH_HighRes_mr__51->SetBinContent(10,0.0005157039);
   vH_HighRes_mr__51->SetBinContent(11,0.000257852);
   vH_HighRes_mr__51->SetBinContent(12,0.000257852);
   vH_HighRes_mr__51->SetBinError(5,0.001412313);
   vH_HighRes_mr__51->SetBinError(6,0.001153149);
   vH_HighRes_mr__51->SetBinError(7,0.001063151);
   vH_HighRes_mr__51->SetBinError(8,0.0007293155);
   vH_HighRes_mr__51->SetBinError(9,0.0005157039);
   vH_HighRes_mr__51->SetBinError(10,0.0003646577);
   vH_HighRes_mr__51->SetBinError(11,0.000257852);
   vH_HighRes_mr__51->SetBinError(12,0.000257852);
   vH_HighRes_mr__51->SetEntries(83);

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
   ttH_HighRes_mr__52->SetBinContent(5,0.01140013);
   ttH_HighRes_mr__52->SetBinContent(6,0.01556118);
   ttH_HighRes_mr__52->SetBinContent(7,0.01350915);
   ttH_HighRes_mr__52->SetBinContent(8,0.008607096);
   ttH_HighRes_mr__52->SetBinContent(9,0.007125079);
   ttH_HighRes_mr__52->SetBinContent(10,0.004731051);
   ttH_HighRes_mr__52->SetBinContent(11,0.003249034);
   ttH_HighRes_mr__52->SetBinContent(12,0.001824018);
   ttH_HighRes_mr__52->SetBinContent(13,0.001596016);
   ttH_HighRes_mr__52->SetBinContent(14,0.001596016);
   ttH_HighRes_mr__52->SetBinContent(15,0.0009690094);
   ttH_HighRes_mr__52->SetBinContent(16,0.0006270061);
   ttH_HighRes_mr__52->SetBinContent(17,0.0005700056);
   ttH_HighRes_mr__52->SetBinContent(18,0.0004560044);
   ttH_HighRes_mr__52->SetBinContent(19,0.0002280022);
   ttH_HighRes_mr__52->SetBinContent(20,0.0004560044);
   ttH_HighRes_mr__52->SetBinContent(21,0.0004560044);
   ttH_HighRes_mr__52->SetBinContent(22,0.0001710017);
   ttH_HighRes_mr__52->SetBinContent(23,0.0002280022);
   ttH_HighRes_mr__52->SetBinContent(24,0.0001710017);
   ttH_HighRes_mr__52->SetBinContent(25,5.700056e-05);
   ttH_HighRes_mr__52->SetBinContent(26,5.700056e-05);
   ttH_HighRes_mr__52->SetBinContent(27,0.0001140011);
   ttH_HighRes_mr__52->SetBinContent(28,5.700056e-05);
   ttH_HighRes_mr__52->SetBinContent(29,0.0001140011);
   ttH_HighRes_mr__52->SetBinContent(38,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(5,0.0008061096);
   ttH_HighRes_mr__52->SetBinError(6,0.0009418038);
   ttH_HighRes_mr__52->SetBinError(7,0.0008775124);
   ttH_HighRes_mr__52->SetBinError(8,0.0007004346);
   ttH_HighRes_mr__52->SetBinError(9,0.0006372856);
   ttH_HighRes_mr__52->SetBinError(10,0.0005192998);
   ttH_HighRes_mr__52->SetBinError(11,0.0004303448);
   ttH_HighRes_mr__52->SetBinError(12,0.0003224438);
   ttH_HighRes_mr__52->SetBinError(13,0.0003016186);
   ttH_HighRes_mr__52->SetBinError(14,0.0003016186);
   ttH_HighRes_mr__52->SetBinError(15,0.0002350193);
   ttH_HighRes_mr__52->SetBinError(16,0.0001890495);
   ttH_HighRes_mr__52->SetBinError(17,0.0001802516);
   ttH_HighRes_mr__52->SetBinError(18,0.0001612219);
   ttH_HighRes_mr__52->SetBinError(19,0.0001140011);
   ttH_HighRes_mr__52->SetBinError(20,0.0001612219);
   ttH_HighRes_mr__52->SetBinError(21,0.0001612219);
   ttH_HighRes_mr__52->SetBinError(22,9.872786e-05);
   ttH_HighRes_mr__52->SetBinError(23,0.0001140011);
   ttH_HighRes_mr__52->SetBinError(24,9.872786e-05);
   ttH_HighRes_mr__52->SetBinError(25,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(26,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(27,8.061096e-05);
   ttH_HighRes_mr__52->SetBinError(28,5.700056e-05);
   ttH_HighRes_mr__52->SetBinError(29,8.061096e-05);
   ttH_HighRes_mr__52->SetBinError(38,5.700056e-05);
   ttH_HighRes_mr__52->SetEntries(1298);

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
