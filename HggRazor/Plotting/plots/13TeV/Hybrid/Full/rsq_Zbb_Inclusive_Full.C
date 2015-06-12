void rsq_Zbb_Inclusive_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:37:31 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.824199,1.060241,2.039363);
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
   hs->SetMaximum(38.70518);
   
   TH1F *hs_stack_10 = new TH1F("hs_stack_10","",125,0,5);
   hs_stack_10->SetMinimum(0.04359417);
   hs_stack_10->SetMaximum(58.7372);
   hs_stack_10->SetDirectory(0);
   hs_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_10->SetLineColor(ci);
   hs_stack_10->GetXaxis()->SetTitle("R^{2}");
   hs_stack_10->GetXaxis()->SetRange(1,25);
   hs_stack_10->GetXaxis()->SetLabelFont(42);
   hs_stack_10->GetXaxis()->SetLabelSize(0.035);
   hs_stack_10->GetXaxis()->SetTitleSize(0.06);
   hs_stack_10->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_10->GetXaxis()->SetTitleFont(42);
   hs_stack_10->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_10->GetYaxis()->SetLabelFont(42);
   hs_stack_10->GetYaxis()->SetLabelSize(0.035);
   hs_stack_10->GetYaxis()->SetTitleSize(0.06);
   hs_stack_10->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_10->GetYaxis()->SetTitleFont(42);
   hs_stack_10->GetZaxis()->SetLabelFont(42);
   hs_stack_10->GetZaxis()->SetLabelSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_10);
   
   
   TH1F *gammaJet_Zbb_rsq__55 = new TH1F("gammaJet_Zbb_rsq__55","rsq",125,0,5);
   gammaJet_Zbb_rsq__55->SetBinContent(1,1.353087);
   gammaJet_Zbb_rsq__55->SetBinContent(2,0.3122509);
   gammaJet_Zbb_rsq__55->SetBinContent(3,0.1040836);
   gammaJet_Zbb_rsq__55->SetBinContent(4,0.1040836);
   gammaJet_Zbb_rsq__55->SetBinContent(13,0.1040836);
   gammaJet_Zbb_rsq__55->SetBinError(1,0.3752789);
   gammaJet_Zbb_rsq__55->SetBinError(2,0.1802781);
   gammaJet_Zbb_rsq__55->SetBinError(3,0.1040836);
   gammaJet_Zbb_rsq__55->SetBinError(4,0.1040836);
   gammaJet_Zbb_rsq__55->SetBinError(13,0.1040836);
   gammaJet_Zbb_rsq__55->SetEntries(19);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_rsq__55->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_rsq__55->SetLineColor(ci);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetLabelFont(42);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetTitleFont(42);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetLabelFont(42);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetTitleFont(42);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetLabelFont(42);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Zbb_rsq,"histo");
   
   TH1F *diphoton_Zbb_rsq__56 = new TH1F("diphoton_Zbb_rsq__56","rsq",125,0,5);
   diphoton_Zbb_rsq__56->SetBinContent(1,2.497256);
   diphoton_Zbb_rsq__56->SetBinContent(2,0.988259);
   diphoton_Zbb_rsq__56->SetBinContent(3,0.3471581);
   diphoton_Zbb_rsq__56->SetBinContent(4,0.1735791);
   diphoton_Zbb_rsq__56->SetBinError(1,0.6373173);
   diphoton_Zbb_rsq__56->SetBinError(2,0.3973565);
   diphoton_Zbb_rsq__56->SetBinError(3,0.2454779);
   diphoton_Zbb_rsq__56->SetBinError(4,0.1735791);
   diphoton_Zbb_rsq__56->SetEntries(27);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_rsq__56->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_rsq__56->SetLineColor(ci);
   diphoton_Zbb_rsq__56->GetXaxis()->SetLabelFont(42);
   diphoton_Zbb_rsq__56->GetXaxis()->SetLabelSize(0.035);
   diphoton_Zbb_rsq__56->GetXaxis()->SetTitleSize(0.035);
   diphoton_Zbb_rsq__56->GetXaxis()->SetTitleFont(42);
   diphoton_Zbb_rsq__56->GetYaxis()->SetLabelFont(42);
   diphoton_Zbb_rsq__56->GetYaxis()->SetLabelSize(0.035);
   diphoton_Zbb_rsq__56->GetYaxis()->SetTitleSize(0.035);
   diphoton_Zbb_rsq__56->GetYaxis()->SetTitleFont(42);
   diphoton_Zbb_rsq__56->GetZaxis()->SetLabelFont(42);
   diphoton_Zbb_rsq__56->GetZaxis()->SetLabelSize(0.035);
   diphoton_Zbb_rsq__56->GetZaxis()->SetTitleSize(0.035);
   diphoton_Zbb_rsq__56->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Zbb_rsq,"histo");
   
   TH1F *ggH_Zbb_rsq__57 = new TH1F("ggH_Zbb_rsq__57","rsq",125,0,5);
   ggH_Zbb_rsq__57->SetBinContent(1,0.00652404);
   ggH_Zbb_rsq__57->SetBinContent(3,0.002609616);
   ggH_Zbb_rsq__57->SetBinContent(13,0.001304808);
   ggH_Zbb_rsq__57->SetBinError(1,0.002917639);
   ggH_Zbb_rsq__57->SetBinError(3,0.001845277);
   ggH_Zbb_rsq__57->SetBinError(13,0.001304808);
   ggH_Zbb_rsq__57->SetEntries(8);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_rsq__57->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_rsq__57->SetLineColor(ci);
   ggH_Zbb_rsq__57->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__57->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__57->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__57->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_rsq__57->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__57->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__57->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__57->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_rsq__57->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__57->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__57->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__57->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_rsq,"histo");
   
   TH1F *vbfH_Zbb_rsq__58 = new TH1F("vbfH_Zbb_rsq__58","rsq",125,0,5);
   vbfH_Zbb_rsq__58->SetBinContent(1,0.001267013);
   vbfH_Zbb_rsq__58->SetBinContent(2,0.000230366);
   vbfH_Zbb_rsq__58->SetBinContent(3,0.000230366);
   vbfH_Zbb_rsq__58->SetBinContent(5,0.000115183);
   vbfH_Zbb_rsq__58->SetBinError(1,0.0003820188);
   vbfH_Zbb_rsq__58->SetBinError(2,0.0001628934);
   vbfH_Zbb_rsq__58->SetBinError(3,0.0001628934);
   vbfH_Zbb_rsq__58->SetBinError(5,0.000115183);
   vbfH_Zbb_rsq__58->SetEntries(16);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_rsq__58->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_rsq__58->SetLineColor(ci);
   vbfH_Zbb_rsq__58->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__58->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__58->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__58->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_rsq__58->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__58->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__58->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__58->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_rsq__58->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__58->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__58->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__58->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_rsq,"histo");
   
   TH1F *vH_Zbb_rsq__59 = new TH1F("vH_Zbb_rsq__59","rsq",125,0,5);
   vH_Zbb_rsq__59->SetBinContent(1,0.002150197);
   vH_Zbb_rsq__59->SetBinContent(2,0.001747035);
   vH_Zbb_rsq__59->SetBinContent(3,0.0008735175);
   vH_Zbb_rsq__59->SetBinContent(4,0.0001343873);
   vH_Zbb_rsq__59->SetBinContent(5,0.0002687746);
   vH_Zbb_rsq__59->SetBinContent(7,6.719364e-05);
   vH_Zbb_rsq__59->SetBinContent(12,6.719364e-05);
   vH_Zbb_rsq__59->SetBinError(1,0.0003801046);
   vH_Zbb_rsq__59->SetBinError(2,0.0003426217);
   vH_Zbb_rsq__59->SetBinError(3,0.0002422701);
   vH_Zbb_rsq__59->SetBinError(4,9.502616e-05);
   vH_Zbb_rsq__59->SetBinError(5,0.0001343873);
   vH_Zbb_rsq__59->SetBinError(7,6.719364e-05);
   vH_Zbb_rsq__59->SetBinError(12,6.719364e-05);
   vH_Zbb_rsq__59->SetEntries(79);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_rsq__59->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_rsq__59->SetLineColor(ci);
   vH_Zbb_rsq__59->GetXaxis()->SetLabelFont(42);
   vH_Zbb_rsq__59->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__59->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__59->GetXaxis()->SetTitleFont(42);
   vH_Zbb_rsq__59->GetYaxis()->SetLabelFont(42);
   vH_Zbb_rsq__59->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__59->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__59->GetYaxis()->SetTitleFont(42);
   vH_Zbb_rsq__59->GetZaxis()->SetLabelFont(42);
   vH_Zbb_rsq__59->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__59->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__59->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_rsq,"histo");
   
   TH1F *ttH_Zbb_rsq__60 = new TH1F("ttH_Zbb_rsq__60","rsq",125,0,5);
   ttH_Zbb_rsq__60->SetBinContent(1,0.01023427);
   ttH_Zbb_rsq__60->SetBinContent(2,0.004619531);
   ttH_Zbb_rsq__60->SetBinContent(3,0.002302338);
   ttH_Zbb_rsq__60->SetBinContent(4,0.001366549);
   ttH_Zbb_rsq__60->SetBinContent(5,0.0007723967);
   ttH_Zbb_rsq__60->SetBinContent(6,0.0005347359);
   ttH_Zbb_rsq__60->SetBinContent(7,0.0003119293);
   ttH_Zbb_rsq__60->SetBinContent(8,0.0002525141);
   ttH_Zbb_rsq__60->SetBinContent(9,0.000133684);
   ttH_Zbb_rsq__60->SetBinContent(10,7.426887e-05);
   ttH_Zbb_rsq__60->SetBinContent(11,0.0001188302);
   ttH_Zbb_rsq__60->SetBinContent(12,0.0001188302);
   ttH_Zbb_rsq__60->SetBinContent(13,5.94151e-05);
   ttH_Zbb_rsq__60->SetBinContent(14,7.426887e-05);
   ttH_Zbb_rsq__60->SetBinContent(15,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinContent(16,4.456133e-05);
   ttH_Zbb_rsq__60->SetBinContent(17,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinContent(18,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinContent(20,2.970755e-05);
   ttH_Zbb_rsq__60->SetBinContent(21,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinContent(22,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinContent(25,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinError(1,0.0003898939);
   ttH_Zbb_rsq__60->SetBinError(2,0.0002619492);
   ttH_Zbb_rsq__60->SetBinError(3,0.000184928);
   ttH_Zbb_rsq__60->SetBinError(4,0.0001424724);
   ttH_Zbb_rsq__60->SetBinError(5,0.0001071121);
   ttH_Zbb_rsq__60->SetBinError(6,8.912265e-05);
   ttH_Zbb_rsq__60->SetBinError(7,6.806855e-05);
   ttH_Zbb_rsq__60->SetBinError(8,6.124368e-05);
   ttH_Zbb_rsq__60->SetBinError(9,4.456132e-05);
   ttH_Zbb_rsq__60->SetBinError(10,3.321405e-05);
   ttH_Zbb_rsq__60->SetBinError(11,4.201282e-05);
   ttH_Zbb_rsq__60->SetBinError(12,4.201282e-05);
   ttH_Zbb_rsq__60->SetBinError(13,2.970755e-05);
   ttH_Zbb_rsq__60->SetBinError(14,3.321405e-05);
   ttH_Zbb_rsq__60->SetBinError(15,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinError(16,2.572749e-05);
   ttH_Zbb_rsq__60->SetBinError(17,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinError(18,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinError(20,2.100641e-05);
   ttH_Zbb_rsq__60->SetBinError(21,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinError(22,1.485377e-05);
   ttH_Zbb_rsq__60->SetBinError(25,1.485377e-05);
   ttH_Zbb_rsq__60->SetEntries(1423);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_rsq__60->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_rsq__60->SetLineColor(ci);
   ttH_Zbb_rsq__60->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__60->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__60->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__60->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_rsq__60->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__60->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__60->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__60->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_rsq__60->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__60->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__60->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__60->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Zbb_rsq","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Zbb_rsq","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Zbb_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Zbb_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Zbb_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Zbb_rsq","t#bar{t}H + jets","f");

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
