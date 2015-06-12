void ptgg_HighRes_Mr250_Rsq0p05_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:11:22 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.477323,762.1687,0.6169143);
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
   hs->SetMaximum(2.31984);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.05942727);
   hs_stack_16->SetMaximum(2.953369);
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
   ggH_HighRes_ptgg__61->SetBinContent(1,0.08512121);
   ggH_HighRes_ptgg__61->SetBinContent(2,0.04005704);
   ggH_HighRes_ptgg__61->SetBinContent(3,0.04506417);
   ggH_HighRes_ptgg__61->SetBinContent(4,0.02503565);
   ggH_HighRes_ptgg__61->SetBinContent(5,0.07009982);
   ggH_HighRes_ptgg__61->SetBinContent(6,0.09012835);
   ggH_HighRes_ptgg__61->SetBinContent(7,0.1301854);
   ggH_HighRes_ptgg__61->SetBinContent(8,0.1452068);
   ggH_HighRes_ptgg__61->SetBinContent(9,0.1702425);
   ggH_HighRes_ptgg__61->SetBinError(1,0.02064493);
   ggH_HighRes_ptgg__61->SetBinError(2,0.0141623);
   ggH_HighRes_ptgg__61->SetBinError(3,0.01502139);
   ggH_HighRes_ptgg__61->SetBinError(4,0.01119628);
   ggH_HighRes_ptgg__61->SetBinError(5,0.01873497);
   ggH_HighRes_ptgg__61->SetBinError(6,0.02124345);
   ggH_HighRes_ptgg__61->SetBinError(7,0.02553145);
   ggH_HighRes_ptgg__61->SetBinError(8,0.02696422);
   ggH_HighRes_ptgg__61->SetBinError(9,0.02919633);
   ggH_HighRes_ptgg__61->SetEntries(160);

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
   vbfH_HighRes_ptgg__62->SetBinContent(1,0.0008840172);
   vbfH_HighRes_ptgg__62->SetBinContent(2,0.004420085);
   vbfH_HighRes_ptgg__62->SetBinContent(3,0.004420085);
   vbfH_HighRes_ptgg__62->SetBinContent(4,0.009282179);
   vbfH_HighRes_ptgg__62->SetBinContent(5,0.008840171);
   vbfH_HighRes_ptgg__62->SetBinContent(6,0.01414427);
   vbfH_HighRes_ptgg__62->SetBinContent(7,0.01812235);
   vbfH_HighRes_ptgg__62->SetBinContent(8,0.0203324);
   vbfH_HighRes_ptgg__62->SetBinContent(9,0.0344767);
   vbfH_HighRes_ptgg__62->SetBinError(1,0.0006250945);
   vbfH_HighRes_ptgg__62->SetBinError(2,0.001397754);
   vbfH_HighRes_ptgg__62->SetBinError(3,0.001397754);
   vbfH_HighRes_ptgg__62->SetBinError(4,0.002025538);
   vbfH_HighRes_ptgg__62->SetBinError(5,0.001976722);
   vbfH_HighRes_ptgg__62->SetBinError(6,0.002500378);
   vbfH_HighRes_ptgg__62->SetBinError(7,0.002830236);
   vbfH_HighRes_ptgg__62->SetBinError(8,0.002997848);
   vbfH_HighRes_ptgg__62->SetBinError(9,0.003903714);
   vbfH_HighRes_ptgg__62->SetEntries(260);

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
   vH_HighRes_ptgg__63->SetBinContent(1,0.001804964);
   vH_HighRes_ptgg__63->SetBinContent(2,0.00128926);
   vH_HighRes_ptgg__63->SetBinContent(3,0.004383484);
   vH_HighRes_ptgg__63->SetBinContent(4,0.00515704);
   vH_HighRes_ptgg__63->SetBinContent(5,0.005414892);
   vH_HighRes_ptgg__63->SetBinContent(6,0.004641336);
   vH_HighRes_ptgg__63->SetBinContent(7,0.007219856);
   vH_HighRes_ptgg__63->SetBinContent(8,0.00928267);
   vH_HighRes_ptgg__63->SetBinContent(9,0.0144397);
   vH_HighRes_ptgg__63->SetBinError(1,0.0006822122);
   vH_HighRes_ptgg__63->SetBinError(2,0.0005765745);
   vH_HighRes_ptgg__63->SetBinError(3,0.001063151);
   vH_HighRes_ptgg__63->SetBinError(4,0.001153149);
   vH_HighRes_ptgg__63->SetBinError(5,0.001181626);
   vH_HighRes_ptgg__63->SetBinError(6,0.001093973);
   vH_HighRes_ptgg__63->SetBinError(7,0.001364424);
   vH_HighRes_ptgg__63->SetBinError(8,0.001547112);
   vH_HighRes_ptgg__63->SetBinError(9,0.001929587);
   vH_HighRes_ptgg__63->SetEntries(208);

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
   ttH_HighRes_ptgg__64->SetBinContent(1,0.005757063);
   ttH_HighRes_ptgg__64->SetBinContent(2,0.006441071);
   ttH_HighRes_ptgg__64->SetBinContent(3,0.009291104);
   ttH_HighRes_ptgg__64->SetBinContent(4,0.01071612);
   ttH_HighRes_ptgg__64->SetBinContent(5,0.01151413);
   ttH_HighRes_ptgg__64->SetBinContent(6,0.01356615);
   ttH_HighRes_ptgg__64->SetBinContent(7,0.01345215);
   ttH_HighRes_ptgg__64->SetBinContent(8,0.01254014);
   ttH_HighRes_ptgg__64->SetBinContent(9,0.01282515);
   ttH_HighRes_ptgg__64->SetBinError(1,0.0005728485);
   ttH_HighRes_ptgg__64->SetBinError(2,0.0006059242);
   ttH_HighRes_ptgg__64->SetBinError(3,0.0007277344);
   ttH_HighRes_ptgg__64->SetBinError(4,0.0007815523);
   ttH_HighRes_ptgg__64->SetBinError(5,0.0008101301);
   ttH_HighRes_ptgg__64->SetBinError(6,0.0008793618);
   ttH_HighRes_ptgg__64->SetBinError(7,0.0008756592);
   ttH_HighRes_ptgg__64->SetBinError(8,0.0008454549);
   ttH_HighRes_ptgg__64->SetBinError(9,0.0008550084);
   ttH_HighRes_ptgg__64->SetEntries(1686);

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
