void mr_Hbb_Mr250_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:15:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.453547,2147.47,0.5264817);
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
   hs->SetMaximum(1.942296);
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5","",160,130,8130);
   hs_stack_5->SetMinimum(0.06082142);
   hs_stack_5->SetMaximum(2.442754);
   hs_stack_5->SetDirectory(0);
   hs_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_5->SetLineColor(ci);
   hs_stack_5->GetXaxis()->SetTitle("M_{R} (GeV)");
   hs_stack_5->GetXaxis()->SetRange(0,38);
   hs_stack_5->GetXaxis()->SetLabelFont(42);
   hs_stack_5->GetXaxis()->SetLabelSize(0.035);
   hs_stack_5->GetXaxis()->SetTitleSize(0.06);
   hs_stack_5->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_5->GetXaxis()->SetTitleFont(42);
   hs_stack_5->GetYaxis()->SetTitle("events / 50 (GeV)");
   hs_stack_5->GetYaxis()->SetLabelFont(42);
   hs_stack_5->GetYaxis()->SetLabelSize(0.035);
   hs_stack_5->GetYaxis()->SetTitleSize(0.06);
   hs_stack_5->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_5->GetYaxis()->SetTitleFont(42);
   hs_stack_5->GetZaxis()->SetLabelFont(42);
   hs_stack_5->GetZaxis()->SetLabelSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_5);
   
   
   TH1F *gammaJet_Hbb_mr__25 = new TH1F("gammaJet_Hbb_mr__25","mr",160,130,8130);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_mr__25->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Hbb_mr__25->SetLineColor(ci);
   gammaJet_Hbb_mr__25->GetXaxis()->SetLabelFont(42);
   gammaJet_Hbb_mr__25->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_mr__25->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_mr__25->GetXaxis()->SetTitleFont(42);
   gammaJet_Hbb_mr__25->GetYaxis()->SetLabelFont(42);
   gammaJet_Hbb_mr__25->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_mr__25->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_mr__25->GetYaxis()->SetTitleFont(42);
   gammaJet_Hbb_mr__25->GetZaxis()->SetLabelFont(42);
   gammaJet_Hbb_mr__25->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Hbb_mr__25->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Hbb_mr__25->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Hbb_mr,"histo");
   
   TH1F *diphoton_Hbb_mr__26 = new TH1F("diphoton_Hbb_mr__26","mr",160,130,8130);
   diphoton_Hbb_mr__26->SetBinContent(3,0.1921166);
   diphoton_Hbb_mr__26->SetBinContent(4,0.1921166);
   diphoton_Hbb_mr__26->SetBinError(3,0.1921166);
   diphoton_Hbb_mr__26->SetBinError(4,0.1921166);
   diphoton_Hbb_mr__26->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_mr__26->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Hbb_mr__26->SetLineColor(ci);
   diphoton_Hbb_mr__26->GetXaxis()->SetLabelFont(42);
   diphoton_Hbb_mr__26->GetXaxis()->SetLabelSize(0.035);
   diphoton_Hbb_mr__26->GetXaxis()->SetTitleSize(0.035);
   diphoton_Hbb_mr__26->GetXaxis()->SetTitleFont(42);
   diphoton_Hbb_mr__26->GetYaxis()->SetLabelFont(42);
   diphoton_Hbb_mr__26->GetYaxis()->SetLabelSize(0.035);
   diphoton_Hbb_mr__26->GetYaxis()->SetTitleSize(0.035);
   diphoton_Hbb_mr__26->GetYaxis()->SetTitleFont(42);
   diphoton_Hbb_mr__26->GetZaxis()->SetLabelFont(42);
   diphoton_Hbb_mr__26->GetZaxis()->SetLabelSize(0.035);
   diphoton_Hbb_mr__26->GetZaxis()->SetTitleSize(0.035);
   diphoton_Hbb_mr__26->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Hbb_mr,"histo");
   
   TH1F *ggH_Hbb_mr__27 = new TH1F("ggH_Hbb_mr__27","mr",160,130,8130);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mr__27->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_mr__27->SetLineColor(ci);
   ggH_Hbb_mr__27->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_mr__27->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_mr__27->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_mr__27->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_mr__27->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_mr__27->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_mr__27->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_mr__27->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_mr__27->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_mr__27->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_mr__27->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_mr__27->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_mr,"histo");
   
   TH1F *vbfH_Hbb_mr__28 = new TH1F("vbfH_Hbb_mr__28","mr",160,130,8130);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mr__28->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_mr__28->SetLineColor(ci);
   vbfH_Hbb_mr__28->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_mr__28->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mr__28->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mr__28->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_mr__28->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_mr__28->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mr__28->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mr__28->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_mr__28->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_mr__28->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_mr__28->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_mr__28->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_mr,"histo");
   
   TH1F *vH_Hbb_mr__29 = new TH1F("vH_Hbb_mr__29","mr",160,130,8130);
   vH_Hbb_mr__29->SetBinContent(3,0.0001487393);
   vH_Hbb_mr__29->SetBinContent(4,7.436967e-05);
   vH_Hbb_mr__29->SetBinContent(5,7.436967e-05);
   vH_Hbb_mr__29->SetBinError(3,0.0001051746);
   vH_Hbb_mr__29->SetBinError(4,7.436966e-05);
   vH_Hbb_mr__29->SetBinError(5,7.436966e-05);
   vH_Hbb_mr__29->SetEntries(4);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mr__29->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_mr__29->SetLineColor(ci);
   vH_Hbb_mr__29->GetXaxis()->SetLabelFont(42);
   vH_Hbb_mr__29->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_mr__29->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_mr__29->GetXaxis()->SetTitleFont(42);
   vH_Hbb_mr__29->GetYaxis()->SetLabelFont(42);
   vH_Hbb_mr__29->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_mr__29->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_mr__29->GetYaxis()->SetTitleFont(42);
   vH_Hbb_mr__29->GetZaxis()->SetLabelFont(42);
   vH_Hbb_mr__29->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_mr__29->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_mr__29->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_mr,"histo");
   
   TH1F *ttH_Hbb_mr__30 = new TH1F("ttH_Hbb_mr__30","mr",160,130,8130);
   ttH_Hbb_mr__30->SetBinContent(3,0.001726213);
   ttH_Hbb_mr__30->SetBinContent(4,0.002038575);
   ttH_Hbb_mr__30->SetBinContent(5,0.002055015);
   ttH_Hbb_mr__30->SetBinContent(6,0.001265889);
   ttH_Hbb_mr__30->SetBinContent(7,0.0009042061);
   ttH_Hbb_mr__30->SetBinContent(8,0.0005589634);
   ttH_Hbb_mr__30->SetBinContent(9,0.0004110025);
   ttH_Hbb_mr__30->SetBinContent(10,0.0001479609);
   ttH_Hbb_mr__30->SetBinContent(11,0.0001479609);
   ttH_Hbb_mr__30->SetBinContent(12,0.0001479609);
   ttH_Hbb_mr__30->SetBinContent(13,8.22005e-05);
   ttH_Hbb_mr__30->SetBinContent(14,6.57604e-05);
   ttH_Hbb_mr__30->SetBinContent(15,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(16,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(19,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(20,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(21,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(26,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(3,0.0001684609);
   ttH_Hbb_mr__30->SetBinError(4,0.0001830692);
   ttH_Hbb_mr__30->SetBinError(5,0.0001838059);
   ttH_Hbb_mr__30->SetBinError(6,0.0001442613);
   ttH_Hbb_mr__30->SetBinError(7,0.000121923);
   ttH_Hbb_mr__30->SetBinError(8,9.586144e-05);
   ttH_Hbb_mr__30->SetBinError(9,8.22005e-05);
   ttH_Hbb_mr__30->SetBinError(10,4.93203e-05);
   ttH_Hbb_mr__30->SetBinError(11,4.93203e-05);
   ttH_Hbb_mr__30->SetBinError(12,4.93203e-05);
   ttH_Hbb_mr__30->SetBinError(13,3.676118e-05);
   ttH_Hbb_mr__30->SetBinError(14,3.28802e-05);
   ttH_Hbb_mr__30->SetBinError(15,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(16,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(19,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(20,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(21,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(26,1.64401e-05);
   ttH_Hbb_mr__30->SetEntries(587);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mr__30->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_mr__30->SetLineColor(ci);
   ttH_Hbb_mr__30->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_mr__30->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_mr__30->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_mr__30->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_mr__30->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_mr__30->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_mr__30->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_mr__30->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_mr__30->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_mr__30->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_mr__30->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_mr__30->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Hbb_mr","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Hbb_mr","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Hbb_mr","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_mr","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_mr","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_mr","t#bar{t}H + jets","f");

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
