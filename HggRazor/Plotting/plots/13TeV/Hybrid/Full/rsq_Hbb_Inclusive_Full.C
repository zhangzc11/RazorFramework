void rsq_Hbb_Inclusive_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:37:31 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.814513,1.060241,1.997198);
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
   hs->SetMaximum(35.58977);
   
   TH1F *hs_stack_6 = new TH1F("hs_stack_6","",125,0,5);
   hs_stack_6->SetMinimum(0.04394325);
   hs_stack_6->SetMaximum(53.74998);
   hs_stack_6->SetDirectory(0);
   hs_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_6->SetLineColor(ci);
   hs_stack_6->GetXaxis()->SetTitle("R^{2}");
   hs_stack_6->GetXaxis()->SetRange(1,25);
   hs_stack_6->GetXaxis()->SetLabelFont(42);
   hs_stack_6->GetXaxis()->SetLabelSize(0.035);
   hs_stack_6->GetXaxis()->SetTitleSize(0.06);
   hs_stack_6->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_6->GetXaxis()->SetTitleFont(42);
   hs_stack_6->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_6->GetYaxis()->SetLabelFont(42);
   hs_stack_6->GetYaxis()->SetLabelSize(0.035);
   hs_stack_6->GetYaxis()->SetTitleSize(0.06);
   hs_stack_6->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_6->GetYaxis()->SetTitleFont(42);
   hs_stack_6->GetZaxis()->SetLabelFont(42);
   hs_stack_6->GetZaxis()->SetLabelSize(0.035);
   hs_stack_6->GetZaxis()->SetTitleSize(0.035);
   hs_stack_6->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_6);
   
   
   TH1F *gammaJet_Hbb_rsq__31 = new TH1F("gammaJet_Hbb_rsq__31","rsq",125,0,5);
   gammaJet_Hbb_rsq__31->SetBinContent(1,0.9367526);
   gammaJet_Hbb_rsq__31->SetBinContent(2,0.2081673);
   gammaJet_Hbb_rsq__31->SetBinContent(3,0.3398257);
   gammaJet_Hbb_rsq__31->SetBinError(1,0.3122509);
   gammaJet_Hbb_rsq__31->SetBinError(2,0.1471965);
   gammaJet_Hbb_rsq__31->SetBinError(3,0.197486);
   gammaJet_Hbb_rsq__31->SetEntries(14);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_rsq__31->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_rsq__31->SetLineColor(ci);
   gammaJet_Hbb_rsq__31->GetXaxis()->SetLabelFont(42);
   gammaJet_Hbb_rsq__31->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_rsq__31->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_rsq__31->GetXaxis()->SetTitleFont(42);
   gammaJet_Hbb_rsq__31->GetYaxis()->SetLabelFont(42);
   gammaJet_Hbb_rsq__31->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_rsq__31->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_rsq__31->GetYaxis()->SetTitleFont(42);
   gammaJet_Hbb_rsq__31->GetZaxis()->SetLabelFont(42);
   gammaJet_Hbb_rsq__31->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_rsq__31->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_rsq__31->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Hbb_rsq,"histo");
   
   TH1F *diphoton_Hbb_rsq__32 = new TH1F("diphoton_Hbb_rsq__32","rsq",125,0,5);
   diphoton_Hbb_rsq__32->SetBinContent(1,2.603686);
   diphoton_Hbb_rsq__32->SetBinContent(2,1.041474);
   diphoton_Hbb_rsq__32->SetBinContent(3,0.1735791);
   diphoton_Hbb_rsq__32->SetBinContent(7,0.1735791);
   diphoton_Hbb_rsq__32->SetBinError(1,0.6722688);
   diphoton_Hbb_rsq__32->SetBinError(2,0.4251801);
   diphoton_Hbb_rsq__32->SetBinError(3,0.1735791);
   diphoton_Hbb_rsq__32->SetBinError(7,0.1735791);
   diphoton_Hbb_rsq__32->SetEntries(23);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_rsq__32->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_rsq__32->SetLineColor(ci);
   diphoton_Hbb_rsq__32->GetXaxis()->SetLabelFont(42);
   diphoton_Hbb_rsq__32->GetXaxis()->SetLabelSize(0.035);
   diphoton_Hbb_rsq__32->GetXaxis()->SetTitleSize(0.035);
   diphoton_Hbb_rsq__32->GetXaxis()->SetTitleFont(42);
   diphoton_Hbb_rsq__32->GetYaxis()->SetLabelFont(42);
   diphoton_Hbb_rsq__32->GetYaxis()->SetLabelSize(0.035);
   diphoton_Hbb_rsq__32->GetYaxis()->SetTitleSize(0.035);
   diphoton_Hbb_rsq__32->GetYaxis()->SetTitleFont(42);
   diphoton_Hbb_rsq__32->GetZaxis()->SetLabelFont(42);
   diphoton_Hbb_rsq__32->GetZaxis()->SetLabelSize(0.035);
   diphoton_Hbb_rsq__32->GetZaxis()->SetTitleSize(0.035);
   diphoton_Hbb_rsq__32->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Hbb_rsq,"histo");
   
   TH1F *ggH_Hbb_rsq__33 = new TH1F("ggH_Hbb_rsq__33","rsq",125,0,5);
   ggH_Hbb_rsq__33->SetBinContent(1,0.003914424);
   ggH_Hbb_rsq__33->SetBinError(1,0.002259994);
   ggH_Hbb_rsq__33->SetEntries(3);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_rsq__33->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_rsq__33->SetLineColor(ci);
   ggH_Hbb_rsq__33->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_rsq__33->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_rsq__33->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_rsq__33->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_rsq__33->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_rsq__33->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_rsq__33->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_rsq__33->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_rsq__33->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_rsq__33->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_rsq__33->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_rsq__33->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_rsq,"histo");
   
   TH1F *vbfH_Hbb_rsq__34 = new TH1F("vbfH_Hbb_rsq__34","rsq",125,0,5);
   vbfH_Hbb_rsq__34->SetBinContent(1,0.000575915);
   vbfH_Hbb_rsq__34->SetBinContent(2,0.000115183);
   vbfH_Hbb_rsq__34->SetBinContent(3,0.000115183);
   vbfH_Hbb_rsq__34->SetBinContent(7,0.000115183);
   vbfH_Hbb_rsq__34->SetBinError(1,0.000257557);
   vbfH_Hbb_rsq__34->SetBinError(2,0.000115183);
   vbfH_Hbb_rsq__34->SetBinError(3,0.000115183);
   vbfH_Hbb_rsq__34->SetBinError(7,0.000115183);
   vbfH_Hbb_rsq__34->SetEntries(8);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_rsq__34->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_rsq__34->SetLineColor(ci);
   vbfH_Hbb_rsq__34->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_rsq__34->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_rsq__34->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_rsq__34->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_rsq__34->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_rsq__34->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_rsq__34->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_rsq__34->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_rsq__34->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_rsq__34->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_rsq__34->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_rsq__34->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_rsq,"histo");
   
   TH1F *vH_Hbb_rsq__35 = new TH1F("vH_Hbb_rsq__35","rsq",125,0,5);
   vH_Hbb_rsq__35->SetBinContent(1,0.0006047428);
   vH_Hbb_rsq__35->SetBinContent(2,0.0008063238);
   vH_Hbb_rsq__35->SetBinContent(3,0.0002015809);
   vH_Hbb_rsq__35->SetBinError(1,0.0002015809);
   vH_Hbb_rsq__35->SetBinError(2,0.0002327656);
   vH_Hbb_rsq__35->SetBinError(3,0.0001163828);
   vH_Hbb_rsq__35->SetEntries(24);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_rsq__35->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_rsq__35->SetLineColor(ci);
   vH_Hbb_rsq__35->GetXaxis()->SetLabelFont(42);
   vH_Hbb_rsq__35->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_rsq__35->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_rsq__35->GetXaxis()->SetTitleFont(42);
   vH_Hbb_rsq__35->GetYaxis()->SetLabelFont(42);
   vH_Hbb_rsq__35->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_rsq__35->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_rsq__35->GetYaxis()->SetTitleFont(42);
   vH_Hbb_rsq__35->GetZaxis()->SetLabelFont(42);
   vH_Hbb_rsq__35->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_rsq__35->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_rsq__35->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_rsq,"histo");
   
   TH1F *ttH_Hbb_rsq__36 = new TH1F("ttH_Hbb_rsq__36","rsq",125,0,5);
   ttH_Hbb_rsq__36->SetBinContent(1,0.01344269);
   ttH_Hbb_rsq__36->SetBinContent(2,0.005867251);
   ttH_Hbb_rsq__36->SetBinContent(3,0.003238128);
   ttH_Hbb_rsq__36->SetBinContent(4,0.001425964);
   ttH_Hbb_rsq__36->SetBinContent(5,0.001114034);
   ttH_Hbb_rsq__36->SetBinContent(6,0.0006238587);
   ttH_Hbb_rsq__36->SetBinContent(7,0.0003564906);
   ttH_Hbb_rsq__36->SetBinContent(8,0.0002525141);
   ttH_Hbb_rsq__36->SetBinContent(9,0.0003416368);
   ttH_Hbb_rsq__36->SetBinContent(10,2.970755e-05);
   ttH_Hbb_rsq__36->SetBinContent(11,0.0001188302);
   ttH_Hbb_rsq__36->SetBinContent(12,0.0001485377);
   ttH_Hbb_rsq__36->SetBinContent(13,5.94151e-05);
   ttH_Hbb_rsq__36->SetBinContent(14,7.426887e-05);
   ttH_Hbb_rsq__36->SetBinContent(15,7.426887e-05);
   ttH_Hbb_rsq__36->SetBinContent(17,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinContent(18,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinContent(19,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinContent(22,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinError(1,0.0004468493);
   ttH_Hbb_rsq__36->SetBinError(2,0.0002952129);
   ttH_Hbb_rsq__36->SetBinError(3,0.0002193134);
   ttH_Hbb_rsq__36->SetBinError(4,0.0001455367);
   ttH_Hbb_rsq__36->SetBinError(5,0.0001286375);
   ttH_Hbb_rsq__36->SetBinError(6,9.626346e-05);
   ttH_Hbb_rsq__36->SetBinError(7,7.276834e-05);
   ttH_Hbb_rsq__36->SetBinError(8,6.124368e-05);
   ttH_Hbb_rsq__36->SetBinError(9,7.12362e-05);
   ttH_Hbb_rsq__36->SetBinError(10,2.100641e-05);
   ttH_Hbb_rsq__36->SetBinError(11,4.201282e-05);
   ttH_Hbb_rsq__36->SetBinError(12,4.697176e-05);
   ttH_Hbb_rsq__36->SetBinError(13,2.970755e-05);
   ttH_Hbb_rsq__36->SetBinError(14,3.321405e-05);
   ttH_Hbb_rsq__36->SetBinError(15,3.321405e-05);
   ttH_Hbb_rsq__36->SetBinError(17,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinError(18,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinError(19,1.485377e-05);
   ttH_Hbb_rsq__36->SetBinError(22,1.485377e-05);
   ttH_Hbb_rsq__36->SetEntries(1833);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_rsq__36->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_rsq__36->SetLineColor(ci);
   ttH_Hbb_rsq__36->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_rsq__36->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_rsq__36->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_rsq__36->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_rsq__36->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_rsq__36->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_rsq__36->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_rsq__36->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_rsq__36->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_rsq__36->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_rsq__36->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_rsq__36->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Hbb_rsq","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Hbb_rsq","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Hbb_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_rsq","t#bar{t}H + jets","f");

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
