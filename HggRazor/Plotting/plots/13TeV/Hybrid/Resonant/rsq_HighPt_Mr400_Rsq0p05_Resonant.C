void rsq_HighPt_Mr400_Rsq0p05_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:11:47 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.1445783,-1.608391,1.060241,1.132356);
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
   hs->SetMaximum(6.405415);
   
   TH1F *hs_stack_2 = new TH1F("hs_stack_2","",125,0,5);
   hs_stack_2->SetMinimum(0.05254105);
   hs_stack_2->SetMaximum(8.719752);
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
   
   
   TH1F *ggH_HighPt_rsq__5 = new TH1F("ggH_HighPt_rsq__5","rsq",125,0,5);
   ggH_HighPt_rsq__5->SetBinContent(2,0.4306128);
   ggH_HighPt_rsq__5->SetBinContent(3,0.1101569);
   ggH_HighPt_rsq__5->SetBinContent(4,0.01502139);
   ggH_HighPt_rsq__5->SetBinError(2,0.04643421);
   ggH_HighPt_rsq__5->SetBinError(3,0.02348552);
   ggH_HighPt_rsq__5->SetBinError(4,0.008672604);
   ggH_HighPt_rsq__5->SetEntries(111);

   ci = TColor::GetColor("#00cc00");
   ggH_HighPt_rsq__5->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_HighPt_rsq__5->SetLineColor(ci);
   ggH_HighPt_rsq__5->GetXaxis()->SetLabelFont(42);
   ggH_HighPt_rsq__5->GetXaxis()->SetLabelSize(0.035);
   ggH_HighPt_rsq__5->GetXaxis()->SetTitleSize(0.035);
   ggH_HighPt_rsq__5->GetXaxis()->SetTitleFont(42);
   ggH_HighPt_rsq__5->GetYaxis()->SetLabelFont(42);
   ggH_HighPt_rsq__5->GetYaxis()->SetLabelSize(0.035);
   ggH_HighPt_rsq__5->GetYaxis()->SetTitleSize(0.035);
   ggH_HighPt_rsq__5->GetYaxis()->SetTitleFont(42);
   ggH_HighPt_rsq__5->GetZaxis()->SetLabelFont(42);
   ggH_HighPt_rsq__5->GetZaxis()->SetLabelSize(0.035);
   ggH_HighPt_rsq__5->GetZaxis()->SetTitleSize(0.035);
   ggH_HighPt_rsq__5->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_HighPt_rsq,"histo");
   
   TH1F *vbfH_HighPt_rsq__6 = new TH1F("vbfH_HighPt_rsq__6","rsq",125,0,5);
   vbfH_HighPt_rsq__6->SetBinContent(2,0.07248943);
   vbfH_HighPt_rsq__6->SetBinContent(3,0.0203324);
   vbfH_HighPt_rsq__6->SetBinContent(4,0.001768034);
   vbfH_HighPt_rsq__6->SetBinContent(5,0.0004420086);
   vbfH_HighPt_rsq__6->SetBinError(2,0.005660472);
   vbfH_HighPt_rsq__6->SetBinError(3,0.002997848);
   vbfH_HighPt_rsq__6->SetBinError(4,0.0008840172);
   vbfH_HighPt_rsq__6->SetBinError(5,0.0004420086);
   vbfH_HighPt_rsq__6->SetEntries(215);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighPt_rsq__6->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_HighPt_rsq__6->SetLineColor(ci);
   vbfH_HighPt_rsq__6->GetXaxis()->SetLabelFont(42);
   vbfH_HighPt_rsq__6->GetXaxis()->SetLabelSize(0.035);
   vbfH_HighPt_rsq__6->GetXaxis()->SetTitleSize(0.035);
   vbfH_HighPt_rsq__6->GetXaxis()->SetTitleFont(42);
   vbfH_HighPt_rsq__6->GetYaxis()->SetLabelFont(42);
   vbfH_HighPt_rsq__6->GetYaxis()->SetLabelSize(0.035);
   vbfH_HighPt_rsq__6->GetYaxis()->SetTitleSize(0.035);
   vbfH_HighPt_rsq__6->GetYaxis()->SetTitleFont(42);
   vbfH_HighPt_rsq__6->GetZaxis()->SetLabelFont(42);
   vbfH_HighPt_rsq__6->GetZaxis()->SetLabelSize(0.035);
   vbfH_HighPt_rsq__6->GetZaxis()->SetTitleSize(0.035);
   vbfH_HighPt_rsq__6->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_HighPt_rsq,"histo");
   
   TH1F *vH_HighPt_rsq__7 = new TH1F("vH_HighPt_rsq__7","rsq",125,0,5);
   vH_HighPt_rsq__7->SetBinContent(2,0.05672754);
   vH_HighPt_rsq__7->SetBinContent(3,0.01933888);
   vH_HighPt_rsq__7->SetBinContent(4,0.01237689);
   vH_HighPt_rsq__7->SetBinContent(5,0.005930596);
   vH_HighPt_rsq__7->SetBinContent(6,0.005414892);
   vH_HighPt_rsq__7->SetBinContent(7,0.003609928);
   vH_HighPt_rsq__7->SetBinContent(8,0.002320668);
   vH_HighPt_rsq__7->SetBinContent(9,0.003094224);
   vH_HighPt_rsq__7->SetBinContent(10,0.001031408);
   vH_HighPt_rsq__7->SetBinContent(11,0.002836372);
   vH_HighPt_rsq__7->SetBinContent(12,0.001804964);
   vH_HighPt_rsq__7->SetBinContent(13,0.001547112);
   vH_HighPt_rsq__7->SetBinContent(14,0.001804964);
   vH_HighPt_rsq__7->SetBinContent(15,0.00128926);
   vH_HighPt_rsq__7->SetBinContent(16,0.0005157039);
   vH_HighPt_rsq__7->SetBinContent(17,0.0007735559);
   vH_HighPt_rsq__7->SetBinContent(18,0.0005157039);
   vH_HighPt_rsq__7->SetBinContent(19,0.0005157039);
   vH_HighPt_rsq__7->SetBinContent(20,0.001031408);
   vH_HighPt_rsq__7->SetBinContent(21,0.000257852);
   vH_HighPt_rsq__7->SetBinContent(25,0.000257852);
   vH_HighPt_rsq__7->SetBinError(2,0.003824563);
   vH_HighPt_rsq__7->SetBinError(3,0.002233064);
   vH_HighPt_rsq__7->SetBinError(4,0.001786451);
   vH_HighPt_rsq__7->SetBinError(5,0.001236615);
   vH_HighPt_rsq__7->SetBinError(6,0.001181626);
   vH_HighPt_rsq__7->SetBinError(7,0.0009647937);
   vH_HighPt_rsq__7->SetBinError(8,0.0007735559);
   vH_HighPt_rsq__7->SetBinError(9,0.0008932254);
   vH_HighPt_rsq__7->SetBinError(10,0.0005157039);
   vH_HighPt_rsq__7->SetBinError(11,0.0008551982);
   vH_HighPt_rsq__7->SetBinError(12,0.0006822122);
   vH_HighPt_rsq__7->SetBinError(13,0.0006316057);
   vH_HighPt_rsq__7->SetBinError(14,0.0006822122);
   vH_HighPt_rsq__7->SetBinError(15,0.0005765745);
   vH_HighPt_rsq__7->SetBinError(16,0.0003646577);
   vH_HighPt_rsq__7->SetBinError(17,0.0004466127);
   vH_HighPt_rsq__7->SetBinError(18,0.0003646577);
   vH_HighPt_rsq__7->SetBinError(19,0.0003646577);
   vH_HighPt_rsq__7->SetBinError(20,0.0005157039);
   vH_HighPt_rsq__7->SetBinError(21,0.000257852);
   vH_HighPt_rsq__7->SetBinError(25,0.000257852);
   vH_HighPt_rsq__7->SetEntries(477);

   ci = TColor::GetColor("#ff6600");
   vH_HighPt_rsq__7->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_HighPt_rsq__7->SetLineColor(ci);
   vH_HighPt_rsq__7->GetXaxis()->SetLabelFont(42);
   vH_HighPt_rsq__7->GetXaxis()->SetLabelSize(0.035);
   vH_HighPt_rsq__7->GetXaxis()->SetTitleSize(0.035);
   vH_HighPt_rsq__7->GetXaxis()->SetTitleFont(42);
   vH_HighPt_rsq__7->GetYaxis()->SetLabelFont(42);
   vH_HighPt_rsq__7->GetYaxis()->SetLabelSize(0.035);
   vH_HighPt_rsq__7->GetYaxis()->SetTitleSize(0.035);
   vH_HighPt_rsq__7->GetYaxis()->SetTitleFont(42);
   vH_HighPt_rsq__7->GetZaxis()->SetLabelFont(42);
   vH_HighPt_rsq__7->GetZaxis()->SetLabelSize(0.035);
   vH_HighPt_rsq__7->GetZaxis()->SetTitleSize(0.035);
   vH_HighPt_rsq__7->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_HighPt_rsq,"histo");
   
   TH1F *ttH_HighPt_rsq__8 = new TH1F("ttH_HighPt_rsq__8","rsq",125,0,5);
   ttH_HighPt_rsq__8->SetBinContent(2,0.08071174);
   ttH_HighPt_rsq__8->SetBinContent(3,0.05055958);
   ttH_HighPt_rsq__8->SetBinContent(4,0.02502329);
   ttH_HighPt_rsq__8->SetBinContent(5,0.01350915);
   ttH_HighPt_rsq__8->SetBinContent(6,0.006612073);
   ttH_HighPt_rsq__8->SetBinContent(7,0.003306035);
   ttH_HighPt_rsq__8->SetBinContent(8,0.002109021);
   ttH_HighPt_rsq__8->SetBinContent(9,0.002679027);
   ttH_HighPt_rsq__8->SetBinContent(10,0.0005700056);
   ttH_HighPt_rsq__8->SetBinContent(11,0.0004560044);
   ttH_HighPt_rsq__8->SetBinContent(12,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinContent(13,0.0005700056);
   ttH_HighPt_rsq__8->SetBinContent(14,0.0001710017);
   ttH_HighPt_rsq__8->SetBinContent(15,0.0002280022);
   ttH_HighPt_rsq__8->SetBinContent(16,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinContent(17,0.0001140011);
   ttH_HighPt_rsq__8->SetBinContent(18,0.0001140011);
   ttH_HighPt_rsq__8->SetBinContent(19,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinContent(21,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinContent(22,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinError(2,0.002144918);
   ttH_HighPt_rsq__8->SetBinError(3,0.001697622);
   ttH_HighPt_rsq__8->SetBinError(4,0.001194294);
   ttH_HighPt_rsq__8->SetBinError(5,0.0008775124);
   ttH_HighPt_rsq__8->SetBinError(6,0.0006139148);
   ttH_HighPt_rsq__8->SetBinError(7,0.0004341033);
   ttH_HighPt_rsq__8->SetBinError(8,0.0003467209);
   ttH_HighPt_rsq__8->SetBinError(9,0.0003907761);
   ttH_HighPt_rsq__8->SetBinError(10,0.0001802516);
   ttH_HighPt_rsq__8->SetBinError(11,0.0001612219);
   ttH_HighPt_rsq__8->SetBinError(12,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinError(13,0.0001802516);
   ttH_HighPt_rsq__8->SetBinError(14,9.872786e-05);
   ttH_HighPt_rsq__8->SetBinError(15,0.0001140011);
   ttH_HighPt_rsq__8->SetBinError(16,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinError(17,8.061096e-05);
   ttH_HighPt_rsq__8->SetBinError(18,8.061096e-05);
   ttH_HighPt_rsq__8->SetBinError(19,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinError(21,5.700056e-05);
   ttH_HighPt_rsq__8->SetBinError(22,5.700056e-05);
   ttH_HighPt_rsq__8->SetEntries(3281);

   ci = TColor::GetColor("#9966ff");
   ttH_HighPt_rsq__8->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_HighPt_rsq__8->SetLineColor(ci);
   ttH_HighPt_rsq__8->GetXaxis()->SetLabelFont(42);
   ttH_HighPt_rsq__8->GetXaxis()->SetLabelSize(0.035);
   ttH_HighPt_rsq__8->GetXaxis()->SetTitleSize(0.035);
   ttH_HighPt_rsq__8->GetXaxis()->SetTitleFont(42);
   ttH_HighPt_rsq__8->GetYaxis()->SetLabelFont(42);
   ttH_HighPt_rsq__8->GetYaxis()->SetLabelSize(0.035);
   ttH_HighPt_rsq__8->GetYaxis()->SetTitleSize(0.035);
   ttH_HighPt_rsq__8->GetYaxis()->SetTitleFont(42);
   ttH_HighPt_rsq__8->GetZaxis()->SetLabelFont(42);
   ttH_HighPt_rsq__8->GetZaxis()->SetLabelSize(0.035);
   ttH_HighPt_rsq__8->GetZaxis()->SetTitleSize(0.035);
   ttH_HighPt_rsq__8->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_HighPt_rsq,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_HighPt_rsq","ggH + jets","f");

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
