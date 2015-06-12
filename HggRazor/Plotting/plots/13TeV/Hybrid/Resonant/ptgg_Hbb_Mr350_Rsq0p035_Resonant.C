void ptgg_Hbb_Mr350_Rsq0p035_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:10:48 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-4.828177,762.1687,-1.124473);
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
   hs->SetMaximum(0.04446048);
   
   TH1F *hs_stack_8 = new TH1F("hs_stack_8","",70,20,720);
   hs_stack_8->SetMinimum(0.1213611);
   hs_stack_8->SetMaximum(0.04133023);
   hs_stack_8->SetDirectory(0);
   hs_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_8->SetLineColor(ci);
   hs_stack_8->GetXaxis()->SetTitle("p^{T}_{#gamma#gamma} (GeV)");
   hs_stack_8->GetXaxis()->SetLabelFont(42);
   hs_stack_8->GetXaxis()->SetLabelSize(0.035);
   hs_stack_8->GetXaxis()->SetTitleSize(0.06);
   hs_stack_8->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_8->GetXaxis()->SetTitleFont(42);
   hs_stack_8->GetYaxis()->SetTitle("events / 10 (GeV)");
   hs_stack_8->GetYaxis()->SetLabelFont(42);
   hs_stack_8->GetYaxis()->SetLabelSize(0.035);
   hs_stack_8->GetYaxis()->SetTitleSize(0.06);
   hs_stack_8->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_8->GetYaxis()->SetTitleFont(42);
   hs_stack_8->GetZaxis()->SetLabelFont(42);
   hs_stack_8->GetZaxis()->SetLabelSize(0.035);
   hs_stack_8->GetZaxis()->SetTitleSize(0.035);
   hs_stack_8->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_8);
   
   
   TH1F *ggH_Hbb_ptgg__29 = new TH1F("ggH_Hbb_ptgg__29","ptgg",70,20,720);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_ptgg__29->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_Hbb_ptgg__29->SetLineColor(ci);
   ggH_Hbb_ptgg__29->GetXaxis()->SetLabelFont(42);
   ggH_Hbb_ptgg__29->GetXaxis()->SetLabelSize(0.035);
   ggH_Hbb_ptgg__29->GetXaxis()->SetTitleSize(0.035);
   ggH_Hbb_ptgg__29->GetXaxis()->SetTitleFont(42);
   ggH_Hbb_ptgg__29->GetYaxis()->SetLabelFont(42);
   ggH_Hbb_ptgg__29->GetYaxis()->SetLabelSize(0.035);
   ggH_Hbb_ptgg__29->GetYaxis()->SetTitleSize(0.035);
   ggH_Hbb_ptgg__29->GetYaxis()->SetTitleFont(42);
   ggH_Hbb_ptgg__29->GetZaxis()->SetLabelFont(42);
   ggH_Hbb_ptgg__29->GetZaxis()->SetLabelSize(0.035);
   ggH_Hbb_ptgg__29->GetZaxis()->SetTitleSize(0.035);
   ggH_Hbb_ptgg__29->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_Hbb_ptgg,"histo");
   
   TH1F *vbfH_Hbb_ptgg__30 = new TH1F("vbfH_Hbb_ptgg__30","ptgg",70,20,720);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_ptgg__30->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_Hbb_ptgg__30->SetLineColor(ci);
   vbfH_Hbb_ptgg__30->GetXaxis()->SetLabelFont(42);
   vbfH_Hbb_ptgg__30->GetXaxis()->SetLabelSize(0.035);
   vbfH_Hbb_ptgg__30->GetXaxis()->SetTitleSize(0.035);
   vbfH_Hbb_ptgg__30->GetXaxis()->SetTitleFont(42);
   vbfH_Hbb_ptgg__30->GetYaxis()->SetLabelFont(42);
   vbfH_Hbb_ptgg__30->GetYaxis()->SetLabelSize(0.035);
   vbfH_Hbb_ptgg__30->GetYaxis()->SetTitleSize(0.035);
   vbfH_Hbb_ptgg__30->GetYaxis()->SetTitleFont(42);
   vbfH_Hbb_ptgg__30->GetZaxis()->SetLabelFont(42);
   vbfH_Hbb_ptgg__30->GetZaxis()->SetLabelSize(0.035);
   vbfH_Hbb_ptgg__30->GetZaxis()->SetTitleSize(0.035);
   vbfH_Hbb_ptgg__30->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_Hbb_ptgg,"histo");
   
   TH1F *vH_Hbb_ptgg__31 = new TH1F("vH_Hbb_ptgg__31","ptgg",70,20,720);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_ptgg__31->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_Hbb_ptgg__31->SetLineColor(ci);
   vH_Hbb_ptgg__31->GetXaxis()->SetLabelFont(42);
   vH_Hbb_ptgg__31->GetXaxis()->SetLabelSize(0.035);
   vH_Hbb_ptgg__31->GetXaxis()->SetTitleSize(0.035);
   vH_Hbb_ptgg__31->GetXaxis()->SetTitleFont(42);
   vH_Hbb_ptgg__31->GetYaxis()->SetLabelFont(42);
   vH_Hbb_ptgg__31->GetYaxis()->SetLabelSize(0.035);
   vH_Hbb_ptgg__31->GetYaxis()->SetTitleSize(0.035);
   vH_Hbb_ptgg__31->GetYaxis()->SetTitleFont(42);
   vH_Hbb_ptgg__31->GetZaxis()->SetLabelFont(42);
   vH_Hbb_ptgg__31->GetZaxis()->SetLabelSize(0.035);
   vH_Hbb_ptgg__31->GetZaxis()->SetTitleSize(0.035);
   vH_Hbb_ptgg__31->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_Hbb_ptgg,"histo");
   
   TH1F *ttH_Hbb_ptgg__32 = new TH1F("ttH_Hbb_ptgg__32","ptgg",70,20,720);
   ttH_Hbb_ptgg__32->SetBinContent(1,0.001197012);
   ttH_Hbb_ptgg__32->SetBinContent(2,0.001767017);
   ttH_Hbb_ptgg__32->SetBinContent(3,0.002280023);
   ttH_Hbb_ptgg__32->SetBinContent(4,0.001881018);
   ttH_Hbb_ptgg__32->SetBinContent(5,0.002679027);
   ttH_Hbb_ptgg__32->SetBinContent(6,0.003420036);
   ttH_Hbb_ptgg__32->SetBinContent(7,0.003591038);
   ttH_Hbb_ptgg__32->SetBinContent(8,0.004446048);
   ttH_Hbb_ptgg__32->SetBinContent(9,0.003534037);
   ttH_Hbb_ptgg__32->SetBinError(1,0.0002612094);
   ttH_Hbb_ptgg__32->SetBinError(2,0.0003173657);
   ttH_Hbb_ptgg__32->SetBinError(3,0.0003605032);
   ttH_Hbb_ptgg__32->SetBinError(4,0.0003274433);
   ttH_Hbb_ptgg__32->SetBinError(5,0.0003907761);
   ttH_Hbb_ptgg__32->SetBinError(6,0.0004415244);
   ttH_Hbb_ptgg__32->SetBinError(7,0.0004524279);
   ttH_Hbb_ptgg__32->SetBinError(8,0.0005034153);
   ttH_Hbb_ptgg__32->SetBinError(9,0.0004488228);
   ttH_Hbb_ptgg__32->SetEntries(435);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_ptgg__32->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_Hbb_ptgg__32->SetLineColor(ci);
   ttH_Hbb_ptgg__32->GetXaxis()->SetLabelFont(42);
   ttH_Hbb_ptgg__32->GetXaxis()->SetLabelSize(0.035);
   ttH_Hbb_ptgg__32->GetXaxis()->SetTitleSize(0.035);
   ttH_Hbb_ptgg__32->GetXaxis()->SetTitleFont(42);
   ttH_Hbb_ptgg__32->GetYaxis()->SetLabelFont(42);
   ttH_Hbb_ptgg__32->GetYaxis()->SetLabelSize(0.035);
   ttH_Hbb_ptgg__32->GetYaxis()->SetTitleSize(0.035);
   ttH_Hbb_ptgg__32->GetYaxis()->SetTitleFont(42);
   ttH_Hbb_ptgg__32->GetZaxis()->SetLabelFont(42);
   ttH_Hbb_ptgg__32->GetZaxis()->SetLabelSize(0.035);
   ttH_Hbb_ptgg__32->GetZaxis()->SetTitleSize(0.035);
   ttH_Hbb_ptgg__32->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_Hbb_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_Hbb_ptgg","ggH + jets","f");

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
   entry=leg->AddEntry("vbfH_Hbb_ptgg","VBFH + jets","f");

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
   entry=leg->AddEntry("vH_Hbb_ptgg","VH + jets","f");

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
   entry=leg->AddEntry("ttH_Hbb_ptgg","t#bar{t}H + jets","f");

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
