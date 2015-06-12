void mr_LowRes_Mr350_Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:49 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-201.9277,-1.328325,2147.47,0.06649791);
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
   hs->SetMaximum(0.7891972);
   
   TH1F *hs_stack_17 = new TH1F("hs_stack_17","",160,130,8130);
   hs_stack_17->SetMinimum(0.06903251);
   hs_stack_17->SetMaximum(0.9308084);
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
   
   
   TH1F *ggH_LowRes_mr__65 = new TH1F("ggH_LowRes_mr__65","mr",160,130,8130);
   ggH_LowRes_mr__65->SetBinContent(5,0.06008555);
   ggH_LowRes_mr__65->SetBinContent(6,0.0500713);
   ggH_LowRes_mr__65->SetBinContent(7,0.01502139);
   ggH_LowRes_mr__65->SetBinContent(8,0.01001426);
   ggH_LowRes_mr__65->SetBinContent(9,0.00500713);
   ggH_LowRes_mr__65->SetBinError(5,0.01734521);
   ggH_LowRes_mr__65->SetBinError(6,0.01583394);
   ggH_LowRes_mr__65->SetBinError(7,0.008672604);
   ggH_LowRes_mr__65->SetBinError(8,0.007081151);
   ggH_LowRes_mr__65->SetBinError(9,0.00500713);
   ggH_LowRes_mr__65->SetEntries(28);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mr__65->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_mr__65->SetLineColor(ci);
   ggH_LowRes_mr__65->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_mr__65->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_mr__65->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_mr__65->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_mr__65->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_mr__65->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_mr__65->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_mr__65->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_mr__65->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_mr__65->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_mr__65->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_mr__65->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_mr,"histo");
   
   TH1F *vbfH_LowRes_mr__66 = new TH1F("vbfH_LowRes_mr__66","mr",160,130,8130);
   vbfH_LowRes_mr__66->SetBinContent(5,0.008840171);
   vbfH_LowRes_mr__66->SetBinContent(6,0.006630128);
   vbfH_LowRes_mr__66->SetBinContent(7,0.003536068);
   vbfH_LowRes_mr__66->SetBinContent(8,0.002210043);
   vbfH_LowRes_mr__66->SetBinContent(12,0.0004420086);
   vbfH_LowRes_mr__66->SetBinError(5,0.001976722);
   vbfH_LowRes_mr__66->SetBinError(6,0.001711892);
   vbfH_LowRes_mr__66->SetBinError(7,0.001250189);
   vbfH_LowRes_mr__66->SetBinError(8,0.0009883612);
   vbfH_LowRes_mr__66->SetBinError(12,0.0004420086);
   vbfH_LowRes_mr__66->SetEntries(49);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mr__66->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_mr__66->SetLineColor(ci);
   vbfH_LowRes_mr__66->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_mr__66->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mr__66->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mr__66->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_mr__66->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_mr__66->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mr__66->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mr__66->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_mr__66->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_mr__66->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_mr__66->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_mr__66->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_mr,"histo");
   
   TH1F *vH_LowRes_mr__67 = new TH1F("vH_LowRes_mr__67","mr",160,130,8130);
   vH_LowRes_mr__67->SetBinContent(5,0.003609928);
   vH_LowRes_mr__67->SetBinContent(6,0.003094224);
   vH_LowRes_mr__67->SetBinContent(7,0.00128926);
   vH_LowRes_mr__67->SetBinContent(8,0.001547112);
   vH_LowRes_mr__67->SetBinContent(9,0.0007735559);
   vH_LowRes_mr__67->SetBinContent(11,0.000257852);
   vH_LowRes_mr__67->SetBinError(5,0.0009647937);
   vH_LowRes_mr__67->SetBinError(6,0.0008932254);
   vH_LowRes_mr__67->SetBinError(7,0.0005765745);
   vH_LowRes_mr__67->SetBinError(8,0.0006316057);
   vH_LowRes_mr__67->SetBinError(9,0.0004466127);
   vH_LowRes_mr__67->SetBinError(11,0.000257852);
   vH_LowRes_mr__67->SetEntries(41);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mr__67->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_mr__67->SetLineColor(ci);
   vH_LowRes_mr__67->GetXaxis()->SetLabelFont(42);
   vH_LowRes_mr__67->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_mr__67->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_mr__67->GetXaxis()->SetTitleFont(42);
   vH_LowRes_mr__67->GetYaxis()->SetLabelFont(42);
   vH_LowRes_mr__67->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_mr__67->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_mr__67->GetYaxis()->SetTitleFont(42);
   vH_LowRes_mr__67->GetZaxis()->SetLabelFont(42);
   vH_LowRes_mr__67->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_mr__67->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_mr__67->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_mr,"histo");
   
   TH1F *ttH_LowRes_mr__68 = new TH1F("ttH_LowRes_mr__68","mr",160,130,8130);
   ttH_LowRes_mr__68->SetBinContent(5,0.00638407);
   ttH_LowRes_mr__68->SetBinContent(6,0.008778098);
   ttH_LowRes_mr__68->SetBinContent(7,0.00718208);
   ttH_LowRes_mr__68->SetBinContent(8,0.004389047);
   ttH_LowRes_mr__68->SetBinContent(9,0.00467405);
   ttH_LowRes_mr__68->SetBinContent(10,0.002793029);
   ttH_LowRes_mr__68->SetBinContent(11,0.002109021);
   ttH_LowRes_mr__68->SetBinContent(12,0.001311013);
   ttH_LowRes_mr__68->SetBinContent(13,0.0009120089);
   ttH_LowRes_mr__68->SetBinContent(14,0.000513005);
   ttH_LowRes_mr__68->SetBinContent(15,0.0007410072);
   ttH_LowRes_mr__68->SetBinContent(16,0.0006270061);
   ttH_LowRes_mr__68->SetBinContent(18,0.0001140011);
   ttH_LowRes_mr__68->SetBinContent(19,0.0002850028);
   ttH_LowRes_mr__68->SetBinContent(20,0.0001710017);
   ttH_LowRes_mr__68->SetBinContent(21,5.700056e-05);
   ttH_LowRes_mr__68->SetBinContent(22,5.700056e-05);
   ttH_LowRes_mr__68->SetBinContent(23,5.700056e-05);
   ttH_LowRes_mr__68->SetBinContent(24,0.0001140011);
   ttH_LowRes_mr__68->SetBinContent(25,5.700056e-05);
   ttH_LowRes_mr__68->SetBinContent(28,5.700056e-05);
   ttH_LowRes_mr__68->SetBinContent(31,5.700056e-05);
   ttH_LowRes_mr__68->SetBinError(5,0.0006032372);
   ttH_LowRes_mr__68->SetBinError(6,0.0007073583);
   ttH_LowRes_mr__68->SetBinError(7,0.0006398297);
   ttH_LowRes_mr__68->SetBinError(8,0.0005001779);
   ttH_LowRes_mr__68->SetBinError(9,0.000516162);
   ttH_LowRes_mr__68->SetBinError(10,0.0003990039);
   ttH_LowRes_mr__68->SetBinError(11,0.0003467209);
   ttH_LowRes_mr__68->SetBinError(12,0.0002733651);
   ttH_LowRes_mr__68->SetBinError(13,0.0002280022);
   ttH_LowRes_mr__68->SetBinError(14,0.0001710017);
   ttH_LowRes_mr__68->SetBinError(15,0.0002055184);
   ttH_LowRes_mr__68->SetBinError(16,0.0001890495);
   ttH_LowRes_mr__68->SetBinError(18,8.061096e-05);
   ttH_LowRes_mr__68->SetBinError(19,0.0001274571);
   ttH_LowRes_mr__68->SetBinError(20,9.872786e-05);
   ttH_LowRes_mr__68->SetBinError(21,5.700056e-05);
   ttH_LowRes_mr__68->SetBinError(22,5.700056e-05);
   ttH_LowRes_mr__68->SetBinError(23,5.700056e-05);
   ttH_LowRes_mr__68->SetBinError(24,8.061096e-05);
   ttH_LowRes_mr__68->SetBinError(25,5.700056e-05);
   ttH_LowRes_mr__68->SetBinError(28,5.700056e-05);
   ttH_LowRes_mr__68->SetBinError(31,5.700056e-05);
   ttH_LowRes_mr__68->SetEntries(727);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mr__68->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_mr__68->SetLineColor(ci);
   ttH_LowRes_mr__68->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_mr__68->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_mr__68->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_mr__68->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_mr__68->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_mr__68->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_mr__68->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_mr__68->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_mr__68->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_mr__68->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_mr__68->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_mr__68->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_mr,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_LowRes_mr","ggH + jets","f");

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
