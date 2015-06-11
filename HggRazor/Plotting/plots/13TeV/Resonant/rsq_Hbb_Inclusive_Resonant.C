void rsq_Hbb_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:12:35 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.256332,1.060241,-0.1851109);
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
   hs->SetMaximum(0.4832857);
   
   TH1F *hs_stack_6 = new TH1F("hs_stack_6","",125,0,5);
   hs_stack_6->SetMinimum(0.07450999);
   hs_stack_6->SetMaximum(0.5494189);
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
   ggH_Hbb_rsq__21->SetBinContent(1,0.01514238);
   ggH_Hbb_rsq__21->SetBinError(1,0.00874246);
   ggH_Hbb_rsq__21->SetEntries(3);

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
   vbfH_Hbb_rsq__22->SetBinContent(1,0.001768034);
   vbfH_Hbb_rsq__22->SetBinContent(6,0.0004420086);
   vbfH_Hbb_rsq__22->SetBinError(1,0.0008840172);
   vbfH_Hbb_rsq__22->SetBinError(6,0.0004420086);
   vbfH_Hbb_rsq__22->SetEntries(5);

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
   vH_Hbb_rsq__23->SetBinContent(1,0.002062816);
   vH_Hbb_rsq__23->SetBinContent(2,0.0005157039);
   vH_Hbb_rsq__23->SetBinContent(3,0.001031408);
   vH_Hbb_rsq__23->SetBinContent(4,0.000257852);
   vH_Hbb_rsq__23->SetBinContent(5,0.000257852);
   vH_Hbb_rsq__23->SetBinError(1,0.0007293155);
   vH_Hbb_rsq__23->SetBinError(2,0.0003646577);
   vH_Hbb_rsq__23->SetBinError(3,0.0005157039);
   vH_Hbb_rsq__23->SetBinError(4,0.000257852);
   vH_Hbb_rsq__23->SetBinError(5,0.000257852);
   vH_Hbb_rsq__23->SetEntries(16);

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
   ttH_Hbb_rsq__24->SetBinContent(1,0.02935534);
   ttH_Hbb_rsq__24->SetBinContent(2,0.01276814);
   ttH_Hbb_rsq__24->SetBinContent(3,0.007524084);
   ttH_Hbb_rsq__24->SetBinContent(4,0.003591038);
   ttH_Hbb_rsq__24->SetBinContent(5,0.002679027);
   ttH_Hbb_rsq__24->SetBinContent(6,0.001083011);
   ttH_Hbb_rsq__24->SetBinContent(7,0.0009120089);
   ttH_Hbb_rsq__24->SetBinContent(8,0.0003990039);
   ttH_Hbb_rsq__24->SetBinContent(9,0.0004560044);
   ttH_Hbb_rsq__24->SetBinContent(10,0.0002850028);
   ttH_Hbb_rsq__24->SetBinContent(12,0.0002850028);
   ttH_Hbb_rsq__24->SetBinContent(13,0.0001140011);
   ttH_Hbb_rsq__24->SetBinContent(14,0.0001710017);
   ttH_Hbb_rsq__24->SetBinContent(15,0.0001140011);
   ttH_Hbb_rsq__24->SetBinContent(16,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinContent(20,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinContent(23,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinError(1,0.001293549);
   ttH_Hbb_rsq__24->SetBinError(2,0.0008531062);
   ttH_Hbb_rsq__24->SetBinError(3,0.0006548865);
   ttH_Hbb_rsq__24->SetBinError(4,0.0004524279);
   ttH_Hbb_rsq__24->SetBinError(5,0.0003907761);
   ttH_Hbb_rsq__24->SetBinError(6,0.0002484597);
   ttH_Hbb_rsq__24->SetBinError(7,0.0002280022);
   ttH_Hbb_rsq__24->SetBinError(8,0.0001508093);
   ttH_Hbb_rsq__24->SetBinError(9,0.0001612219);
   ttH_Hbb_rsq__24->SetBinError(10,0.0001274571);
   ttH_Hbb_rsq__24->SetBinError(12,0.0001274571);
   ttH_Hbb_rsq__24->SetBinError(13,8.061096e-05);
   ttH_Hbb_rsq__24->SetBinError(14,9.872786e-05);
   ttH_Hbb_rsq__24->SetBinError(15,8.061096e-05);
   ttH_Hbb_rsq__24->SetBinError(16,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinError(20,5.700056e-05);
   ttH_Hbb_rsq__24->SetBinError(23,5.700056e-05);
   ttH_Hbb_rsq__24->SetEntries(1051);

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
