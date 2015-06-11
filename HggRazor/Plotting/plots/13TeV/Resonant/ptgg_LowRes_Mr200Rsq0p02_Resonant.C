void ptgg_LowRes_Mr200Rsq0p02_Resonant()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun  7 09:14:52 2015) by ROOT version6.03/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-81.20482,-1.564955,762.1687,0.9584285);
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
   hs->SetMaximum(4.544159);
   
   TH1F *hs_stack_20 = new TH1F("hs_stack_20","",70,20,720);
   hs_stack_20->SetMinimum(0.05468285);
   hs_stack_20->SetMaximum(6.050506);
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
   ggH_LowRes_ptgg__77->SetBinContent(1,0.06056954);
   ggH_LowRes_ptgg__77->SetBinContent(2,0.1261865);
   ggH_LowRes_ptgg__77->SetBinContent(3,0.08580685);
   ggH_LowRes_ptgg__77->SetBinContent(4,0.252373);
   ggH_LowRes_ptgg__77->SetBinContent(5,0.2271357);
   ggH_LowRes_ptgg__77->SetBinContent(6,0.2372306);
   ggH_LowRes_ptgg__77->SetBinContent(7,0.3179901);
   ggH_LowRes_ptgg__77->SetBinContent(8,0.252373);
   ggH_LowRes_ptgg__77->SetBinContent(9,0.3331325);
   ggH_LowRes_ptgg__77->SetBinError(1,0.01748492);
   ggH_LowRes_ptgg__77->SetBinError(2,0.02523731);
   ggH_LowRes_ptgg__77->SetBinError(3,0.02081122);
   ggH_LowRes_ptgg__77->SetBinError(4,0.03569094);
   ggH_LowRes_ptgg__77->SetBinError(5,0.0338594);
   ggH_LowRes_ptgg__77->SetBinError(6,0.03460365);
   ggH_LowRes_ptgg__77->SetBinError(7,0.04006298);
   ggH_LowRes_ptgg__77->SetBinError(8,0.03569094);
   ggH_LowRes_ptgg__77->SetBinError(9,0.04100577);
   ggH_LowRes_ptgg__77->SetEntries(375);

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
   vbfH_LowRes_ptgg__78->SetBinContent(1,0.01414427);
   vbfH_LowRes_ptgg__78->SetBinContent(2,0.01768035);
   vbfH_LowRes_ptgg__78->SetBinContent(3,0.02873058);
   vbfH_LowRes_ptgg__78->SetBinContent(4,0.03978081);
   vbfH_LowRes_ptgg__78->SetBinContent(5,0.05569315);
   vbfH_LowRes_ptgg__78->SetBinContent(6,0.05878722);
   vbfH_LowRes_ptgg__78->SetBinContent(7,0.06320731);
   vbfH_LowRes_ptgg__78->SetBinContent(8,0.07514146);
   vbfH_LowRes_ptgg__78->SetBinContent(9,0.0782355);
   vbfH_LowRes_ptgg__78->SetBinError(1,0.002500378);
   vbfH_LowRes_ptgg__78->SetBinError(2,0.002795508);
   vbfH_LowRes_ptgg__78->SetBinError(3,0.003563587);
   vbfH_LowRes_ptgg__78->SetBinError(4,0.004193262);
   vbfH_LowRes_ptgg__78->SetBinError(5,0.004961534);
   vbfH_LowRes_ptgg__78->SetBinError(6,0.005097492);
   vbfH_LowRes_ptgg__78->SetBinError(7,0.005285654);
   vbfH_LowRes_ptgg__78->SetBinError(8,0.005763087);
   vbfH_LowRes_ptgg__78->SetBinError(9,0.005880542);
   vbfH_LowRes_ptgg__78->SetEntries(976);

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
   vH_LowRes_ptgg__79->SetBinContent(1,0.005672744);
   vH_LowRes_ptgg__79->SetBinContent(2,0.005414892);
   vH_LowRes_ptgg__79->SetBinContent(3,0.009024818);
   vH_LowRes_ptgg__79->SetBinContent(4,0.01237689);
   vH_LowRes_ptgg__79->SetBinContent(5,0.01263474);
   vH_LowRes_ptgg__79->SetBinContent(6,0.01547111);
   vH_LowRes_ptgg__79->SetBinContent(7,0.0229488);
   vH_LowRes_ptgg__79->SetBinContent(8,0.02578517);
   vH_LowRes_ptgg__79->SetBinContent(9,0.03506785);
   vH_LowRes_ptgg__79->SetBinError(1,0.001209433);
   vH_LowRes_ptgg__79->SetBinError(2,0.001181626);
   vH_LowRes_ptgg__79->SetBinError(3,0.001525473);
   vH_LowRes_ptgg__79->SetBinError(4,0.001786451);
   vH_LowRes_ptgg__79->SetBinError(5,0.001804964);
   vH_LowRes_ptgg__79->SetBinError(6,0.001997313);
   vH_LowRes_ptgg__79->SetBinError(7,0.002432571);
   vH_LowRes_ptgg__79->SetBinError(8,0.00257852);
   vH_LowRes_ptgg__79->SetBinError(9,0.003007045);
   vH_LowRes_ptgg__79->SetEntries(560);

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
   ttH_LowRes_ptgg__80->SetBinContent(1,0.004332046);
   ttH_LowRes_ptgg__80->SetBinContent(2,0.00552906);
   ttH_LowRes_ptgg__80->SetBinContent(3,0.006441071);
   ttH_LowRes_ptgg__80->SetBinContent(4,0.007866087);
   ttH_LowRes_ptgg__80->SetBinContent(5,0.01071612);
   ttH_LowRes_ptgg__80->SetBinContent(6,0.008379093);
   ttH_LowRes_ptgg__80->SetBinContent(7,0.008607096);
   ttH_LowRes_ptgg__80->SetBinContent(8,0.007695086);
   ttH_LowRes_ptgg__80->SetBinContent(9,0.007980089);
   ttH_LowRes_ptgg__80->SetBinError(1,0.0004969193);
   ttH_LowRes_ptgg__80->SetBinError(2,0.0005613904);
   ttH_LowRes_ptgg__80->SetBinError(3,0.0006059242);
   ttH_LowRes_ptgg__80->SetBinError(4,0.0006696049);
   ttH_LowRes_ptgg__80->SetBinError(5,0.0007815523);
   ttH_LowRes_ptgg__80->SetBinError(6,0.000691095);
   ttH_LowRes_ptgg__80->SetBinError(7,0.0007004346);
   ttH_LowRes_ptgg__80->SetBinError(8,0.0006622866);
   ttH_LowRes_ptgg__80->SetBinError(9,0.0006744397);
   ttH_LowRes_ptgg__80->SetEntries(1185);

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
