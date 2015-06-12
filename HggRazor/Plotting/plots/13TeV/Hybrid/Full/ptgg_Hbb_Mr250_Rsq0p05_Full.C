void ptgg_Hbb_Mr250_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:15:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.453176,762.1687,0.5250775);
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
   hs->SetMaximum(1.936949);
   
   TH1F *hs_stack_8 = new TH1F("hs_stack_8","",70,20,720);
   hs_stack_8->SetMinimum(0.06084357);
   hs_stack_8->SetMaximum(2.435565);
   hs_stack_8->SetDirectory(0);
   hs_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_8->SetLineColor(ci);
   hs_stack_8->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_8->GetXaxis()->SetLabelFont(42);
   hs_stack_8->GetXaxis()->SetLabelSize(0.035);
   hs_stack_8->GetXaxis()->SetTitleSize(0.06);
   hs_stack_8->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_8->GetXaxis()->SetTitleFont(42);
   hs_stack_8->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_8->GetYaxis()->SetLabelFont(42);
   hs_stack_8->GetYaxis()->SetLabelSize(0.035);
   hs_stack_8->GetYaxis()->SetTitleSize(0.06);
   hs_stack_8->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_8->GetYaxis()->SetTitleFont(42);
   hs_stack_8->GetZaxis()->SetLabelFont(42);
   hs_stack_8->GetZaxis()->SetLabelSize(0.035);
   hs_stack_8->GetZaxis()->SetTitleSize(0.035);
   hs_stack_8->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_8);
   
   
   TH1F *gammaJet_Hbb_ptgg__43 = new TH1F("gammaJet_Hbb_ptgg__43","ptgg",70,20,720);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_ptgg__43->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_ptgg__43->SetLineColor(ci);
   gammaJet_Hbb_ptgg__43->GetXaxis()->SetLabelFont(42);
   gammaJet_Hbb_ptgg__43->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_ptgg__43->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_ptgg__43->GetXaxis()->SetTitleFont(42);
   gammaJet_Hbb_ptgg__43->GetYaxis()->SetLabelFont(42);
   gammaJet_Hbb_ptgg__43->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_ptgg__43->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_ptgg__43->GetYaxis()->SetTitleFont(42);
   gammaJet_Hbb_ptgg__43->GetZaxis()->SetLabelFont(42);
   gammaJet_Hbb_ptgg__43->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_ptgg__43->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_ptgg__43->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Hbb_ptgg,"histo");
   
   TH1F *diphoton_Hbb_ptgg__44 = new TH1F("diphoton_Hbb_ptgg__44","ptgg",70,20,720);
   diphoton_Hbb_ptgg__44->SetBinContent(2,0.1921166);
   diphoton_Hbb_ptgg__44->SetBinContent(8,0.1921166);
   diphoton_Hbb_ptgg__44->SetBinError(2,0.1921166);
   diphoton_Hbb_ptgg__44->SetBinError(8,0.1921166);
   diphoton_Hbb_ptgg__44->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_ptgg__44->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_ptgg__44->SetLineColor(ci);
   diphoton_Hbb_ptgg__44->GetXaxis()->SetLabelFont(42);
   diphoton_Hbb_ptgg__44->GetXaxis()->SetLabelSize(0.035);
   diphoton_Hbb_ptgg__44->GetXaxis()->SetTitleSize(0.035);
   diphoton_Hbb_ptgg__44->GetXaxis()->SetTitleFont(42);
   diphoton_Hbb_ptgg__44->GetYaxis()->SetLabelFont(42);
   diphoton_Hbb_ptgg__44->GetYaxis()->SetLabelSize(0.035);
   diphoton_Hbb_ptgg__44->GetYaxis()->SetTitleSize(0.035);
   diphoton_Hbb_ptgg__44->GetYaxis()->SetTitleFont(42);
   diphoton_Hbb_ptgg__44->GetZaxis()->SetLabelFont(42);
   diphoton_Hbb_ptgg__44->GetZaxis()->SetLabelSize(0.035);
   diphoton_Hbb_ptgg__44->GetZaxis()->SetTitleSize(0.035);
   diphoton_Hbb_ptgg__44->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Hbb_ptgg,"histo");
   
   TH1F *ggH_Hbb_ptgg__45 = new TH1F("ggH_Hbb_ptgg__45","ptgg",70,20,720);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_ptgg__45->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_ptgg__45->SetLineColor(ci);
   ggH_Hbb_ptgg__45->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_ptgg__45->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_ptgg__45->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_ptgg__45->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_ptgg__45->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_ptgg__45->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_ptgg__45->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_ptgg__45->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_ptgg__45->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_ptgg__45->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_ptgg__45->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_ptgg__45->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_ptgg,"histo");
   
   TH1F *vbfH_Hbb_ptgg__46 = new TH1F("vbfH_Hbb_ptgg__46","ptgg",70,20,720);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_ptgg__46->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_ptgg__46->SetLineColor(ci);
   vbfH_Hbb_ptgg__46->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_ptgg__46->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_ptgg__46->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_ptgg__46->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_ptgg__46->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_ptgg__46->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_ptgg__46->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_ptgg__46->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_ptgg__46->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_ptgg__46->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_ptgg__46->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_ptgg__46->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_ptgg,"histo");
   
   TH1F *vH_Hbb_ptgg__47 = new TH1F("vH_Hbb_ptgg__47","ptgg",70,20,720);
   vH_Hbb_ptgg__47->SetBinContent(7,7.436967e-05);
   vH_Hbb_ptgg__47->SetBinContent(9,0.000223109);
   vH_Hbb_ptgg__47->SetBinError(7,7.436966e-05);
   vH_Hbb_ptgg__47->SetBinError(9,0.000128812);
   vH_Hbb_ptgg__47->SetEntries(4);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_ptgg__47->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_ptgg__47->SetLineColor(ci);
   vH_Hbb_ptgg__47->GetXaxis()->SetLabelFont(42);
   vH_Hbb_ptgg__47->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_ptgg__47->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_ptgg__47->GetXaxis()->SetTitleFont(42);
   vH_Hbb_ptgg__47->GetYaxis()->SetLabelFont(42);
   vH_Hbb_ptgg__47->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_ptgg__47->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_ptgg__47->GetYaxis()->SetTitleFont(42);
   vH_Hbb_ptgg__47->GetZaxis()->SetLabelFont(42);
   vH_Hbb_ptgg__47->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_ptgg__47->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_ptgg__47->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_ptgg,"histo");
   
   TH1F *ttH_Hbb_ptgg__48 = new TH1F("ttH_Hbb_ptgg__48","ptgg",70,20,720);
   ttH_Hbb_ptgg__48->SetBinContent(1,0.0006082837);
   ttH_Hbb_ptgg__48->SetBinContent(2,0.0005425233);
   ttH_Hbb_ptgg__48->SetBinContent(3,0.0008713258);
   ttH_Hbb_ptgg__48->SetBinContent(4,0.000772685);
   ttH_Hbb_ptgg__48->SetBinContent(5,0.001134368);
   ttH_Hbb_ptgg__48->SetBinContent(6,0.00141385);
   ttH_Hbb_ptgg__48->SetBinContent(7,0.00144673);
   ttH_Hbb_ptgg__48->SetBinContent(8,0.001578251);
   ttH_Hbb_ptgg__48->SetBinContent(9,0.001282329);
   ttH_Hbb_ptgg__48->SetBinError(1,0.0001000012);
   ttH_Hbb_ptgg__48->SetBinError(2,9.444119e-05);
   ttH_Hbb_ptgg__48->SetBinError(3,0.0001196857);
   ttH_Hbb_ptgg__48->SetBinError(4,0.0001127077);
   ttH_Hbb_ptgg__48->SetBinError(5,0.0001365617);
   ttH_Hbb_ptgg__48->SetBinError(6,0.0001524592);
   ttH_Hbb_ptgg__48->SetBinError(7,0.0001542218);
   ttH_Hbb_ptgg__48->SetBinError(8,0.0001610794);
   ttH_Hbb_ptgg__48->SetBinError(9,0.000145195);
   ttH_Hbb_ptgg__48->SetEntries(587);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_ptgg__48->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_ptgg__48->SetLineColor(ci);
   ttH_Hbb_ptgg__48->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_ptgg__48->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_ptgg__48->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_ptgg__48->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_ptgg__48->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_ptgg__48->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_ptgg__48->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_ptgg__48->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_ptgg__48->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_ptgg__48->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_ptgg__48->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_ptgg__48->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Hbb_ptgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Hbb_ptgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Hbb_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_ptgg","t#bar{t}H + jets","f");

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
