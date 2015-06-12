void ptgg_HighRes_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:06:39 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.864568,762.1687,2.2165);
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
   hs->SetMaximum(55.0806);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.0421852);
   hs_stack_16->SetMaximum(85.27577);
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
   ggH_HighRes_ptgg__61->SetBinContent(1,5.10226);
   ggH_HighRes_ptgg__61->SetBinContent(2,4.596526);
   ggH_HighRes_ptgg__61->SetBinContent(3,4.065756);
   ggH_HighRes_ptgg__61->SetBinContent(4,3.780352);
   ggH_HighRes_ptgg__61->SetBinContent(5,3.069354);
   ggH_HighRes_ptgg__61->SetBinContent(6,2.563644);
   ggH_HighRes_ptgg__61->SetBinContent(7,2.04792);
   ggH_HighRes_ptgg__61->SetBinContent(8,1.592271);
   ggH_HighRes_ptgg__61->SetBinContent(9,1.401999);
   ggH_HighRes_ptgg__61->SetBinError(1,0.1598365);
   ggH_HighRes_ptgg__61->SetBinError(2,0.1517086);
   ggH_HighRes_ptgg__61->SetBinError(3,0.1426812);
   ggH_HighRes_ptgg__61->SetBinError(4,0.1375822);
   ggH_HighRes_ptgg__61->SetBinError(5,0.1239707);
   ggH_HighRes_ptgg__61->SetBinError(6,0.1132984);
   ggH_HighRes_ptgg__61->SetBinError(7,0.1012629);
   ggH_HighRes_ptgg__61->SetBinError(8,0.08928992);
   ggH_HighRes_ptgg__61->SetBinError(9,0.08378531);
   ggH_HighRes_ptgg__61->SetEntries(5636);

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
   vbfH_HighRes_ptgg__62->SetBinContent(1,0.2426636);
   vbfH_HighRes_ptgg__62->SetBinContent(2,0.3593514);
   vbfH_HighRes_ptgg__62->SetBinContent(3,0.4397951);
   vbfH_HighRes_ptgg__62->SetBinContent(4,0.4813429);
   vbfH_HighRes_ptgg__62->SetBinContent(5,0.502559);
   vbfH_HighRes_ptgg__62->SetBinContent(6,0.4782489);
   vbfH_HighRes_ptgg__62->SetBinContent(7,0.4738289);
   vbfH_HighRes_ptgg__62->SetBinContent(8,0.468525);
   vbfH_HighRes_ptgg__62->SetBinContent(9,0.3889653);
   vbfH_HighRes_ptgg__62->SetBinError(1,0.01035659);
   vbfH_HighRes_ptgg__62->SetBinError(2,0.01260306);
   vbfH_HighRes_ptgg__62->SetBinError(3,0.01394255);
   vbfH_HighRes_ptgg__62->SetBinError(4,0.01458628);
   vbfH_HighRes_ptgg__62->SetBinError(5,0.01490428);
   vbfH_HighRes_ptgg__62->SetBinError(6,0.01453933);
   vbfH_HighRes_ptgg__62->SetBinError(7,0.01447198);
   vbfH_HighRes_ptgg__62->SetBinError(8,0.01439076);
   vbfH_HighRes_ptgg__62->SetBinError(9,0.01311209);
   vbfH_HighRes_ptgg__62->SetEntries(8677);

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
   vH_HighRes_ptgg__63->SetBinContent(1,0.141818);
   vH_HighRes_ptgg__63->SetBinContent(2,0.186426);
   vH_HighRes_ptgg__63->SetBinContent(3,0.2145316);
   vH_HighRes_ptgg__63->SetBinContent(4,0.2346439);
   vH_HighRes_ptgg__63->SetBinContent(5,0.2439265);
   vH_HighRes_ptgg__63->SetBinContent(6,0.2111796);
   vH_HighRes_ptgg__63->SetBinContent(7,0.2042177);
   vH_HighRes_ptgg__63->SetBinContent(8,0.186426);
   vH_HighRes_ptgg__63->SetBinContent(9,0.1660559);
   vH_HighRes_ptgg__63->SetBinError(1,0.006047165);
   vH_HighRes_ptgg__63->SetBinError(2,0.006933294);
   vH_HighRes_ptgg__63->SetBinError(3,0.007437588);
   vH_HighRes_ptgg__63->SetBinError(4,0.007778416);
   vH_HighRes_ptgg__63->SetBinError(5,0.007930782);
   vH_HighRes_ptgg__63->SetBinError(6,0.007379253);
   vH_HighRes_ptgg__63->SetBinError(7,0.007256597);
   vH_HighRes_ptgg__63->SetBinError(8,0.006933294);
   vH_HighRes_ptgg__63->SetBinError(9,0.006543549);
   vH_HighRes_ptgg__63->SetEntries(6939);

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
   ttH_HighRes_ptgg__64->SetBinContent(1,0.02131824);
   ttH_HighRes_ptgg__64->SetBinContent(2,0.02753132);
   ttH_HighRes_ptgg__64->SetBinContent(3,0.03288938);
   ttH_HighRes_ptgg__64->SetBinContent(4,0.03596741);
   ttH_HighRes_ptgg__64->SetBinContent(5,0.03716443);
   ttH_HighRes_ptgg__64->SetBinContent(6,0.04161048);
   ttH_HighRes_ptgg__64->SetBinContent(7,0.03927345);
   ttH_HighRes_ptgg__64->SetBinContent(8,0.03727843);
   ttH_HighRes_ptgg__64->SetBinContent(9,0.03573941);
   ttH_HighRes_ptgg__64->SetBinError(1,0.001102338);
   ttH_HighRes_ptgg__64->SetBinError(2,0.001252716);
   ttH_HighRes_ptgg__64->SetBinError(3,0.0013692);
   ttH_HighRes_ptgg__64->SetBinError(4,0.001431838);
   ttH_HighRes_ptgg__64->SetBinError(5,0.001455469);
   ttH_HighRes_ptgg__64->SetBinError(6,0.00154007);
   ttH_HighRes_ptgg__64->SetBinError(7,0.001496197);
   ttH_HighRes_ptgg__64->SetBinError(8,0.001457699);
   ttH_HighRes_ptgg__64->SetBinError(9,0.001427292);
   ttH_HighRes_ptgg__64->SetEntries(5417);

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
