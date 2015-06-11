void ptgg_HighRes_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:12:36 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.787975,762.1687,1.882349);
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
   hs->SetMaximum(28.3215);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.04492246);
   hs_stack_16->SetMaximum(42.21103);
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
   
   
   TH1F *ggH_HighRes_ptgg__61 = new TH1F("ggH_HighRes_ptgg__61","ptgg",70,20,720);
   ggH_HighRes_ptgg__61->SetBinContent(1,1.665658);
   ggH_HighRes_ptgg__61->SetBinContent(2,2.185549);
   ggH_HighRes_ptgg__61->SetBinContent(3,2.311738);
   ggH_HighRes_ptgg__61->SetBinContent(4,2.357166);
   ggH_HighRes_ptgg__61->SetBinContent(5,1.933172);
   ggH_HighRes_ptgg__61->SetBinContent(6,1.726227);
   ggH_HighRes_ptgg__61->SetBinContent(7,1.66061);
   ggH_HighRes_ptgg__61->SetBinContent(8,1.115487);
   ggH_HighRes_ptgg__61->SetBinContent(9,0.9539686);
   ggH_HighRes_ptgg__61->SetBinError(1,0.09169169);
   ggH_HighRes_ptgg__61->SetBinError(2,0.1050309);
   ggH_HighRes_ptgg__61->SetBinError(3,0.1080204);
   ggH_HighRes_ptgg__61->SetBinError(4,0.1090766);
   ggH_HighRes_ptgg__61->SetBinError(5,0.09878077);
   ggH_HighRes_ptgg__61->SetBinError(6,0.09334393);
   ggH_HighRes_ptgg__61->SetBinError(7,0.09155266);
   ggH_HighRes_ptgg__61->SetBinError(8,0.07503591);
   ggH_HighRes_ptgg__61->SetBinError(9,0.06939112);
   ggH_HighRes_ptgg__61->SetEntries(3152);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_ptgg__61->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_ptgg__61->SetLineColor(ci);
   ggH_HighRes_ptgg__61->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__61->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__61->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__61->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_ptgg__61->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__61->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__61->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__61->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_ptgg__61->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__61->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__61->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__61->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_ptgg,"histo");
   
   TH1F *vbfH_HighRes_ptgg__62 = new TH1F("vbfH_HighRes_ptgg__62","ptgg",70,20,720);
   vbfH_HighRes_ptgg__62->SetBinContent(1,0.1684054);
   vbfH_HighRes_ptgg__62->SetBinContent(2,0.2510618);
   vbfH_HighRes_ptgg__62->SetBinContent(3,0.2926097);
   vbfH_HighRes_ptgg__62->SetBinContent(4,0.3178036);
   vbfH_HighRes_ptgg__62->SetBinContent(5,0.3337155);
   vbfH_HighRes_ptgg__62->SetBinContent(6,0.3164776);
   vbfH_HighRes_ptgg__62->SetBinContent(7,0.3098476);
   vbfH_HighRes_ptgg__62->SetBinContent(8,0.3001236);
   vbfH_HighRes_ptgg__62->SetBinContent(9,0.2559238);
   vbfH_HighRes_ptgg__62->SetBinError(1,0.008627663);
   vbfH_HighRes_ptgg__62->SetBinError(2,0.01053428);
   vbfH_HighRes_ptgg__62->SetBinError(3,0.0113726);
   vbfH_HighRes_ptgg__62->SetBinError(4,0.0118521);
   vbfH_HighRes_ptgg__62->SetBinError(5,0.01214519);
   vbfH_HighRes_ptgg__62->SetBinError(6,0.01182734);
   vbfH_HighRes_ptgg__62->SetBinError(7,0.0117028);
   vbfH_HighRes_ptgg__62->SetBinError(8,0.0115177);
   vbfH_HighRes_ptgg__62->SetBinError(9,0.0106358);
   vbfH_HighRes_ptgg__62->SetEntries(5760);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_ptgg__62->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_ptgg__62->SetLineColor(ci);
   vbfH_HighRes_ptgg__62->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__62->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__62->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__62->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_ptgg__62->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__62->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__62->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__62->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_ptgg__62->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__62->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__62->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__62->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_ptgg,"histo");
   
   TH1F *vH_HighRes_ptgg__63 = new TH1F("vH_HighRes_ptgg__63","ptgg",70,20,720);
   vH_HighRes_ptgg__63->SetBinContent(1,0.08870099);
   vH_HighRes_ptgg__63->SetBinContent(2,0.1147438);
   vH_HighRes_ptgg__63->SetBinContent(3,0.1345982);
   vH_HighRes_ptgg__63->SetBinContent(4,0.1420759);
   vH_HighRes_ptgg__63->SetBinContent(5,0.1467172);
   vH_HighRes_ptgg__63->SetBinContent(6,0.1340825);
   vH_HighRes_ptgg__63->SetBinContent(7,0.1302148);
   vH_HighRes_ptgg__63->SetBinContent(8,0.1157752);
   vH_HighRes_ptgg__63->SetBinContent(9,0.1054612);
   vH_HighRes_ptgg__63->SetBinError(1,0.004782441);
   vH_HighRes_ptgg__63->SetBinError(2,0.005439393);
   vH_HighRes_ptgg__63->SetBinError(3,0.005891226);
   vH_HighRes_ptgg__63->SetBinError(4,0.006052659);
   vH_HighRes_ptgg__63->SetBinError(5,0.006150729);
   vH_HighRes_ptgg__63->SetBinError(6,0.005879929);
   vH_HighRes_ptgg__63->SetBinError(7,0.005794502);
   vH_HighRes_ptgg__63->SetBinError(8,0.005463785);
   vH_HighRes_ptgg__63->SetBinError(9,0.005214733);
   vH_HighRes_ptgg__63->SetEntries(4314);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_ptgg__63->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_ptgg__63->SetLineColor(ci);
   vH_HighRes_ptgg__63->GetXaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__63->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__63->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__63->GetXaxis()->SetTitleFont(42);
   vH_HighRes_ptgg__63->GetYaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__63->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__63->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__63->GetYaxis()->SetTitleFont(42);
   vH_HighRes_ptgg__63->GetZaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__63->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__63->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__63->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_ptgg,"histo");
   
   TH1F *ttH_HighRes_ptgg__64 = new TH1F("ttH_HighRes_ptgg__64","ptgg",70,20,720);
   ttH_HighRes_ptgg__64->SetBinContent(1,0.009063101);
   ttH_HighRes_ptgg__64->SetBinContent(2,0.01214114);
   ttH_HighRes_ptgg__64->SetBinContent(3,0.01573218);
   ttH_HighRes_ptgg__64->SetBinContent(4,0.01510517);
   ttH_HighRes_ptgg__64->SetBinContent(5,0.01385116);
   ttH_HighRes_ptgg__64->SetBinContent(6,0.01898122);
   ttH_HighRes_ptgg__64->SetBinContent(7,0.01658719);
   ttH_HighRes_ptgg__64->SetBinContent(8,0.01567518);
   ttH_HighRes_ptgg__64->SetBinContent(9,0.01499117);
   ttH_HighRes_ptgg__64->SetBinError(1,0.0007187497);
   ttH_HighRes_ptgg__64->SetBinError(2,0.0008318958);
   ttH_HighRes_ptgg__64->SetBinError(3,0.0009469644);
   ttH_HighRes_ptgg__64->SetBinError(4,0.0009279019);
   ttH_HighRes_ptgg__64->SetBinError(5,0.0008885508);
   ttH_HighRes_ptgg__64->SetBinError(6,0.001040163);
   ttH_HighRes_ptgg__64->SetBinError(7,0.0009723567);
   ttH_HighRes_ptgg__64->SetBinError(8,0.0009452473);
   ttH_HighRes_ptgg__64->SetBinError(9,0.0009243937);
   ttH_HighRes_ptgg__64->SetEntries(2318);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_ptgg__64->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_ptgg__64->SetLineColor(ci);
   ttH_HighRes_ptgg__64->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__64->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__64->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__64->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_ptgg__64->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__64->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__64->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__64->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_ptgg__64->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__64->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__64->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__64->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_HighRes_ptgg","ggH + jets","f");

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
