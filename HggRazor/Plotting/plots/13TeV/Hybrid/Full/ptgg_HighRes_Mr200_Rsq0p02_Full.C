void ptgg_HighRes_Mr200_Rsq0p02_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-2.156523,762.1687,3.560311);
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
   hs->SetMaximum(811.4492);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.03384518);
   hs_stack_16->SetMaximum(1445.883);
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
   gammaJet_HighRes_ptgg__91->SetBinContent(1,8.324879);
   gammaJet_HighRes_ptgg__91->SetBinContent(2,10.11391);
   gammaJet_HighRes_ptgg__91->SetBinContent(3,13.82392);
   gammaJet_HighRes_ptgg__91->SetBinContent(4,14.63031);
   gammaJet_HighRes_ptgg__91->SetBinContent(5,20.15986);
   gammaJet_HighRes_ptgg__91->SetBinContent(6,22.80944);
   gammaJet_HighRes_ptgg__91->SetBinContent(7,27.0718);
   gammaJet_HighRes_ptgg__91->SetBinContent(8,29.06071);
   gammaJet_HighRes_ptgg__91->SetBinContent(9,28.33899);
   gammaJet_HighRes_ptgg__91->SetBinError(1,0.9815638);
   gammaJet_HighRes_ptgg__91->SetBinError(2,1.085568);
   gammaJet_HighRes_ptgg__91->SetBinError(3,1.261946);
   gammaJet_HighRes_ptgg__91->SetBinError(4,1.298231);
   gammaJet_HighRes_ptgg__91->SetBinError(5,1.523944);
   gammaJet_HighRes_ptgg__91->SetBinError(6,1.620999);
   gammaJet_HighRes_ptgg__91->SetBinError(7,1.765973);
   gammaJet_HighRes_ptgg__91->SetBinError(8,1.830909);
   gammaJet_HighRes_ptgg__91->SetBinError(9,1.806831);
   gammaJet_HighRes_ptgg__91->SetEntries(1512);

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
   diphoton_HighRes_ptgg__92->SetBinContent(1,16.34812);
   diphoton_HighRes_ptgg__92->SetBinContent(2,26.02052);
   diphoton_HighRes_ptgg__92->SetBinContent(3,33.16737);
   diphoton_HighRes_ptgg__92->SetBinContent(4,32.07357);
   diphoton_HighRes_ptgg__92->SetBinContent(5,36.25388);
   diphoton_HighRes_ptgg__92->SetBinContent(6,43.96667);
   diphoton_HighRes_ptgg__92->SetBinContent(7,42.2965);
   diphoton_HighRes_ptgg__92->SetBinContent(8,47.97034);
   diphoton_HighRes_ptgg__92->SetBinContent(9,52.51458);
   diphoton_HighRes_ptgg__92->SetBinError(1,1.69506);
   diphoton_HighRes_ptgg__92->SetBinError(2,2.17327);
   diphoton_HighRes_ptgg__92->SetBinError(3,2.443509);
   diphoton_HighRes_ptgg__92->SetBinError(4,2.403606);
   diphoton_HighRes_ptgg__92->SetBinError(5,2.594399);
   diphoton_HighRes_ptgg__92->SetBinError(6,2.88612);
   diphoton_HighRes_ptgg__92->SetBinError(7,2.832939);
   diphoton_HighRes_ptgg__92->SetBinError(8,3.033013);
   diphoton_HighRes_ptgg__92->SetBinError(9,3.174987);
   diphoton_HighRes_ptgg__92->SetEntries(1862);

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
   ggH_HighRes_ptgg__93->SetBinContent(1,0.148748);
   ggH_HighRes_ptgg__93->SetBinContent(2,0.1732987);
   ggH_HighRes_ptgg__93->SetBinContent(3,0.1559688);
   ggH_HighRes_ptgg__93->SetBinContent(4,0.1501921);
   ggH_HighRes_ptgg__93->SetBinContent(5,0.202182);
   ggH_HighRes_ptgg__93->SetBinContent(6,0.202182);
   ggH_HighRes_ptgg__93->SetBinContent(7,0.2007378);
   ggH_HighRes_ptgg__93->SetBinContent(8,0.1992936);
   ggH_HighRes_ptgg__93->SetBinContent(9,0.2079586);
   ggH_HighRes_ptgg__93->SetBinError(1,0.01465659);
   ggH_HighRes_ptgg__93->SetBinError(2,0.01581994);
   ggH_HighRes_ptgg__93->SetBinError(3,0.01500811);
   ggH_HighRes_ptgg__93->SetBinError(4,0.01472756);
   ggH_HighRes_ptgg__93->SetBinError(5,0.01708749);
   ggH_HighRes_ptgg__93->SetBinError(6,0.01708749);
   ggH_HighRes_ptgg__93->SetBinError(7,0.01702635);
   ggH_HighRes_ptgg__93->SetBinError(8,0.016965);
   ggH_HighRes_ptgg__93->SetBinError(9,0.01732988);
   ggH_HighRes_ptgg__93->SetEntries(1136);

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
   vbfH_HighRes_ptgg__94->SetBinContent(1,0.006629177);
   vbfH_HighRes_ptgg__94->SetBinContent(2,0.01249346);
   vbfH_HighRes_ptgg__94->SetBinContent(3,0.01874018);
   vbfH_HighRes_ptgg__94->SetBinContent(4,0.02256468);
   vbfH_HighRes_ptgg__94->SetBinContent(5,0.02919381);
   vbfH_HighRes_ptgg__94->SetBinContent(6,0.03926505);
   vbfH_HighRes_ptgg__94->SetBinContent(7,0.04627675);
   vbfH_HighRes_ptgg__94->SetBinContent(8,0.04895394);
   vbfH_HighRes_ptgg__94->SetBinContent(9,0.05163113);
   vbfH_HighRes_ptgg__94->SetBinError(1,0.000919301);
   vbfH_HighRes_ptgg__94->SetBinError(2,0.001262028);
   vbfH_HighRes_ptgg__94->SetBinError(3,0.001545663);
   vbfH_HighRes_ptgg__94->SetBinError(4,0.001696066);
   vbfH_HighRes_ptgg__94->SetBinError(5,0.001929185);
   vbfH_HighRes_ptgg__94->SetBinError(6,0.002237337);
   vbfH_HighRes_ptgg__94->SetBinError(7,0.002428899);
   vbfH_HighRes_ptgg__94->SetBinError(8,0.002498168);
   vbfH_HighRes_ptgg__94->SetBinError(9,0.002565568);
   vbfH_HighRes_ptgg__94->SetEntries(2163);

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
   vH_HighRes_ptgg__95->SetBinContent(1,0.002528568);
   vH_HighRes_ptgg__95->SetBinContent(2,0.003272264);
   vH_HighRes_ptgg__95->SetBinContent(3,0.004610916);
   vH_HighRes_ptgg__95->SetBinContent(4,0.006916372);
   vH_HighRes_ptgg__95->SetBinContent(5,0.008403763);
   vH_HighRes_ptgg__95->SetBinContent(6,0.008626872);
   vH_HighRes_ptgg__95->SetBinContent(7,0.0130147);
   vH_HighRes_ptgg__95->SetBinContent(8,0.01926177);
   vH_HighRes_ptgg__95->SetBinContent(9,0.02476508);
   vH_HighRes_ptgg__95->SetBinError(1,0.0004336459);
   vH_HighRes_ptgg__95->SetBinError(2,0.0004933125);
   vH_HighRes_ptgg__95->SetBinError(3,0.0005855873);
   vH_HighRes_ptgg__95->SetBinError(4,0.0007171951);
   vH_HighRes_ptgg__95->SetBinError(5,0.0007905604);
   vH_HighRes_ptgg__95->SetBinError(6,0.0008009858);
   vH_HighRes_ptgg__95->SetBinError(7,0.0009838182);
   vH_HighRes_ptgg__95->SetBinError(8,0.001196866);
   vH_HighRes_ptgg__95->SetBinError(9,0.001357119);
   vH_HighRes_ptgg__95->SetEntries(1229);

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
   ttH_HighRes_ptgg__96->SetBinContent(1,0.003583947);
   ttH_HighRes_ptgg__96->SetBinContent(2,0.004603236);
   ttH_HighRes_ptgg__96->SetBinContent(3,0.005704724);
   ttH_HighRes_ptgg__96->SetBinContent(4,0.006017087);
   ttH_HighRes_ptgg__96->SetBinContent(5,0.006822653);
   ttH_HighRes_ptgg__96->SetBinContent(6,0.008039223);
   ttH_HighRes_ptgg__96->SetBinContent(7,0.007578899);
   ttH_HighRes_ptgg__96->SetBinContent(8,0.007233656);
   ttH_HighRes_ptgg__96->SetBinContent(9,0.007003495);
   ttH_HighRes_ptgg__96->SetBinError(1,0.0002427352);
   ttH_HighRes_ptgg__96->SetBinError(2,0.0002750955);
   ttH_HighRes_ptgg__96->SetBinError(3,0.0003062451);
   ttH_HighRes_ptgg__96->SetBinError(4,0.0003145176);
   ttH_HighRes_ptgg__96->SetBinError(5,0.0003349103);
   ttH_HighRes_ptgg__96->SetBinError(6,0.0003635456);
   ttH_HighRes_ptgg__96->SetBinError(7,0.0003529839);
   ttH_HighRes_ptgg__96->SetBinError(8,0.0003448505);
   ttH_HighRes_ptgg__96->SetBinError(9,0.0003393199);
   ttH_HighRes_ptgg__96->SetEntries(3442);

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
