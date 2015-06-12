void ptgg_LowRes_Mr200_Rsq0p02_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-2.127849,762.1687,3.423751);
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
   hs->SetMaximum(616.758);
   
   TH1F *hs_stack_20 = new TH1F("hs_stack_20","",70,20,720);
   hs_stack_20->SetMinimum(0.03454163);
   hs_stack_20->SetMaximum(1084.275);
   hs_stack_20->SetDirectory(0);
   hs_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_20->SetLineColor(ci);
   hs_stack_20->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_20->GetXaxis()->SetLabelFont(42);
   hs_stack_20->GetXaxis()->SetLabelSize(0.035);
   hs_stack_20->GetXaxis()->SetTitleSize(0.06);
   hs_stack_20->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_20->GetXaxis()->SetTitleFont(42);
   hs_stack_20->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_20->GetYaxis()->SetLabelFont(42);
   hs_stack_20->GetYaxis()->SetLabelSize(0.035);
   hs_stack_20->GetYaxis()->SetTitleSize(0.06);
   hs_stack_20->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_20->GetYaxis()->SetTitleFont(42);
   hs_stack_20->GetZaxis()->SetLabelFont(42);
   hs_stack_20->GetZaxis()->SetLabelSize(0.035);
   hs_stack_20->GetZaxis()->SetTitleSize(0.035);
   hs_stack_20->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_20);
   
   
   TH1F *gammaJet_LowRes_ptgg__115 = new TH1F("gammaJet_LowRes_ptgg__115","ptgg",70,20,720);
   gammaJet_LowRes_ptgg__115->SetBinContent(1,21.07833);
   gammaJet_LowRes_ptgg__115->SetBinContent(2,24.47848);
   gammaJet_LowRes_ptgg__115->SetBinContent(3,24.43966);
   gammaJet_LowRes_ptgg__115->SetBinContent(4,23.29753);
   gammaJet_LowRes_ptgg__115->SetBinContent(5,28.61125);
   gammaJet_LowRes_ptgg__115->SetBinContent(6,27.29252);
   gammaJet_LowRes_ptgg__115->SetBinContent(7,27.2537);
   gammaJet_LowRes_ptgg__115->SetBinContent(8,28.71896);
   gammaJet_LowRes_ptgg__115->SetBinContent(9,28.61125);
   gammaJet_LowRes_ptgg__115->SetBinError(1,1.771689);
   gammaJet_LowRes_ptgg__115->SetBinError(2,1.901448);
   gammaJet_LowRes_ptgg__115->SetBinError(3,1.898058);
   gammaJet_LowRes_ptgg__115->SetBinError(4,1.847616);
   gammaJet_LowRes_ptgg__115->SetBinError(5,2.049263);
   gammaJet_LowRes_ptgg__115->SetBinError(6,2.001562);
   gammaJet_LowRes_ptgg__115->SetBinError(7,1.998342);
   gammaJet_LowRes_ptgg__115->SetBinError(8,2.051357);
   gammaJet_LowRes_ptgg__115->SetBinError(9,2.049263);
   gammaJet_LowRes_ptgg__115->SetEntries(1591);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_ptgg__115->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_ptgg__115->SetLineColor(ci);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetLabelFont(42);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetTitleFont(42);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetLabelFont(42);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetTitleFont(42);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetLabelFont(42);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_LowRes_ptgg,"histo");
   
   TH1F *diphoton_LowRes_ptgg__116 = new TH1F("diphoton_LowRes_ptgg__116","ptgg",70,20,720);
   diphoton_LowRes_ptgg__116->SetBinContent(1,14.62585);
   diphoton_LowRes_ptgg__116->SetBinContent(2,19.62717);
   diphoton_LowRes_ptgg__116->SetBinContent(3,24.11033);
   diphoton_LowRes_ptgg__116->SetBinContent(4,23.01876);
   diphoton_LowRes_ptgg__116->SetBinContent(5,28.60958);
   diphoton_LowRes_ptgg__116->SetBinContent(6,27.8765);
   diphoton_LowRes_ptgg__116->SetBinContent(7,34.22002);
   diphoton_LowRes_ptgg__116->SetBinContent(8,31.36263);
   diphoton_LowRes_ptgg__116->SetBinContent(9,32.58443);
   diphoton_LowRes_ptgg__116->SetBinError(1,1.839731);
   diphoton_LowRes_ptgg__116->SetBinError(2,2.114587);
   diphoton_LowRes_ptgg__116->SetBinError(3,2.356578);
   diphoton_LowRes_ptgg__116->SetBinError(4,2.328512);
   diphoton_LowRes_ptgg__116->SetBinError(5,2.628662);
   diphoton_LowRes_ptgg__116->SetBinError(6,2.594365);
   diphoton_LowRes_ptgg__116->SetBinError(7,2.884684);
   diphoton_LowRes_ptgg__116->SetBinError(8,2.765903);
   diphoton_LowRes_ptgg__116->SetBinError(9,2.819357);
   diphoton_LowRes_ptgg__116->SetEntries(1028);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_ptgg__116->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_ptgg__116->SetLineColor(ci);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetLabelFont(42);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetLabelSize(0.035);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetTitleSize(0.035);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetTitleFont(42);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetLabelFont(42);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetLabelSize(0.035);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetTitleSize(0.035);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetTitleFont(42);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetLabelFont(42);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetLabelSize(0.035);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetTitleSize(0.035);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_LowRes_ptgg,"histo");
   
   TH1F *ggH_LowRes_ptgg__117 = new TH1F("ggH_LowRes_ptgg__117","ptgg",70,20,720);
   ggH_LowRes_ptgg__117->SetBinContent(1,0.1157225);
   ggH_LowRes_ptgg__117->SetBinContent(2,0.1377648);
   ggH_LowRes_ptgg__117->SetBinContent(3,0.09551704);
   ggH_LowRes_ptgg__117->SetBinContent(4,0.1598072);
   ggH_LowRes_ptgg__117->SetBinContent(5,0.1653178);
   ggH_LowRes_ptgg__117->SetBinContent(6,0.148786);
   ggH_LowRes_ptgg__117->SetBinContent(7,0.1634809);
   ggH_LowRes_ptgg__117->SetBinContent(8,0.1304174);
   ggH_LowRes_ptgg__117->SetBinContent(9,0.1377648);
   ggH_LowRes_ptgg__117->SetBinError(1,0.01457967);
   ggH_LowRes_ptgg__117->SetBinError(2,0.01590772);
   ggH_LowRes_ptgg__117->SetBinError(3,0.01324583);
   ggH_LowRes_ptgg__117->SetBinError(4,0.01713314);
   ggH_LowRes_ptgg__117->SetBinError(5,0.01742604);
   ggH_LowRes_ptgg__117->SetBinError(6,0.01653179);
   ggH_LowRes_ptgg__117->SetBinError(7,0.01732896);
   ggH_LowRes_ptgg__117->SetBinError(8,0.01547771);
   ggH_LowRes_ptgg__117->SetBinError(9,0.01590772);
   ggH_LowRes_ptgg__117->SetEntries(683);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_ptgg__117->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_ptgg__117->SetLineColor(ci);
   ggH_LowRes_ptgg__117->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__117->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__117->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__117->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_ptgg__117->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__117->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__117->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__117->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_ptgg__117->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__117->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__117->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__117->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_ptgg,"histo");
   
   TH1F *vbfH_LowRes_ptgg__118 = new TH1F("vbfH_LowRes_ptgg__118","ptgg",70,20,720);
   vbfH_LowRes_ptgg__118->SetBinContent(1,0.006648186);
   vbfH_LowRes_ptgg__118->SetBinContent(2,0.008918302);
   vbfH_LowRes_ptgg__118->SetBinContent(3,0.01005336);
   vbfH_LowRes_ptgg__118->SetBinContent(4,0.01491789);
   vbfH_LowRes_ptgg__118->SetBinContent(5,0.01864737);
   vbfH_LowRes_ptgg__118->SetBinContent(6,0.02302545);
   vbfH_LowRes_ptgg__118->SetBinContent(7,0.025782);
   vbfH_LowRes_ptgg__118->SetBinContent(8,0.02934929);
   vbfH_LowRes_ptgg__118->SetBinContent(9,0.03064649);
   vbfH_LowRes_ptgg__118->SetBinError(1,0.001038272);
   vbfH_LowRes_ptgg__118->SetBinError(2,0.001202543);
   vbfH_LowRes_ptgg__118->SetBinError(3,0.001276777);
   vbfH_LowRes_ptgg__118->SetBinError(4,0.001555296);
   vbfH_LowRes_ptgg__118->SetBinError(5,0.001738874);
   vbfH_LowRes_ptgg__118->SetBinError(6,0.00193225);
   vbfH_LowRes_ptgg__118->SetBinError(7,0.002044644);
   vbfH_LowRes_ptgg__118->SetBinError(8,0.002181517);
   vbfH_LowRes_ptgg__118->SetBinError(9,0.002229206);
   vbfH_LowRes_ptgg__118->SetEntries(1036);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_ptgg__118->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_ptgg__118->SetLineColor(ci);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_ptgg,"histo");
   
   TH1F *vH_LowRes_ptgg__119 = new TH1F("vH_LowRes_ptgg__119","ptgg",70,20,720);
   vH_LowRes_ptgg__119->SetBinContent(1,0.002175639);
   vH_LowRes_ptgg__119->SetBinContent(2,0.002743197);
   vH_LowRes_ptgg__119->SetBinContent(3,0.002743197);
   vH_LowRes_ptgg__119->SetBinContent(4,0.005770169);
   vH_LowRes_ptgg__119->SetBinContent(5,0.004445869);
   vH_LowRes_ptgg__119->SetBinContent(6,0.006243133);
   vH_LowRes_ptgg__119->SetBinContent(7,0.008040397);
   vH_LowRes_ptgg__119->SetBinContent(8,0.009743068);
   vH_LowRes_ptgg__119->SetBinContent(9,0.01381058);
   vH_LowRes_ptgg__119->SetBinError(1,0.0004536521);
   vH_LowRes_ptgg__119->SetBinError(2,0.0005093989);
   vH_LowRes_ptgg__119->SetBinError(3,0.0005093989);
   vH_LowRes_ptgg__119->SetBinError(4,0.0007387949);
   vH_LowRes_ptgg__119->SetBinError(5,0.0006484969);
   vH_LowRes_ptgg__119->SetBinError(6,0.0007684771);
   vH_LowRes_ptgg__119->SetBinError(7,0.0008721043);
   vH_LowRes_ptgg__119->SetBinError(8,0.0009600141);
   vH_LowRes_ptgg__119->SetBinError(9,0.001142972);
   vH_LowRes_ptgg__119->SetEntries(589);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_ptgg__119->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_ptgg__119->SetLineColor(ci);
   vH_LowRes_ptgg__119->GetXaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__119->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__119->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__119->GetXaxis()->SetTitleFont(42);
   vH_LowRes_ptgg__119->GetYaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__119->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__119->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__119->GetYaxis()->SetTitleFont(42);
   vH_LowRes_ptgg__119->GetZaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__119->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__119->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__119->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_ptgg,"histo");
   
   TH1F *ttH_LowRes_ptgg__120 = new TH1F("ttH_LowRes_ptgg__120","ptgg",70,20,720);
   ttH_LowRes_ptgg__120->SetBinContent(1,0.00246746);
   ttH_LowRes_ptgg__120->SetBinContent(2,0.003910298);
   ttH_LowRes_ptgg__120->SetBinContent(3,0.003931209);
   ttH_LowRes_ptgg__120->SetBinContent(4,0.004746726);
   ttH_LowRes_ptgg__120->SetBinContent(5,0.005499511);
   ttH_LowRes_ptgg__120->SetBinContent(6,0.004830369);
   ttH_LowRes_ptgg__120->SetBinContent(7,0.004767637);
   ttH_LowRes_ptgg__120->SetBinContent(8,0.005436779);
   ttH_LowRes_ptgg__120->SetBinContent(9,0.004537619);
   ttH_LowRes_ptgg__120->SetBinError(1,0.0002271479);
   ttH_LowRes_ptgg__120->SetBinError(2,0.0002859489);
   ttH_LowRes_ptgg__120->SetBinError(3,0.0002867125);
   ttH_LowRes_ptgg__120->SetBinError(4,0.0003150508);
   ttH_LowRes_ptgg__120->SetBinError(5,0.0003391138);
   ttH_LowRes_ptgg__120->SetBinError(6,0.0003178144);
   ttH_LowRes_ptgg__120->SetBinError(7,0.000315744);
   ttH_LowRes_ptgg__120->SetBinError(8,0.0003371742);
   ttH_LowRes_ptgg__120->SetBinError(9,0.0003080332);
   ttH_LowRes_ptgg__120->SetEntries(1919);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_ptgg__120->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_ptgg__120->SetLineColor(ci);
   ttH_LowRes_ptgg__120->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__120->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__120->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__120->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_ptgg__120->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__120->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__120->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__120->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_ptgg__120->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__120->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__120->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__120->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_LowRes_ptgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_LowRes_ptgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_LowRes_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_LowRes_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_LowRes_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_LowRes_ptgg","t#bar{t}H + jets","f");

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
