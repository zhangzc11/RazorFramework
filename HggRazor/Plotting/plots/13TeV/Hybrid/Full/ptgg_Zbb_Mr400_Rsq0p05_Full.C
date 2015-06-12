void ptgg_Zbb_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:14 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-5.867095,762.1687,-2.163391);
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
   hs->SetMaximum(0.005096431);
   
   TH1F *hs_stack_12 = new TH1F("hs_stack_12","",70,20,720);
   hs_stack_12->SetMinimum(0.282779);
   hs_stack_12->SetMaximum(0.003778765);
   hs_stack_12->SetDirectory(0);
   hs_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_12->SetLineColor(ci);
   hs_stack_12->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_12->GetXaxis()->SetLabelFont(42);
   hs_stack_12->GetXaxis()->SetLabelSize(0.035);
   hs_stack_12->GetXaxis()->SetTitleSize(0.06);
   hs_stack_12->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_12->GetXaxis()->SetTitleFont(42);
   hs_stack_12->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_12->GetYaxis()->SetLabelFont(42);
   hs_stack_12->GetYaxis()->SetLabelSize(0.035);
   hs_stack_12->GetYaxis()->SetTitleSize(0.06);
   hs_stack_12->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_12->GetYaxis()->SetTitleFont(42);
   hs_stack_12->GetZaxis()->SetLabelFont(42);
   hs_stack_12->GetZaxis()->SetLabelSize(0.035);
   hs_stack_12->GetZaxis()->SetTitleSize(0.035);
   hs_stack_12->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_12);
   
   
   TH1F *gammaJet_Zbb_ptgg__67 = new TH1F("gammaJet_Zbb_ptgg__67","ptgg",70,20,720);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_ptgg__67->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_ptgg__67->SetLineColor(ci);
   gammaJet_Zbb_ptgg__67->GetXaxis()->SetLabelFont(42);
   gammaJet_Zbb_ptgg__67->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_ptgg__67->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_ptgg__67->GetXaxis()->SetTitleFont(42);
   gammaJet_Zbb_ptgg__67->GetYaxis()->SetLabelFont(42);
   gammaJet_Zbb_ptgg__67->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_ptgg__67->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_ptgg__67->GetYaxis()->SetTitleFont(42);
   gammaJet_Zbb_ptgg__67->GetZaxis()->SetLabelFont(42);
   gammaJet_Zbb_ptgg__67->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_ptgg__67->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_ptgg__67->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Zbb_ptgg,"histo");
   
   TH1F *diphoton_Zbb_ptgg__68 = new TH1F("diphoton_Zbb_ptgg__68","ptgg",70,20,720);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_ptgg__68->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_ptgg__68->SetLineColor(ci);
   diphoton_Zbb_ptgg__68->GetXaxis()->SetLabelFont(42);
   diphoton_Zbb_ptgg__68->GetXaxis()->SetLabelSize(0.035);
   diphoton_Zbb_ptgg__68->GetXaxis()->SetTitleSize(0.035);
   diphoton_Zbb_ptgg__68->GetXaxis()->SetTitleFont(42);
   diphoton_Zbb_ptgg__68->GetYaxis()->SetLabelFont(42);
   diphoton_Zbb_ptgg__68->GetYaxis()->SetLabelSize(0.035);
   diphoton_Zbb_ptgg__68->GetYaxis()->SetTitleSize(0.035);
   diphoton_Zbb_ptgg__68->GetYaxis()->SetTitleFont(42);
   diphoton_Zbb_ptgg__68->GetZaxis()->SetLabelFont(42);
   diphoton_Zbb_ptgg__68->GetZaxis()->SetLabelSize(0.035);
   diphoton_Zbb_ptgg__68->GetZaxis()->SetTitleSize(0.035);
   diphoton_Zbb_ptgg__68->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Zbb_ptgg,"histo");
   
   TH1F *ggH_Zbb_ptgg__69 = new TH1F("ggH_Zbb_ptgg__69","ptgg",70,20,720);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_ptgg__69->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_ptgg__69->SetLineColor(ci);
   ggH_Zbb_ptgg__69->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_ptgg__69->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_ptgg__69->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_ptgg__69->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_ptgg__69->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_ptgg__69->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_ptgg__69->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_ptgg__69->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_ptgg__69->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_ptgg__69->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_ptgg__69->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_ptgg__69->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_ptgg,"histo");
   
   TH1F *vbfH_Zbb_ptgg__70 = new TH1F("vbfH_Zbb_ptgg__70","ptgg",70,20,720);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_ptgg__70->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_ptgg__70->SetLineColor(ci);
   vbfH_Zbb_ptgg__70->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_ptgg__70->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_ptgg__70->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_ptgg__70->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_ptgg__70->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_ptgg__70->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_ptgg__70->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_ptgg__70->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_ptgg__70->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_ptgg__70->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_ptgg__70->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_ptgg__70->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_ptgg,"histo");
   
   TH1F *vH_Zbb_ptgg__71 = new TH1F("vH_Zbb_ptgg__71","ptgg",70,20,720);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_ptgg__71->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_ptgg__71->SetLineColor(ci);
   vH_Zbb_ptgg__71->GetXaxis()->SetLabelFont(42);
   vH_Zbb_ptgg__71->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_ptgg__71->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_ptgg__71->GetXaxis()->SetTitleFont(42);
   vH_Zbb_ptgg__71->GetYaxis()->SetLabelFont(42);
   vH_Zbb_ptgg__71->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_ptgg__71->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_ptgg__71->GetYaxis()->SetTitleFont(42);
   vH_Zbb_ptgg__71->GetZaxis()->SetLabelFont(42);
   vH_Zbb_ptgg__71->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_ptgg__71->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_ptgg__71->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_ptgg,"histo");
   
   TH1F *ttH_Zbb_ptgg__72 = new TH1F("ttH_Zbb_ptgg__72","ptgg",70,20,720);
   ttH_Zbb_ptgg__72->SetBinContent(1,3.28802e-05);
   ttH_Zbb_ptgg__72->SetBinContent(2,6.57604e-05);
   ttH_Zbb_ptgg__72->SetBinContent(3,0.000164401);
   ttH_Zbb_ptgg__72->SetBinContent(4,0.0002794817);
   ttH_Zbb_ptgg__72->SetBinContent(5,0.0002630416);
   ttH_Zbb_ptgg__72->SetBinContent(6,0.0003123619);
   ttH_Zbb_ptgg__72->SetBinContent(7,0.0003452421);
   ttH_Zbb_ptgg__72->SetBinContent(8,0.0005096431);
   ttH_Zbb_ptgg__72->SetBinContent(9,0.000328802);
   ttH_Zbb_ptgg__72->SetBinError(1,2.324981e-05);
   ttH_Zbb_ptgg__72->SetBinError(2,3.28802e-05);
   ttH_Zbb_ptgg__72->SetBinError(3,5.198816e-05);
   ttH_Zbb_ptgg__72->SetBinError(4,6.778427e-05);
   ttH_Zbb_ptgg__72->SetBinError(5,6.57604e-05);
   ttH_Zbb_ptgg__72->SetBinError(6,7.166074e-05);
   ttH_Zbb_ptgg__72->SetBinError(7,7.533801e-05);
   ttH_Zbb_ptgg__72->SetBinError(8,9.153461e-05);
   ttH_Zbb_ptgg__72->SetBinError(9,7.352237e-05);
   ttH_Zbb_ptgg__72->SetEntries(140);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_ptgg__72->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_ptgg__72->SetLineColor(ci);
   ttH_Zbb_ptgg__72->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_ptgg__72->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_ptgg__72->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_ptgg__72->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_ptgg__72->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_ptgg__72->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_ptgg__72->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_ptgg__72->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_ptgg__72->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_ptgg__72->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_ptgg__72->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_ptgg__72->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Zbb_ptgg","#gamma + jets","f");

   ci = TColor::GetColor("#0099ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("diphoton_Zbb_ptgg","#gamma#gamma + jets","f");

   ci = TColor::GetColor("#99ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#99ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ggH_Zbb_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Zbb_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Zbb_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Zbb_ptgg","t#bar{t}H + jets","f");

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
