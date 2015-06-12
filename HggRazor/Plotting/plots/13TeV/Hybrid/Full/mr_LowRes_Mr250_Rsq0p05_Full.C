void mr_LowRes_Mr250_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:15:50 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.976661,2147.47,2.719821);
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
   hs->SetMaximum(150.4599);
   
   TH1F *hs_stack_17 = new TH1F("hs_stack_17","",160,130,8130);
   hs_stack_17->SetMinimum(0.03862927);
   hs_stack_17->SetMaximum(246.0748);
   hs_stack_17->SetDirectory(0);
   hs_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_17->SetLineColor(ci);
   hs_stack_17->GetXaxis()->SetTitle("M_{R} (GeV)");
   hs_stack_17->GetXaxis()->SetRange(0,38);
   hs_stack_17->GetXaxis()->SetLabelFont(42);
   hs_stack_17->GetXaxis()->SetLabelSize(0.035);
   hs_stack_17->GetXaxis()->SetTitleSize(0.06);
   hs_stack_17->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_17->GetXaxis()->SetTitleFont(42);
   hs_stack_17->GetYaxis()->SetTitle("events / 50 (GeV)");
   hs_stack_17->GetYaxis()->SetLabelFont(42);
   hs_stack_17->GetYaxis()->SetLabelSize(0.035);
   hs_stack_17->GetYaxis()->SetTitleSize(0.06);
   hs_stack_17->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_17->GetYaxis()->SetTitleFont(42);
   hs_stack_17->GetZaxis()->SetLabelFont(42);
   hs_stack_17->GetZaxis()->SetLabelSize(0.035);
   hs_stack_17->GetZaxis()->SetTitleSize(0.035);
   hs_stack_17->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_17);
   
   
   TH1F *gammaJet_LowRes_mr__97 = new TH1F("gammaJet_LowRes_mr__97","mr",160,130,8130);
   gammaJet_LowRes_mr__97->SetBinContent(3,5.421443);
   gammaJet_LowRes_mr__97->SetBinContent(4,2.783985);
   gammaJet_LowRes_mr__97->SetBinContent(5,0.4395766);
   gammaJet_LowRes_mr__97->SetBinContent(6,0.293051);
   gammaJet_LowRes_mr__97->SetBinError(3,0.8912799);
   gammaJet_LowRes_mr__97->SetBinError(4,0.6386899);
   gammaJet_LowRes_mr__97->SetBinError(5,0.2537896);
   gammaJet_LowRes_mr__97->SetBinError(6,0.2072184);
   gammaJet_LowRes_mr__97->SetEntries(61);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_mr__97->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_mr__97->SetLineColor(ci);
   gammaJet_LowRes_mr__97->GetXaxis()->SetLabelFont(42);
   gammaJet_LowRes_mr__97->GetXaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_mr__97->GetXaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_mr__97->GetXaxis()->SetTitleFont(42);
   gammaJet_LowRes_mr__97->GetYaxis()->SetLabelFont(42);
   gammaJet_LowRes_mr__97->GetYaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_mr__97->GetYaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_mr__97->GetYaxis()->SetTitleFont(42);
   gammaJet_LowRes_mr__97->GetZaxis()->SetLabelFont(42);
   gammaJet_LowRes_mr__97->GetZaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_mr__97->GetZaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_mr__97->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_LowRes_mr,"histo");
   
   TH1F *diphoton_LowRes_mr__98 = new TH1F("diphoton_LowRes_mr__98","mr",160,130,8130);
   diphoton_LowRes_mr__98->SetBinContent(3,9.529994);
   diphoton_LowRes_mr__98->SetBinContent(4,6.108974);
   diphoton_LowRes_mr__98->SetBinContent(5,1.221794);
   diphoton_LowRes_mr__98->SetBinError(3,1.526021);
   diphoton_LowRes_mr__98->SetBinError(4,1.221794);
   diphoton_LowRes_mr__98->SetBinError(5,0.5464031);
   diphoton_LowRes_mr__98->SetEntries(69);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_mr__98->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_mr__98->SetLineColor(ci);
   diphoton_LowRes_mr__98->GetXaxis()->SetLabelFont(42);
   diphoton_LowRes_mr__98->GetXaxis()->SetLabelSize(0.035);
   diphoton_LowRes_mr__98->GetXaxis()->SetTitleSize(0.035);
   diphoton_LowRes_mr__98->GetXaxis()->SetTitleFont(42);
   diphoton_LowRes_mr__98->GetYaxis()->SetLabelFont(42);
   diphoton_LowRes_mr__98->GetYaxis()->SetLabelSize(0.035);
   diphoton_LowRes_mr__98->GetYaxis()->SetTitleSize(0.035);
   diphoton_LowRes_mr__98->GetYaxis()->SetTitleFont(42);
   diphoton_LowRes_mr__98->GetZaxis()->SetLabelFont(42);
   diphoton_LowRes_mr__98->GetZaxis()->SetLabelSize(0.035);
   diphoton_LowRes_mr__98->GetZaxis()->SetTitleSize(0.035);
   diphoton_LowRes_mr__98->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_LowRes_mr,"histo");
   
   TH1F *ggH_LowRes_mr__99 = new TH1F("ggH_LowRes_mr__99","mr",160,130,8130);
   ggH_LowRes_mr__99->SetBinContent(3,0.07898525);
   ggH_LowRes_mr__99->SetBinContent(4,0.06245345);
   ggH_LowRes_mr__99->SetBinContent(5,0.01285806);
   ggH_LowRes_mr__99->SetBinContent(6,0.007347463);
   ggH_LowRes_mr__99->SetBinContent(7,0.001836866);
   ggH_LowRes_mr__99->SetBinContent(9,0.001836866);
   ggH_LowRes_mr__99->SetBinError(3,0.01204513);
   ggH_LowRes_mr__99->SetBinError(4,0.01071068);
   ggH_LowRes_mr__99->SetBinError(5,0.00485989);
   ggH_LowRes_mr__99->SetBinError(6,0.003673731);
   ggH_LowRes_mr__99->SetBinError(7,0.001836866);
   ggH_LowRes_mr__99->SetBinError(9,0.001836866);
   ggH_LowRes_mr__99->SetEntries(90);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mr__99->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mr__99->SetLineColor(ci);
   ggH_LowRes_mr__99->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_mr__99->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_mr__99->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_mr__99->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_mr__99->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_mr__99->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_mr__99->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_mr__99->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_mr__99->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_mr__99->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_mr__99->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_mr__99->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_mr,"histo");
   
   TH1F *vbfH_LowRes_mr__100 = new TH1F("vbfH_LowRes_mr__100","mr",160,130,8130);
   vbfH_LowRes_mr__100->SetBinContent(3,0.008918302);
   vbfH_LowRes_mr__100->SetBinContent(4,0.00713464);
   vbfH_LowRes_mr__100->SetBinContent(5,0.002594413);
   vbfH_LowRes_mr__100->SetBinContent(6,0.001297207);
   vbfH_LowRes_mr__100->SetBinContent(7,0.0004864525);
   vbfH_LowRes_mr__100->SetBinContent(8,0.0001621509);
   vbfH_LowRes_mr__100->SetBinError(3,0.001202543);
   vbfH_LowRes_mr__100->SetBinError(4,0.001075587);
   vbfH_LowRes_mr__100->SetBinError(5,0.0006486034);
   vbfH_LowRes_mr__100->SetBinError(6,0.0004586319);
   vbfH_LowRes_mr__100->SetBinError(7,0.0002808535);
   vbfH_LowRes_mr__100->SetBinError(8,0.0001621509);
   vbfH_LowRes_mr__100->SetEntries(127);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mr__100->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mr__100->SetLineColor(ci);
   vbfH_LowRes_mr__100->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_mr__100->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mr__100->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mr__100->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_mr__100->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_mr__100->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mr__100->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mr__100->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_mr__100->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_mr__100->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mr__100->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mr__100->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_mr,"histo");
   
   TH1F *vH_LowRes_mr__101 = new TH1F("vH_LowRes_mr__101","mr",160,130,8130);
   vH_LowRes_mr__101->SetBinContent(3,0.003783719);
   vH_LowRes_mr__101->SetBinContent(4,0.004067497);
   vH_LowRes_mr__101->SetBinContent(5,0.00189186);
   vH_LowRes_mr__101->SetBinContent(6,0.0009459301);
   vH_LowRes_mr__101->SetBinContent(7,9.459299e-05);
   vH_LowRes_mr__101->SetBinContent(8,0.000567558);
   vH_LowRes_mr__101->SetBinContent(9,0.000189186);
   vH_LowRes_mr__101->SetBinContent(11,9.459299e-05);
   vH_LowRes_mr__101->SetBinError(3,0.0005982586);
   vH_LowRes_mr__101->SetBinError(4,0.0006202878);
   vH_LowRes_mr__101->SetBinError(5,0.0004230327);
   vH_LowRes_mr__101->SetBinError(6,0.0002991293);
   vH_LowRes_mr__101->SetBinError(7,9.4593e-05);
   vH_LowRes_mr__101->SetBinError(8,0.0002317046);
   vH_LowRes_mr__101->SetBinError(9,0.0001337747);
   vH_LowRes_mr__101->SetBinError(11,9.4593e-05);
   vH_LowRes_mr__101->SetEntries(123);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mr__101->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mr__101->SetLineColor(ci);
   vH_LowRes_mr__101->GetXaxis()->SetLabelFont(42);
   vH_LowRes_mr__101->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_mr__101->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_mr__101->GetXaxis()->SetTitleFont(42);
   vH_LowRes_mr__101->GetYaxis()->SetLabelFont(42);
   vH_LowRes_mr__101->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_mr__101->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_mr__101->GetYaxis()->SetTitleFont(42);
   vH_LowRes_mr__101->GetZaxis()->SetLabelFont(42);
   vH_LowRes_mr__101->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_mr__101->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_mr__101->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_mr,"histo");
   
   TH1F *ttH_LowRes_mr__102 = new TH1F("ttH_LowRes_mr__102","mr",160,130,8130);
   ttH_LowRes_mr__102->SetBinContent(3,0.002864764);
   ttH_LowRes_mr__102->SetBinContent(4,0.004600351);
   ttH_LowRes_mr__102->SetBinContent(5,0.003115692);
   ttH_LowRes_mr__102->SetBinContent(6,0.002383818);
   ttH_LowRes_mr__102->SetBinContent(7,0.001944693);
   ttH_LowRes_mr__102->SetBinContent(8,0.001045533);
   ttH_LowRes_mr__102->SetBinContent(9,0.001317372);
   ttH_LowRes_mr__102->SetBinContent(10,0.0006482303);
   ttH_LowRes_mr__102->SetBinContent(11,0.000543677);
   ttH_LowRes_mr__102->SetBinContent(12,0.0002300172);
   ttH_LowRes_mr__102->SetBinContent(13,0.0002300172);
   ttH_LowRes_mr__102->SetBinContent(14,0.0001463746);
   ttH_LowRes_mr__102->SetBinContent(15,0.0002300172);
   ttH_LowRes_mr__102->SetBinContent(16,0.0001045533);
   ttH_LowRes_mr__102->SetBinContent(18,4.182131e-05);
   ttH_LowRes_mr__102->SetBinContent(19,4.182131e-05);
   ttH_LowRes_mr__102->SetBinContent(20,6.273197e-05);
   ttH_LowRes_mr__102->SetBinContent(21,2.091065e-05);
   ttH_LowRes_mr__102->SetBinContent(22,2.091065e-05);
   ttH_LowRes_mr__102->SetBinContent(24,2.091065e-05);
   ttH_LowRes_mr__102->SetBinContent(31,2.091065e-05);
   ttH_LowRes_mr__102->SetBinError(3,0.0002447529);
   ttH_LowRes_mr__102->SetBinError(4,0.0003101551);
   ttH_LowRes_mr__102->SetBinError(5,0.0002552471);
   ttH_LowRes_mr__102->SetBinError(6,0.0002232647);
   ttH_LowRes_mr__102->SetBinError(7,0.0002016551);
   ttH_LowRes_mr__102->SetBinError(8,0.0001478607);
   ttH_LowRes_mr__102->SetBinError(9,0.0001659732);
   ttH_LowRes_mr__102->SetBinError(10,0.0001164256);
   ttH_LowRes_mr__102->SetBinError(11,0.0001066238);
   ttH_LowRes_mr__102->SetBinError(12,6.93528e-05);
   ttH_LowRes_mr__102->SetBinError(13,6.93528e-05);
   ttH_LowRes_mr__102->SetBinError(14,5.532439e-05);
   ttH_LowRes_mr__102->SetBinError(15,6.93528e-05);
   ttH_LowRes_mr__102->SetBinError(16,4.675765e-05);
   ttH_LowRes_mr__102->SetBinError(18,2.957213e-05);
   ttH_LowRes_mr__102->SetBinError(19,2.957213e-05);
   ttH_LowRes_mr__102->SetBinError(20,3.621832e-05);
   ttH_LowRes_mr__102->SetBinError(21,2.091066e-05);
   ttH_LowRes_mr__102->SetBinError(22,2.091066e-05);
   ttH_LowRes_mr__102->SetBinError(24,2.091066e-05);
   ttH_LowRes_mr__102->SetBinError(31,2.091066e-05);
   ttH_LowRes_mr__102->SetEntries(939);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mr__102->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mr__102->SetLineColor(ci);
   ttH_LowRes_mr__102->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_mr__102->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_mr__102->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_mr__102->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_mr__102->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_mr__102->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_mr__102->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_mr__102->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_mr__102->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_mr__102->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_mr__102->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_mr__102->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_LowRes_mr","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_LowRes_mr","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_LowRes_mr","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_LowRes_mr","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_LowRes_mr","VH + jets","f");

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
   entry=leg->AddEntry("ttH_LowRes_mr","t#bar{t}H + jets","f");

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
