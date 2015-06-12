void ptgg_HighRes_Mr350_Rsq0p035_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:18 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.764858,762.1687,1.783119);
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
   hs->SetMaximum(23.25259);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.04580357);
   hs_stack_16->SetMaximum(34.25791);
   hs_stack_16->SetDirectory(0);
   hs_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_16->SetLineColor(ci);
   hs_stack_16->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_16->GetXaxis()->SetLabelFont(42);
   hs_stack_16->GetXaxis()->SetLabelSize(0.035);
   hs_stack_16->GetXaxis()->SetTitleSize(0.06);
   hs_stack_16->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_16->GetXaxis()->SetTitleFont(42);
   hs_stack_16->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_16->GetYaxis()->SetLabelFont(42);
   hs_stack_16->GetYaxis()->SetLabelSize(0.035);
   hs_stack_16->GetYaxis()->SetTitleSize(0.06);
   hs_stack_16->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_16->GetYaxis()->SetTitleFont(42);
   hs_stack_16->GetZaxis()->SetLabelFont(42);
   hs_stack_16->GetZaxis()->SetLabelSize(0.035);
   hs_stack_16->GetZaxis()->SetTitleSize(0.035);
   hs_stack_16->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_16);
   
   
   TH1F *gammaJet_HighRes_ptgg__91 = new TH1F("gammaJet_HighRes_ptgg__91","ptgg",70,20,720);
   gammaJet_HighRes_ptgg__91->SetBinContent(2,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinContent(5,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinContent(6,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinContent(7,0.5759968);
   gammaJet_HighRes_ptgg__91->SetBinContent(8,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinContent(9,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(2,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(5,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(6,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(7,0.2575936);
   gammaJet_HighRes_ptgg__91->SetBinError(8,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(9,0.1151994);
   gammaJet_HighRes_ptgg__91->SetEntries(10);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_ptgg__91->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighRes_ptgg__91->SetLineColor(ci);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetLabelFont(42);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_ptgg__91->GetXaxis()->SetTitleFont(42);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetLabelFont(42);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_ptgg__91->GetYaxis()->SetTitleFont(42);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetLabelFont(42);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetLabelSize(0.035);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetTitleSize(0.035);
   gammaJet_HighRes_ptgg__91->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_HighRes_ptgg,"histo");
   
   TH1F *diphoton_HighRes_ptgg__92 = new TH1F("diphoton_HighRes_ptgg__92","ptgg",70,20,720);
   diphoton_HighRes_ptgg__92->SetBinContent(1,0.3842333);
   diphoton_HighRes_ptgg__92->SetBinContent(2,0.9605832);
   diphoton_HighRes_ptgg__92->SetBinContent(3,1.1527);
   diphoton_HighRes_ptgg__92->SetBinContent(4,0.9605832);
   diphoton_HighRes_ptgg__92->SetBinContent(5,1.1527);
   diphoton_HighRes_ptgg__92->SetBinContent(6,1.536933);
   diphoton_HighRes_ptgg__92->SetBinContent(7,1.72905);
   diphoton_HighRes_ptgg__92->SetBinContent(8,1.921167);
   diphoton_HighRes_ptgg__92->SetBinContent(9,0.9605832);
   diphoton_HighRes_ptgg__92->SetBinError(1,0.271694);
   diphoton_HighRes_ptgg__92->SetBinError(2,0.4295859);
   diphoton_HighRes_ptgg__92->SetBinError(3,0.4705877);
   diphoton_HighRes_ptgg__92->SetBinError(4,0.4295859);
   diphoton_HighRes_ptgg__92->SetBinError(5,0.4705877);
   diphoton_HighRes_ptgg__92->SetBinError(6,0.5433879);
   diphoton_HighRes_ptgg__92->SetBinError(7,0.5763499);
   diphoton_HighRes_ptgg__92->SetBinError(8,0.6075261);
   diphoton_HighRes_ptgg__92->SetBinError(9,0.4295859);
   diphoton_HighRes_ptgg__92->SetEntries(56);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_ptgg__92->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighRes_ptgg__92->SetLineColor(ci);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetLabelFont(42);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetLabelSize(0.035);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetTitleSize(0.035);
   diphoton_HighRes_ptgg__92->GetXaxis()->SetTitleFont(42);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetLabelFont(42);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetLabelSize(0.035);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetTitleSize(0.035);
   diphoton_HighRes_ptgg__92->GetYaxis()->SetTitleFont(42);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetLabelFont(42);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetLabelSize(0.035);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetTitleSize(0.035);
   diphoton_HighRes_ptgg__92->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_HighRes_ptgg,"histo");
   
   TH1F *ggH_HighRes_ptgg__93 = new TH1F("ggH_HighRes_ptgg__93","ptgg",70,20,720);
   ggH_HighRes_ptgg__93->SetBinContent(1,0.005776626);
   ggH_HighRes_ptgg__93->SetBinContent(2,0.002888313);
   ggH_HighRes_ptgg__93->SetBinContent(3,0.007220782);
   ggH_HighRes_ptgg__93->SetBinContent(4,0.005776626);
   ggH_HighRes_ptgg__93->SetBinContent(5,0.007220782);
   ggH_HighRes_ptgg__93->SetBinContent(6,0.01155325);
   ggH_HighRes_ptgg__93->SetBinContent(7,0.01444156);
   ggH_HighRes_ptgg__93->SetBinContent(8,0.005776626);
   ggH_HighRes_ptgg__93->SetBinContent(9,0.01588572);
   ggH_HighRes_ptgg__93->SetBinError(1,0.002888313);
   ggH_HighRes_ptgg__93->SetBinError(2,0.002042346);
   ggH_HighRes_ptgg__93->SetBinError(3,0.003229232);
   ggH_HighRes_ptgg__93->SetBinError(4,0.002888313);
   ggH_HighRes_ptgg__93->SetBinError(5,0.003229232);
   ggH_HighRes_ptgg__93->SetBinError(6,0.004084691);
   ggH_HighRes_ptgg__93->SetBinError(7,0.004566824);
   ggH_HighRes_ptgg__93->SetBinError(8,0.002888313);
   ggH_HighRes_ptgg__93->SetBinError(9,0.004789725);
   ggH_HighRes_ptgg__93->SetEntries(53);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_ptgg__93->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighRes_ptgg__93->SetLineColor(ci);
   ggH_HighRes_ptgg__93->GetXaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__93->GetXaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__93->GetXaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__93->GetXaxis()->SetTitleFont(42);
   ggH_HighRes_ptgg__93->GetYaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__93->GetYaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__93->GetYaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__93->GetYaxis()->SetTitleFont(42);
   ggH_HighRes_ptgg__93->GetZaxis()->SetLabelFont(42);
   ggH_HighRes_ptgg__93->GetZaxis()->SetLabelSize(0.035);
   ggH_HighRes_ptgg__93->GetZaxis()->SetTitleSize(0.035);
   ggH_HighRes_ptgg__93->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighRes_ptgg,"histo");
   
   TH1F *vbfH_HighRes_ptgg__94 = new TH1F("vbfH_HighRes_ptgg__94","ptgg",70,20,720);
   vbfH_HighRes_ptgg__94->SetBinContent(1,0.0001274841);
   vbfH_HighRes_ptgg__94->SetBinContent(2,0.0008923888);
   vbfH_HighRes_ptgg__94->SetBinContent(3,0.001019873);
   vbfH_HighRes_ptgg__94->SetBinContent(4,0.0005099364);
   vbfH_HighRes_ptgg__94->SetBinContent(5,0.001147357);
   vbfH_HighRes_ptgg__94->SetBinContent(6,0.001657293);
   vbfH_HighRes_ptgg__94->SetBinContent(7,0.00216723);
   vbfH_HighRes_ptgg__94->SetBinContent(8,0.002422198);
   vbfH_HighRes_ptgg__94->SetBinContent(9,0.002294714);
   vbfH_HighRes_ptgg__94->SetBinError(1,0.0001274841);
   vbfH_HighRes_ptgg__94->SetBinError(2,0.0003372913);
   vbfH_HighRes_ptgg__94->SetBinError(3,0.0003605795);
   vbfH_HighRes_ptgg__94->SetBinError(4,0.0002549682);
   vbfH_HighRes_ptgg__94->SetBinError(5,0.0003824523);
   vbfH_HighRes_ptgg__94->SetBinError(6,0.0004596505);
   vbfH_HighRes_ptgg__94->SetBinError(7,0.0005256305);
   vbfH_HighRes_ptgg__94->SetBinError(8,0.0005556904);
   vbfH_HighRes_ptgg__94->SetBinError(9,0.0005408693);
   vbfH_HighRes_ptgg__94->SetEntries(96);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_ptgg__94->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighRes_ptgg__94->SetLineColor(ci);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__94->GetXaxis()->SetTitleFont(42);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__94->GetYaxis()->SetTitleFont(42);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetLabelFont(42);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighRes_ptgg__94->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighRes_ptgg,"histo");
   
   TH1F *vH_HighRes_ptgg__95 = new TH1F("vH_HighRes_ptgg__95","ptgg",70,20,720);
   vH_HighRes_ptgg__95->SetBinContent(2,0.000223109);
   vH_HighRes_ptgg__95->SetBinContent(3,0.000446218);
   vH_HighRes_ptgg__95->SetBinContent(4,0.000669327);
   vH_HighRes_ptgg__95->SetBinContent(5,0.0005205877);
   vH_HighRes_ptgg__95->SetBinContent(6,0.0007436967);
   vH_HighRes_ptgg__95->SetBinContent(7,0.0007436967);
   vH_HighRes_ptgg__95->SetBinContent(8,0.001115545);
   vH_HighRes_ptgg__95->SetBinContent(9,0.001710502);
   vH_HighRes_ptgg__95->SetBinError(2,0.000128812);
   vH_HighRes_ptgg__95->SetBinError(3,0.0001821677);
   vH_HighRes_ptgg__95->SetBinError(4,0.000223109);
   vH_HighRes_ptgg__95->SetBinError(5,0.0001967636);
   vH_HighRes_ptgg__95->SetBinError(6,0.0002351775);
   vH_HighRes_ptgg__95->SetBinError(7,0.0002351775);
   vH_HighRes_ptgg__95->SetBinError(8,0.0002880325);
   vH_HighRes_ptgg__95->SetBinError(9,0.0003566644);
   vH_HighRes_ptgg__95->SetEntries(83);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_ptgg__95->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighRes_ptgg__95->SetLineColor(ci);
   vH_HighRes_ptgg__95->GetXaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__95->GetXaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__95->GetXaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__95->GetXaxis()->SetTitleFont(42);
   vH_HighRes_ptgg__95->GetYaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__95->GetYaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__95->GetYaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__95->GetYaxis()->SetTitleFont(42);
   vH_HighRes_ptgg__95->GetZaxis()->SetLabelFont(42);
   vH_HighRes_ptgg__95->GetZaxis()->SetLabelSize(0.035);
   vH_HighRes_ptgg__95->GetZaxis()->SetTitleSize(0.035);
   vH_HighRes_ptgg__95->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighRes_ptgg,"histo");
   
   TH1F *ttH_HighRes_ptgg__96 = new TH1F("ttH_HighRes_ptgg__96","ptgg",70,20,720);
   ttH_HighRes_ptgg__96->SetBinContent(1,0.001183688);
   ttH_HighRes_ptgg__96->SetBinContent(2,0.001578251);
   ttH_HighRes_ptgg__96->SetBinContent(3,0.002022135);
   ttH_HighRes_ptgg__96->SetBinContent(4,0.002252297);
   ttH_HighRes_ptgg__96->SetBinContent(5,0.002400258);
   ttH_HighRes_ptgg__96->SetBinContent(6,0.003123624);
   ttH_HighRes_ptgg__96->SetBinContent(7,0.002860582);
   ttH_HighRes_ptgg__96->SetBinContent(8,0.002942782);
   ttH_HighRes_ptgg__96->SetBinContent(9,0.002975662);
   ttH_HighRes_ptgg__96->SetBinError(1,0.0001394989);
   ttH_HighRes_ptgg__96->SetBinError(2,0.0001610794);
   ttH_HighRes_ptgg__96->SetBinError(3,0.0001823295);
   ttH_HighRes_ptgg__96->SetBinError(4,0.0001924264);
   ttH_HighRes_ptgg__96->SetBinError(5,0.0001986465);
   ttH_HighRes_ptgg__96->SetBinError(6,0.0002266111);
   ttH_HighRes_ptgg__96->SetBinError(7,0.0002168598);
   ttH_HighRes_ptgg__96->SetBinError(8,0.0002199536);
   ttH_HighRes_ptgg__96->SetBinError(9,0.0002211789);
   ttH_HighRes_ptgg__96->SetEntries(1298);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_ptgg__96->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighRes_ptgg__96->SetLineColor(ci);
   ttH_HighRes_ptgg__96->GetXaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__96->GetXaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__96->GetXaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__96->GetXaxis()->SetTitleFont(42);
   ttH_HighRes_ptgg__96->GetYaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__96->GetYaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__96->GetYaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__96->GetYaxis()->SetTitleFont(42);
   ttH_HighRes_ptgg__96->GetZaxis()->SetLabelFont(42);
   ttH_HighRes_ptgg__96->GetZaxis()->SetLabelSize(0.035);
   ttH_HighRes_ptgg__96->GetZaxis()->SetTitleSize(0.035);
   ttH_HighRes_ptgg__96->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighRes_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_HighRes_ptgg","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_HighRes_ptgg","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_HighRes_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighRes_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighRes_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighRes_ptgg","t#bar{t}H + jets","f");

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
