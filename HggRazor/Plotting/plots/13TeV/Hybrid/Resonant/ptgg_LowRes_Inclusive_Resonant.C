void ptgg_LowRes_Inclusive_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 10 21:06:39 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.816386,762.1687,2.005341);
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
   hs->SetMaximum(36.17113);
   
   TH1F *hs_stack_20 = new TH1F("hs_stack_20","",70,20,720);
   hs_stack_20->SetMinimum(0.04387541);
   hs_stack_20->SetMaximum(54.67891);
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
   ggH_LowRes_ptgg__77->SetBinContent(1,3.389804);
   ggH_LowRes_ptgg__77->SetBinContent(2,3.05934);
   ggH_LowRes_ptgg__77->SetBinContent(3,2.55363);
   ggH_LowRes_ptgg__77->SetBinContent(4,2.423447);
   ggH_LowRes_ptgg__77->SetBinContent(5,1.717449);
   ggH_LowRes_ptgg__77->SetBinContent(6,1.472099);
   ggH_LowRes_ptgg__77->SetBinContent(7,1.211727);
   ggH_LowRes_ptgg__77->SetBinContent(8,0.9213129);
   ggH_LowRes_ptgg__77->SetBinContent(9,0.8261771);
   ggH_LowRes_ptgg__77->SetBinError(1,0.1302816);
   ggH_LowRes_ptgg__77->SetBinError(2,0.1237683);
   ggH_LowRes_ptgg__77->SetBinError(3,0.1130769);
   ggH_LowRes_ptgg__77->SetBinError(4,0.1101569);
   ggH_LowRes_ptgg__77->SetBinError(5,0.09273335);
   ggH_LowRes_ptgg__77->SetBinError(6,0.0858544);
   ggH_LowRes_ptgg__77->SetBinError(7,0.07789266);
   ggH_LowRes_ptgg__77->SetBinError(8,0.06792002);
   ggH_LowRes_ptgg__77->SetBinError(9,0.06431775);
   ggH_LowRes_ptgg__77->SetEntries(3510);

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
   vbfH_LowRes_ptgg__78->SetBinContent(1,0.1272982);
   vbfH_LowRes_ptgg__78->SetBinContent(2,0.1776877);
   vbfH_LowRes_ptgg__78->SetBinContent(3,0.2192369);
   vbfH_LowRes_ptgg__78->SetBinContent(4,0.2294032);
   vbfH_LowRes_ptgg__78->SetBinContent(5,0.2537138);
   vbfH_LowRes_ptgg__78->SetBinContent(6,0.2439896);
   vbfH_LowRes_ptgg__78->SetBinContent(7,0.221889);
   vbfH_LowRes_ptgg__78->SetBinContent(8,0.2143748);
   vbfH_LowRes_ptgg__78->SetBinContent(9,0.187412);
   vbfH_LowRes_ptgg__78->SetBinError(1,0.007501134);
   vbfH_LowRes_ptgg__78->SetBinError(2,0.008862244);
   vbfH_LowRes_ptgg__78->SetBinError(3,0.009843998);
   vbfH_LowRes_ptgg__78->SetBinError(4,0.01006965);
   vbfH_LowRes_ptgg__78->SetBinError(5,0.01058977);
   vbfH_LowRes_ptgg__78->SetBinError(6,0.01038485);
   vbfH_LowRes_ptgg__78->SetBinError(7,0.00990336);
   vbfH_LowRes_ptgg__78->SetBinError(8,0.009734229);
   vbfH_LowRes_ptgg__78->SetBinError(9,0.009101514);
   vbfH_LowRes_ptgg__78->SetEntries(4242);

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
   vH_LowRes_ptgg__79->SetBinContent(1,0.08792744);
   vH_LowRes_ptgg__79->SetBinContent(2,0.1142281);
   vH_LowRes_ptgg__79->SetBinContent(3,0.1137124);
   vH_LowRes_ptgg__79->SetBinContent(4,0.1278941);
   vH_LowRes_ptgg__79->SetBinContent(5,0.1080397);
   vH_LowRes_ptgg__79->SetBinContent(6,0.1124232);
   vH_LowRes_ptgg__79->SetBinContent(7,0.09798358);
   vH_LowRes_ptgg__79->SetBinContent(8,0.08354399);
   vH_LowRes_ptgg__79->SetBinContent(9,0.07503495);
   vH_LowRes_ptgg__79->SetBinError(1,0.004761542);
   vH_LowRes_ptgg__79->SetBinError(2,0.005427156);
   vH_LowRes_ptgg__79->SetBinError(3,0.005414891);
   vH_LowRes_ptgg__79->SetBinError(4,0.005742636);
   vH_LowRes_ptgg__79->SetBinError(5,0.005278098);
   vH_LowRes_ptgg__79->SetBinError(6,0.005384107);
   vH_LowRes_ptgg__79->SetBinError(7,0.00502646);
   vH_LowRes_ptgg__79->SetBinError(8,0.004641335);
   vH_LowRes_ptgg__79->SetBinError(9,0.004398625);
   vH_LowRes_ptgg__79->SetEntries(3571);

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
   ttH_LowRes_ptgg__80->SetBinContent(1,0.01208414);
   ttH_LowRes_ptgg__80->SetBinContent(2,0.0171572);
   ttH_LowRes_ptgg__80->SetBinContent(3,0.01875321);
   ttH_LowRes_ptgg__80->SetBinContent(4,0.02166025);
   ttH_LowRes_ptgg__80->SetBinContent(5,0.02308526);
   ttH_LowRes_ptgg__80->SetBinContent(6,0.02046323);
   ttH_LowRes_ptgg__80->SetBinContent(7,0.01995023);
   ttH_LowRes_ptgg__80->SetBinContent(8,0.02080524);
   ttH_LowRes_ptgg__80->SetBinContent(9,0.01841121);
   ttH_LowRes_ptgg__80->SetBinError(1,0.0008299406);
   ttH_LowRes_ptgg__80->SetBinError(2,0.0009889227);
   ttH_LowRes_ptgg__80->SetBinError(3,0.001033896);
   ttH_LowRes_ptgg__80->SetBinError(4,0.001111145);
   ttH_LowRes_ptgg__80->SetBinError(5,0.001147114);
   ttH_LowRes_ptgg__80->SetBinError(6,0.001080006);
   ttH_LowRes_ptgg__80->SetBinError(7,0.001066383);
   ttH_LowRes_ptgg__80->SetBinError(8,0.001088994);
   ttH_LowRes_ptgg__80->SetBinError(9,0.001024425);
   ttH_LowRes_ptgg__80->SetEntries(3024);

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
