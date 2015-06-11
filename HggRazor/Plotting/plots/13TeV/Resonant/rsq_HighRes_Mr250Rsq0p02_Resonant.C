void rsq_HighRes_Mr250Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:15:18 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.669926,1.060241,1.38385);
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
   hs->SetMaximum(10.53321);
   
   TH1F *hs_stack_14 = new TH1F("hs_stack_14","",125,0,5);
   hs_stack_14->SetMinimum(0.04971957);
   hs_stack_14->SetMaximum(14.79402);
   hs_stack_14->SetDirectory(0);
   hs_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_14->SetLineColor(ci);
   hs_stack_14->GetXaxis()->SetTitle("R^{2}");
   hs_stack_14->GetXaxis()->SetRange(1,25);
   hs_stack_14->GetXaxis()->SetLabelFont(42);
   hs_stack_14->GetXaxis()->SetLabelSize(0.035);
   hs_stack_14->GetXaxis()->SetTitleSize(0.06);
   hs_stack_14->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_14->GetXaxis()->SetTitleFont(42);
   hs_stack_14->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_14->GetYaxis()->SetLabelFont(42);
   hs_stack_14->GetYaxis()->SetLabelSize(0.035);
   hs_stack_14->GetYaxis()->SetTitleSize(0.06);
   hs_stack_14->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_14->GetYaxis()->SetTitleFont(42);
   hs_stack_14->GetZaxis()->SetLabelFont(42);
   hs_stack_14->GetZaxis()->SetLabelSize(0.035);
   hs_stack_14->GetZaxis()->SetTitleSize(0.035);
   hs_stack_14->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_14);
   
   
   TH1F *ggH_HighRes_rsq__53 = new TH1F("ggH_HighRes_rsq__53","rsq",125,0,5);
   ggH_HighRes_rsq__53->SetBinContent(1,0.752071);
   ggH_HighRes_rsq__53->SetBinContent(2,0.3028477);
   ggH_HighRes_rsq__53->SetBinContent(3,0.03533223);
   ggH_HighRes_rsq__53->SetBinContent(4,0.01009492);
   ggH_HighRes_rsq__53->SetBinError(1,0.06161212);
   ggH_HighRes_rsq__53->SetBinError(2,0.03909747);
   ggH_HighRes_rsq__53->SetBinError(3,0.01335433);
   ggH_HighRes_rsq__53->SetBinError(4,0.007138188);
   ggH_HighRes_rsq__53->SetEntries(218);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_rsq__53->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_rsq__53->SetLineColor(ci);
   ggH_HighRes_rsq__53->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_rsq__53->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_rsq__53->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_rsq__53->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_rsq__53->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_rsq__53->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_rsq__53->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_rsq__53->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_rsq__53->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_rsq__53->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_rsq__53->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_rsq__53->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_rsq,"histo");
   
   TH1F *vbfH_HighRes_rsq__54 = new TH1F("vbfH_HighRes_rsq__54","rsq",125,0,5);
   vbfH_HighRes_rsq__54->SetBinContent(1,0.2324973);
   vbfH_HighRes_rsq__54->SetBinContent(2,0.1047558);
   vbfH_HighRes_rsq__54->SetBinContent(3,0.01370226);
   vbfH_HighRes_rsq__54->SetBinContent(4,0.003978077);
   vbfH_HighRes_rsq__54->SetBinContent(5,0.0008840172);
   vbfH_HighRes_rsq__54->SetBinContent(7,0.0004420086);
   vbfH_HighRes_rsq__54->SetBinError(1,0.01013733);
   vbfH_HighRes_rsq__54->SetBinError(2,0.006804636);
   vbfH_HighRes_rsq__54->SetBinError(3,0.002461);
   vbfH_HighRes_rsq__54->SetBinError(4,0.001326026);
   vbfH_HighRes_rsq__54->SetBinError(5,0.0006250945);
   vbfH_HighRes_rsq__54->SetBinError(7,0.0004420086);
   vbfH_HighRes_rsq__54->SetEntries(806);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_rsq__54->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_rsq__54->SetLineColor(ci);
   vbfH_HighRes_rsq__54->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_rsq__54->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_rsq__54->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_rsq__54->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_rsq__54->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_rsq__54->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_rsq__54->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_rsq__54->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_rsq__54->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_rsq__54->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_rsq__54->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_rsq__54->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_rsq,"histo");
   
   TH1F *vH_HighRes_rsq__55 = new TH1F("vH_HighRes_rsq__55","rsq",125,0,5);
   vH_HighRes_rsq__55->SetBinContent(1,0.04538199);
   vH_HighRes_rsq__55->SetBinContent(2,0.02655873);
   vH_HighRes_rsq__55->SetBinContent(3,0.008251264);
   vH_HighRes_rsq__55->SetBinContent(4,0.002320668);
   vH_HighRes_rsq__55->SetBinContent(5,0.001804964);
   vH_HighRes_rsq__55->SetBinContent(6,0.001804964);
   vH_HighRes_rsq__55->SetBinContent(7,0.0007735559);
   vH_HighRes_rsq__55->SetBinContent(9,0.0007735559);
   vH_HighRes_rsq__55->SetBinContent(10,0.0005157039);
   vH_HighRes_rsq__55->SetBinContent(12,0.000257852);
   vH_HighRes_rsq__55->SetBinError(1,0.003420793);
   vH_HighRes_rsq__55->SetBinError(2,0.002616912);
   vH_HighRes_rsq__55->SetBinError(3,0.001458631);
   vH_HighRes_rsq__55->SetBinError(4,0.0007735559);
   vH_HighRes_rsq__55->SetBinError(5,0.0006822122);
   vH_HighRes_rsq__55->SetBinError(6,0.0006822122);
   vH_HighRes_rsq__55->SetBinError(7,0.0004466127);
   vH_HighRes_rsq__55->SetBinError(9,0.0004466127);
   vH_HighRes_rsq__55->SetBinError(10,0.0003646577);
   vH_HighRes_rsq__55->SetBinError(12,0.000257852);
   vH_HighRes_rsq__55->SetEntries(343);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_rsq__55->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_rsq__55->SetLineColor(ci);
   vH_HighRes_rsq__55->GetXaxis()->SetLabelFont(42);
   vH_HighRes_rsq__55->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_rsq__55->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_rsq__55->GetXaxis()->SetTitleFont(42);
   vH_HighRes_rsq__55->GetYaxis()->SetLabelFont(42);
   vH_HighRes_rsq__55->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_rsq__55->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_rsq__55->GetYaxis()->SetTitleFont(42);
   vH_HighRes_rsq__55->GetZaxis()->SetLabelFont(42);
   vH_HighRes_rsq__55->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_rsq__55->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_rsq__55->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_rsq,"histo");
   
   TH1F *ttH_HighRes_rsq__56 = new TH1F("ttH_HighRes_rsq__56","rsq",125,0,5);
   ttH_HighRes_rsq__56->SetBinContent(1,0.02337027);
   ttH_HighRes_rsq__56->SetBinContent(2,0.02468128);
   ttH_HighRes_rsq__56->SetBinContent(3,0.009348105);
   ttH_HighRes_rsq__56->SetBinContent(4,0.005928065);
   ttH_HighRes_rsq__56->SetBinContent(5,0.003591038);
   ttH_HighRes_rsq__56->SetBinContent(6,0.00205202);
   ttH_HighRes_rsq__56->SetBinContent(7,0.001254012);
   ttH_HighRes_rsq__56->SetBinContent(8,0.001140011);
   ttH_HighRes_rsq__56->SetBinContent(9,0.0008550083);
   ttH_HighRes_rsq__56->SetBinContent(10,0.0002280022);
   ttH_HighRes_rsq__56->SetBinContent(11,0.0002850028);
   ttH_HighRes_rsq__56->SetBinContent(12,0.0001710017);
   ttH_HighRes_rsq__56->SetBinContent(13,0.0002280022);
   ttH_HighRes_rsq__56->SetBinContent(14,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinContent(15,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinContent(16,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinContent(18,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinError(1,0.001154173);
   ttH_HighRes_rsq__56->SetBinError(2,0.001186105);
   ttH_HighRes_rsq__56->SetBinError(3,0.0007299633);
   ttH_HighRes_rsq__56->SetBinError(4,0.0005812939);
   ttH_HighRes_rsq__56->SetBinError(5,0.0004524279);
   ttH_HighRes_rsq__56->SetBinError(6,0.0003420033);
   ttH_HighRes_rsq__56->SetBinError(7,0.0002673563);
   ttH_HighRes_rsq__56->SetBinError(8,0.0002549142);
   ttH_HighRes_rsq__56->SetBinError(9,0.0002207622);
   ttH_HighRes_rsq__56->SetBinError(10,0.0001140011);
   ttH_HighRes_rsq__56->SetBinError(11,0.0001274571);
   ttH_HighRes_rsq__56->SetBinError(12,9.872786e-05);
   ttH_HighRes_rsq__56->SetBinError(13,0.0001140011);
   ttH_HighRes_rsq__56->SetBinError(14,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinError(15,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinError(16,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinError(18,5.700056e-05);
   ttH_HighRes_rsq__56->SetEntries(1287);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_rsq__56->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_rsq__56->SetLineColor(ci);
   ttH_HighRes_rsq__56->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_rsq__56->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_rsq__56->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_rsq__56->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_rsq__56->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_rsq__56->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_rsq__56->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_rsq__56->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_rsq__56->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_rsq__56->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_rsq__56->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_rsq__56->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_HighRes_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_rsq","t#bar{t}H + jets","f");

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
