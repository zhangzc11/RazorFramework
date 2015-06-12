void rsq_LowRes_Mr250_Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:03 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.718216,1.060241,1.585277);
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
   hs->SetMaximum(15.7006);
   
   TH1F *hs_stack_18 = new TH1F("hs_stack_18","",125,0,5);
   hs_stack_18->SetMinimum(0.04766539);
   hs_stack_18->SetMaximum(22.59604);
   hs_stack_18->SetDirectory(0);
   hs_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_18->SetLineColor(ci);
   hs_stack_18->GetXaxis()->SetTitle("R^{2}");
   hs_stack_18->GetXaxis()->SetRange(1,25);
   hs_stack_18->GetXaxis()->SetLabelFont(42);
   hs_stack_18->GetXaxis()->SetLabelSize(0.035);
   hs_stack_18->GetXaxis()->SetTitleSize(0.06);
   hs_stack_18->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_18->GetXaxis()->SetTitleFont(42);
   hs_stack_18->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_18->GetYaxis()->SetLabelFont(42);
   hs_stack_18->GetYaxis()->SetLabelSize(0.035);
   hs_stack_18->GetYaxis()->SetTitleSize(0.06);
   hs_stack_18->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_18->GetYaxis()->SetTitleFont(42);
   hs_stack_18->GetZaxis()->SetLabelFont(42);
   hs_stack_18->GetZaxis()->SetLabelSize(0.035);
   hs_stack_18->GetZaxis()->SetTitleSize(0.035);
   hs_stack_18->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_18);
   
   
   TH1F *ggH_LowRes_rsq__69 = new TH1F("ggH_LowRes_rsq__69","rsq",125,0,5);
   ggH_LowRes_rsq__69->SetBinContent(1,1.336906);
   ggH_LowRes_rsq__69->SetBinContent(2,0.585834);
   ggH_LowRes_rsq__69->SetBinContent(3,0.07510695);
   ggH_LowRes_rsq__69->SetBinContent(4,0.02503565);
   ggH_LowRes_rsq__69->SetBinContent(5,0.01502139);
   ggH_LowRes_rsq__69->SetBinContent(7,0.00500713);
   ggH_LowRes_rsq__69->SetBinError(1,0.08181718);
   ggH_LowRes_rsq__69->SetBinError(2,0.05416039);
   ggH_LowRes_rsq__69->SetBinError(3,0.01939253);
   ggH_LowRes_rsq__69->SetBinError(4,0.01119628);
   ggH_LowRes_rsq__69->SetBinError(5,0.008672604);
   ggH_LowRes_rsq__69->SetBinError(7,0.00500713);
   ggH_LowRes_rsq__69->SetEntries(408);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_rsq__69->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_rsq__69->SetLineColor(ci);
   ggH_LowRes_rsq__69->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_rsq__69->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_rsq__69->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_rsq__69->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_rsq__69->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_rsq__69->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_rsq__69->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_rsq__69->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_rsq__69->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_rsq__69->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_rsq__69->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_rsq__69->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_rsq,"histo");
   
   TH1F *vbfH_LowRes_rsq__70 = new TH1F("vbfH_LowRes_rsq__70","rsq",125,0,5);
   vbfH_LowRes_rsq__70->SetBinContent(1,0.1750356);
   vbfH_LowRes_rsq__70->SetBinContent(2,0.06895338);
   vbfH_LowRes_rsq__70->SetBinContent(3,0.009724188);
   vbfH_LowRes_rsq__70->SetBinContent(4,0.003978077);
   vbfH_LowRes_rsq__70->SetBinContent(5,0.0008840172);
   vbfH_LowRes_rsq__70->SetBinContent(7,0.0004420086);
   vbfH_LowRes_rsq__70->SetBinError(1,0.00879586);
   vbfH_LowRes_rsq__70->SetBinError(2,0.005520685);
   vbfH_LowRes_rsq__70->SetBinError(3,0.002073204);
   vbfH_LowRes_rsq__70->SetBinError(4,0.001326026);
   vbfH_LowRes_rsq__70->SetBinError(5,0.0006250945);
   vbfH_LowRes_rsq__70->SetBinError(7,0.0004420086);
   vbfH_LowRes_rsq__70->SetEntries(586);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_rsq__70->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_rsq__70->SetLineColor(ci);
   vbfH_LowRes_rsq__70->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_rsq__70->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_rsq__70->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_rsq__70->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_rsq__70->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_rsq__70->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_rsq__70->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_rsq__70->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_rsq__70->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_rsq__70->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_rsq__70->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_rsq__70->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_rsq,"histo");
   
   TH1F *vH_LowRes_rsq__71 = new TH1F("vH_LowRes_rsq__71","rsq",125,0,5);
   vH_LowRes_rsq__71->SetBinContent(1,0.02836369);
   vH_LowRes_rsq__71->SetBinContent(2,0.02707443);
   vH_LowRes_rsq__71->SetBinContent(3,0.006704152);
   vH_LowRes_rsq__71->SetBinContent(4,0.002320668);
   vH_LowRes_rsq__71->SetBinContent(5,0.001547112);
   vH_LowRes_rsq__71->SetBinContent(7,0.0005157039);
   vH_LowRes_rsq__71->SetBinContent(8,0.0005157039);
   vH_LowRes_rsq__71->SetBinContent(12,0.0005157039);
   vH_LowRes_rsq__71->SetBinContent(16,0.000257852);
   vH_LowRes_rsq__71->SetBinError(1,0.002704374);
   vH_LowRes_rsq__71->SetBinError(2,0.002642196);
   vH_LowRes_rsq__71->SetBinError(3,0.001314792);
   vH_LowRes_rsq__71->SetBinError(4,0.0007735559);
   vH_LowRes_rsq__71->SetBinError(5,0.0006316057);
   vH_LowRes_rsq__71->SetBinError(7,0.0003646577);
   vH_LowRes_rsq__71->SetBinError(8,0.0003646577);
   vH_LowRes_rsq__71->SetBinError(12,0.0003646577);
   vH_LowRes_rsq__71->SetBinError(16,0.000257852);
   vH_LowRes_rsq__71->SetEntries(263);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_rsq__71->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_rsq__71->SetLineColor(ci);
   vH_LowRes_rsq__71->GetXaxis()->SetLabelFont(42);
   vH_LowRes_rsq__71->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_rsq__71->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_rsq__71->GetXaxis()->SetTitleFont(42);
   vH_LowRes_rsq__71->GetYaxis()->SetLabelFont(42);
   vH_LowRes_rsq__71->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_rsq__71->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_rsq__71->GetYaxis()->SetTitleFont(42);
   vH_LowRes_rsq__71->GetZaxis()->SetLabelFont(42);
   vH_LowRes_rsq__71->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_rsq__71->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_rsq__71->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_rsq,"histo");
   
   TH1F *ttH_LowRes_rsq__72 = new TH1F("ttH_LowRes_rsq__72","rsq",125,0,5);
   ttH_LowRes_rsq__72->SetBinContent(1,0.02975434);
   ttH_LowRes_rsq__72->SetBinContent(2,0.02964034);
   ttH_LowRes_rsq__72->SetBinContent(3,0.01425016);
   ttH_LowRes_rsq__72->SetBinContent(4,0.007467083);
   ttH_LowRes_rsq__72->SetBinContent(5,0.004503048);
   ttH_LowRes_rsq__72->SetBinContent(6,0.002736028);
   ttH_LowRes_rsq__72->SetBinContent(7,0.001368013);
   ttH_LowRes_rsq__72->SetBinContent(8,0.0009690094);
   ttH_LowRes_rsq__72->SetBinContent(9,0.0009690094);
   ttH_LowRes_rsq__72->SetBinContent(10,0.0003990039);
   ttH_LowRes_rsq__72->SetBinContent(11,0.000513005);
   ttH_LowRes_rsq__72->SetBinContent(12,0.0004560044);
   ttH_LowRes_rsq__72->SetBinContent(13,0.0001710017);
   ttH_LowRes_rsq__72->SetBinContent(14,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinContent(15,0.0001710017);
   ttH_LowRes_rsq__72->SetBinContent(16,0.0001140011);
   ttH_LowRes_rsq__72->SetBinContent(18,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinContent(19,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinContent(22,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinError(1,0.00130231);
   ttH_LowRes_rsq__72->SetBinError(2,0.001299813);
   ttH_LowRes_rsq__72->SetBinError(3,0.000901258);
   ttH_LowRes_rsq__72->SetBinError(4,0.0006524012);
   ttH_LowRes_rsq__72->SetBinError(5,0.000506632);
   ttH_LowRes_rsq__72->SetBinError(6,0.0003949114);
   ttH_LowRes_rsq__72->SetBinError(7,0.0002792446);
   ttH_LowRes_rsq__72->SetBinError(8,0.0002350193);
   ttH_LowRes_rsq__72->SetBinError(9,0.0002350193);
   ttH_LowRes_rsq__72->SetBinError(10,0.0001508093);
   ttH_LowRes_rsq__72->SetBinError(11,0.0001710017);
   ttH_LowRes_rsq__72->SetBinError(12,0.0001612219);
   ttH_LowRes_rsq__72->SetBinError(13,9.872786e-05);
   ttH_LowRes_rsq__72->SetBinError(14,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinError(15,9.872786e-05);
   ttH_LowRes_rsq__72->SetBinError(16,8.061096e-05);
   ttH_LowRes_rsq__72->SetBinError(18,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinError(19,5.700056e-05);
   ttH_LowRes_rsq__72->SetBinError(22,5.700056e-05);
   ttH_LowRes_rsq__72->SetEntries(1644);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_rsq__72->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_rsq__72->SetLineColor(ci);
   ttH_LowRes_rsq__72->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_rsq__72->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_rsq__72->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_rsq__72->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_rsq__72->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_rsq__72->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_rsq__72->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_rsq__72->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_rsq__72->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_rsq__72->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_rsq__72->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_rsq__72->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_LowRes_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_LowRes_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_LowRes_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_LowRes_rsq","t#bar{t}H + jets","f");

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
