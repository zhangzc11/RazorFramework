void rsq_Zbb_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:12:35 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.242578,1.060241,-0.2320807);
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
   hs->SetMaximum(0.4410897);
   
   TH1F *hs_stack_10 = new TH1F("hs_stack_10","",125,0,5);
   hs_stack_10->SetMinimum(0.07562789);
   hs_stack_10->SetMaximum(0.4979486);
   hs_stack_10->SetDirectory(0);
   hs_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_10->SetLineColor(ci);
   hs_stack_10->GetXaxis()->SetTitle("R^{2}");
   hs_stack_10->GetXaxis()->SetRange(1,25);
   hs_stack_10->GetXaxis()->SetLabelFont(42);
   hs_stack_10->GetXaxis()->SetLabelSize(0.035);
   hs_stack_10->GetXaxis()->SetTitleSize(0.06);
   hs_stack_10->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_10->GetXaxis()->SetTitleFont(42);
   hs_stack_10->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_10->GetYaxis()->SetLabelFont(42);
   hs_stack_10->GetYaxis()->SetLabelSize(0.035);
   hs_stack_10->GetYaxis()->SetTitleSize(0.06);
   hs_stack_10->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_10->GetYaxis()->SetTitleFont(42);
   hs_stack_10->GetZaxis()->SetLabelFont(42);
   hs_stack_10->GetZaxis()->SetLabelSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_10);
   
   
   TH1F *ggH_Zbb_rsq__37 = new TH1F("ggH_Zbb_rsq__37","rsq",125,0,5);
   ggH_Zbb_rsq__37->SetBinContent(1,0.01009492);
   ggH_Zbb_rsq__37->SetBinContent(2,0.005047461);
   ggH_Zbb_rsq__37->SetBinContent(12,0.005047461);
   ggH_Zbb_rsq__37->SetBinError(1,0.007138188);
   ggH_Zbb_rsq__37->SetBinError(2,0.005047461);
   ggH_Zbb_rsq__37->SetBinError(12,0.005047461);
   ggH_Zbb_rsq__37->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_rsq__37->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_rsq__37->SetLineColor(ci);
   ggH_Zbb_rsq__37->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__37->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__37->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__37->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_rsq__37->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__37->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__37->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__37->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_rsq__37->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__37->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__37->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__37->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_rsq,"histo");
   
   TH1F *vbfH_Zbb_rsq__38 = new TH1F("vbfH_Zbb_rsq__38","rsq",125,0,5);
   vbfH_Zbb_rsq__38->SetBinContent(1,0.004420085);
   vbfH_Zbb_rsq__38->SetBinContent(2,0.0008840172);
   vbfH_Zbb_rsq__38->SetBinContent(5,0.0004420086);
   vbfH_Zbb_rsq__38->SetBinError(1,0.001397754);
   vbfH_Zbb_rsq__38->SetBinError(2,0.0006250945);
   vbfH_Zbb_rsq__38->SetBinError(5,0.0004420086);
   vbfH_Zbb_rsq__38->SetEntries(13);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_rsq__38->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_rsq__38->SetLineColor(ci);
   vbfH_Zbb_rsq__38->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__38->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__38->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__38->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_rsq__38->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__38->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__38->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__38->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_rsq__38->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__38->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__38->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__38->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_rsq,"histo");
   
   TH1F *vH_Zbb_rsq__39 = new TH1F("vH_Zbb_rsq__39","rsq",125,0,5);
   vH_Zbb_rsq__39->SetBinContent(1,0.007477708);
   vH_Zbb_rsq__39->SetBinContent(2,0.006704152);
   vH_Zbb_rsq__39->SetBinContent(3,0.002320668);
   vH_Zbb_rsq__39->SetBinContent(4,0.0007735559);
   vH_Zbb_rsq__39->SetBinContent(5,0.0005157039);
   vH_Zbb_rsq__39->SetBinContent(7,0.000257852);
   vH_Zbb_rsq__39->SetBinContent(12,0.000257852);
   vH_Zbb_rsq__39->SetBinContent(14,0.000257852);
   vH_Zbb_rsq__39->SetBinError(1,0.001388575);
   vH_Zbb_rsq__39->SetBinError(2,0.001314792);
   vH_Zbb_rsq__39->SetBinError(3,0.0007735559);
   vH_Zbb_rsq__39->SetBinError(4,0.0004466127);
   vH_Zbb_rsq__39->SetBinError(5,0.0003646577);
   vH_Zbb_rsq__39->SetBinError(7,0.000257852);
   vH_Zbb_rsq__39->SetBinError(12,0.000257852);
   vH_Zbb_rsq__39->SetBinError(14,0.000257852);
   vH_Zbb_rsq__39->SetEntries(72);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_rsq__39->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_rsq__39->SetLineColor(ci);
   vH_Zbb_rsq__39->GetXaxis()->SetLabelFont(42);
   vH_Zbb_rsq__39->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__39->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__39->GetXaxis()->SetTitleFont(42);
   vH_Zbb_rsq__39->GetYaxis()->SetLabelFont(42);
   vH_Zbb_rsq__39->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__39->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__39->GetYaxis()->SetTitleFont(42);
   vH_Zbb_rsq__39->GetZaxis()->SetLabelFont(42);
   vH_Zbb_rsq__39->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__39->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__39->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_rsq,"histo");
   
   TH1F *ttH_Zbb_rsq__40 = new TH1F("ttH_Zbb_rsq__40","rsq",125,0,5);
   ttH_Zbb_rsq__40->SetBinContent(1,0.02211625);
   ttH_Zbb_rsq__40->SetBinContent(2,0.00980411);
   ttH_Zbb_rsq__40->SetBinContent(3,0.004503048);
   ttH_Zbb_rsq__40->SetBinContent(4,0.002622027);
   ttH_Zbb_rsq__40->SetBinContent(5,0.001995019);
   ttH_Zbb_rsq__40->SetBinContent(6,0.001254012);
   ttH_Zbb_rsq__40->SetBinContent(7,0.0004560044);
   ttH_Zbb_rsq__40->SetBinContent(8,0.0002280022);
   ttH_Zbb_rsq__40->SetBinContent(9,0.0001710017);
   ttH_Zbb_rsq__40->SetBinContent(10,0.0002280022);
   ttH_Zbb_rsq__40->SetBinContent(11,5.700056e-05);
   ttH_Zbb_rsq__40->SetBinContent(12,0.0005700056);
   ttH_Zbb_rsq__40->SetBinContent(14,0.0001710017);
   ttH_Zbb_rsq__40->SetBinContent(18,0.0001140011);
   ttH_Zbb_rsq__40->SetBinContent(19,5.700056e-05);
   ttH_Zbb_rsq__40->SetBinContent(21,5.700056e-05);
   ttH_Zbb_rsq__40->SetBinError(1,0.001122781);
   ttH_Zbb_rsq__40->SetBinError(2,0.0007475553);
   ttH_Zbb_rsq__40->SetBinError(3,0.000506632);
   ttH_Zbb_rsq__40->SetBinError(4,0.0003865966);
   ttH_Zbb_rsq__40->SetBinError(5,0.0003372198);
   ttH_Zbb_rsq__40->SetBinError(6,0.0002673563);
   ttH_Zbb_rsq__40->SetBinError(7,0.0001612219);
   ttH_Zbb_rsq__40->SetBinError(8,0.0001140011);
   ttH_Zbb_rsq__40->SetBinError(9,9.872786e-05);
   ttH_Zbb_rsq__40->SetBinError(10,0.0001140011);
   ttH_Zbb_rsq__40->SetBinError(11,5.700056e-05);
   ttH_Zbb_rsq__40->SetBinError(12,0.0001802516);
   ttH_Zbb_rsq__40->SetBinError(14,9.872786e-05);
   ttH_Zbb_rsq__40->SetBinError(18,8.061096e-05);
   ttH_Zbb_rsq__40->SetBinError(19,5.700056e-05);
   ttH_Zbb_rsq__40->SetBinError(21,5.700056e-05);
   ttH_Zbb_rsq__40->SetEntries(779);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_rsq__40->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_rsq__40->SetLineColor(ci);
   ttH_Zbb_rsq__40->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__40->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__40->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__40->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_rsq__40->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__40->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__40->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__40->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_rsq__40->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__40->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__40->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__40->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Zbb_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Zbb_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Zbb_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Zbb_rsq","t#bar{t}H + jets","f");

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
