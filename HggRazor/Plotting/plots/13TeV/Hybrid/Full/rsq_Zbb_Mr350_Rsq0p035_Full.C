void rsq_Zbb_Mr350_Rsq0p035_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:16:18 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-5.046946,1.060241,-1.343242);
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
   hs->SetMaximum(0.02807224);
   
   TH1F *hs_stack_10 = new TH1F("hs_stack_10","",125,0,5);
   hs_stack_10->SetMinimum(0.1380951);
   hs_stack_10->SetMaximum(0.02497462);
   hs_stack_10->SetDirectory(0);
   hs_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_10->SetLineColor(ci);
   hs_stack_10->GetXaxis()->SetTitle("R^{2}");
   hs_stack_10->GetXaxis()->SetRange(1,25);
   hs_stack_10->GetXaxis()->SetLabelFont(42);
   hs_stack_10->GetXaxis()->SetLabelSize(0.035);
   hs_stack_10->GetXaxis()->SetTitleSize(0.06);
   hs_stack_10->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_10->GetXaxis()->SetTitleFont(42);
   hs_stack_10->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_10->GetYaxis()->SetLabelFont(42);
   hs_stack_10->GetYaxis()->SetLabelSize(0.035);
   hs_stack_10->GetYaxis()->SetTitleSize(0.06);
   hs_stack_10->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_10->GetYaxis()->SetTitleFont(42);
   hs_stack_10->GetZaxis()->SetLabelFont(42);
   hs_stack_10->GetZaxis()->SetLabelSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_10);
   
   
   TH1F *gammaJet_Zbb_rsq__55 = new TH1F("gammaJet_Zbb_rsq__55","rsq",125,0,5);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_rsq__55->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_Zbb_rsq__55->SetLineColor(ci);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetLabelFont(42);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_rsq__55->GetXaxis()->SetTitleFont(42);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetLabelFont(42);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_rsq__55->GetYaxis()->SetTitleFont(42);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetLabelFont(42);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetLabelSize(0.035);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetTitleSize(0.035);
   gammaJet_Zbb_rsq__55->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_Zbb_rsq,"histo");
   
   TH1F *diphoton_Zbb_rsq__56 = new TH1F("diphoton_Zbb_rsq__56","rsq",125,0,5);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_rsq__56->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_Zbb_rsq__56->SetLineColor(ci);
   diphoton_Zbb_rsq__56->GetXaxis()->SetLabelFont(42);
   diphoton_Zbb_rsq__56->GetXaxis()->SetLabelSize(0.035);
   diphoton_Zbb_rsq__56->GetXaxis()->SetTitleSize(0.035);
   diphoton_Zbb_rsq__56->GetXaxis()->SetTitleFont(42);
   diphoton_Zbb_rsq__56->GetYaxis()->SetLabelFont(42);
   diphoton_Zbb_rsq__56->GetYaxis()->SetLabelSize(0.035);
   diphoton_Zbb_rsq__56->GetYaxis()->SetTitleSize(0.035);
   diphoton_Zbb_rsq__56->GetYaxis()->SetTitleFont(42);
   diphoton_Zbb_rsq__56->GetZaxis()->SetLabelFont(42);
   diphoton_Zbb_rsq__56->GetZaxis()->SetLabelSize(0.035);
   diphoton_Zbb_rsq__56->GetZaxis()->SetTitleSize(0.035);
   diphoton_Zbb_rsq__56->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_Zbb_rsq,"histo");
   
   TH1F *ggH_Zbb_rsq__57 = new TH1F("ggH_Zbb_rsq__57","rsq",125,0,5);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_rsq__57->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Zbb_rsq__57->SetLineColor(ci);
   ggH_Zbb_rsq__57->GetXaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__57->GetXaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__57->GetXaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__57->GetXaxis()->SetTitleFont(42);
   ggH_Zbb_rsq__57->GetYaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__57->GetYaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__57->GetYaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__57->GetYaxis()->SetTitleFont(42);
   ggH_Zbb_rsq__57->GetZaxis()->SetLabelFont(42);
   ggH_Zbb_rsq__57->GetZaxis()->SetLabelSize(0.035);
   ggH_Zbb_rsq__57->GetZaxis()->SetTitleSize(0.035);
   ggH_Zbb_rsq__57->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Zbb_rsq,"histo");
   
   TH1F *vbfH_Zbb_rsq__58 = new TH1F("vbfH_Zbb_rsq__58","rsq",125,0,5);
   vbfH_Zbb_rsq__58->SetBinContent(2,0.0001274841);
   vbfH_Zbb_rsq__58->SetBinError(2,0.0001274841);
   vbfH_Zbb_rsq__58->SetEntries(1);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_rsq__58->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Zbb_rsq__58->SetLineColor(ci);
   vbfH_Zbb_rsq__58->GetXaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__58->GetXaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__58->GetXaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__58->GetXaxis()->SetTitleFont(42);
   vbfH_Zbb_rsq__58->GetYaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__58->GetYaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__58->GetYaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__58->GetYaxis()->SetTitleFont(42);
   vbfH_Zbb_rsq__58->GetZaxis()->SetLabelFont(42);
   vbfH_Zbb_rsq__58->GetZaxis()->SetLabelSize(0.035);
   vbfH_Zbb_rsq__58->GetZaxis()->SetTitleSize(0.035);
   vbfH_Zbb_rsq__58->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Zbb_rsq,"histo");
   
   TH1F *vH_Zbb_rsq__59 = new TH1F("vH_Zbb_rsq__59","rsq",125,0,5);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_rsq__59->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Zbb_rsq__59->SetLineColor(ci);
   vH_Zbb_rsq__59->GetXaxis()->SetLabelFont(42);
   vH_Zbb_rsq__59->GetXaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__59->GetXaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__59->GetXaxis()->SetTitleFont(42);
   vH_Zbb_rsq__59->GetYaxis()->SetLabelFont(42);
   vH_Zbb_rsq__59->GetYaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__59->GetYaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__59->GetYaxis()->SetTitleFont(42);
   vH_Zbb_rsq__59->GetZaxis()->SetLabelFont(42);
   vH_Zbb_rsq__59->GetZaxis()->SetLabelSize(0.035);
   vH_Zbb_rsq__59->GetZaxis()->SetTitleSize(0.035);
   vH_Zbb_rsq__59->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Zbb_rsq,"histo");
   
   TH1F *ttH_Zbb_rsq__60 = new TH1F("ttH_Zbb_rsq__60","rsq",125,0,5);
   ttH_Zbb_rsq__60->SetBinContent(1,0.0005425233);
   ttH_Zbb_rsq__60->SetBinContent(2,0.00267974);
   ttH_Zbb_rsq__60->SetBinContent(3,0.0007891252);
   ttH_Zbb_rsq__60->SetBinContent(4,0.0005589634);
   ttH_Zbb_rsq__60->SetBinContent(5,0.0002466015);
   ttH_Zbb_rsq__60->SetBinContent(6,9.86406e-05);
   ttH_Zbb_rsq__60->SetBinContent(7,3.28802e-05);
   ttH_Zbb_rsq__60->SetBinContent(8,4.93203e-05);
   ttH_Zbb_rsq__60->SetBinContent(17,1.64401e-05);
   ttH_Zbb_rsq__60->SetBinError(1,9.444119e-05);
   ttH_Zbb_rsq__60->SetBinError(2,0.0002098932);
   ttH_Zbb_rsq__60->SetBinError(3,0.0001139004);
   ttH_Zbb_rsq__60->SetBinError(4,9.586144e-05);
   ttH_Zbb_rsq__60->SetBinError(5,6.367224e-05);
   ttH_Zbb_rsq__60->SetBinError(6,4.026986e-05);
   ttH_Zbb_rsq__60->SetBinError(7,2.324981e-05);
   ttH_Zbb_rsq__60->SetBinError(8,2.847509e-05);
   ttH_Zbb_rsq__60->SetBinError(17,1.64401e-05);
   ttH_Zbb_rsq__60->SetEntries(305);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_rsq__60->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Zbb_rsq__60->SetLineColor(ci);
   ttH_Zbb_rsq__60->GetXaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__60->GetXaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__60->GetXaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__60->GetXaxis()->SetTitleFont(42);
   ttH_Zbb_rsq__60->GetYaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__60->GetYaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__60->GetYaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__60->GetYaxis()->SetTitleFont(42);
   ttH_Zbb_rsq__60->GetZaxis()->SetLabelFont(42);
   ttH_Zbb_rsq__60->GetZaxis()->SetLabelSize(0.035);
   ttH_Zbb_rsq__60->GetZaxis()->SetTitleSize(0.035);
   ttH_Zbb_rsq__60->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Zbb_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_Zbb_rsq","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_Zbb_rsq","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_Zbb_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Zbb_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Zbb_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Zbb_rsq","t#bar{t}H + jets","f");

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
