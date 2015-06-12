void mr_Hbb_Mr200_Rsq0p02_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:47 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.618632,2147.47,1.173803);
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
   hs->SetMaximum(6.952044);
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5","",160,130,8130);
   hs_stack_5->SetMinimum(0.0520547);
   hs_stack_5->SetMaximum(9.513333);
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
   gammaJet_Hbb_mr__25->SetBinContent(2,0.2303987);
   gammaJet_Hbb_mr__25->SetBinContent(3,0.1151994);
   gammaJet_Hbb_mr__25->SetBinError(2,0.1629165);
   gammaJet_Hbb_mr__25->SetBinError(3,0.1151994);
   gammaJet_Hbb_mr__25->SetEntries(3);

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
   diphoton_Hbb_mr__26->SetBinContent(2,0.3842333);
   diphoton_Hbb_mr__26->SetBinContent(3,0.5763499);
   diphoton_Hbb_mr__26->SetBinContent(4,0.1921166);
   diphoton_Hbb_mr__26->SetBinContent(5,0.1921166);
   diphoton_Hbb_mr__26->SetBinError(2,0.271694);
   diphoton_Hbb_mr__26->SetBinError(3,0.3327558);
   diphoton_Hbb_mr__26->SetBinError(4,0.1921166);
   diphoton_Hbb_mr__26->SetBinError(5,0.1921166);
   diphoton_Hbb_mr__26->SetEntries(7);

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
   ggH_Hbb_mr__27->SetBinContent(2,0.001444156);
   ggH_Hbb_mr__27->SetBinError(2,0.001444156);
   ggH_Hbb_mr__27->SetEntries(1);

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
   vbfH_Hbb_mr__28->SetBinContent(3,0.0001274841);
   vbfH_Hbb_mr__28->SetBinContent(4,0.0001274841);
   vbfH_Hbb_mr__28->SetBinError(3,0.0001274841);
   vbfH_Hbb_mr__28->SetBinError(4,0.0001274841);
   vbfH_Hbb_mr__28->SetEntries(2);

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
   vH_Hbb_mr__29->SetBinContent(2,0.0002974787);
   vH_Hbb_mr__29->SetBinContent(3,0.000223109);
   vH_Hbb_mr__29->SetBinContent(4,0.000223109);
   vH_Hbb_mr__29->SetBinContent(5,7.436967e-05);
   vH_Hbb_mr__29->SetBinError(2,0.0001487393);
   vH_Hbb_mr__29->SetBinError(3,0.000128812);
   vH_Hbb_mr__29->SetBinError(4,0.000128812);
   vH_Hbb_mr__29->SetBinError(5,7.436966e-05);
   vH_Hbb_mr__29->SetEntries(11);

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
   ttH_Hbb_mr__30->SetBinContent(2,0.001134368);
   ttH_Hbb_mr__30->SetBinContent(3,0.003304465);
   ttH_Hbb_mr__30->SetBinContent(4,0.003353786);
   ttH_Hbb_mr__30->SetBinContent(5,0.002942782);
   ttH_Hbb_mr__30->SetBinContent(6,0.002202976);
   ttH_Hbb_mr__30->SetBinContent(7,0.001693332);
   ttH_Hbb_mr__30->SetBinContent(8,0.001167248);
   ttH_Hbb_mr__30->SetBinContent(9,0.001068607);
   ttH_Hbb_mr__30->SetBinContent(10,0.0006904844);
   ttH_Hbb_mr__30->SetBinContent(11,0.0004274426);
   ttH_Hbb_mr__30->SetBinContent(12,0.0004274426);
   ttH_Hbb_mr__30->SetBinContent(13,0.000328802);
   ttH_Hbb_mr__30->SetBinContent(14,0.0002959218);
   ttH_Hbb_mr__30->SetBinContent(15,0.0002301614);
   ttH_Hbb_mr__30->SetBinContent(16,0.0001150807);
   ttH_Hbb_mr__30->SetBinContent(17,4.93203e-05);
   ttH_Hbb_mr__30->SetBinContent(18,4.93203e-05);
   ttH_Hbb_mr__30->SetBinContent(19,4.93203e-05);
   ttH_Hbb_mr__30->SetBinContent(20,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(21,6.57604e-05);
   ttH_Hbb_mr__30->SetBinContent(22,4.93203e-05);
   ttH_Hbb_mr__30->SetBinContent(23,1.64401e-05);
   ttH_Hbb_mr__30->SetBinContent(26,3.28802e-05);
   ttH_Hbb_mr__30->SetBinError(2,0.0001365617);
   ttH_Hbb_mr__30->SetBinError(3,0.0002330787);
   ttH_Hbb_mr__30->SetBinError(4,0.0002348116);
   ttH_Hbb_mr__30->SetBinError(5,0.0002199536);
   ttH_Hbb_mr__30->SetBinError(6,0.0001903079);
   ttH_Hbb_mr__30->SetBinError(7,0.0001668488);
   ttH_Hbb_mr__30->SetBinError(8,0.0001385268);
   ttH_Hbb_mr__30->SetBinError(9,0.0001325443);
   ttH_Hbb_mr__30->SetBinError(10,0.000106544);
   ttH_Hbb_mr__30->SetBinError(11,8.382839e-05);
   ttH_Hbb_mr__30->SetBinError(12,8.382839e-05);
   ttH_Hbb_mr__30->SetBinError(13,7.352237e-05);
   ttH_Hbb_mr__30->SetBinError(14,6.974944e-05);
   ttH_Hbb_mr__30->SetBinError(15,6.151322e-05);
   ttH_Hbb_mr__30->SetBinError(16,4.349642e-05);
   ttH_Hbb_mr__30->SetBinError(17,2.847509e-05);
   ttH_Hbb_mr__30->SetBinError(18,2.847509e-05);
   ttH_Hbb_mr__30->SetBinError(19,2.847509e-05);
   ttH_Hbb_mr__30->SetBinError(20,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(21,3.28802e-05);
   ttH_Hbb_mr__30->SetBinError(22,2.847509e-05);
   ttH_Hbb_mr__30->SetBinError(23,1.64401e-05);
   ttH_Hbb_mr__30->SetBinError(26,2.324981e-05);
   ttH_Hbb_mr__30->SetEntries(1199);

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
