void ptgg_LowRes_Mr350_Rsq0p035_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:19 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.735892,762.1687,1.659878);
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
   hs->SetMaximum(18.2052);
   
   TH1F *hs_stack_20 = new TH1F("hs_stack_20","",70,20,720);
   hs_stack_20->SetMinimum(0.0469462);
   hs_stack_20->SetMaximum(26.43466);
   hs_stack_20->SetDirectory(0);
   hs_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_20->SetLineColor(ci);
   hs_stack_20->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_20->GetXaxis()->SetLabelFont(42);
   hs_stack_20->GetXaxis()->SetLabelSize(0.035);
   hs_stack_20->GetXaxis()->SetTitleSize(0.06);
   hs_stack_20->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_20->GetXaxis()->SetTitleFont(42);
   hs_stack_20->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_20->GetYaxis()->SetLabelFont(42);
   hs_stack_20->GetYaxis()->SetLabelSize(0.035);
   hs_stack_20->GetYaxis()->SetTitleSize(0.06);
   hs_stack_20->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_20->GetYaxis()->SetTitleFont(42);
   hs_stack_20->GetZaxis()->SetLabelFont(42);
   hs_stack_20->GetZaxis()->SetLabelSize(0.035);
   hs_stack_20->GetZaxis()->SetTitleSize(0.035);
   hs_stack_20->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_20);
   
   
   TH1F *gammaJet_LowRes_ptgg__115 = new TH1F("gammaJet_LowRes_ptgg__115","ptgg",70,20,720);
   gammaJet_LowRes_ptgg__115->SetBinContent(4,0.5861021);
   gammaJet_LowRes_ptgg__115->SetBinContent(6,0.1465255);
   gammaJet_LowRes_ptgg__115->SetBinContent(7,0.1465255);
   gammaJet_LowRes_ptgg__115->SetBinContent(8,0.5861021);
   gammaJet_LowRes_ptgg__115->SetBinContent(9,0.1465255);
   gammaJet_LowRes_ptgg__115->SetBinError(4,0.293051);
   gammaJet_LowRes_ptgg__115->SetBinError(6,0.1465255);
   gammaJet_LowRes_ptgg__115->SetBinError(7,0.1465255);
   gammaJet_LowRes_ptgg__115->SetBinError(8,0.293051);
   gammaJet_LowRes_ptgg__115->SetBinError(9,0.1465255);
   gammaJet_LowRes_ptgg__115->SetEntries(11);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_ptgg__115->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_LowRes_ptgg__115->SetLineColor(ci);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetLabelFont(42);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_ptgg__115->GetXaxis()->SetTitleFont(42);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetLabelFont(42);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_ptgg__115->GetYaxis()->SetTitleFont(42);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetLabelFont(42);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetLabelSize(0.035);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetTitleSize(0.035);
   gammaJet_LowRes_ptgg__115->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_LowRes_ptgg,"histo");
   
   TH1F *diphoton_LowRes_ptgg__116 = new TH1F("diphoton_LowRes_ptgg__116","ptgg",70,20,720);
   diphoton_LowRes_ptgg__116->SetBinContent(1,0.2443589);
   diphoton_LowRes_ptgg__116->SetBinContent(2,0.4887178);
   diphoton_LowRes_ptgg__116->SetBinContent(5,0.4887178);
   diphoton_LowRes_ptgg__116->SetBinContent(6,0.4887178);
   diphoton_LowRes_ptgg__116->SetBinContent(8,1.221794);
   diphoton_LowRes_ptgg__116->SetBinContent(9,0.9774355);
   diphoton_LowRes_ptgg__116->SetBinError(1,0.2443589);
   diphoton_LowRes_ptgg__116->SetBinError(2,0.3455757);
   diphoton_LowRes_ptgg__116->SetBinError(5,0.3455757);
   diphoton_LowRes_ptgg__116->SetBinError(6,0.3455757);
   diphoton_LowRes_ptgg__116->SetBinError(8,0.5464031);
   diphoton_LowRes_ptgg__116->SetBinError(9,0.4887178);
   diphoton_LowRes_ptgg__116->SetEntries(16);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_ptgg__116->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_LowRes_ptgg__116->SetLineColor(ci);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetLabelFont(42);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetLabelSize(0.035);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetTitleSize(0.035);
   diphoton_LowRes_ptgg__116->GetXaxis()->SetTitleFont(42);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetLabelFont(42);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetLabelSize(0.035);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetTitleSize(0.035);
   diphoton_LowRes_ptgg__116->GetYaxis()->SetTitleFont(42);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetLabelFont(42);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetLabelSize(0.035);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetTitleSize(0.035);
   diphoton_LowRes_ptgg__116->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_LowRes_ptgg,"histo");
   
   TH1F *ggH_LowRes_ptgg__117 = new TH1F("ggH_LowRes_ptgg__117","ptgg",70,20,720);
   ggH_LowRes_ptgg__117->SetBinContent(2,0.005510597);
   ggH_LowRes_ptgg__117->SetBinContent(3,0.007347463);
   ggH_LowRes_ptgg__117->SetBinContent(4,0.01102119);
   ggH_LowRes_ptgg__117->SetBinContent(5,0.003673732);
   ggH_LowRes_ptgg__117->SetBinContent(6,0.003673732);
   ggH_LowRes_ptgg__117->SetBinContent(7,0.005510597);
   ggH_LowRes_ptgg__117->SetBinContent(8,0.007347463);
   ggH_LowRes_ptgg__117->SetBinContent(9,0.007347463);
   ggH_LowRes_ptgg__117->SetBinError(2,0.003181545);
   ggH_LowRes_ptgg__117->SetBinError(3,0.003673731);
   ggH_LowRes_ptgg__117->SetBinError(4,0.004499384);
   ggH_LowRes_ptgg__117->SetBinError(5,0.00259772);
   ggH_LowRes_ptgg__117->SetBinError(6,0.00259772);
   ggH_LowRes_ptgg__117->SetBinError(7,0.003181545);
   ggH_LowRes_ptgg__117->SetBinError(8,0.003673731);
   ggH_LowRes_ptgg__117->SetBinError(9,0.003673731);
   ggH_LowRes_ptgg__117->SetEntries(28);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_ptgg__117->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_ptgg__117->SetLineColor(ci);
   ggH_LowRes_ptgg__117->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__117->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__117->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__117->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_ptgg__117->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__117->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__117->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__117->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_ptgg__117->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__117->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__117->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__117->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_ptgg,"histo");
   
   TH1F *vbfH_LowRes_ptgg__118 = new TH1F("vbfH_LowRes_ptgg__118","ptgg",70,20,720);
   vbfH_LowRes_ptgg__118->SetBinContent(1,0.0003243017);
   vbfH_LowRes_ptgg__118->SetBinContent(2,0.0004864525);
   vbfH_LowRes_ptgg__118->SetBinContent(3,0.0001621509);
   vbfH_LowRes_ptgg__118->SetBinContent(4,0.0001621509);
   vbfH_LowRes_ptgg__118->SetBinContent(5,0.0006486034);
   vbfH_LowRes_ptgg__118->SetBinContent(6,0.001135056);
   vbfH_LowRes_ptgg__118->SetBinContent(7,0.001297207);
   vbfH_LowRes_ptgg__118->SetBinContent(8,0.00194581);
   vbfH_LowRes_ptgg__118->SetBinContent(9,0.001783659);
   vbfH_LowRes_ptgg__118->SetBinError(1,0.0002293159);
   vbfH_LowRes_ptgg__118->SetBinError(2,0.0002808535);
   vbfH_LowRes_ptgg__118->SetBinError(3,0.0001621509);
   vbfH_LowRes_ptgg__118->SetBinError(4,0.0001621509);
   vbfH_LowRes_ptgg__118->SetBinError(5,0.0003243017);
   vbfH_LowRes_ptgg__118->SetBinError(6,0.0004290108);
   vbfH_LowRes_ptgg__118->SetBinError(7,0.0004586319);
   vbfH_LowRes_ptgg__118->SetBinError(8,0.000561707);
   vbfH_LowRes_ptgg__118->SetBinError(9,0.0005377935);
   vbfH_LowRes_ptgg__118->SetEntries(49);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_ptgg__118->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_ptgg__118->SetLineColor(ci);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__118->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__118->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__118->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_ptgg,"histo");
   
   TH1F *vH_LowRes_ptgg__119 = new TH1F("vH_LowRes_ptgg__119","ptgg",70,20,720);
   vH_LowRes_ptgg__119->SetBinContent(1,9.459299e-05);
   vH_LowRes_ptgg__119->SetBinContent(2,0.000283779);
   vH_LowRes_ptgg__119->SetBinContent(3,0.000283779);
   vH_LowRes_ptgg__119->SetBinContent(4,0.000189186);
   vH_LowRes_ptgg__119->SetBinContent(5,0.000283779);
   vH_LowRes_ptgg__119->SetBinContent(6,0.000567558);
   vH_LowRes_ptgg__119->SetBinContent(7,0.000472965);
   vH_LowRes_ptgg__119->SetBinContent(8,0.0009459301);
   vH_LowRes_ptgg__119->SetBinContent(9,0.0007567441);
   vH_LowRes_ptgg__119->SetBinError(1,9.4593e-05);
   vH_LowRes_ptgg__119->SetBinError(2,0.0001638399);
   vH_LowRes_ptgg__119->SetBinError(3,0.0001638399);
   vH_LowRes_ptgg__119->SetBinError(4,0.0001337747);
   vH_LowRes_ptgg__119->SetBinError(5,0.0001638399);
   vH_LowRes_ptgg__119->SetBinError(6,0.0002317046);
   vH_LowRes_ptgg__119->SetBinError(7,0.0002115164);
   vH_LowRes_ptgg__119->SetBinError(8,0.0002991293);
   vH_LowRes_ptgg__119->SetBinError(9,0.0002675494);
   vH_LowRes_ptgg__119->SetEntries(41);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_ptgg__119->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_ptgg__119->SetLineColor(ci);
   vH_LowRes_ptgg__119->GetXaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__119->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__119->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__119->GetXaxis()->SetTitleFont(42);
   vH_LowRes_ptgg__119->GetYaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__119->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__119->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__119->GetYaxis()->SetTitleFont(42);
   vH_LowRes_ptgg__119->GetZaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__119->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__119->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__119->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_ptgg,"histo");
   
   TH1F *ttH_LowRes_ptgg__120 = new TH1F("ttH_LowRes_ptgg__120","ptgg",70,20,720);
   ttH_LowRes_ptgg__120->SetBinContent(1,0.000669141);
   ttH_LowRes_ptgg__120->SetBinContent(2,0.001463747);
   ttH_LowRes_ptgg__120->SetBinContent(3,0.001191908);
   ttH_LowRes_ptgg__120->SetBinContent(4,0.001756497);
   ttH_LowRes_ptgg__120->SetBinContent(5,0.001923782);
   ttH_LowRes_ptgg__120->SetBinContent(6,0.001714675);
   ttH_LowRes_ptgg__120->SetBinContent(7,0.002007425);
   ttH_LowRes_ptgg__120->SetBinContent(8,0.002383818);
   ttH_LowRes_ptgg__120->SetBinContent(9,0.002091068);
   ttH_LowRes_ptgg__120->SetBinError(1,0.0001182885);
   ttH_LowRes_ptgg__120->SetBinError(2,0.0001749511);
   ttH_LowRes_ptgg__120->SetBinError(3,0.000157872);
   ttH_LowRes_ptgg__120->SetBinError(4,0.0001916493);
   ttH_LowRes_ptgg__120->SetBinError(5,0.000200568);
   ttH_LowRes_ptgg__120->SetBinError(6,0.000189354);
   ttH_LowRes_ptgg__120->SetBinError(7,0.0002048817);
   ttH_LowRes_ptgg__120->SetBinError(8,0.0002232647);
   ttH_LowRes_ptgg__120->SetBinError(9,0.0002091066);
   ttH_LowRes_ptgg__120->SetEntries(727);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_ptgg__120->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_ptgg__120->SetLineColor(ci);
   ttH_LowRes_ptgg__120->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__120->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__120->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__120->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_ptgg__120->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__120->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__120->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__120->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_ptgg__120->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__120->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__120->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__120->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_LowRes_ptgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_LowRes_ptgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_LowRes_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_LowRes_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_LowRes_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_LowRes_ptgg","t#bar{t}H + jets","f");

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
