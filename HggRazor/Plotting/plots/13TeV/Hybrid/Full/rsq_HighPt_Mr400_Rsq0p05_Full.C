void rsq_HighPt_Mr400_Rsq0p05_Full()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:14:14 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.882998,1.060241,2.29811);
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
   hs->SetMaximum(64.81262);
   
   TH1F *hs_stack_2 = new TH1F("hs_stack_2","",125,0,5);
   hs_stack_2->SetMinimum(0.0415657);
   hs_stack_2->SetMaximum(101.2588);
   hs_stack_2->SetDirectory(0);
   hs_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_2->SetLineColor(ci);
   hs_stack_2->GetXaxis()->SetTitle("R^{2}");
   hs_stack_2->GetXaxis()->SetRange(1,25);
   hs_stack_2->GetXaxis()->SetLabelFont(42);
   hs_stack_2->GetXaxis()->SetLabelSize(0.035);
   hs_stack_2->GetXaxis()->SetTitleSize(0.06);
   hs_stack_2->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_2->GetXaxis()->SetTitleFont(42);
   hs_stack_2->GetYaxis()->SetTitle("events / 0.04");
   hs_stack_2->GetYaxis()->SetLabelFont(42);
   hs_stack_2->GetYaxis()->SetLabelSize(0.035);
   hs_stack_2->GetYaxis()->SetTitleSize(0.06);
   hs_stack_2->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_2->GetYaxis()->SetTitleFont(42);
   hs_stack_2->GetZaxis()->SetLabelFont(42);
   hs_stack_2->GetZaxis()->SetLabelSize(0.035);
   hs_stack_2->GetZaxis()->SetTitleSize(0.035);
   hs_stack_2->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_2);
   
   
   TH1F *gammaJet_HighPt_rsq__7 = new TH1F("gammaJet_HighPt_rsq__7","rsq",125,0,5);
   gammaJet_HighPt_rsq__7->SetBinContent(2,2.220114);
   gammaJet_HighPt_rsq__7->SetBinContent(3,0.170778);
   gammaJet_HighPt_rsq__7->SetBinError(2,0.6157489);
   gammaJet_HighPt_rsq__7->SetBinError(3,0.170778);
   gammaJet_HighPt_rsq__7->SetEntries(14);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighPt_rsq__7->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   gammaJet_HighPt_rsq__7->SetLineColor(ci);
   gammaJet_HighPt_rsq__7->GetXaxis()->SetLabelFont(42);
   gammaJet_HighPt_rsq__7->GetXaxis()->SetLabelSize(0.035);
   gammaJet_HighPt_rsq__7->GetXaxis()->SetTitleSize(0.035);
   gammaJet_HighPt_rsq__7->GetXaxis()->SetTitleFont(42);
   gammaJet_HighPt_rsq__7->GetYaxis()->SetLabelFont(42);
   gammaJet_HighPt_rsq__7->GetYaxis()->SetLabelSize(0.035);
   gammaJet_HighPt_rsq__7->GetYaxis()->SetTitleSize(0.035);
   gammaJet_HighPt_rsq__7->GetYaxis()->SetTitleFont(42);
   gammaJet_HighPt_rsq__7->GetZaxis()->SetLabelFont(42);
   gammaJet_HighPt_rsq__7->GetZaxis()->SetLabelSize(0.035);
   gammaJet_HighPt_rsq__7->GetZaxis()->SetTitleSize(0.035);
   gammaJet_HighPt_rsq__7->GetZaxis()->SetTitleFont(42);
   hs->Add(gammaJet_HighPt_rsq,"histo");
   
   TH1F *diphoton_HighPt_rsq__8 = new TH1F("diphoton_HighPt_rsq__8","rsq",125,0,5);
   diphoton_HighPt_rsq__8->SetBinContent(2,3.987271);
   diphoton_HighPt_rsq__8->SetBinContent(3,0.8544135);
   diphoton_HighPt_rsq__8->SetBinError(2,1.065641);
   diphoton_HighPt_rsq__8->SetBinError(3,0.4932959);
   diphoton_HighPt_rsq__8->SetEntries(18);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighPt_rsq__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   diphoton_HighPt_rsq__8->SetLineColor(ci);
   diphoton_HighPt_rsq__8->GetXaxis()->SetLabelFont(42);
   diphoton_HighPt_rsq__8->GetXaxis()->SetLabelSize(0.035);
   diphoton_HighPt_rsq__8->GetXaxis()->SetTitleSize(0.035);
   diphoton_HighPt_rsq__8->GetXaxis()->SetTitleFont(42);
   diphoton_HighPt_rsq__8->GetYaxis()->SetLabelFont(42);
   diphoton_HighPt_rsq__8->GetYaxis()->SetLabelSize(0.035);
   diphoton_HighPt_rsq__8->GetYaxis()->SetTitleSize(0.035);
   diphoton_HighPt_rsq__8->GetYaxis()->SetTitleFont(42);
   diphoton_HighPt_rsq__8->GetZaxis()->SetLabelFont(42);
   diphoton_HighPt_rsq__8->GetZaxis()->SetLabelSize(0.035);
   diphoton_HighPt_rsq__8->GetZaxis()->SetTitleSize(0.035);
   diphoton_HighPt_rsq__8->GetZaxis()->SetTitleFont(42);
   hs->Add(diphoton_HighPt_rsq,"histo");
   
   TH1F *ggH_HighPt_rsq__9 = new TH1F("ggH_HighPt_rsq__9","rsq",125,0,5);
   ggH_HighPt_rsq__9->SetBinContent(2,0.1841171);
   ggH_HighPt_rsq__9->SetBinContent(3,0.04709978);
   ggH_HighPt_rsq__9->SetBinContent(4,0.006422696);
   ggH_HighPt_rsq__9->SetBinError(2,0.01985388);
   ggH_HighPt_rsq__9->SetBinError(3,0.0100417);
   ggH_HighPt_rsq__9->SetBinError(4,0.003708145);
   ggH_HighPt_rsq__9->SetEntries(111);

   ci = TColor::GetColor("#00cc00");
   ggH_HighPt_rsq__9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighPt_rsq__9->SetLineColor(ci);
   ggH_HighPt_rsq__9->GetXaxis()->SetLabelFont(42);
   ggH_HighPt_rsq__9->GetXaxis()->SetLabelSize(0.035);
   ggH_HighPt_rsq__9->GetXaxis()->SetTitleSize(0.035);
   ggH_HighPt_rsq__9->GetXaxis()->SetTitleFont(42);
   ggH_HighPt_rsq__9->GetYaxis()->SetLabelFont(42);
   ggH_HighPt_rsq__9->GetYaxis()->SetLabelSize(0.035);
   ggH_HighPt_rsq__9->GetYaxis()->SetTitleSize(0.035);
   ggH_HighPt_rsq__9->GetYaxis()->SetTitleFont(42);
   ggH_HighPt_rsq__9->GetZaxis()->SetLabelFont(42);
   ggH_HighPt_rsq__9->GetZaxis()->SetLabelSize(0.035);
   ggH_HighPt_rsq__9->GetZaxis()->SetTitleSize(0.035);
   ggH_HighPt_rsq__9->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighPt_rsq,"histo");
   
   TH1F *vbfH_HighPt_rsq__10 = new TH1F("vbfH_HighPt_rsq__10","rsq",125,0,5);
   vbfH_HighPt_rsq__10->SetBinContent(2,0.03099431);
   vbfH_HighPt_rsq__10->SetBinContent(3,0.008693526);
   vbfH_HighPt_rsq__10->SetBinContent(4,0.0007559584);
   vbfH_HighPt_rsq__10->SetBinContent(5,0.0001889896);
   vbfH_HighPt_rsq__10->SetBinError(2,0.002420248);
   vbfH_HighPt_rsq__10->SetBinError(3,0.00128179);
   vbfH_HighPt_rsq__10->SetBinError(4,0.0003779792);
   vbfH_HighPt_rsq__10->SetBinError(5,0.0001889896);
   vbfH_HighPt_rsq__10->SetEntries(215);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighPt_rsq__10->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighPt_rsq__10->SetLineColor(ci);
   vbfH_HighPt_rsq__10->GetXaxis()->SetLabelFont(42);
   vbfH_HighPt_rsq__10->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighPt_rsq__10->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighPt_rsq__10->GetXaxis()->SetTitleFont(42);
   vbfH_HighPt_rsq__10->GetYaxis()->SetLabelFont(42);
   vbfH_HighPt_rsq__10->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighPt_rsq__10->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighPt_rsq__10->GetYaxis()->SetTitleFont(42);
   vbfH_HighPt_rsq__10->GetZaxis()->SetLabelFont(42);
   vbfH_HighPt_rsq__10->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighPt_rsq__10->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighPt_rsq__10->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighPt_rsq,"histo");
   
   TH1F *vH_HighPt_rsq__11 = new TH1F("vH_HighPt_rsq__11","rsq",125,0,5);
   vH_HighPt_rsq__11->SetBinContent(2,0.02425499);
   vH_HighPt_rsq__11->SetBinContent(3,0.008268726);
   vH_HighPt_rsq__11->SetBinContent(4,0.005291986);
   vH_HighPt_rsq__11->SetBinContent(5,0.002535745);
   vH_HighPt_rsq__11->SetBinContent(6,0.002315245);
   vH_HighPt_rsq__11->SetBinContent(7,0.001543497);
   vH_HighPt_rsq__11->SetBinContent(8,0.0009922481);
   vH_HighPt_rsq__11->SetBinContent(9,0.001322997);
   vH_HighPt_rsq__11->SetBinContent(10,0.0004409991);
   vH_HighPt_rsq__11->SetBinContent(11,0.001212748);
   vH_HighPt_rsq__11->SetBinContent(12,0.0007717484);
   vH_HighPt_rsq__11->SetBinContent(13,0.0006614986);
   vH_HighPt_rsq__11->SetBinContent(14,0.0007717484);
   vH_HighPt_rsq__11->SetBinContent(15,0.0005512488);
   vH_HighPt_rsq__11->SetBinContent(16,0.0002204995);
   vH_HighPt_rsq__11->SetBinContent(17,0.0003307493);
   vH_HighPt_rsq__11->SetBinContent(18,0.0002204995);
   vH_HighPt_rsq__11->SetBinContent(19,0.0002204995);
   vH_HighPt_rsq__11->SetBinContent(20,0.0004409991);
   vH_HighPt_rsq__11->SetBinContent(21,0.0001102498);
   vH_HighPt_rsq__11->SetBinContent(25,0.0001102498);
   vH_HighPt_rsq__11->SetBinError(2,0.001635268);
   vH_HighPt_rsq__11->SetBinError(3,0.000954791);
   vH_HighPt_rsq__11->SetBinError(4,0.0007638328);
   vH_HighPt_rsq__11->SetBinError(5,0.0005287393);
   vH_HighPt_rsq__11->SetBinError(6,0.0005052279);
   vH_HighPt_rsq__11->SetBinError(7,0.0004125169);
   vH_HighPt_rsq__11->SetBinError(8,0.0003307493);
   vH_HighPt_rsq__11->SetBinError(9,0.0003819164);
   vH_HighPt_rsq__11->SetBinError(10,0.0002204995);
   vH_HighPt_rsq__11->SetBinError(11,0.0003656571);
   vH_HighPt_rsq__11->SetBinError(12,0.0002916935);
   vH_HighPt_rsq__11->SetBinError(13,0.0002700557);
   vH_HighPt_rsq__11->SetBinError(14,0.0002916935);
   vH_HighPt_rsq__11->SetBinError(15,0.000246526);
   vH_HighPt_rsq__11->SetBinError(16,0.0001559167);
   vH_HighPt_rsq__11->SetBinError(17,0.0001909582);
   vH_HighPt_rsq__11->SetBinError(18,0.0001559167);
   vH_HighPt_rsq__11->SetBinError(19,0.0001559167);
   vH_HighPt_rsq__11->SetBinError(20,0.0002204995);
   vH_HighPt_rsq__11->SetBinError(21,0.0001102498);
   vH_HighPt_rsq__11->SetBinError(25,0.0001102498);
   vH_HighPt_rsq__11->SetEntries(477);

   ci = TColor::GetColor("#ff6600");
   vH_HighPt_rsq__11->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighPt_rsq__11->SetLineColor(ci);
   vH_HighPt_rsq__11->GetXaxis()->SetLabelFont(42);
   vH_HighPt_rsq__11->GetXaxis()->SetLabelSize(0.035);
   vH_HighPt_rsq__11->GetXaxis()->SetTitleSize(0.035);
   vH_HighPt_rsq__11->GetXaxis()->SetTitleFont(42);
   vH_HighPt_rsq__11->GetYaxis()->SetLabelFont(42);
   vH_HighPt_rsq__11->GetYaxis()->SetLabelSize(0.035);
   vH_HighPt_rsq__11->GetYaxis()->SetTitleSize(0.035);
   vH_HighPt_rsq__11->GetYaxis()->SetTitleFont(42);
   vH_HighPt_rsq__11->GetZaxis()->SetLabelFont(42);
   vH_HighPt_rsq__11->GetZaxis()->SetLabelSize(0.035);
   vH_HighPt_rsq__11->GetZaxis()->SetTitleSize(0.035);
   vH_HighPt_rsq__11->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighPt_rsq,"histo");
   
   TH1F *ttH_HighPt_rsq__12 = new TH1F("ttH_HighPt_rsq__12","rsq",125,0,5);
   ttH_HighPt_rsq__12->SetBinContent(2,0.03450992);
   ttH_HighPt_rsq__12->SetBinContent(3,0.02161776);
   ttH_HighPt_rsq__12->SetBinContent(4,0.01069921);
   ttH_HighPt_rsq__12->SetBinContent(5,0.005776109);
   ttH_HighPt_rsq__12->SetBinContent(6,0.002827124);
   ttH_HighPt_rsq__12->SetBinContent(7,0.001413561);
   ttH_HighPt_rsq__12->SetBinContent(8,0.000901754);
   ttH_HighPt_rsq__12->SetBinContent(9,0.001145472);
   ttH_HighPt_rsq__12->SetBinContent(10,0.0002437173);
   ttH_HighPt_rsq__12->SetBinContent(11,0.0001949738);
   ttH_HighPt_rsq__12->SetBinContent(12,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinContent(13,0.0002437173);
   ttH_HighPt_rsq__12->SetBinContent(14,7.311519e-05);
   ttH_HighPt_rsq__12->SetBinContent(15,9.748692e-05);
   ttH_HighPt_rsq__12->SetBinContent(16,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinContent(17,4.874346e-05);
   ttH_HighPt_rsq__12->SetBinContent(18,4.874346e-05);
   ttH_HighPt_rsq__12->SetBinContent(19,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinContent(21,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinContent(22,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinError(2,0.0009171027);
   ttH_HighPt_rsq__12->SetBinError(3,0.0007258521);
   ttH_HighPt_rsq__12->SetBinError(4,0.0005106444);
   ttH_HighPt_rsq__12->SetBinError(5,0.000375198);
   ttH_HighPt_rsq__12->SetBinError(6,0.0002624916);
   ttH_HighPt_rsq__12->SetBinError(7,0.0001856096);
   ttH_HighPt_rsq__12->SetBinError(8,0.0001482474);
   ttH_HighPt_rsq__12->SetBinError(9,0.0001670842);
   ttH_HighPt_rsq__12->SetBinError(10,7.707018e-05);
   ttH_HighPt_rsq__12->SetBinError(11,6.893366e-05);
   ttH_HighPt_rsq__12->SetBinError(12,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinError(13,7.707018e-05);
   ttH_HighPt_rsq__12->SetBinError(14,4.221307e-05);
   ttH_HighPt_rsq__12->SetBinError(15,4.874346e-05);
   ttH_HighPt_rsq__12->SetBinError(16,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinError(17,3.446683e-05);
   ttH_HighPt_rsq__12->SetBinError(18,3.446683e-05);
   ttH_HighPt_rsq__12->SetBinError(19,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinError(21,2.437173e-05);
   ttH_HighPt_rsq__12->SetBinError(22,2.437173e-05);
   ttH_HighPt_rsq__12->SetEntries(3281);

   ci = TColor::GetColor("#9966ff");
   ttH_HighPt_rsq__12->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighPt_rsq__12->SetLineColor(ci);
   ttH_HighPt_rsq__12->GetXaxis()->SetLabelFont(42);
   ttH_HighPt_rsq__12->GetXaxis()->SetLabelSize(0.035);
   ttH_HighPt_rsq__12->GetXaxis()->SetTitleSize(0.035);
   ttH_HighPt_rsq__12->GetXaxis()->SetTitleFont(42);
   ttH_HighPt_rsq__12->GetYaxis()->SetLabelFont(42);
   ttH_HighPt_rsq__12->GetYaxis()->SetLabelSize(0.035);
   ttH_HighPt_rsq__12->GetYaxis()->SetTitleSize(0.035);
   ttH_HighPt_rsq__12->GetYaxis()->SetTitleFont(42);
   ttH_HighPt_rsq__12->GetZaxis()->SetLabelFont(42);
   ttH_HighPt_rsq__12->GetZaxis()->SetLabelSize(0.035);
   ttH_HighPt_rsq__12->GetZaxis()->SetTitleSize(0.035);
   ttH_HighPt_rsq__12->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighPt_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gammaJet_HighPt_rsq","#gamma + jets","f");

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
   entry=leg->AddEntry("diphoton_HighPt_rsq","#gamma#gamma + jets","f");

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
   entry=leg->AddEntry("ggH_HighPt_rsq","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_HighPt_rsq","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_HighPt_rsq","VH + jets","f");

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
   entry=leg->AddEntry("ttH_HighPt_rsq","t#bar{t}H + jets","f");

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
