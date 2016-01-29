{

  TFile* f = new TFile("TGRAPHS/graph_SI.root");

  TGraph* Lmono = (TGraph*)f->Get("Monojet");
   
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
  TString labelX = "M_{#chi} (GeV)";
  TString labelY = "#sigma_{N-#chi} (cm^{2})";
  //TString labelY = "#chi-Nucleon Cross Section (cm^{2})";
  
  //TPad *pad1 = new TPad("pad1","pad1",.0,0.,1,1);
  //pad1->SetLeftMargin(0.12);
  //pad1->SetRightMargin(0.04);
  //pad1->Draw();
  //pad1->cd();
  
  f = new TFile("TGRAPHS/graph_SI.root");
  TGraph* xenon100 = (TGraph*)f->Get("xenon100");
  TGraph* simple2012 = (TGraph*)f->Get("simple2012");
  TGraph* coupp2012 = (TGraph*)f->Get("coupp2012");
  TGraph* superCDMS = (TGraph*)f->Get("superCDMS");
  TGraph* cdmsII = (TGraph*)f->Get("cdmsII");
  TGraph* lux2013 = (TGraph*)f->Get("lux2013");
  
  TFile* f1 = new TFile("TGRAPHS/SI_Razor.root");
  TGraph* RSI = (TGraph*)f1->Get("RazorDM_SI_8TeV_Combined_Toys");
  TGraph* RSI_4pi = (TGraph*)f1->Get("RazorDM_SI_8TeV_Combined_Toys");
  for (int i = 0; i < RSI_4pi->GetN(); i++) RSI_4pi->GetY()[i] *= 1.0/pow(4*TMath::Pi(), 4);
  
  Lmono->SetLineColor(kBlue-8);
  Lmono->SetLineWidth(3);
  Lmono->SetLineStyle(2);
  
  RSI->SetTitle("");
  RSI->SetLineColor(kRed);
  RSI->SetLineWidth(3);
  RSI->SetLineStyle(1);
  
  RSI_4pi->SetTitle("");
  RSI_4pi->SetLineColor(kRed);
  RSI_4pi->SetLineWidth(3);
  RSI_4pi->SetLineStyle(4);
  
  xenon100->SetLineColor(kAzure+7);
  xenon100->SetLineWidth(4);
  xenon100->SetLineStyle(3);
  
  coupp2012->SetLineColor(kBlue);
  coupp2012->SetLineWidth(3);
  coupp2012->SetLineStyle(6);
  
  simple2012->SetLineColor(kGray+1);
  simple2012->SetLineWidth(3);
  simple2012->SetLineStyle(1);
  
  superCDMS->SetLineColor(kViolet-2);
  superCDMS->SetLineWidth(3);
  superCDMS->SetLineStyle(6);

  cdmsII->SetLineColor(kOrange+6);
  cdmsII->SetLineWidth(3);
  cdmsII->SetLineStyle(1);
  
  lux2013->SetLineColor(kGreen+2);
  lux2013->SetLineWidth(3);
  lux2013->SetLineStyle(1);
  

  RSI_4pi->SetTitle("");
  RSI_4pi->Draw("AL");
  RSI_4pi->SetMinimum(1e-47);
  RSI_4pi->SetMaximum(1e-33);
  RSI_4pi->GetXaxis()->SetTitle(labelX);
  RSI_4pi->GetYaxis()->SetTitle(labelY);
  RSI_4pi->GetXaxis()->SetTitleSize(.05);
  RSI_4pi->GetYaxis()->SetTitleSize(.05);
  RSI_4pi->GetXaxis()->SetLabelSize(.04);
  RSI_4pi->GetYaxis()->SetLabelSize(.04);
  RSI_4pi->GetXaxis()->SetTitleOffset(1.1);
  RSI_4pi->GetYaxis()->SetTitleOffset(1.4);
  //pad1->Update();
  
  TMultiGraph *mg = new TMultiGraph();
  
  //mg->Add(Lmono, "L");
  mg->Add(RSI,"L");
  
  mg->Add(lux2013,"L");
  
  mg->Add(xenon100,"L");
  mg->Add(simple2012,"L");
  mg->Add(superCDMS,"L");
  mg->Add(coupp2012,"L");
  mg->Add(cdmsII, "L");
  mg->Draw("L");
  
  TLatex* tex2 = new TLatex(0.75,0.17,"Vector: #frac{(#bar{#chi}#gamma_{#mu}#chi) (#bar{q}#gamma^{#mu}q)}{#Lambda^{2}}");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetTextColor(kPink+4);
  tex2->SetTextAlign(22);
  tex2->SetTextSize(0.03);
  tex2->SetLineWidth(0.001);
  tex2->Draw();

  TLatex* tex1 = new TLatex(0.3,0.17,"Spin Independent");
  tex1->SetNDC();
  tex1->SetTextFont(42);
  tex1->SetTextAlign(11);
  tex1->SetTextSize(0.03);
  tex1->SetLineWidth(0.001);
  tex1->Draw();

  //TLegend* leg = new TLegend(0.7, 0.65, 0.83, 0.89);//(xmin, ymin, xmax, ymax)
  TLegend *leg = new TLegend(0.4, 0.71, 0.6, 0.87, NULL,"brNDC");
  leg->AddEntry(RSI, "CMS RazorDM, g_{eff} = 1" ,"l");
  leg->AddEntry(RSI_4pi, "CMS RazorDM, g_{eff} = 4#pi","l");
  leg->AddEntry(Lmono, "CMS Monojet" ,"l");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->Draw();
  
  leg = new TLegend(0.73, 0.65, 0.96, 0.92);
  leg->AddEntry(xenon100, "XENON 100" ,"l");
  leg->AddEntry(simple2012, "SIMPLE 2012" ,"l");
  leg->AddEntry(coupp2012, "COUPP 2012" ,"l");
  leg->AddEntry(superCDMS, "superCDMS" ,"l");
  leg->AddEntry(cdmsII, "CDMSII" ,"l");
  leg->AddEntry(lux2013, "LUX 2013" ,"l");
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
   
   float cmsx = 0.28;
   float cmsy = 0.875;
   TString CMSText = "CMS";
   float cmsTextFont   = 61;  // default is helvetic-bold
   float extrax = cmsx + 0.067;
   float extray = cmsy - 0.04;
   TString extraText   = "Preliminary";
   float extraTextFont = 52;  // default is helvetica-italics
   // ratio of "CMS" and extra text size
   float extraOverCmsTextSize  = 0.76;
   float cmsSize = 0.05;
   TString lumiText = "18.84 fb^{-1} (8TeV)";
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
   latex.DrawLatex(extrax, extray, extraText);

   //pad1->SetLogy();
   //pad1->SetLogx();
   //pad1->Update();
   C->SetLogy();
   C->SetLogx();
   C->Update();
  C->SaveAs("SI_TOYS_FINAL_Jan2015.pdf");
  C->SaveAs("SI_TOYS_FINAL_Jan2015.png");
  C->SaveAs("SI_TOYS_FINAL_Jan2015.C");

}
