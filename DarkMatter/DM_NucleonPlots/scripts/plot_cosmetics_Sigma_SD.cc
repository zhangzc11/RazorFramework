{ 

  TFile* f = new TFile("TGRAPHS/graph_SD.root");

  TGraph* Lmono = (TGraph*)f->Get("Monojet");
  TGraph* superk = (TGraph*)f->Get("superk");
  TGraph* simple2012 = (TGraph*)f->Get("simple2012");
  TGraph* coupp2012 = (TGraph*)f->Get("coupp2012");
  TGraph* icecube = (TGraph*)f->Get("icecube");
  
  TFile* f1 = new TFile("TGRAPHS/SD_Razor.root");
  TGraph* RSI = (TGraph*)f1->Get("RazorDM_SD_8TeV_Combined_Toys");
  TGraph* RSI_4pi = (TGraph*)f1->Get("RazorDM_SD_8TeV_Combined_Toys");
  for (int i = 0; i < RSI_4pi->GetN(); i++) RSI_4pi->GetY()[i] *= 1.0/pow(4*TMath::Pi(), 4);

  TFile* f2 = new TFile("TGRAPHS/SD_Graphs_NEW_EXP_CWR.root");
  TGraph* XENON_SD = (TGraph*)f2->Get("XENON_SD_FINAL");
  TGraph* PICO_SD = (TGraph*)f2->Get("PICO");
  TGraph* PICASSO_SD = (TGraph*)f2->Get("PICASSO");
  
  TString labelX = "M_{#chi} (GeV)";
  TString labelY = "#sigma_{N#chi} (cm^{2})";
  
  TCanvas *C = new TCanvas("c", "c",2119,33,800,700);
  C->SetHighLightColor(2);
  C->Range(-0.6543224,-1290.871,3.177829,8696.391);
  C->SetFillColor(0);
  C->SetBorderMode(0);
  C->SetBorderSize(2);
  C->SetLogx();
  C->SetLeftMargin(0.15);
  C->SetRightMargin(0.04);
  C->SetTopMargin(0.07);
  C->SetBottomMargin(0.12);
  C->SetFrameBorderMode(0);
  C->SetFrameBorderMode(0);

  
  Lmono->SetLineColor(kGreen+2);
  Lmono->SetLineWidth(2);
  Lmono->SetLineStyle(2);
  
  RSI->SetTitle("");
  RSI->SetLineColor(kRed);
  RSI->SetLineWidth(3);
  RSI->SetLineStyle(1);

  RSI_4pi->SetTitle("");
  RSI_4pi->SetLineColor(kRed);
  RSI_4pi->SetLineWidth(3);
  RSI_4pi->SetLineStyle(4);
  
  icecube->SetLineColor(kAzure+1);
  icecube->SetLineWidth(3);
  icecube->SetLineStyle(4);

  coupp2012->SetLineColor(kBlue-7);
  coupp2012->SetLineWidth(3);
  coupp2012->SetLineStyle(6);
  
  simple2012->SetLineColor(kOrange-3);
  simple2012->SetLineWidth(3);
  simple2012->SetLineStyle(2);
  
  superk->SetLineColor(kViolet-2);
  superk->SetLineWidth(3);
  superk->SetLineStyle(6);

  XENON_SD->SetLineColor( kAzure+6 );
  XENON_SD->SetLineWidth( 3 );
  XENON_SD->SetLineStyle( 5 );
  
  PICO_SD->SetLineColor( kGreen-6 );
  PICO_SD->SetLineWidth( 3 );
  PICO_SD->SetLineStyle( 2 );

  PICASSO_SD->SetLineColor( kBlue-2 );
  PICASSO_SD->SetLineWidth( 3 );
  PICASSO_SD->SetLineStyle( 2 );
  
  /*
  RSI_4pi->SetTitle("");
  RSI_4pi->Draw("AL");
  RSI_4pi->SetMinimum(1e-47);
  RSI_4pi->SetMaximum(1e-32);
  RSI_4pi->GetXaxis()->SetTitle(labelX);
  RSI_4pi->GetYaxis()->SetTitle(labelY);
  RSI_4pi->GetXaxis()->SetTitleSize(.05);
  RSI_4pi->GetYaxis()->SetTitleSize(.05);
  RSI_4pi->GetXaxis()->SetLabelSize(.04);
  RSI_4pi->GetYaxis()->SetLabelSize(.04);
  RSI_4pi->GetXaxis()->SetTitleOffset(1.1);
  RSI_4pi->GetYaxis()->SetTitleOffset(1.4);
  */
  
  RSI->SetTitle("");
  RSI->Draw("AL");
  RSI->SetMinimum(1e-46);
  RSI->SetMaximum(1e-30);
  RSI->GetXaxis()->SetTitle(labelX);
  RSI->GetYaxis()->SetTitle(labelY);
  RSI->GetXaxis()->SetTitleSize(.05);
  RSI->GetYaxis()->SetTitleSize(.05);
  RSI->GetXaxis()->SetLabelSize(.04);
  RSI->GetYaxis()->SetLabelSize(.04);
  RSI->GetXaxis()->SetTitleOffset(1.1);
  RSI->GetYaxis()->SetTitleOffset(1.4);

  TMultiGraph *mg = new TMultiGraph();
  
  //mg->Add(Lmono, "L");
  mg->Add(RSI,"L");
  
  mg->Add(icecube,"L");
  mg->Add(simple2012,"L");
  mg->Add(superk,"L");
  mg->Add(coupp2012,"L");
  mg->Add( XENON_SD, "L" );
  mg->Add( PICO_SD, "L" );
  mg->Add( PICASSO_SD, "L" );
  
  mg->Draw("L");

  TLatex* tex2 = new TLatex(0.59,0.66,"#hat{O}_{AV}: #frac{(#bar{#chi}#gamma_{#mu}#gamma_{5}#chi) (#bar{q}#gamma^{#mu}#gamma_{5}q)}{#Lambda^{2}}");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetTextColor(kPink+4);
  tex2->SetTextAlign(22);
  tex2->SetTextSize(0.03);
  tex2->SetLineWidth(0.001);
  tex2->Draw();

  TLatex* tex1 = new TLatex(0.59,0.73,"Spin Dependent");
  tex1->SetNDC();
  tex1->SetTextFont(42);
  tex1->SetTextAlign(22);
  tex1->SetTextSize(0.03);
  tex1->SetLineWidth(0.001);
  tex1->Draw();

  //TLegend *leg = new TLegend(0.45, 0.75, 0.65, 0.87, NULL,"brNDC");
  TLegend *leg = new TLegend(0.48, 0.78, 0.75, 0.85, NULL,"brNDC");
  leg->AddEntry(RSI, "Razor-0#mu" ,"l");
  //leg->AddEntry(RSI, "Razor DM, g_{eff} = 1" ,"l");
  //leg->AddEntry(RSI_4pi, "Razor DM, g_{eff} = 4#pi","l");
  //leg->AddEntry(Lmono, "CMS Monojet" ,"l");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->Draw();
  
  
  leg = new TLegend(0.73, 0.65, 0.95, 0.92);
  leg->AddEntry(icecube, "IceCube W^{+}W^{-}" ,"l");
  leg->AddEntry(simple2012, "SIMPLE 2012" ,"l");
  leg->AddEntry(coupp2012, "COUPP 2012" ,"l");
  leg->AddEntry(superk, "Super-K W^{+}W^{-}" ,"l");
  leg->AddEntry( XENON_SD, "XENON 100", "l" );
  leg->AddEntry( PICO_SD, "PICO", "l" );
  leg->AddEntry( PICASSO_SD, "PICASSO", "l" );
  //leg->AddEntry(cdmsII, "CDMSII" ,"l");
  //leg->AddEntry(lux2013, "LUX 2013" ,"l");
  
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->Draw();

  float lumix = 0.955;
   float lumiy = 0.945;
   float lumifont = 42;
   
   float cmsx = 0.3;
   float cmsy = 0.875;
   TString CMSText = "CMS";
   float cmsTextFont   = 61;  // default is helvetic-bold
   float extrax = cmsx + 0.078;
   float extray = cmsy - 0.04;
   TString extraText   = "Preliminary";
   float extraTextFont = 52;  // default is helvetica-italics
   // ratio of "CMS" and extra text size
   float extraOverCmsTextSize  = 0.76;
   float cmsSize = 0.06;
   TString lumiText = "18.8 fb^{-1} (8 TeV)";
   TLatex latex;
   latex.SetNDC();
   latex.SetTextAngle(0);
   latex.SetTextColor(kBlack);    
   float extraTextSize = extraOverCmsTextSize*cmsSize;
   latex.SetTextFont(lumifont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(cmsSize);    
   latex.DrawLatex(lumix, lumiy,lumiText);

   latex.SetTextFont(cmsTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(cmsSize);
   latex.DrawLatex(cmsx, cmsy, CMSText);
   
   latex.SetTextFont(extraTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(extraTextSize);
   //latex.DrawLatex(extrax, extray, extraText);

  //pad1->SetLogy();
  //pad1->SetLogx();
  //pad1->Update();
  
  C->SetLogy();
  C->SetLogx();
  C->Update();
  
  C->SaveAs("PLOTS/SD_TOYS_FINAL_March4_RazorOnly.pdf");
  C->SaveAs("PLOTS/SD_TOYS_FINAL_March4_RazorOnly.png");
  C->SaveAs("PLOTS/SD_TOYS_FINAL_March4_RazorOnly.C");

}
