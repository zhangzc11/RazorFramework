void ptgg_Zbb_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:12:35 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.099172,762.1687,-0.7001254);
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
   hs->SetMaximum(0.1781126);
   
   TH1F *hs_stack_12 = new TH1F("hs_stack_12","",70,20,720);
   hs_stack_12->SetMinimum(0.08886146);
   hs_stack_12->SetMaximum(0.1870429);
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
   
   
   TH1F *ggH_Zbb_ptgg__45 = new TH1F("ggH_Zbb_ptgg__45","ptgg",70,20,720);
   ggH_Zbb_ptgg__45->SetBinContent(2,0.005047461);
   ggH_Zbb_ptgg__45->SetBinContent(7,0.005047461);
   ggH_Zbb_ptgg__45->SetBinContent(8,0.01009492);
   ggH_Zbb_ptgg__45->SetBinError(2,0.005047461);
   ggH_Zbb_ptgg__45->SetBinError(7,0.005047461);
   ggH_Zbb_ptgg__45->SetBinError(8,0.007138188);
   ggH_Zbb_ptgg__45->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_ptgg__45->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_ptgg__45->SetLineColor(ci);
   ggH_Zbb_ptgg__45->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_ptgg__45->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_ptgg__45->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_ptgg__45->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_ptgg__45->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_ptgg__45->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_ptgg__45->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_ptgg__45->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_ptgg__45->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_ptgg__45->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_ptgg__45->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_ptgg__45->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_ptgg,"histo");
   
   TH1F *vbfH_Zbb_ptgg__46 = new TH1F("vbfH_Zbb_ptgg__46","ptgg",70,20,720);
   vbfH_Zbb_ptgg__46->SetBinContent(1,0.0004420086);
   vbfH_Zbb_ptgg__46->SetBinContent(2,0.0008840172);
   vbfH_Zbb_ptgg__46->SetBinContent(3,0.001326026);
   vbfH_Zbb_ptgg__46->SetBinContent(6,0.0008840172);
   vbfH_Zbb_ptgg__46->SetBinContent(7,0.0008840172);
   vbfH_Zbb_ptgg__46->SetBinContent(8,0.0004420086);
   vbfH_Zbb_ptgg__46->SetBinContent(9,0.0008840172);
   vbfH_Zbb_ptgg__46->SetBinError(1,0.0004420086);
   vbfH_Zbb_ptgg__46->SetBinError(2,0.0006250945);
   vbfH_Zbb_ptgg__46->SetBinError(3,0.0007655813);
   vbfH_Zbb_ptgg__46->SetBinError(6,0.0006250945);
   vbfH_Zbb_ptgg__46->SetBinError(7,0.0006250945);
   vbfH_Zbb_ptgg__46->SetBinError(8,0.0004420086);
   vbfH_Zbb_ptgg__46->SetBinError(9,0.0006250945);
   vbfH_Zbb_ptgg__46->SetEntries(13);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_ptgg__46->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_ptgg__46->SetLineColor(ci);
   vbfH_Zbb_ptgg__46->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_ptgg__46->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_ptgg__46->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_ptgg__46->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_ptgg__46->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_ptgg__46->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_ptgg__46->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_ptgg__46->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_ptgg__46->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_ptgg__46->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_ptgg__46->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_ptgg__46->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_ptgg,"histo");
   
   TH1F *vH_Zbb_ptgg__47 = new TH1F("vH_Zbb_ptgg__47","ptgg",70,20,720);
   vH_Zbb_ptgg__47->SetBinContent(1,0.001547112);
   vH_Zbb_ptgg__47->SetBinContent(2,0.002836372);
   vH_Zbb_ptgg__47->SetBinContent(3,0.001547112);
   vH_Zbb_ptgg__47->SetBinContent(4,0.002062816);
   vH_Zbb_ptgg__47->SetBinContent(5,0.003094224);
   vH_Zbb_ptgg__47->SetBinContent(6,0.00257852);
   vH_Zbb_ptgg__47->SetBinContent(7,0.002062816);
   vH_Zbb_ptgg__47->SetBinContent(8,0.00128926);
   vH_Zbb_ptgg__47->SetBinContent(9,0.001547112);
   vH_Zbb_ptgg__47->SetBinError(1,0.0006316057);
   vH_Zbb_ptgg__47->SetBinError(2,0.0008551982);
   vH_Zbb_ptgg__47->SetBinError(3,0.0006316057);
   vH_Zbb_ptgg__47->SetBinError(4,0.0007293155);
   vH_Zbb_ptgg__47->SetBinError(5,0.0008932254);
   vH_Zbb_ptgg__47->SetBinError(6,0.0008153995);
   vH_Zbb_ptgg__47->SetBinError(7,0.0007293155);
   vH_Zbb_ptgg__47->SetBinError(8,0.0005765745);
   vH_Zbb_ptgg__47->SetBinError(9,0.0006316057);
   vH_Zbb_ptgg__47->SetEntries(72);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_ptgg__47->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_ptgg__47->SetLineColor(ci);
   vH_Zbb_ptgg__47->GetXaxis()->SetLabelFont(42);
   vH_Zbb_ptgg__47->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_ptgg__47->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_ptgg__47->GetXaxis()->SetTitleFont(42);
   vH_Zbb_ptgg__47->GetYaxis()->SetLabelFont(42);
   vH_Zbb_ptgg__47->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_ptgg__47->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_ptgg__47->GetYaxis()->SetTitleFont(42);
   vH_Zbb_ptgg__47->GetZaxis()->SetLabelFont(42);
   vH_Zbb_ptgg__47->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_ptgg__47->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_ptgg__47->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_ptgg,"histo");
   
   TH1F *ttH_Zbb_ptgg__48 = new TH1F("ttH_Zbb_ptgg__48","ptgg",70,20,720);
   ttH_Zbb_ptgg__48->SetBinContent(1,0.003135033);
   ttH_Zbb_ptgg__48->SetBinContent(2,0.003876041);
   ttH_Zbb_ptgg__48->SetBinContent(3,0.004332046);
   ttH_Zbb_ptgg__48->SetBinContent(4,0.006270069);
   ttH_Zbb_ptgg__48->SetBinContent(5,0.005415059);
   ttH_Zbb_ptgg__48->SetBinContent(6,0.005358058);
   ttH_Zbb_ptgg__48->SetBinContent(7,0.00552906);
   ttH_Zbb_ptgg__48->SetBinContent(8,0.005985066);
   ttH_Zbb_ptgg__48->SetBinContent(9,0.004503048);
   ttH_Zbb_ptgg__48->SetBinError(1,0.0004227274);
   ttH_Zbb_ptgg__48->SetBinError(2,0.0004700386);
   ttH_Zbb_ptgg__48->SetBinError(3,0.0004969193);
   ttH_Zbb_ptgg__48->SetBinError(4,0.0005978269);
   ttH_Zbb_ptgg__48->SetBinError(5,0.0005555727);
   ttH_Zbb_ptgg__48->SetBinError(6,0.0005526409);
   ttH_Zbb_ptgg__48->SetBinError(7,0.0005613904);
   ttH_Zbb_ptgg__48->SetBinError(8,0.0005840819);
   ttH_Zbb_ptgg__48->SetBinError(9,0.000506632);
   ttH_Zbb_ptgg__48->SetEntries(779);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_ptgg__48->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_ptgg__48->SetLineColor(ci);
   ttH_Zbb_ptgg__48->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_ptgg__48->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_ptgg__48->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_ptgg__48->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_ptgg__48->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_ptgg__48->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_ptgg__48->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_ptgg__48->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_ptgg__48->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_ptgg__48->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_ptgg__48->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_ptgg__48->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Zbb_ptgg","ggH + jets","f");

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
