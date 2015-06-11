void rsq_Hbb_Mr200Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:14:52 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.140357,1.060241,-0.5698097);
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
   hs->SetMaximum(0.2291147);
   
   TH1F *hs_stack_6 = new TH1F("hs_stack_6","",125,0,5);
   hs_stack_6->SetMinimum(0.08474386);
   hs_stack_6->SetMaximum(0.2456133);
   hs_stack_6->SetDirectory(0);
   hs_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_6->SetLineColor(ci);
   hs_stack_6->GetXaxis()->SetTitle("R^{2}");
   hs_stack_6->GetXaxis()->SetRange(1,25);
   hs_stack_6->GetXaxis()->SetLabelFont(42);
   hs_stack_6->GetXaxis()->SetLabelSize(0.035);
   hs_stack_6->GetXaxis()->SetTitleSize(0.06);
   hs_stack_6->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_6->GetXaxis()->SetTitleFont(42);
   hs_stack_6->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_6->GetYaxis()->SetLabelFont(42);
   hs_stack_6->GetYaxis()->SetLabelSize(0.035);
   hs_stack_6->GetYaxis()->SetTitleSize(0.06);
   hs_stack_6->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_6->GetYaxis()->SetTitleFont(42);
   hs_stack_6->GetZaxis()->SetLabelFont(42);
   hs_stack_6->GetZaxis()->SetLabelSize(0.035);
   hs_stack_6->GetZaxis()->SetTitleSize(0.035);
   hs_stack_6->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_6);
   
   
   TH1F *ggH_Hbb_rsq__21 = new TH1F("ggH_Hbb_rsq__21","rsq",125,0,5);
   ggH_Hbb_rsq__21->SetBinContent(1,0.01009492);
   ggH_Hbb_rsq__21->SetBinError(1,0.007138188);
   ggH_Hbb_rsq__21->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_rsq__21->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_rsq__21->SetLineColor(ci);
   ggH_Hbb_rsq__21->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_rsq__21->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_rsq__21->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_rsq__21->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_rsq__21->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_rsq__21->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_rsq__21->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_rsq__21->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_rsq__21->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_rsq__21->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_rsq__21->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_rsq__21->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_rsq,"histo");
   
   TH1F *vbfH_Hbb_rsq__22 = new TH1F("vbfH_Hbb_rsq__22","rsq",125,0,5);
   vbfH_Hbb_rsq__22->SetBinContent(1,0.0004420086);
   vbfH_Hbb_rsq__22->SetBinError(1,0.0004420086);
   vbfH_Hbb_rsq__22->SetEntries(1);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_rsq__22->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_rsq__22->SetLineColor(ci);
   vbfH_Hbb_rsq__22->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_rsq__22->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_rsq__22->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_rsq__22->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_rsq__22->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_rsq__22->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_rsq__22->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_rsq__22->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_rsq__22->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_rsq__22->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_rsq__22->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_rsq__22->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_rsq,"histo");
   
   TH1F *vH_Hbb_rsq__23 = new TH1F("vH_Hbb_rsq__23","rsq",125,0,5);
   vH_Hbb_rsq__23->SetBinContent(1,0.001031408);
   vH_Hbb_rsq__23->SetBinContent(2,0.0005157039);
   vH_Hbb_rsq__23->SetBinContent(3,0.000257852);
   vH_Hbb_rsq__23->SetBinError(1,0.0005157039);
   vH_Hbb_rsq__23->SetBinError(2,0.0003646577);
   vH_Hbb_rsq__23->SetBinError(3,0.000257852);
   vH_Hbb_rsq__23->SetEntries(7);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_rsq__23->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_rsq__23->SetLineColor(ci);
   vH_Hbb_rsq__23->GetXaxis()->SetLabelFont(42);
   vH_Hbb_rsq__23->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_rsq__23->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_rsq__23->GetXaxis()->SetTitleFont(42);
   vH_Hbb_rsq__23->GetYaxis()->SetLabelFont(42);
   vH_Hbb_rsq__23->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_rsq__23->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_rsq__23->GetYaxis()->SetTitleFont(42);
   vH_Hbb_rsq__23->GetZaxis()->SetLabelFont(42);
   vH_Hbb_rsq__23->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_rsq__23->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_rsq__23->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_rsq,"histo");
   
   TH1F *ttH_Hbb_rsq__24 = new TH1F("ttH_Hbb_rsq__24","rsq",125,0,5);
   ttH_Hbb_rsq__24->SetBinContent(1,0.01134313);
   ttH_Hbb_rsq__24->SetBinContent(2,0.01219814);
   ttH_Hbb_rsq__24->SetBinContent(3,0.006897076);
   ttH_Hbb_rsq__24->SetBinContent(4,0.003363035);
   ttH_Hbb_rsq__24->SetBinContent(5,0.002451025);
   ttH_Hbb_rsq__24->SetBinContent(6,0.0009120089);
   ttH_Hbb_rsq__24->SetBinContent(7,0.0006270061);
   ttH_Hbb_rsq__24->SetBinContent(8,0.0003990039);
   ttH_Hbb_rsq__24->SetBinContent(9,0.0002280022);
   ttH_Hbb_rsq__24->SetBinContent(10,0.0001710017);
   ttH_Hbb_rsq__24->SetBinContent(12,0.0002280022);
   ttH_Hbb_rsq__24->SetBinContent(13,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinContent(14,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinContent(15,0.0001140011);
   ttH_Hbb_rsq__24->SetBinContent(20,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinError(1,0.0008040918);
   ttH_Hbb_rsq__24->SetBinError(2,0.0008338463);
   ttH_Hbb_rsq__24->SetBinError(3,0.0006270061);
   ttH_Hbb_rsq__24->SetBinError(4,0.0004378296);
   ttH_Hbb_rsq__24->SetBinError(5,0.0003737777);
   ttH_Hbb_rsq__24->SetBinError(6,0.0002280022);
   ttH_Hbb_rsq__24->SetBinError(7,0.0001890495);
   ttH_Hbb_rsq__24->SetBinError(8,0.0001508093);
   ttH_Hbb_rsq__24->SetBinError(9,0.0001140011);
   ttH_Hbb_rsq__24->SetBinError(10,9.872786e-05);
   ttH_Hbb_rsq__24->SetBinError(12,0.0001140011);
   ttH_Hbb_rsq__24->SetBinError(13,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinError(14,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinError(15,8.061096e-05);
   ttH_Hbb_rsq__24->SetBinError(20,5.700056e-05);
   ttH_Hbb_rsq__24->SetEntries(686);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_rsq__24->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_rsq__24->SetLineColor(ci);
   ttH_Hbb_rsq__24->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_rsq__24->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_rsq__24->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_rsq__24->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_rsq__24->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_rsq__24->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_rsq__24->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_rsq__24->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_rsq__24->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_rsq__24->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_rsq__24->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_rsq__24->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Hbb_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_rsq","t#bar{t}H + jets","f");

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
