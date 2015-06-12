void ptgg_Zbb_Inclusive_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:37:31 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.691099,762.1687,1.471733);
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
   hs->SetMaximum(12.53601);
   
   TH1F *hs_stack_12 = new TH1F("hs_stack_12","",70,20,720);
   hs_stack_12->SetMinimum(0.0488024);
   hs_stack_12->SetMaximum(17.79652);
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
   gammaJet_Zbb_ptgg__67->SetBinContent(1,0.3122509);
   gammaJet_Zbb_ptgg__67->SetBinContent(2,0.2081673);
   gammaJet_Zbb_ptgg__67->SetBinContent(3,0.3122509);
   gammaJet_Zbb_ptgg__67->SetBinContent(4,0.3122509);
   gammaJet_Zbb_ptgg__67->SetBinContent(5,0.1040836);
   gammaJet_Zbb_ptgg__67->SetBinContent(6,0.3122509);
   gammaJet_Zbb_ptgg__67->SetBinContent(7,0.1040836);
   gammaJet_Zbb_ptgg__67->SetBinContent(8,0.2081673);
   gammaJet_Zbb_ptgg__67->SetBinContent(9,0.1040836);
   gammaJet_Zbb_ptgg__67->SetBinError(1,0.1802781);
   gammaJet_Zbb_ptgg__67->SetBinError(2,0.1471965);
   gammaJet_Zbb_ptgg__67->SetBinError(3,0.1802781);
   gammaJet_Zbb_ptgg__67->SetBinError(4,0.1802781);
   gammaJet_Zbb_ptgg__67->SetBinError(5,0.1040836);
   gammaJet_Zbb_ptgg__67->SetBinError(6,0.1802781);
   gammaJet_Zbb_ptgg__67->SetBinError(7,0.1040836);
   gammaJet_Zbb_ptgg__67->SetBinError(8,0.1471965);
   gammaJet_Zbb_ptgg__67->SetBinError(9,0.1040836);
   gammaJet_Zbb_ptgg__67->SetEntries(19);

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
   diphoton_Zbb_ptgg__68->SetBinContent(1,0.2337609);
   diphoton_Zbb_ptgg__68->SetBinContent(2,1.041474);
   diphoton_Zbb_ptgg__68->SetBinContent(3,0.6411008);
   diphoton_Zbb_ptgg__68->SetBinContent(4,0.81468);
   diphoton_Zbb_ptgg__68->SetBinContent(5,0.1735791);
   diphoton_Zbb_ptgg__68->SetBinContent(6,0.40734);
   diphoton_Zbb_ptgg__68->SetBinContent(7,0.3471581);
   diphoton_Zbb_ptgg__68->SetBinContent(8,0.1735791);
   diphoton_Zbb_ptgg__68->SetBinContent(9,0.1735791);
   diphoton_Zbb_ptgg__68->SetBinError(1,0.1837159);
   diphoton_Zbb_ptgg__68->SetBinError(2,0.4251801);
   diphoton_Zbb_ptgg__68->SetBinError(3,0.3124624);
   diphoton_Zbb_ptgg__68->SetBinError(4,0.3574388);
   diphoton_Zbb_ptgg__68->SetBinError(5,0.1735791);
   diphoton_Zbb_ptgg__68->SetBinError(6,0.2527474);
   diphoton_Zbb_ptgg__68->SetBinError(7,0.2454779);
   diphoton_Zbb_ptgg__68->SetBinError(8,0.1735791);
   diphoton_Zbb_ptgg__68->SetBinError(9,0.1735791);
   diphoton_Zbb_ptgg__68->SetEntries(27);

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
   ggH_Zbb_ptgg__69->SetBinContent(2,0.001304808);
   ggH_Zbb_ptgg__69->SetBinContent(3,0.001304808);
   ggH_Zbb_ptgg__69->SetBinContent(4,0.002609616);
   ggH_Zbb_ptgg__69->SetBinContent(5,0.001304808);
   ggH_Zbb_ptgg__69->SetBinContent(6,0.003914424);
   ggH_Zbb_ptgg__69->SetBinError(2,0.001304808);
   ggH_Zbb_ptgg__69->SetBinError(3,0.001304808);
   ggH_Zbb_ptgg__69->SetBinError(4,0.001845277);
   ggH_Zbb_ptgg__69->SetBinError(5,0.001304808);
   ggH_Zbb_ptgg__69->SetBinError(6,0.002259994);
   ggH_Zbb_ptgg__69->SetEntries(8);

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
   vbfH_Zbb_ptgg__70->SetBinContent(2,0.000230366);
   vbfH_Zbb_ptgg__70->SetBinContent(3,0.000230366);
   vbfH_Zbb_ptgg__70->SetBinContent(4,0.000230366);
   vbfH_Zbb_ptgg__70->SetBinContent(5,0.000115183);
   vbfH_Zbb_ptgg__70->SetBinContent(6,0.0004607321);
   vbfH_Zbb_ptgg__70->SetBinContent(7,0.000115183);
   vbfH_Zbb_ptgg__70->SetBinContent(8,0.000230366);
   vbfH_Zbb_ptgg__70->SetBinContent(9,0.000230366);
   vbfH_Zbb_ptgg__70->SetBinError(2,0.0001628934);
   vbfH_Zbb_ptgg__70->SetBinError(3,0.0001628934);
   vbfH_Zbb_ptgg__70->SetBinError(4,0.0001628934);
   vbfH_Zbb_ptgg__70->SetBinError(5,0.000115183);
   vbfH_Zbb_ptgg__70->SetBinError(6,0.000230366);
   vbfH_Zbb_ptgg__70->SetBinError(7,0.000115183);
   vbfH_Zbb_ptgg__70->SetBinError(8,0.0001628934);
   vbfH_Zbb_ptgg__70->SetBinError(9,0.0001628934);
   vbfH_Zbb_ptgg__70->SetEntries(16);

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
   vH_Zbb_ptgg__71->SetBinContent(1,0.0004031619);
   vH_Zbb_ptgg__71->SetBinContent(2,0.0005375492);
   vH_Zbb_ptgg__71->SetBinContent(3,0.0005375492);
   vH_Zbb_ptgg__71->SetBinContent(4,0.0006047428);
   vH_Zbb_ptgg__71->SetBinContent(5,0.0008063238);
   vH_Zbb_ptgg__71->SetBinContent(6,0.0006719365);
   vH_Zbb_ptgg__71->SetBinContent(7,0.0004031619);
   vH_Zbb_ptgg__71->SetBinContent(8,0.0007391301);
   vH_Zbb_ptgg__71->SetBinContent(9,0.0006047428);
   vH_Zbb_ptgg__71->SetBinError(1,0.0001645901);
   vH_Zbb_ptgg__71->SetBinError(2,0.0001900523);
   vH_Zbb_ptgg__71->SetBinError(3,0.0001900523);
   vH_Zbb_ptgg__71->SetBinError(4,0.0002015809);
   vH_Zbb_ptgg__71->SetBinError(5,0.0002327656);
   vH_Zbb_ptgg__71->SetBinError(6,0.000212485);
   vH_Zbb_ptgg__71->SetBinError(7,0.0001645901);
   vH_Zbb_ptgg__71->SetBinError(8,0.0002228561);
   vH_Zbb_ptgg__71->SetBinError(9,0.0002015809);
   vH_Zbb_ptgg__71->SetEntries(79);

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
   ttH_Zbb_ptgg__72->SetBinContent(1,0.00129228);
   ttH_Zbb_ptgg__72->SetBinContent(2,0.001886432);
   ttH_Zbb_ptgg__72->SetBinContent(3,0.002242923);
   ttH_Zbb_ptgg__72->SetBinContent(4,0.002703391);
   ttH_Zbb_ptgg__72->SetBinContent(5,0.002599414);
   ttH_Zbb_ptgg__72->SetBinContent(6,0.002614268);
   ttH_Zbb_ptgg__72->SetBinContent(7,0.002866783);
   ttH_Zbb_ptgg__72->SetBinContent(8,0.002673683);
   ttH_Zbb_ptgg__72->SetBinContent(9,0.002257777);
   ttH_Zbb_ptgg__72->SetBinError(1,0.0001385468);
   ttH_Zbb_ptgg__72->SetBinError(2,0.0001673935);
   ttH_Zbb_ptgg__72->SetBinError(3,0.0001825262);
   ttH_Zbb_ptgg__72->SetBinError(4,0.0002003884);
   ttH_Zbb_ptgg__72->SetBinError(5,0.000196497);
   ttH_Zbb_ptgg__72->SetBinError(6,0.0001970576);
   ttH_Zbb_ptgg__72->SetBinError(7,0.0002063552);
   ttH_Zbb_ptgg__72->SetBinError(8,0.0001992843);
   ttH_Zbb_ptgg__72->SetBinError(9,0.0001831296);
   ttH_Zbb_ptgg__72->SetEntries(1423);

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
