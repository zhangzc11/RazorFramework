void ptgg_LowRes_Mr250Rsq0p05_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:17:23 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.276437,762.1687,-0.1158136);
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
   hs->SetMaximum(0.5530823);
   
   TH1F *hs_stack_20 = new TH1F("hs_stack_20","",70,20,720);
   hs_stack_20->SetMinimum(0.07291846);
   hs_stack_20->SetMaximum(0.6352471);
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
   
   
   TH1F *ggH_LowRes_ptgg__77 = new TH1F("ggH_LowRes_ptgg__77","ptgg",70,20,720);
   ggH_LowRes_ptgg__77->SetBinContent(4,0.005047461);
   ggH_LowRes_ptgg__77->SetBinContent(5,0.01009492);
   ggH_LowRes_ptgg__77->SetBinContent(6,0.01009492);
   ggH_LowRes_ptgg__77->SetBinContent(7,0.02523731);
   ggH_LowRes_ptgg__77->SetBinContent(8,0.02523731);
   ggH_LowRes_ptgg__77->SetBinContent(9,0.03028477);
   ggH_LowRes_ptgg__77->SetBinError(4,0.005047461);
   ggH_LowRes_ptgg__77->SetBinError(5,0.007138188);
   ggH_LowRes_ptgg__77->SetBinError(6,0.007138188);
   ggH_LowRes_ptgg__77->SetBinError(7,0.01128647);
   ggH_LowRes_ptgg__77->SetBinError(8,0.01128647);
   ggH_LowRes_ptgg__77->SetBinError(9,0.01236371);
   ggH_LowRes_ptgg__77->SetEntries(21);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_ptgg__77->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   ggH_LowRes_ptgg__77->SetLineColor(ci);
   ggH_LowRes_ptgg__77->GetXaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__77->GetXaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__77->GetXaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__77->GetXaxis()->SetTitleFont(42);
   ggH_LowRes_ptgg__77->GetYaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__77->GetYaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__77->GetYaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__77->GetYaxis()->SetTitleFont(42);
   ggH_LowRes_ptgg__77->GetZaxis()->SetLabelFont(42);
   ggH_LowRes_ptgg__77->GetZaxis()->SetLabelSize(0.035);
   ggH_LowRes_ptgg__77->GetZaxis()->SetTitleSize(0.035);
   ggH_LowRes_ptgg__77->GetZaxis()->SetTitleFont(42);
   hs->Add(ggH_LowRes_ptgg,"histo");
   
   TH1F *vbfH_LowRes_ptgg__78 = new TH1F("vbfH_LowRes_ptgg__78","ptgg",70,20,720);
   vbfH_LowRes_ptgg__78->SetBinContent(1,0.002210043);
   vbfH_LowRes_ptgg__78->SetBinContent(2,0.002210043);
   vbfH_LowRes_ptgg__78->SetBinContent(3,0.001326026);
   vbfH_LowRes_ptgg__78->SetBinContent(4,0.00309406);
   vbfH_LowRes_ptgg__78->SetBinContent(5,0.005304102);
   vbfH_LowRes_ptgg__78->SetBinContent(6,0.006630128);
   vbfH_LowRes_ptgg__78->SetBinContent(7,0.009724188);
   vbfH_LowRes_ptgg__78->SetBinContent(8,0.0106082);
   vbfH_LowRes_ptgg__78->SetBinContent(9,0.01370226);
   vbfH_LowRes_ptgg__78->SetBinError(1,0.0009883612);
   vbfH_LowRes_ptgg__78->SetBinError(2,0.0009883612);
   vbfH_LowRes_ptgg__78->SetBinError(3,0.0007655813);
   vbfH_LowRes_ptgg__78->SetBinError(4,0.001169445);
   vbfH_LowRes_ptgg__78->SetBinError(5,0.001531163);
   vbfH_LowRes_ptgg__78->SetBinError(6,0.001711892);
   vbfH_LowRes_ptgg__78->SetBinError(7,0.002073204);
   vbfH_LowRes_ptgg__78->SetBinError(8,0.002165391);
   vbfH_LowRes_ptgg__78->SetBinError(9,0.002461);
   vbfH_LowRes_ptgg__78->SetEntries(124);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_ptgg__78->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc33");
   vbfH_LowRes_ptgg__78->SetLineColor(ci);
   vbfH_LowRes_ptgg__78->GetXaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__78->GetXaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__78->GetXaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__78->GetXaxis()->SetTitleFont(42);
   vbfH_LowRes_ptgg__78->GetYaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__78->GetYaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__78->GetYaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__78->GetYaxis()->SetTitleFont(42);
   vbfH_LowRes_ptgg__78->GetZaxis()->SetLabelFont(42);
   vbfH_LowRes_ptgg__78->GetZaxis()->SetLabelSize(0.035);
   vbfH_LowRes_ptgg__78->GetZaxis()->SetTitleSize(0.035);
   vbfH_LowRes_ptgg__78->GetZaxis()->SetTitleFont(42);
   hs->Add(vbfH_LowRes_ptgg,"histo");
   
   TH1F *vH_LowRes_ptgg__79 = new TH1F("vH_LowRes_ptgg__79","ptgg",70,20,720);
   vH_LowRes_ptgg__79->SetBinContent(1,0.00128926);
   vH_LowRes_ptgg__79->SetBinContent(2,0.00128926);
   vH_LowRes_ptgg__79->SetBinContent(3,0.001804964);
   vH_LowRes_ptgg__79->SetBinContent(4,0.001804964);
   vH_LowRes_ptgg__79->SetBinContent(5,0.002062816);
   vH_LowRes_ptgg__79->SetBinContent(6,0.001804964);
   vH_LowRes_ptgg__79->SetBinContent(7,0.004383484);
   vH_LowRes_ptgg__79->SetBinContent(8,0.0064463);
   vH_LowRes_ptgg__79->SetBinContent(9,0.006704152);
   vH_LowRes_ptgg__79->SetBinError(1,0.0005765745);
   vH_LowRes_ptgg__79->SetBinError(2,0.0005765745);
   vH_LowRes_ptgg__79->SetBinError(3,0.0006822122);
   vH_LowRes_ptgg__79->SetBinError(4,0.0006822122);
   vH_LowRes_ptgg__79->SetBinError(5,0.0007293155);
   vH_LowRes_ptgg__79->SetBinError(6,0.0006822122);
   vH_LowRes_ptgg__79->SetBinError(7,0.001063151);
   vH_LowRes_ptgg__79->SetBinError(8,0.00128926);
   vH_LowRes_ptgg__79->SetBinError(9,0.001314792);
   vH_LowRes_ptgg__79->SetEntries(107);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_ptgg__79->SetFillColor(ci);

   ci = TColor::GetColor("#ff6600");
   vH_LowRes_ptgg__79->SetLineColor(ci);
   vH_LowRes_ptgg__79->GetXaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__79->GetXaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__79->GetXaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__79->GetXaxis()->SetTitleFont(42);
   vH_LowRes_ptgg__79->GetYaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__79->GetYaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__79->GetYaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__79->GetYaxis()->SetTitleFont(42);
   vH_LowRes_ptgg__79->GetZaxis()->SetLabelFont(42);
   vH_LowRes_ptgg__79->GetZaxis()->SetLabelSize(0.035);
   vH_LowRes_ptgg__79->GetZaxis()->SetTitleSize(0.035);
   vH_LowRes_ptgg__79->GetZaxis()->SetTitleFont(42);
   hs->Add(vH_LowRes_ptgg,"histo");
   
   TH1F *ttH_LowRes_ptgg__80 = new TH1F("ttH_LowRes_ptgg__80","ptgg",70,20,720);
   ttH_LowRes_ptgg__80->SetBinContent(1,0.001995019);
   ttH_LowRes_ptgg__80->SetBinContent(2,0.002622027);
   ttH_LowRes_ptgg__80->SetBinContent(3,0.002736028);
   ttH_LowRes_ptgg__80->SetBinContent(4,0.003876041);
   ttH_LowRes_ptgg__80->SetBinContent(5,0.00552906);
   ttH_LowRes_ptgg__80->SetBinContent(6,0.003933042);
   ttH_LowRes_ptgg__80->SetBinContent(7,0.004731051);
   ttH_LowRes_ptgg__80->SetBinContent(8,0.003876041);
   ttH_LowRes_ptgg__80->SetBinContent(9,0.00461705);
   ttH_LowRes_ptgg__80->SetBinError(1,0.0003372198);
   ttH_LowRes_ptgg__80->SetBinError(2,0.0003865966);
   ttH_LowRes_ptgg__80->SetBinError(3,0.0003949114);
   ttH_LowRes_ptgg__80->SetBinError(4,0.0004700386);
   ttH_LowRes_ptgg__80->SetBinError(5,0.0005613904);
   ttH_LowRes_ptgg__80->SetBinError(6,0.0004734822);
   ttH_LowRes_ptgg__80->SetBinError(7,0.0005192998);
   ttH_LowRes_ptgg__80->SetBinError(8,0.0004700386);
   ttH_LowRes_ptgg__80->SetBinError(9,0.000513005);
   ttH_LowRes_ptgg__80->SetEntries(595);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_ptgg__80->SetFillColor(ci);

   ci = TColor::GetColor("#9966ff");
   ttH_LowRes_ptgg__80->SetLineColor(ci);
   ttH_LowRes_ptgg__80->GetXaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__80->GetXaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__80->GetXaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__80->GetXaxis()->SetTitleFont(42);
   ttH_LowRes_ptgg__80->GetYaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__80->GetYaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__80->GetYaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__80->GetYaxis()->SetTitleFont(42);
   ttH_LowRes_ptgg__80->GetZaxis()->SetLabelFont(42);
   ttH_LowRes_ptgg__80->GetZaxis()->SetLabelSize(0.035);
   ttH_LowRes_ptgg__80->GetZaxis()->SetTitleSize(0.035);
   ttH_LowRes_ptgg__80->GetZaxis()->SetTitleFont(42);
   hs->Add(ttH_LowRes_ptgg,"histo");
   hs->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.58,0.93,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ggH_LowRes_ptgg","ggH + jets","f");

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
