void ptgg_HighRes_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:15 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.544485,762.1687,0.8775186);
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
   hs->SetMaximum(3.874206);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.05573852);
   hs_stack_16->SetMaximum(5.104795);
   hs_stack_16->SetDirectory(0);
   hs_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_16->SetLineColor(ci);
   hs_stack_16->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_16->GetXaxis()->SetLabelFont(42);
   hs_stack_16->GetXaxis()->SetLabelSize(0.035);
   hs_stack_16->GetXaxis()->SetTitleSize(0.06);
   hs_stack_16->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_16->GetXaxis()->SetTitleFont(42);
   hs_stack_16->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_16->GetYaxis()->SetLabelFont(42);
   hs_stack_16->GetYaxis()->SetLabelSize(0.035);
   hs_stack_16->GetYaxis()->SetTitleSize(0.06);
   hs_stack_16->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_16->GetYaxis()->SetTitleFont(42);
   hs_stack_16->GetZaxis()->SetLabelFont(42);
   hs_stack_16->GetZaxis()->SetLabelSize(0.035);
   hs_stack_16->GetZaxis()->SetTitleSize(0.035);
   hs_stack_16->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_16);
   
   
   TH1F *gammaJet_HighRes_ptgg__91 = new TH1F("gammaJet_HighRes_ptgg__91","ptgg",70,20,720);
   gammaJet_HighRes_ptgg__91->SetBinContent(6,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinContent(9,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(6,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(9,0.1151994);
   gammaJet_HighRes_ptgg__91->SetEntries(2);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_ptgg__91->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_ptgg__91->SetLineColor(ci);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetLabelFont(42);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetTitleFont(42);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetLabelFont(42);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetTitleFont(42);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetLabelFont(42);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_HighRes_ptgg,"histo");
   
   TH1F *diphoton_HighRes_ptgg__92 = new TH1F("diphoton_HighRes_ptgg__92","ptgg",70,20,720);
   diphoton_HighRes_ptgg__92->SetBinContent(2,0.3842333);
   diphoton_HighRes_ptgg__92->SetBinContent(4,0.3842333);
   diphoton_HighRes_ptgg__92->SetBinContent(5,0.1921166);
   diphoton_HighRes_ptgg__92->SetBinContent(7,0.3842333);
   diphoton_HighRes_ptgg__92->SetBinContent(9,0.1921166);
   diphoton_HighRes_ptgg__92->SetBinError(2,0.271694);
   diphoton_HighRes_ptgg__92->SetBinError(4,0.271694);
   diphoton_HighRes_ptgg__92->SetBinError(5,0.1921166);
   diphoton_HighRes_ptgg__92->SetBinError(7,0.271694);
   diphoton_HighRes_ptgg__92->SetBinError(9,0.1921166);
   diphoton_HighRes_ptgg__92->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_ptgg__92->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_ptgg__92->SetLineColor(ci);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetLabelFont(42);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetLabelSize(0.035);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetTitleSize(0.035);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetTitleFont(42);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetLabelFont(42);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetLabelSize(0.035);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetTitleSize(0.035);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetTitleFont(42);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetLabelFont(42);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetLabelSize(0.035);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetTitleSize(0.035);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_HighRes_ptgg,"histo");
   
   TH1F *ggH_HighRes_ptgg__93 = new TH1F("ggH_HighRes_ptgg__93","ptgg",70,20,720);
   ggH_HighRes_ptgg__93->SetBinContent(1,0.001444156);
   ggH_HighRes_ptgg__93->SetBinContent(3,0.001444156);
   ggH_HighRes_ptgg__93->SetBinContent(7,0.001444156);
   ggH_HighRes_ptgg__93->SetBinContent(8,0.001444156);
   ggH_HighRes_ptgg__93->SetBinContent(9,0.005776626);
   ggH_HighRes_ptgg__93->SetBinError(1,0.001444156);
   ggH_HighRes_ptgg__93->SetBinError(3,0.001444156);
   ggH_HighRes_ptgg__93->SetBinError(7,0.001444156);
   ggH_HighRes_ptgg__93->SetBinError(8,0.001444156);
   ggH_HighRes_ptgg__93->SetBinError(9,0.002888313);
   ggH_HighRes_ptgg__93->SetEntries(8);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_ptgg__93->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_ptgg__93->SetLineColor(ci);
   ggH_HighRes_ptgg__93->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__93->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__93->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__93->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_ptgg__93->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__93->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__93->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__93->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_ptgg__93->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__93->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__93->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__93->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_ptgg,"histo");
   
   TH1F *vbfH_HighRes_ptgg__94 = new TH1F("vbfH_HighRes_ptgg__94","ptgg",70,20,720);
   vbfH_HighRes_ptgg__94->SetBinContent(5,0.0001274841);
   vbfH_HighRes_ptgg__94->SetBinContent(6,0.0001274841);
   vbfH_HighRes_ptgg__94->SetBinContent(7,0.0002549682);
   vbfH_HighRes_ptgg__94->SetBinContent(8,0.0003824523);
   vbfH_HighRes_ptgg__94->SetBinContent(9,0.0002549682);
   vbfH_HighRes_ptgg__94->SetBinError(5,0.0001274841);
   vbfH_HighRes_ptgg__94->SetBinError(6,0.0001274841);
   vbfH_HighRes_ptgg__94->SetBinError(7,0.0001802898);
   vbfH_HighRes_ptgg__94->SetBinError(8,0.000220809);
   vbfH_HighRes_ptgg__94->SetBinError(9,0.0001802898);
   vbfH_HighRes_ptgg__94->SetEntries(9);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_ptgg__94->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_ptgg__94->SetLineColor(ci);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_ptgg,"histo");
   
   TH1F *vH_HighRes_ptgg__95 = new TH1F("vH_HighRes_ptgg__95","ptgg",70,20,720);
   vH_HighRes_ptgg__95->SetBinContent(2,7.436967e-05);
   vH_HighRes_ptgg__95->SetBinContent(3,0.000223109);
   vH_HighRes_ptgg__95->SetBinContent(4,0.0001487393);
   vH_HighRes_ptgg__95->SetBinContent(5,0.0002974787);
   vH_HighRes_ptgg__95->SetBinContent(6,0.000223109);
   vH_HighRes_ptgg__95->SetBinContent(7,7.436967e-05);
   vH_HighRes_ptgg__95->SetBinContent(8,0.0001487393);
   vH_HighRes_ptgg__95->SetBinContent(9,0.0003718483);
   vH_HighRes_ptgg__95->SetBinError(2,7.436966e-05);
   vH_HighRes_ptgg__95->SetBinError(3,0.000128812);
   vH_HighRes_ptgg__95->SetBinError(4,0.0001051746);
   vH_HighRes_ptgg__95->SetBinError(5,0.0001487393);
   vH_HighRes_ptgg__95->SetBinError(6,0.000128812);
   vH_HighRes_ptgg__95->SetBinError(7,7.436966e-05);
   vH_HighRes_ptgg__95->SetBinError(8,0.0001051746);
   vH_HighRes_ptgg__95->SetBinError(9,0.0001662956);
   vH_HighRes_ptgg__95->SetEntries(21);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_ptgg__95->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_ptgg__95->SetLineColor(ci);
   vH_HighRes_ptgg__95->GetXaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__95->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__95->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__95->GetXaxis()->SetTitleFont(42);
   vH_HighRes_ptgg__95->GetYaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__95->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__95->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__95->GetYaxis()->SetTitleFont(42);
   vH_HighRes_ptgg__95->GetZaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__95->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__95->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__95->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_ptgg,"histo");
   
   TH1F *ttH_HighRes_ptgg__96 = new TH1F("ttH_HighRes_ptgg__96","ptgg",70,20,720);
   ttH_HighRes_ptgg__96->SetBinContent(1,0.0006576041);
   ttH_HighRes_ptgg__96->SetBinContent(2,0.0007233646);
   ttH_HighRes_ptgg__96->SetBinContent(3,0.001035727);
   ttH_HighRes_ptgg__96->SetBinContent(4,0.001150808);
   ttH_HighRes_ptgg__96->SetBinContent(5,0.001265889);
   ttH_HighRes_ptgg__96->SetBinContent(6,0.001676892);
   ttH_HighRes_ptgg__96->SetBinContent(7,0.00141385);
   ttH_HighRes_ptgg__96->SetBinContent(8,0.001561811);
   ttH_HighRes_ptgg__96->SetBinContent(9,0.001578251);
   ttH_HighRes_ptgg__96->SetBinError(1,0.0001039763);
   ttH_HighRes_ptgg__96->SetBinError(2,0.0001090513);
   ttH_HighRes_ptgg__96->SetBinError(3,0.0001304893);
   ttH_HighRes_ptgg__96->SetBinError(4,0.0001375478);
   ttH_HighRes_ptgg__96->SetBinError(5,0.0001442613);
   ttH_HighRes_ptgg__96->SetBinError(6,0.0001660369);
   ttH_HighRes_ptgg__96->SetBinError(7,0.0001524592);
   ttH_HighRes_ptgg__96->SetBinError(8,0.0001602383);
   ttH_HighRes_ptgg__96->SetBinError(9,0.0001610794);
   ttH_HighRes_ptgg__96->SetEntries(673);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_ptgg__96->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_ptgg__96->SetLineColor(ci);
   ttH_HighRes_ptgg__96->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__96->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__96->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__96->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_ptgg__96->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__96->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__96->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__96->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_ptgg__96->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__96->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__96->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__96->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_HighRes_ptgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_HighRes_ptgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_HighRes_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_ptgg","t#bar{t}H + jets","f");

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
