void ptgg_HighRes_Mr250_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:15:49 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.892619,762.1687,2.340894);
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
   hs->SetMaximum(70.58614);
   
   TH1F *hs_stack_16 = new TH1F("hs_stack_16","",70,20,720);
   hs_stack_16->SetMinimum(0.041248);
   hs_stack_16->SetMaximum(110.8022);
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
   gammaJet_HighRes_ptgg__91->SetBinContent(1,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinContent(2,0.2303987);
   gammaJet_HighRes_ptgg__91->SetBinContent(3,0.3455981);
   gammaJet_HighRes_ptgg__91->SetBinContent(4,0.9215949);
   gammaJet_HighRes_ptgg__91->SetBinContent(5,0.4607975);
   gammaJet_HighRes_ptgg__91->SetBinContent(6,1.267193);
   gammaJet_HighRes_ptgg__91->SetBinContent(7,1.267193);
   gammaJet_HighRes_ptgg__91->SetBinContent(8,2.073589);
   gammaJet_HighRes_ptgg__91->SetBinContent(9,2.188788);
   gammaJet_HighRes_ptgg__91->SetBinError(1,0.1151994);
   gammaJet_HighRes_ptgg__91->SetBinError(2,0.1629165);
   gammaJet_HighRes_ptgg__91->SetBinError(3,0.1995312);
   gammaJet_HighRes_ptgg__91->SetBinError(4,0.325833);
   gammaJet_HighRes_ptgg__91->SetBinError(5,0.2303987);
   gammaJet_HighRes_ptgg__91->SetBinError(6,0.3820731);
   gammaJet_HighRes_ptgg__91->SetBinError(7,0.3820731);
   gammaJet_HighRes_ptgg__91->SetBinError(8,0.4887495);
   gammaJet_HighRes_ptgg__91->SetBinError(9,0.5021424);
   gammaJet_HighRes_ptgg__91->SetEntries(77);

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
   diphoton_HighRes_ptgg__92->SetBinContent(1,1.344816);
   diphoton_HighRes_ptgg__92->SetBinContent(2,1.1527);
   diphoton_HighRes_ptgg__92->SetBinContent(3,2.113283);
   diphoton_HighRes_ptgg__92->SetBinContent(4,1.72905);
   diphoton_HighRes_ptgg__92->SetBinContent(5,2.497517);
   diphoton_HighRes_ptgg__92->SetBinContent(6,3.073867);
   diphoton_HighRes_ptgg__92->SetBinContent(7,2.88175);
   diphoton_HighRes_ptgg__92->SetBinContent(8,3.650217);
   diphoton_HighRes_ptgg__92->SetBinContent(9,4.802917);
   diphoton_HighRes_ptgg__92->SetBinError(1,0.5082928);
   diphoton_HighRes_ptgg__92->SetBinError(2,0.4705877);
   diphoton_HighRes_ptgg__92->SetBinError(3,0.6371788);
   diphoton_HighRes_ptgg__92->SetBinError(4,0.5763499);
   diphoton_HighRes_ptgg__92->SetBinError(5,0.6926864);
   diphoton_HighRes_ptgg__92->SetBinError(6,0.7684665);
   diphoton_HighRes_ptgg__92->SetBinError(7,0.7440645);
   diphoton_HighRes_ptgg__92->SetBinError(8,0.837417);
   diphoton_HighRes_ptgg__92->SetBinError(9,0.9605832);
   diphoton_HighRes_ptgg__92->SetEntries(121);

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
   ggH_HighRes_ptgg__93->SetBinContent(1,0.02455066);
   ggH_HighRes_ptgg__93->SetBinContent(2,0.01155325);
   ggH_HighRes_ptgg__93->SetBinContent(3,0.01299741);
   ggH_HighRes_ptgg__93->SetBinContent(4,0.007220782);
   ggH_HighRes_ptgg__93->SetBinContent(5,0.02021819);
   ggH_HighRes_ptgg__93->SetBinContent(6,0.02599482);
   ggH_HighRes_ptgg__93->SetBinContent(7,0.03754808);
   ggH_HighRes_ptgg__93->SetBinContent(8,0.04188055);
   ggH_HighRes_ptgg__93->SetBinContent(9,0.04910133);
   ggH_HighRes_ptgg__93->SetBinError(1,0.00595441);
   ggH_HighRes_ptgg__93->SetBinError(2,0.004084691);
   ggH_HighRes_ptgg__93->SetBinError(3,0.004332469);
   ggH_HighRes_ptgg__93->SetBinError(4,0.003229232);
   ggH_HighRes_ptgg__93->SetBinError(5,0.005403539);
   ggH_HighRes_ptgg__93->SetBinError(6,0.006127037);
   ggH_HighRes_ptgg__93->SetBinError(7,0.007363782);
   ggH_HighRes_ptgg__93->SetBinError(8,0.00777702);
   ggH_HighRes_ptgg__93->SetBinError(9,0.008420807);
   ggH_HighRes_ptgg__93->SetEntries(160);

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
   vbfH_HighRes_ptgg__94->SetBinContent(1,0.0002549682);
   vbfH_HighRes_ptgg__94->SetBinContent(2,0.001274841);
   vbfH_HighRes_ptgg__94->SetBinContent(3,0.001274841);
   vbfH_HighRes_ptgg__94->SetBinContent(4,0.002677166);
   vbfH_HighRes_ptgg__94->SetBinContent(5,0.002549682);
   vbfH_HighRes_ptgg__94->SetBinContent(6,0.004079491);
   vbfH_HighRes_ptgg__94->SetBinContent(7,0.00522685);
   vbfH_HighRes_ptgg__94->SetBinContent(8,0.005864271);
   vbfH_HighRes_ptgg__94->SetBinContent(9,0.00994377);
   vbfH_HighRes_ptgg__94->SetBinError(1,0.0001802898);
   vbfH_HighRes_ptgg__94->SetBinError(2,0.0004031402);
   vbfH_HighRes_ptgg__94->SetBinError(3,0.0004031402);
   vbfH_HighRes_ptgg__94->SetBinError(4,0.0005842056);
   vbfH_HighRes_ptgg__94->SetBinError(5,0.0005701263);
   vbfH_HighRes_ptgg__94->SetBinError(6,0.000721159);
   vbfH_HighRes_ptgg__94->SetBinError(7,0.0008162966);
   vbfH_HighRes_ptgg__94->SetBinError(8,0.0008646393);
   vbfH_HighRes_ptgg__94->SetBinError(9,0.001125909);
   vbfH_HighRes_ptgg__94->SetEntries(260);

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
   vH_HighRes_ptgg__95->SetBinContent(1,0.0005205877);
   vH_HighRes_ptgg__95->SetBinContent(2,0.0003718483);
   vH_HighRes_ptgg__95->SetBinContent(3,0.001264284);
   vH_HighRes_ptgg__95->SetBinContent(4,0.001487393);
   vH_HighRes_ptgg__95->SetBinContent(5,0.001561763);
   vH_HighRes_ptgg__95->SetBinContent(6,0.001338654);
   vH_HighRes_ptgg__95->SetBinContent(7,0.002082351);
   vH_HighRes_ptgg__95->SetBinContent(8,0.002677308);
   vH_HighRes_ptgg__95->SetBinContent(9,0.004164699);
   vH_HighRes_ptgg__95->SetBinError(1,0.0001967636);
   vH_HighRes_ptgg__95->SetBinError(2,0.0001662956);
   vH_HighRes_ptgg__95->SetBinError(3,0.000306634);
   vH_HighRes_ptgg__95->SetBinError(4,0.0003325912);
   vH_HighRes_ptgg__95->SetBinError(5,0.0003408046);
   vH_HighRes_ptgg__95->SetBinError(6,0.0003155238);
   vH_HighRes_ptgg__95->SetBinError(7,0.0003935273);
   vH_HighRes_ptgg__95->SetBinError(8,0.000446218);
   vH_HighRes_ptgg__95->SetBinError(9,0.0005565316);
   vH_HighRes_ptgg__95->SetEntries(208);

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
   ttH_HighRes_ptgg__96->SetBinContent(1,0.001660452);
   ttH_HighRes_ptgg__96->SetBinContent(2,0.001857734);
   ttH_HighRes_ptgg__96->SetBinContent(3,0.00267974);
   ttH_HighRes_ptgg__96->SetBinContent(4,0.003090743);
   ttH_HighRes_ptgg__96->SetBinContent(5,0.003320905);
   ttH_HighRes_ptgg__96->SetBinContent(6,0.00391275);
   ttH_HighRes_ptgg__96->SetBinContent(7,0.00387987);
   ttH_HighRes_ptgg__96->SetBinContent(8,0.003616828);
   ttH_HighRes_ptgg__96->SetBinContent(9,0.003699028);
   ttH_HighRes_ptgg__96->SetBinError(1,0.000165221);
   ttH_HighRes_ptgg__96->SetBinError(2,0.0001747607);
   ttH_HighRes_ptgg__96->SetBinError(3,0.0002098932);
   ttH_HighRes_ptgg__96->SetBinError(4,0.0002254153);
   ttH_HighRes_ptgg__96->SetBinError(5,0.0002336577);
   ttH_HighRes_ptgg__96->SetBinError(6,0.0002536255);
   ttH_HighRes_ptgg__96->SetBinError(7,0.0002525576);
   ttH_HighRes_ptgg__96->SetBinError(8,0.0002438461);
   ttH_HighRes_ptgg__96->SetBinError(9,0.0002466015);
   ttH_HighRes_ptgg__96->SetEntries(1686);

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
