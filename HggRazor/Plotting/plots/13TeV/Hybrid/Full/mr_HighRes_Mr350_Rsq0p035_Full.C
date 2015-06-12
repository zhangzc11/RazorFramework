void mr_HighRes_Mr350_Rsq0p035_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:18 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.859467,2147.47,2.193993);
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
   hs->SetMaximum(52.66449);
   
   TH1F *hs_stack_13 = new TH1F("hs_stack_13","",160,130,8130);
   hs_stack_13->SetMinimum(0.04235926);
   hs_stack_13->SetMaximum(81.32996);
   hs_stack_13->SetDirectory(0);
   hs_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_13->SetLineColor(ci);
   hs_stack_13->GetXaxis()->SetTitle("M_{R} (GeV)");
   hs_stack_13->GetXaxis()->SetRange(0,38);
   hs_stack_13->GetXaxis()->SetLabelFont(42);
   hs_stack_13->GetXaxis()->SetLabelSize(0.035);
   hs_stack_13->GetXaxis()->SetTitleSize(0.06);
   hs_stack_13->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_13->GetXaxis()->SetTitleFont(42);
   hs_stack_13->GetYaxis()->SetTitle("events / 50 (GeV)");
   hs_stack_13->GetYaxis()->SetLabelFont(42);
   hs_stack_13->GetYaxis()->SetLabelSize(0.035);
   hs_stack_13->GetYaxis()->SetTitleSize(0.06);
   hs_stack_13->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_13->GetYaxis()->SetTitleFont(42);
   hs_stack_13->GetZaxis()->SetLabelFont(42);
   hs_stack_13->GetZaxis()->SetLabelSize(0.035);
   hs_stack_13->GetZaxis()->SetTitleSize(0.035);
   hs_stack_13->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_13);
   
   
   TH1F *gammaJet_HighRes_mr__73 = new TH1F("gammaJet_HighRes_mr__73","mr",160,130,8130);
   gammaJet_HighRes_mr__73->SetBinContent(5,0.8063955);
   gammaJet_HighRes_mr__73->SetBinContent(6,0.1151994);
   gammaJet_HighRes_mr__73->SetBinContent(7,0.1151994);
   gammaJet_HighRes_mr__73->SetBinContent(9,0.1151994);
   gammaJet_HighRes_mr__73->SetBinError(5,0.3047889);
   gammaJet_HighRes_mr__73->SetBinError(6,0.1151994);
   gammaJet_HighRes_mr__73->SetBinError(7,0.1151994);
   gammaJet_HighRes_mr__73->SetBinError(9,0.1151994);
   gammaJet_HighRes_mr__73->SetEntries(10);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_mr__73->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_mr__73->SetLineColor(ci);
   gammaJet_HighRes_mr__73->GetXaxis()->SetLabelFont(42);
   gammaJet_HighRes_mr__73->GetXaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_mr__73->GetXaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_mr__73->GetXaxis()->SetTitleFont(42);
   gammaJet_HighRes_mr__73->GetYaxis()->SetLabelFont(42);
   gammaJet_HighRes_mr__73->GetYaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_mr__73->GetYaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_mr__73->GetYaxis()->SetTitleFont(42);
   gammaJet_HighRes_mr__73->GetZaxis()->SetLabelFont(42);
   gammaJet_HighRes_mr__73->GetZaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_mr__73->GetZaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_mr__73->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_HighRes_mr,"histo");
   
   TH1F *diphoton_HighRes_mr__74 = new TH1F("diphoton_HighRes_mr__74","mr",160,130,8130);
   diphoton_HighRes_mr__74->SetBinContent(5,4.418684);
   diphoton_HighRes_mr__74->SetBinContent(6,3.4581);
   diphoton_HighRes_mr__74->SetBinContent(7,1.344816);
   diphoton_HighRes_mr__74->SetBinContent(8,0.9605832);
   diphoton_HighRes_mr__74->SetBinContent(9,0.3842333);
   diphoton_HighRes_mr__74->SetBinContent(10,0.1921166);
   diphoton_HighRes_mr__74->SetBinError(5,0.921359);
   diphoton_HighRes_mr__74->SetBinError(6,0.8150819);
   diphoton_HighRes_mr__74->SetBinError(7,0.5082928);
   diphoton_HighRes_mr__74->SetBinError(8,0.4295859);
   diphoton_HighRes_mr__74->SetBinError(9,0.271694);
   diphoton_HighRes_mr__74->SetBinError(10,0.1921166);
   diphoton_HighRes_mr__74->SetEntries(56);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_mr__74->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_mr__74->SetLineColor(ci);
   diphoton_HighRes_mr__74->GetXaxis()->SetLabelFont(42);
   diphoton_HighRes_mr__74->GetXaxis()->SetLabelSize(0.035);
   diphoton_HighRes_mr__74->GetXaxis()->SetTitleSize(0.035);
   diphoton_HighRes_mr__74->GetXaxis()->SetTitleFont(42);
   diphoton_HighRes_mr__74->GetYaxis()->SetLabelFont(42);
   diphoton_HighRes_mr__74->GetYaxis()->SetLabelSize(0.035);
   diphoton_HighRes_mr__74->GetYaxis()->SetTitleSize(0.035);
   diphoton_HighRes_mr__74->GetYaxis()->SetTitleFont(42);
   diphoton_HighRes_mr__74->GetZaxis()->SetLabelFont(42);
   diphoton_HighRes_mr__74->GetZaxis()->SetLabelSize(0.035);
   diphoton_HighRes_mr__74->GetZaxis()->SetTitleSize(0.035);
   diphoton_HighRes_mr__74->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_HighRes_mr,"histo");
   
   TH1F *ggH_HighRes_mr__75 = new TH1F("ggH_HighRes_mr__75","mr",160,130,8130);
   ggH_HighRes_mr__75->SetBinContent(5,0.03177145);
   ggH_HighRes_mr__75->SetBinContent(6,0.03032729);
   ggH_HighRes_mr__75->SetBinContent(7,0.008664938);
   ggH_HighRes_mr__75->SetBinContent(8,0.004332469);
   ggH_HighRes_mr__75->SetBinContent(14,0.001444156);
   ggH_HighRes_mr__75->SetBinError(5,0.006773694);
   ggH_HighRes_mr__75->SetBinError(6,0.006617956);
   ggH_HighRes_mr__75->SetBinError(7,0.003537446);
   ggH_HighRes_mr__75->SetBinError(8,0.002501352);
   ggH_HighRes_mr__75->SetBinError(14,0.001444156);
   ggH_HighRes_mr__75->SetEntries(53);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mr__75->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_mr__75->SetLineColor(ci);
   ggH_HighRes_mr__75->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_mr__75->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_mr__75->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_mr__75->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_mr__75->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_mr__75->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_mr__75->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_mr__75->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_mr__75->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_mr__75->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_mr__75->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_mr__75->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_mr,"histo");
   
   TH1F *vbfH_HighRes_mr__76 = new TH1F("vbfH_HighRes_mr__76","mr",160,130,8130);
   vbfH_HighRes_mr__76->SetBinContent(5,0.004079491);
   vbfH_HighRes_mr__76->SetBinContent(6,0.004334459);
   vbfH_HighRes_mr__76->SetBinContent(7,0.00216723);
   vbfH_HighRes_mr__76->SetBinContent(8,0.001019873);
   vbfH_HighRes_mr__76->SetBinContent(9,0.0003824523);
   vbfH_HighRes_mr__76->SetBinContent(10,0.0002549682);
   vbfH_HighRes_mr__76->SetBinError(5,0.000721159);
   vbfH_HighRes_mr__76->SetBinError(6,0.0007433537);
   vbfH_HighRes_mr__76->SetBinError(7,0.0005256305);
   vbfH_HighRes_mr__76->SetBinError(8,0.0003605795);
   vbfH_HighRes_mr__76->SetBinError(9,0.000220809);
   vbfH_HighRes_mr__76->SetBinError(10,0.0001802898);
   vbfH_HighRes_mr__76->SetEntries(96);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mr__76->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_mr__76->SetLineColor(ci);
   vbfH_HighRes_mr__76->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_mr__76->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mr__76->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mr__76->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_mr__76->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_mr__76->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mr__76->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mr__76->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_mr__76->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_mr__76->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_mr__76->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_mr__76->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_mr,"histo");
   
   TH1F *vH_HighRes_mr__77 = new TH1F("vH_HighRes_mr__77","mr",160,130,8130);
   vH_HighRes_mr__77->SetBinContent(5,0.00223109);
   vH_HighRes_mr__77->SetBinContent(6,0.001487393);
   vH_HighRes_mr__77->SetBinContent(7,0.001264284);
   vH_HighRes_mr__77->SetBinContent(8,0.0005949574);
   vH_HighRes_mr__77->SetBinContent(9,0.0002974787);
   vH_HighRes_mr__77->SetBinContent(10,0.0001487393);
   vH_HighRes_mr__77->SetBinContent(11,7.436967e-05);
   vH_HighRes_mr__77->SetBinContent(12,7.436967e-05);
   vH_HighRes_mr__77->SetBinError(5,0.0004073394);
   vH_HighRes_mr__77->SetBinError(6,0.0003325912);
   vH_HighRes_mr__77->SetBinError(7,0.000306634);
   vH_HighRes_mr__77->SetBinError(8,0.0002103492);
   vH_HighRes_mr__77->SetBinError(9,0.0001487393);
   vH_HighRes_mr__77->SetBinError(10,0.0001051746);
   vH_HighRes_mr__77->SetBinError(11,7.436966e-05);
   vH_HighRes_mr__77->SetBinError(12,7.436966e-05);
   vH_HighRes_mr__77->SetEntries(83);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mr__77->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_mr__77->SetLineColor(ci);
   vH_HighRes_mr__77->GetXaxis()->SetLabelFont(42);
   vH_HighRes_mr__77->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_mr__77->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_mr__77->GetXaxis()->SetTitleFont(42);
   vH_HighRes_mr__77->GetYaxis()->SetLabelFont(42);
   vH_HighRes_mr__77->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_mr__77->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_mr__77->GetYaxis()->SetTitleFont(42);
   vH_HighRes_mr__77->GetZaxis()->SetLabelFont(42);
   vH_HighRes_mr__77->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_mr__77->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_mr__77->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_mr,"histo");
   
   TH1F *ttH_HighRes_mr__78 = new TH1F("ttH_HighRes_mr__78","mr",160,130,8130);
   ttH_HighRes_mr__78->SetBinContent(5,0.003288025);
   ttH_HighRes_mr__78->SetBinContent(6,0.004488155);
   ttH_HighRes_mr__78->SetBinContent(7,0.00389631);
   ttH_HighRes_mr__78->SetBinContent(8,0.002482459);
   ttH_HighRes_mr__78->SetBinContent(9,0.002055015);
   ttH_HighRes_mr__78->SetBinContent(10,0.00136453);
   ttH_HighRes_mr__78->SetBinContent(11,0.0009370864);
   ttH_HighRes_mr__78->SetBinContent(12,0.0005260832);
   ttH_HighRes_mr__78->SetBinContent(13,0.0004603228);
   ttH_HighRes_mr__78->SetBinContent(14,0.0004603228);
   ttH_HighRes_mr__78->SetBinContent(15,0.0002794817);
   ttH_HighRes_mr__78->SetBinContent(16,0.0001808411);
   ttH_HighRes_mr__78->SetBinContent(17,0.000164401);
   ttH_HighRes_mr__78->SetBinContent(18,0.0001315208);
   ttH_HighRes_mr__78->SetBinContent(19,6.57604e-05);
   ttH_HighRes_mr__78->SetBinContent(20,0.0001315208);
   ttH_HighRes_mr__78->SetBinContent(21,0.0001315208);
   ttH_HighRes_mr__78->SetBinContent(22,4.93203e-05);
   ttH_HighRes_mr__78->SetBinContent(23,6.57604e-05);
   ttH_HighRes_mr__78->SetBinContent(24,4.93203e-05);
   ttH_HighRes_mr__78->SetBinContent(25,1.64401e-05);
   ttH_HighRes_mr__78->SetBinContent(26,1.64401e-05);
   ttH_HighRes_mr__78->SetBinContent(27,3.28802e-05);
   ttH_HighRes_mr__78->SetBinContent(28,1.64401e-05);
   ttH_HighRes_mr__78->SetBinContent(29,3.28802e-05);
   ttH_HighRes_mr__78->SetBinContent(38,1.64401e-05);
   ttH_HighRes_mr__78->SetBinError(5,0.0002324981);
   ttH_HighRes_mr__78->SetBinError(6,0.000271635);
   ttH_HighRes_mr__78->SetBinError(7,0.0002530921);
   ttH_HighRes_mr__78->SetBinError(8,0.0002020193);
   ttH_HighRes_mr__78->SetBinError(9,0.0001838059);
   ttH_HighRes_mr__78->SetBinError(10,0.0001497764);
   ttH_HighRes_mr__78->SetBinError(11,0.00012412);
   ttH_HighRes_mr__78->SetBinError(12,9.299925e-05);
   ttH_HighRes_mr__78->SetBinError(13,8.699284e-05);
   ttH_HighRes_mr__78->SetBinError(14,8.699284e-05);
   ttH_HighRes_mr__78->SetBinError(15,6.778427e-05);
   ttH_HighRes_mr__78->SetBinError(16,5.452565e-05);
   ttH_HighRes_mr__78->SetBinError(17,5.198816e-05);
   ttH_HighRes_mr__78->SetBinError(18,4.649963e-05);
   ttH_HighRes_mr__78->SetBinError(19,3.28802e-05);
   ttH_HighRes_mr__78->SetBinError(20,4.649963e-05);
   ttH_HighRes_mr__78->SetBinError(21,4.649963e-05);
   ttH_HighRes_mr__78->SetBinError(22,2.847509e-05);
   ttH_HighRes_mr__78->SetBinError(23,3.28802e-05);
   ttH_HighRes_mr__78->SetBinError(24,2.847509e-05);
   ttH_HighRes_mr__78->SetBinError(25,1.64401e-05);
   ttH_HighRes_mr__78->SetBinError(26,1.64401e-05);
   ttH_HighRes_mr__78->SetBinError(27,2.324981e-05);
   ttH_HighRes_mr__78->SetBinError(28,1.64401e-05);
   ttH_HighRes_mr__78->SetBinError(29,2.324981e-05);
   ttH_HighRes_mr__78->SetBinError(38,1.64401e-05);
   ttH_HighRes_mr__78->SetEntries(1298);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mr__78->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_mr__78->SetLineColor(ci);
   ttH_HighRes_mr__78->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_mr__78->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_mr__78->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_mr__78->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_mr__78->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_mr__78->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_mr__78->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_mr__78->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_mr__78->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_mr__78->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_mr__78->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_mr__78->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_HighRes_mr","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_HighRes_mr","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_HighRes_mr","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_mr","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_mr","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_mr","t#bar{t}H + jets","f");

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
