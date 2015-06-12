void ptgg_LowRes_Inclusive_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:37:35 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-2.377833,762.1687,4.644376);
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
   hs->SetMaximum(7211.109);
   
   TH1F *hs_stack_20 = new TH1F("hs_stack_20","",70,20,720);
   hs_stack_20->SetMinimum(0.02916301);
   hs_stack_20->SetMaximum(14217.43);
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
   gammaJet_LowRes_ptgg__115->SetBinContent(1,466.7297);
   gammaJet_LowRes_ptgg__115->SetBinContent(2,424.7228);
   gammaJet_LowRes_ptgg__115->SetBinContent(3,342.9248);
   gammaJet_LowRes_ptgg__115->SetBinContent(4,252.4834);
   gammaJet_LowRes_ptgg__115->SetBinContent(5,171.4012);
   gammaJet_LowRes_ptgg__115->SetBinContent(6,116.8696);
   gammaJet_LowRes_ptgg__115->SetBinContent(7,81.17294);
   gammaJet_LowRes_ptgg__115->SetBinContent(8,53.59788);
   gammaJet_LowRes_ptgg__115->SetBinContent(9,37.33969);
   gammaJet_LowRes_ptgg__115->SetBinError(1,7.011255);
   gammaJet_LowRes_ptgg__115->SetBinError(2,6.676728);
   gammaJet_LowRes_ptgg__115->SetBinError(3,5.965612);
   gammaJet_LowRes_ptgg__115->SetBinError(4,5.108727);
   gammaJet_LowRes_ptgg__115->SetBinError(5,4.207859);
   gammaJet_LowRes_ptgg__115->SetBinError(6,3.474344);
   gammaJet_LowRes_ptgg__115->SetBinError(7,2.893768);
   gammaJet_LowRes_ptgg__115->SetBinError(8,2.350429);
   gammaJet_LowRes_ptgg__115->SetBinError(9,1.962724);
   gammaJet_LowRes_ptgg__115->SetEntries(18725);

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
   diphoton_LowRes_ptgg__116->SetBinContent(1,249.2698);
   diphoton_LowRes_ptgg__116->SetBinContent(2,295.5188);
   diphoton_LowRes_ptgg__116->SetBinContent(3,273.0443);
   diphoton_LowRes_ptgg__116->SetBinContent(4,205.3091);
   diphoton_LowRes_ptgg__116->SetBinContent(5,149.8012);
   diphoton_LowRes_ptgg__116->SetBinContent(6,107.0223);
   diphoton_LowRes_ptgg__116->SetBinContent(7,85.01019);
   diphoton_LowRes_ptgg__116->SetBinContent(8,52.60658);
   diphoton_LowRes_ptgg__116->SetBinContent(9,42.46474);
   diphoton_LowRes_ptgg__116->SetBinError(1,6.200335);
   diphoton_LowRes_ptgg__116->SetBinError(2,6.82116);
   diphoton_LowRes_ptgg__116->SetBinError(3,6.648637);
   diphoton_LowRes_ptgg__116->SetBinError(4,5.810235);
   diphoton_LowRes_ptgg__116->SetBinError(5,5.018057);
   diphoton_LowRes_ptgg__116->SetBinError(6,4.253841);
   diphoton_LowRes_ptgg__116->SetBinError(7,3.808615);
   diphoton_LowRes_ptgg__116->SetBinError(8,3.003771);
   diphoton_LowRes_ptgg__116->SetBinError(9,2.698025);
   diphoton_LowRes_ptgg__116->SetEntries(9856);

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
   ggH_LowRes_ptgg__117->SetBinContent(1,0.8747727);
   ggH_LowRes_ptgg__117->SetBinContent(2,0.7894932);
   ggH_LowRes_ptgg__117->SetBinContent(3,0.6589897);
   ggH_LowRes_ptgg__117->SetBinContent(4,0.6253948);
   ggH_LowRes_ptgg__117->SetBinContent(5,0.443205);
   ggH_LowRes_ptgg__117->SetBinContent(6,0.3798899);
   ggH_LowRes_ptgg__117->SetBinContent(7,0.3126984);
   ggH_LowRes_ptgg__117->SetBinContent(8,0.237754);
   ggH_LowRes_ptgg__117->SetBinContent(9,0.2132033);
   ggH_LowRes_ptgg__117->SetBinError(1,0.03362048);
   ggH_LowRes_ptgg__117->SetBinError(2,0.03193965);
   ggH_LowRes_ptgg__117->SetBinError(3,0.02918063);
   ggH_LowRes_ptgg__117->SetBinError(4,0.02842708);
   ggH_LowRes_ptgg__117->SetBinError(5,0.02393077);
   ggH_LowRes_ptgg__117->SetBinError(6,0.02215559);
   ggH_LowRes_ptgg__117->SetBinError(7,0.02010098);
   ggH_LowRes_ptgg__117->SetBinError(8,0.01752744);
   ggH_LowRes_ptgg__117->SetBinError(9,0.01659784);
   ggH_LowRes_ptgg__117->SetEntries(3510);

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
   vbfH_LowRes_ptgg__118->SetBinContent(1,0.03285057);
   vbfH_LowRes_ptgg__118->SetBinContent(2,0.04585408);
   vbfH_LowRes_ptgg__118->SetBinContent(3,0.05657627);
   vbfH_LowRes_ptgg__118->SetBinContent(4,0.05919979);
   vbfH_LowRes_ptgg__118->SetBinContent(5,0.06547339);
   vbfH_LowRes_ptgg__118->SetBinContent(6,0.06296397);
   vbfH_LowRes_ptgg__118->SetBinContent(7,0.05726067);
   vbfH_LowRes_ptgg__118->SetBinContent(8,0.05532155);
   vbfH_LowRes_ptgg__118->SetBinContent(9,0.04836353);
   vbfH_LowRes_ptgg__118->SetBinError(1,0.001935743);
   vbfH_LowRes_ptgg__118->SetBinError(2,0.002286991);
   vbfH_LowRes_ptgg__118->SetBinError(3,0.002540342);
   vbfH_LowRes_ptgg__118->SetBinError(4,0.002598574);
   vbfH_LowRes_ptgg__118->SetBinError(5,0.002732797);
   vbfH_LowRes_ptgg__118->SetBinError(6,0.002679914);
   vbfH_LowRes_ptgg__118->SetBinError(7,0.002555661);
   vbfH_LowRes_ptgg__118->SetBinError(8,0.002512015);
   vbfH_LowRes_ptgg__118->SetBinError(9,0.002348737);
   vbfH_LowRes_ptgg__118->SetEntries(4242);

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
   vH_LowRes_ptgg__119->SetBinContent(1,0.02269056);
   vH_LowRes_ptgg__119->SetBinContent(2,0.0294777);
   vH_LowRes_ptgg__119->SetBinContent(3,0.02934462);
   vH_LowRes_ptgg__119->SetBinContent(4,0.03300436);
   vH_LowRes_ptgg__119->SetBinContent(5,0.02788073);
   vH_LowRes_ptgg__119->SetBinContent(6,0.02901192);
   vH_LowRes_ptgg__119->SetBinContent(7,0.02528564);
   vH_LowRes_ptgg__119->SetBinContent(8,0.02155936);
   vH_LowRes_ptgg__119->SetBinContent(9,0.01936352);
   vH_LowRes_ptgg__119->SetBinError(1,0.001228764);
   vH_LowRes_ptgg__119->SetBinError(2,0.001400532);
   vH_LowRes_ptgg__119->SetBinError(3,0.001397367);
   vH_LowRes_ptgg__119->SetBinError(4,0.001481945);
   vH_LowRes_ptgg__119->SetBinError(5,0.001362066);
   vH_LowRes_ptgg__119->SetBinError(6,0.001389423);
   vH_LowRes_ptgg__119->SetBinError(7,0.001297128);
   vH_LowRes_ptgg__119->SetBinError(8,0.001197743);
   vH_LowRes_ptgg__119->SetBinError(9,0.001135109);
   vH_LowRes_ptgg__119->SetEntries(3571);

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
   ttH_LowRes_ptgg__120->SetBinContent(1,0.003118432);
   ttH_LowRes_ptgg__120->SetBinContent(2,0.004427586);
   ttH_LowRes_ptgg__120->SetBinContent(3,0.004839454);
   ttH_LowRes_ptgg__120->SetBinContent(4,0.005589643);
   ttH_LowRes_ptgg__120->SetBinContent(5,0.005957383);
   ttH_LowRes_ptgg__120->SetBinContent(6,0.005280742);
   ttH_LowRes_ptgg__120->SetBinContent(7,0.005148356);
   ttH_LowRes_ptgg__120->SetBinContent(8,0.005369);
   ttH_LowRes_ptgg__120->SetBinContent(9,0.004751197);
   ttH_LowRes_ptgg__120->SetBinError(1,0.0002141745);
   ttH_LowRes_ptgg__120->SetBinError(2,0.0002552014);
   ttH_LowRes_ptgg__120->SetBinError(3,0.0002668073);
   ttH_LowRes_ptgg__120->SetBinError(4,0.0002867422);
   ttH_LowRes_ptgg__120->SetBinError(5,0.0002960243);
   ttH_LowRes_ptgg__120->SetBinError(6,0.0002787064);
   ttH_LowRes_ptgg__120->SetBinError(7,0.0002751907);
   ttH_LowRes_ptgg__120->SetBinError(8,0.0002810258);
   ttH_LowRes_ptgg__120->SetBinError(9,0.0002643632);
   ttH_LowRes_ptgg__120->SetEntries(3024);

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
