void ptgg_HighRes_Inclusive_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:37:33 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-2.390523,762.1687,4.708067);
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
   hs->SetMaximum(8201.465);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.02892727);
   hs_stack_16->SetMaximum(16261.69);
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
   gammaJet_HighRes_ptgg__91->SetBinContent(1,263.7282);
   gammaJet_HighRes_ptgg__91->SetBinContent(2,290.0364);
   gammaJet_HighRes_ptgg__91->SetBinContent(3,271.2081);
   gammaJet_HighRes_ptgg__91->SetBinContent(4,213.8974);
   gammaJet_HighRes_ptgg__91->SetBinContent(5,165.1865);
   gammaJet_HighRes_ptgg__91->SetBinContent(6,127.2939);
   gammaJet_HighRes_ptgg__91->SetBinContent(7,87.63818);
   gammaJet_HighRes_ptgg__91->SetBinContent(8,68.51443);
   gammaJet_HighRes_ptgg__91->SetBinContent(9,48.1906);
   gammaJet_HighRes_ptgg__91->SetBinError(1,5.275515);
   gammaJet_HighRes_ptgg__91->SetBinError(2,5.523698);
   gammaJet_HighRes_ptgg__91->SetBinError(3,5.322941);
   gammaJet_HighRes_ptgg__91->SetBinError(4,4.719938);
   gammaJet_HighRes_ptgg__91->SetBinError(5,4.148226);
   gammaJet_HighRes_ptgg__91->SetBinError(6,3.639952);
   gammaJet_HighRes_ptgg__91->SetBinError(7,3.020219);
   gammaJet_HighRes_ptgg__91->SetBinError(8,2.67112);
   gammaJet_HighRes_ptgg__91->SetBinError(9,2.239613);
   gammaJet_HighRes_ptgg__91->SetEntries(14693);

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
   diphoton_HighRes_ptgg__92->SetBinContent(1,436.2584);
   diphoton_HighRes_ptgg__92->SetBinContent(2,528.7629);
   diphoton_HighRes_ptgg__92->SetBinContent(3,511.2148);
   diphoton_HighRes_ptgg__92->SetBinContent(4,387.2758);
   diphoton_HighRes_ptgg__92->SetBinContent(5,279.605);
   diphoton_HighRes_ptgg__92->SetBinContent(6,203.3444);
   diphoton_HighRes_ptgg__92->SetBinContent(7,142.1603);
   diphoton_HighRes_ptgg__92->SetBinContent(8,99.7833);
   diphoton_HighRes_ptgg__92->SetBinContent(9,89.05357);
   diphoton_HighRes_ptgg__92->SetBinError(1,8.221289);
   diphoton_HighRes_ptgg__92->SetBinError(2,9.139448);
   diphoton_HighRes_ptgg__92->SetBinError(3,9.058706);
   diphoton_HighRes_ptgg__92->SetBinError(4,7.974878);
   diphoton_HighRes_ptgg__92->SetBinError(5,6.837109);
   diphoton_HighRes_ptgg__92->SetBinError(6,5.876986);
   diphoton_HighRes_ptgg__92->SetBinError(7,4.933709);
   diphoton_HighRes_ptgg__92->SetBinError(8,4.150257);
   diphoton_HighRes_ptgg__92->SetBinError(9,3.929029);
   diphoton_HighRes_ptgg__92->SetEntries(18266);

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
   ggH_HighRes_ptgg__93->SetBinContent(1,1.329598);
   ggH_HighRes_ptgg__93->SetBinContent(2,1.197809);
   ggH_HighRes_ptgg__93->SetBinContent(3,1.059495);
   ggH_HighRes_ptgg__93->SetBinContent(4,0.9851218);
   ggH_HighRes_ptgg__93->SetBinContent(5,0.7998429);
   ggH_HighRes_ptgg__93->SetBinContent(6,0.6680599);
   ggH_HighRes_ptgg__93->SetBinContent(7,0.5336674);
   ggH_HighRes_ptgg__93->SetBinContent(8,0.4149298);
   ggH_HighRes_ptgg__93->SetBinContent(9,0.3653469);
   ggH_HighRes_ptgg__93->SetBinError(1,0.04165179);
   ggH_HighRes_ptgg__93->SetBinError(2,0.03953374);
   ggH_HighRes_ptgg__93->SetBinError(3,0.0371813);
   ggH_HighRes_ptgg__93->SetBinError(4,0.03585255);
   ggH_HighRes_ptgg__93->SetBinError(5,0.03230553);
   ggH_HighRes_ptgg__93->SetBinError(6,0.02952443);
   ggH_HighRes_ptgg__93->SetBinError(7,0.02638811);
   ggH_HighRes_ptgg__93->SetBinError(8,0.02326806);
   ggH_HighRes_ptgg__93->SetBinError(9,0.02183361);
   ggH_HighRes_ptgg__93->SetEntries(5636);

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
   vbfH_HighRes_ptgg__94->SetBinContent(1,0.06323571);
   vbfH_HighRes_ptgg__94->SetBinContent(2,0.09364337);
   vbfH_HighRes_ptgg__94->SetBinContent(3,0.1146062);
   vbfH_HighRes_ptgg__94->SetBinContent(4,0.1254331);
   vbfH_HighRes_ptgg__94->SetBinContent(5,0.1309619);
   vbfH_HighRes_ptgg__94->SetBinContent(6,0.1246269);
   vbfH_HighRes_ptgg__94->SetBinContent(7,0.1234751);
   vbfH_HighRes_ptgg__94->SetBinContent(8,0.1220929);
   vbfH_HighRes_ptgg__94->SetBinContent(9,0.1013605);
   vbfH_HighRes_ptgg__94->SetBinError(1,0.002698824);
   vbfH_HighRes_ptgg__94->SetBinError(2,0.003284231);
   vbfH_HighRes_ptgg__94->SetBinError(3,0.003633289);
   vbfH_HighRes_ptgg__94->SetBinError(4,0.003801039);
   vbfH_HighRes_ptgg__94->SetBinError(5,0.003883906);
   vbfH_HighRes_ptgg__94->SetBinError(6,0.003788803);
   vbfH_HighRes_ptgg__94->SetBinError(7,0.003771254);
   vbfH_HighRes_ptgg__94->SetBinError(8,0.003750087);
   vbfH_HighRes_ptgg__94->SetBinError(9,0.00341688);
   vbfH_HighRes_ptgg__94->SetEntries(8677);

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
   vH_HighRes_ptgg__95->SetBinContent(1,0.03695636);
   vH_HighRes_ptgg__95->SetBinContent(2,0.04858076);
   vH_HighRes_ptgg__95->SetBinContent(3,0.0559048);
   vH_HighRes_ptgg__95->SetBinContent(4,0.06114586);
   vH_HighRes_ptgg__95->SetBinContent(5,0.06356481);
   vH_HighRes_ptgg__95->SetBinContent(6,0.05503129);
   vH_HighRes_ptgg__95->SetBinContent(7,0.05321708);
   vH_HighRes_ptgg__95->SetBinContent(8,0.04858076);
   vH_HighRes_ptgg__95->SetBinContent(9,0.04327251);
   vH_HighRes_ptgg__95->SetBinError(1,0.001575831);
   vH_HighRes_ptgg__95->SetBinError(2,0.001806747);
   vH_HighRes_ptgg__95->SetBinError(3,0.001938161);
   vH_HighRes_ptgg__95->SetBinError(4,0.002026977);
   vH_HighRes_ptgg__95->SetBinError(5,0.002066682);
   vH_HighRes_ptgg__95->SetBinError(6,0.001922959);
   vH_HighRes_ptgg__95->SetBinError(7,0.001890997);
   vH_HighRes_ptgg__95->SetBinError(8,0.001806747);
   vH_HighRes_ptgg__95->SetBinError(9,0.001705183);
   vH_HighRes_ptgg__95->SetEntries(6939);

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
   ttH_HighRes_ptgg__96->SetBinContent(1,0.005555321);
   ttH_HighRes_ptgg__96->SetBinContent(2,0.007174386);
   ttH_HighRes_ptgg__96->SetBinContent(3,0.008570642);
   ttH_HighRes_ptgg__96->SetBinContent(4,0.009372748);
   ttH_HighRes_ptgg__96->SetBinContent(5,0.009684678);
   ttH_HighRes_ptgg__96->SetBinContent(6,0.01084327);
   ttH_HighRes_ptgg__96->SetBinContent(7,0.01023427);
   ttH_HighRes_ptgg__96->SetBinContent(8,0.009714385);
   ttH_HighRes_ptgg__96->SetBinContent(9,0.009313333);
   ttH_HighRes_ptgg__96->SetBinError(1,0.0002872583);
   ttH_HighRes_ptgg__96->SetBinError(2,0.0003264453);
   ttH_HighRes_ptgg__96->SetBinError(3,0.0003567999);
   ttH_HighRes_ptgg__96->SetBinError(4,0.0003731226);
   ttH_HighRes_ptgg__96->SetBinError(5,0.0003792806);
   ttH_HighRes_ptgg__96->SetBinError(6,0.0004013269);
   ttH_HighRes_ptgg__96->SetBinError(7,0.0003898939);
   ttH_HighRes_ptgg__96->SetBinError(8,0.0003798619);
   ttH_HighRes_ptgg__96->SetBinError(9,0.000371938);
   ttH_HighRes_ptgg__96->SetEntries(5417);

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
