void ptgg_HighRes_Mr250_Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:03 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.60238,762.1687,1.108107);
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
   hs->SetMaximum(6.105834);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.05282976);
   hs_stack_16->SetMaximum(8.286527);
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
   ggH_HighRes_ptgg__61->SetBinContent(1,0.3204562);
   ggH_HighRes_ptgg__61->SetBinContent(2,0.3755345);
   ggH_HighRes_ptgg__61->SetBinContent(3,0.3304705);
   ggH_HighRes_ptgg__61->SetBinContent(4,0.2653779);
   ggH_HighRes_ptgg__61->SetBinContent(5,0.3404847);
   ggH_HighRes_ptgg__61->SetBinContent(6,0.3805417);
   ggH_HighRes_ptgg__61->SetBinContent(7,0.3605132);
   ggH_HighRes_ptgg__61->SetBinContent(8,0.3905559);
   ggH_HighRes_ptgg__61->SetBinContent(9,0.4406271);
   ggH_HighRes_ptgg__61->SetBinError(1,0.04005704);
   ggH_HighRes_ptgg__61->SetBinError(2,0.04336302);
   ggH_HighRes_ptgg__61->SetBinError(3,0.04067812);
   ggH_HighRes_ptgg__61->SetBinError(4,0.03645246);
   ggH_HighRes_ptgg__61->SetBinError(5,0.04128985);
   ggH_HighRes_ptgg__61->SetBinError(6,0.04365115);
   ggH_HighRes_ptgg__61->SetBinError(7,0.04248691);
   ggH_HighRes_ptgg__61->SetBinError(8,0.04422178);
   ggH_HighRes_ptgg__61->SetBinError(9,0.04697104);
   ggH_HighRes_ptgg__61->SetEntries(640);

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
   vbfH_HighRes_ptgg__62->SetBinContent(1,0.01149222);
   vbfH_HighRes_ptgg__62->SetBinContent(2,0.02696254);
   vbfH_HighRes_ptgg__62->SetBinContent(3,0.03182464);
   vbfH_HighRes_ptgg__62->SetBinContent(4,0.04022282);
   vbfH_HighRes_ptgg__62->SetBinContent(5,0.04552694);
   vbfH_HighRes_ptgg__62->SetBinContent(6,0.07337344);
   vbfH_HighRes_ptgg__62->SetBinContent(7,0.08840163);
   vbfH_HighRes_ptgg__62->SetBinContent(8,0.09237968);
   vbfH_HighRes_ptgg__62->SetBinContent(9,0.114922);
   vbfH_HighRes_ptgg__62->SetBinError(1,0.00225381);
   vbfH_HighRes_ptgg__62->SetBinError(2,0.003452197);
   vbfH_HighRes_ptgg__62->SetBinError(3,0.003750567);
   vbfH_HighRes_ptgg__62->SetBinError(4,0.004216493);
   vbfH_HighRes_ptgg__62->SetBinError(5,0.004485897);
   vbfH_HighRes_ptgg__62->SetBinError(6,0.005694882);
   vbfH_HighRes_ptgg__62->SetBinError(7,0.006250945);
   vbfH_HighRes_ptgg__62->SetBinError(8,0.006390044);
   vbfH_HighRes_ptgg__62->SetBinError(9,0.007127174);
   vbfH_HighRes_ptgg__62->SetEntries(1188);

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
   vH_HighRes_ptgg__63->SetBinContent(1,0.004641336);
   vH_HighRes_ptgg__63->SetBinContent(2,0.004383484);
   vH_HighRes_ptgg__63->SetBinContent(3,0.00773556);
   vH_HighRes_ptgg__63->SetBinContent(4,0.01315044);
   vH_HighRes_ptgg__63->SetBinContent(5,0.01366615);
   vH_HighRes_ptgg__63->SetBinContent(6,0.0144397);
   vH_HighRes_ptgg__63->SetBinContent(7,0.01727607);
   vH_HighRes_ptgg__63->SetBinContent(8,0.02681658);
   vH_HighRes_ptgg__63->SetBinContent(9,0.03274717);
   vH_HighRes_ptgg__63->SetBinError(1,0.001093973);
   vH_HighRes_ptgg__63->SetBinError(2,0.001063151);
   vH_HighRes_ptgg__63->SetBinError(3,0.001412313);
   vH_HighRes_ptgg__63->SetBinError(4,0.001841431);
   vH_HighRes_ptgg__63->SetBinError(5,0.001877191);
   vH_HighRes_ptgg__63->SetBinError(6,0.001929587);
   vH_HighRes_ptgg__63->SetBinError(7,0.002110609);
   vH_HighRes_ptgg__63->SetBinError(8,0.002629584);
   vH_HighRes_ptgg__63->SetBinError(9,0.002905844);
   vH_HighRes_ptgg__63->SetEntries(523);

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
   ttH_HighRes_ptgg__64->SetBinContent(1,0.009861111);
   ttH_HighRes_ptgg__64->SetBinContent(2,0.01254014);
   ttH_HighRes_ptgg__64->SetBinContent(3,0.01635919);
   ttH_HighRes_ptgg__64->SetBinContent(4,0.0178982);
   ttH_HighRes_ptgg__64->SetBinContent(5,0.01995023);
   ttH_HighRes_ptgg__64->SetBinContent(6,0.02394027);
   ttH_HighRes_ptgg__64->SetBinContent(7,0.02228726);
   ttH_HighRes_ptgg__64->SetBinContent(8,0.02177425);
   ttH_HighRes_ptgg__64->SetBinContent(9,0.02228726);
   ttH_HighRes_ptgg__64->SetBinError(1,0.0007497253);
   ttH_HighRes_ptgg__64->SetBinError(2,0.0008454549);
   ttH_HighRes_ptgg__64->SetBinError(3,0.0009656507);
   ttH_HighRes_ptgg__64->SetBinError(4,0.001010052);
   ttH_HighRes_ptgg__64->SetBinError(5,0.001066383);
   ttH_HighRes_ptgg__64->SetBinError(6,0.001168164);
   ttH_HighRes_ptgg__64->SetBinError(7,0.001127113);
   ttH_HighRes_ptgg__64->SetBinError(8,0.001114066);
   ttH_HighRes_ptgg__64->SetBinError(9,0.001127113);
   ttH_HighRes_ptgg__64->SetEntries(2928);

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
