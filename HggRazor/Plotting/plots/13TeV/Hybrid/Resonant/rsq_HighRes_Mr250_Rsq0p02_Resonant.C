void rsq_HighRes_Mr250_Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:03 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.769966,1.060241,1.804978);
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
   hs->SetMaximum(24.28464);
   
   TH1F *hs_stack_14 = new TH1F("hs_stack_14","",125,0,5);
   hs_stack_14->SetMinimum(0.04560658);
   hs_stack_14->SetMaximum(35.87003);
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
   ggH_HighRes_rsq__53->SetBinContent(1,1.977821);
   ggH_HighRes_rsq__53->SetBinContent(2,1.046492);
   ggH_HighRes_rsq__53->SetBinContent(3,0.1201711);
   ggH_HighRes_rsq__53->SetBinContent(4,0.04506417);
   ggH_HighRes_rsq__53->SetBinContent(5,0.01502139);
   ggH_HighRes_rsq__53->SetBinError(1,0.09951474);
   ggH_HighRes_rsq__53->SetBinError(2,0.07238724);
   ggH_HighRes_rsq__53->SetBinError(3,0.02452983);
   ggH_HighRes_rsq__53->SetBinError(4,0.01502139);
   ggH_HighRes_rsq__53->SetBinError(5,0.008672604);
   ggH_HighRes_rsq__53->SetEntries(640);

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
   vbfH_HighRes_rsq__54->SetBinContent(1,0.3368095);
   vbfH_HighRes_rsq__54->SetBinContent(2,0.156471);
   vbfH_HighRes_rsq__54->SetBinContent(3,0.02077441);
   vbfH_HighRes_rsq__54->SetBinContent(4,0.008398162);
   vbfH_HighRes_rsq__54->SetBinContent(5,0.001768034);
   vbfH_HighRes_rsq__54->SetBinContent(6,0.0004420086);
   vbfH_HighRes_rsq__54->SetBinContent(7,0.0004420086);
   vbfH_HighRes_rsq__54->SetBinError(1,0.01220136);
   vbfH_HighRes_rsq__54->SetBinError(2,0.008316342);
   vbfH_HighRes_rsq__54->SetBinError(3,0.003030258);
   vbfH_HighRes_rsq__54->SetBinError(4,0.001926671);
   vbfH_HighRes_rsq__54->SetBinError(5,0.0008840172);
   vbfH_HighRes_rsq__54->SetBinError(6,0.0004420086);
   vbfH_HighRes_rsq__54->SetBinError(7,0.0004420086);
   vbfH_HighRes_rsq__54->SetEntries(1188);

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
   vH_HighRes_rsq__55->SetBinContent(1,0.06059534);
   vH_HighRes_rsq__55->SetBinContent(2,0.04692911);
   vH_HighRes_rsq__55->SetBinContent(3,0.01418185);
   vH_HighRes_rsq__55->SetBinContent(4,0.003094224);
   vH_HighRes_rsq__55->SetBinContent(5,0.003352076);
   vH_HighRes_rsq__55->SetBinContent(6,0.001804964);
   vH_HighRes_rsq__55->SetBinContent(7,0.001031408);
   vH_HighRes_rsq__55->SetBinContent(8,0.0007735559);
   vH_HighRes_rsq__55->SetBinContent(9,0.001031408);
   vH_HighRes_rsq__55->SetBinContent(10,0.001031408);
   vH_HighRes_rsq__55->SetBinContent(11,0.0005157039);
   vH_HighRes_rsq__55->SetBinContent(12,0.000257852);
   vH_HighRes_rsq__55->SetBinContent(17,0.000257852);
   vH_HighRes_rsq__55->SetBinError(1,0.003952796);
   vH_HighRes_rsq__55->SetBinError(2,0.003478613);
   vH_HighRes_rsq__55->SetBinError(3,0.001912281);
   vH_HighRes_rsq__55->SetBinError(4,0.0008932254);
   vH_HighRes_rsq__55->SetBinError(5,0.0009296985);
   vH_HighRes_rsq__55->SetBinError(6,0.0006822122);
   vH_HighRes_rsq__55->SetBinError(7,0.0005157039);
   vH_HighRes_rsq__55->SetBinError(8,0.0004466127);
   vH_HighRes_rsq__55->SetBinError(9,0.0005157039);
   vH_HighRes_rsq__55->SetBinError(10,0.0005157039);
   vH_HighRes_rsq__55->SetBinError(11,0.0003646577);
   vH_HighRes_rsq__55->SetBinError(12,0.000257852);
   vH_HighRes_rsq__55->SetBinError(17,0.000257852);
   vH_HighRes_rsq__55->SetEntries(523);

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
   ttH_HighRes_rsq__56->SetBinContent(1,0.05323862);
   ttH_HighRes_rsq__56->SetBinContent(2,0.05546164);
   ttH_HighRes_rsq__56->SetBinContent(3,0.02137524);
   ttH_HighRes_rsq__56->SetBinContent(4,0.01288215);
   ttH_HighRes_rsq__56->SetBinContent(5,0.00809409);
   ttH_HighRes_rsq__56->SetBinContent(6,0.005073055);
   ttH_HighRes_rsq__56->SetBinContent(7,0.002964031);
   ttH_HighRes_rsq__56->SetBinContent(8,0.002679027);
   ttH_HighRes_rsq__56->SetBinContent(9,0.001710017);
   ttH_HighRes_rsq__56->SetBinContent(10,0.0009690094);
   ttH_HighRes_rsq__56->SetBinContent(11,0.0007410072);
   ttH_HighRes_rsq__56->SetBinContent(12,0.0002850028);
   ttH_HighRes_rsq__56->SetBinContent(13,0.0006270061);
   ttH_HighRes_rsq__56->SetBinContent(14,0.0001140011);
   ttH_HighRes_rsq__56->SetBinContent(15,0.0002850028);
   ttH_HighRes_rsq__56->SetBinContent(16,0.0002280022);
   ttH_HighRes_rsq__56->SetBinContent(18,0.0001140011);
   ttH_HighRes_rsq__56->SetBinContent(22,5.700056e-05);
   ttH_HighRes_rsq__56->SetBinError(1,0.001742018);
   ttH_HighRes_rsq__56->SetBinError(2,0.001778015);
   ttH_HighRes_rsq__56->SetBinError(3,0.001103811);
   ttH_HighRes_rsq__56->SetBinError(4,0.0008569063);
   ttH_HighRes_rsq__56->SetBinError(5,0.00067924);
   ttH_HighRes_rsq__56->SetBinError(6,0.0005377422);
   ttH_HighRes_rsq__56->SetBinError(7,0.0004110369);
   ttH_HighRes_rsq__56->SetBinError(8,0.0003907761);
   ttH_HighRes_rsq__56->SetBinError(9,0.0003122049);
   ttH_HighRes_rsq__56->SetBinError(10,0.0002350193);
   ttH_HighRes_rsq__56->SetBinError(11,0.0002055184);
   ttH_HighRes_rsq__56->SetBinError(12,0.0001274571);
   ttH_HighRes_rsq__56->SetBinError(13,0.0001890495);
   ttH_HighRes_rsq__56->SetBinError(14,8.061096e-05);
   ttH_HighRes_rsq__56->SetBinError(15,0.0001274571);
   ttH_HighRes_rsq__56->SetBinError(16,0.0001140011);
   ttH_HighRes_rsq__56->SetBinError(18,8.061096e-05);
   ttH_HighRes_rsq__56->SetBinError(22,5.700056e-05);
   ttH_HighRes_rsq__56->SetEntries(2928);

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
