void rsq_Hbb_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:14 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-5.358474,1.060241,-1.65477);
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
   hs->SetMaximum(0.01463171);
   
   TH1F *hs_stack_6 = new TH1F("hs_stack_6","",125,0,5);
   hs_stack_6->SetMinimum(0.1716304);
   hs_stack_6->SetMaximum(0.01218907);
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
   ttH_Hbb_rsq__36->SetBinContent(2,0.001463171);
   ttH_Hbb_rsq__36->SetBinContent(3,0.0008220054);
   ttH_Hbb_rsq__36->SetBinContent(4,0.0002630416);
   ttH_Hbb_rsq__36->SetBinContent(5,0.0002794817);
   ttH_Hbb_rsq__36->SetBinContent(6,0.0001315208);
   ttH_Hbb_rsq__36->SetBinContent(7,9.86406e-05);
   ttH_Hbb_rsq__36->SetBinContent(8,3.28802e-05);
   ttH_Hbb_rsq__36->SetBinContent(9,4.93203e-05);
   ttH_Hbb_rsq__36->SetBinContent(11,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinContent(12,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinContent(13,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinContent(14,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinError(2,0.0001550956);
   ttH_Hbb_rsq__36->SetBinError(3,0.0001162491);
   ttH_Hbb_rsq__36->SetBinError(4,6.57604e-05);
   ttH_Hbb_rsq__36->SetBinError(5,6.778427e-05);
   ttH_Hbb_rsq__36->SetBinError(6,4.649963e-05);
   ttH_Hbb_rsq__36->SetBinError(7,4.026986e-05);
   ttH_Hbb_rsq__36->SetBinError(8,2.324981e-05);
   ttH_Hbb_rsq__36->SetBinError(9,2.847509e-05);
   ttH_Hbb_rsq__36->SetBinError(11,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinError(12,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinError(13,1.64401e-05);
   ttH_Hbb_rsq__36->SetBinError(14,1.64401e-05);
   ttH_Hbb_rsq__36->SetEntries(195);

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
