#include <iostream>
#include <map>
#include <fstream>
#include "math.h"

//ROOT
#include "TROOT.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "TMultiGraph.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TEfficiency.h"
#include "TCanvas.h"
#include "TLorentzVector.h"


bool CreateLambdaLimits(float*, float*, float*, float*, float*);
bool CreateXsecLimits(float*, float*);

int main(){

  gROOT->Reset(); 
  
  std::map<float,double> b_map_xs;
  std::map<float,double> b_map_obs;
  std::map<float,double> b_map_exp;
  std::map<float,double> b_map_up;
  std::map<float,double> b_map_down;
  

  float mass[] = {0.1, 1.0, 10.0, 100.0, 200.0, 300.0, 400.0, 1000.0};
  double xs[] = {3.4031E-8, 3.403E-8, 3.363E-8, 1.826E-8, 7.505E-9, 3.107E-9, 1.319E-9, 1.013E-11};
  float scale_xsec = 5.0;//Scale \mu to xsec (need to know the xsec used to compute limits)

  for(int i = 0; i < 8; i++){
    b_map_xs[mass[i]] = xs[i];
  }
  
    
  std::ifstream mfile0("LimitInputFromCombine/limits_100k_bcorr_attempt3.txt");
  std::ofstream out1("Lambda/RazorDM_b_8TeV_Comb.txt");
  std::ofstream out2("Lambda/RazorDM_b_8TeV_Expected_Comb.txt");
  std::ofstream out3("Lambda/RazorDM_b_8TeV_up_Comb.txt");
  std::ofstream out4("Lambda/RazorDM_b_8TeV_down_Comb.txt");
  
  std::ofstream out5("xsec/RazorDM_b_8TeV_Comb.txt");

  std::string dm_name;
  double limit_90, expected, exp_up, exp_down;
  int ctr_xs = 0;
  
  out1 << "weight 1.0\n";
  out2 << "weight 1.0\n";
  out3 << "weight 1.0\n";
  out4 << "weight 1.0\n";
  out5 << "weight 1.0\n";
  
  if (mfile0.is_open()){
    while ( mfile0.good() ){
      std::cout << "==========================================================" << std::endl;
      mfile0 >> dm_name >> limit_90 >> expected >> exp_up >> exp_down;
      limit_90 *= scale_xsec;
      expected *= scale_xsec;
      exp_up *= scale_xsec;
      exp_down *= scale_xsec;
      if(mfile0.eof())break;
      
      if(dm_name.find("mDm") != std::string::npos){
	std::string sub = dm_name.substr(dm_name.find("mDm")+3,dm_name.find("_")-dm_name.find("mDm")-3);
	std::cout << "SUB: " << sub << std::endl;
	
	float DM_mass;
	if(sub.find("0p1") != std::string::npos){
	  DM_mass = 0.1;
	  std::cout << "Mass: " << DM_mass << std::endl;
	}else{
	  DM_mass = atoi(sub.c_str());
	  std::cout << "Mass: " << DM_mass << std::endl;
	}
	b_map_obs[DM_mass] = pow(b_map_xs[DM_mass]/limit_90, 0.1666666667)*1000.;
	std::cout << "xsec: " << b_map_obs[DM_mass] << std::endl;
	b_map_exp[DM_mass] = pow(b_map_xs[DM_mass]/expected, 0.1666666667)*1000.;
	b_map_up[DM_mass] = pow(b_map_xs[DM_mass]/exp_up, 0.1666666667)*1000.;
	b_map_down[DM_mass] = pow(b_map_xs[DM_mass]/exp_down, 0.1666666667)*1000.;
      }

      ctr_xs++;
    }
    
  }else{
    std::cout << "Unable to open the file" << std::endl;
  }
  
  mfile0.close();
  std::cout << "size: " << b_map_obs.size() << std::endl;
  for(int j = 0; j < b_map_obs.size(); j++){
    out1 << mass[j] << "\t" << b_map_obs[mass[j]] << "\n"; 
    out2 << mass[j] << "\t" << b_map_exp[mass[j]] << "\n"; 
    out3 << mass[j] << "\t" << b_map_up[mass[j]] << "\n"; 
    out4 << mass[j] << "\t" << b_map_down[mass[j]] << "\n"; 
    double SI = (2*1e-38)*pow(30.0/b_map_obs[mass[j]], 6);
    out5 << mass[j] << "\t" << SI << "\n";
  }
  
  out1.close();
  out2.close();
  out3.close();
  out4.close();
  out5.close();

  float obs_l[8];
  float exp_l[8];
  float up_l[8];
  float down_l[8];
  float SI_l[8];
  
  for(int j = 0; j < b_map_obs.size(); j++){
    obs_l[j] = b_map_obs[mass[j]];
    exp_l[j] = b_map_exp[mass[j]];
    up_l[j] = b_map_up[mass[j]];
    down_l[j] = b_map_down[mass[j]];
    SI_l[j] = (2*1e-38)*pow(30.0/b_map_obs[mass[j]], 6);
  }

  
  CreateLambdaLimits(mass, obs_l, exp_l, up_l, down_l);
  CreateXsecLimits(mass, SI_l);
  
  return 0;
}

bool CreateLambdaLimits(float* mass, float* obs_l, float* exp_l, float* up_l, float* down_l){
  TString labelX = "M_{#chi} (GeV)";
  TString labelY = "#Lambda (GeV)";
  
  //Creating TGraphs
  TGraph* Lobs = new TGraph(8, mass, obs_l);
  TGraph* Lexp = new TGraph(8, mass, exp_l);
  TGraph* Lup = new TGraph(8, mass, up_l);
  TGraph* Ldown = new TGraph(8, mass, down_l);

  int n = Lobs->GetN();
 
  TGraph *grshade = new TGraph(2*n);
  for(int i = 0; i < n; i++) {
    grshade->SetPoint(i, mass[i], down_l[i]);
    grshade->SetPoint(n+i, mass[n-i-1], up_l[n-i-1]);
  }
  
  /*
  for(int i = 0; i < n; i++){
    Gr->SetPoint(k,k,2);
    Gr->SetPointError(k,0,0.2); 
  }
  */
  grshade->SetFillStyle(3013);
  grshade->SetFillColor(kRed-10);
  grshade->SetTitle("");
  
  TCanvas* C = new TCanvas("C", "C", 640, 640);
  C->cd();
  
  TMultiGraph *mg0 = new TMultiGraph();
  mg0->Add(grshade);
  
  mg0->Draw("aF");
  mg0->GetYaxis()->SetRangeUser(10, 100);
  mg0->GetXaxis()->SetTitle(labelX);
  mg0->GetYaxis()->SetTitle(labelY);
  mg0->GetXaxis()->SetTitleOffset(1.1);
  mg0->GetXaxis()->CenterTitle();
  mg0->GetYaxis()->SetTitleOffset(1.1);
  mg0->GetYaxis()->CenterTitle();

  
  Lobs->SetLineWidth(2);
  Lobs->SetLineStyle(1);
  Lobs->SetLineColor(kBlue);

  Lexp->SetLineColor(kRed-7);
  Lexp->SetLineWidth(3);
  Lexp->SetLineStyle(2);

  Lup->SetLineColor(kRed-7);
  Lup->SetLineWidth(2);
  Lup->SetLineStyle(2);
  
  Ldown->SetLineColor(kRed-7);
  Ldown->SetLineWidth(2);
  Ldown->SetLineStyle(2);

  TMultiGraph *mg = new TMultiGraph();
  mg->Add(Lup);
  mg->Add(Lexp);
  mg->Add(Ldown); 
  mg->Add(Lobs);
  mg->Draw("C");

  TLatex *t = new TLatex();
  t->SetNDC();
  t->SetTextAlign(22);
  t->SetTextSize(0.03);
  t->DrawLatex(0.23,0.92,"CMS Preliminary");
  t->DrawLatex(0.41,0.92,", #sqrt{s} = 8 TeV");
  
  TLegend* leg = new TLegend(0.41, 0.75, 0.89, 0.89);//(xmin, ymin, xmax, ymax)
  leg->AddEntry(Ldown, "Razor razor-b Expected -1#sigma (18.84 fb^{-1})" ,"l");
  leg->AddEntry(Lexp, "Razor razor-b Expected (18.84 fb^{-1})" ,"l");
  leg->AddEntry(Lup, "Razor razor-b Expected +1#sigma (18.84 fb^{-1})" ,"l");
  leg->AddEntry(Lobs, "Razor razor-b Observed (18.84 fb^{-1})" ,"l");
  
  
  leg->SetFillColor(0);
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetTextSize(.022);
  leg->SetFillColor(0);
  leg->Draw();

  C->SetLogy();
  C->SetLogx();
  
  C->Update();

  TString splot = "_100kToys";
  C->SaveAs("Lambda/Razor-b_LambdaLimit"+splot+".pdf");
  C->SaveAs("Lambda/Razor-b_LambdaLimit"+splot+".png");
  C->SaveAs("Lambda/Razor-b_LambdaLimit"+splot+".C");

  TFile* fout = new TFile("../TGRAPHS/mono-b_LimitsSI.root", "recreate");
  Lobs->Write("Lobs");
  Lexp->Write("Lexp");
  Lup->Write("Lup");
  Ldown->Write("Ldown");
  fout->Close();
  
  return true;
};

bool CreateXsecLimits(float* mass, float* limit){

  //Creating TGraphs
  TGraph* RSI = new TGraph(8, mass, limit);
  RSI->SetLineColor(kRed);
  RSI->SetLineWidth(2);
  RSI->SetLineStyle(1);

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
  
  TFile* f = new TFile("../TGRAPHS/graph_SI.root");
  TGraph* xenon100 = (TGraph*)f->Get("xenon100");
  TGraph* simple2012 = (TGraph*)f->Get("simple2012");
  TGraph* coupp2012 = (TGraph*)f->Get("coupp2012");
  TGraph* superCDMS = (TGraph*)f->Get("superCDMS");
  TGraph* cdmsII = (TGraph*)f->Get("cdmsII");
  TGraph* lux2013 = (TGraph*)f->Get("lux2013");
  
  TGraph* RSI_4pi = new TGraph(*RSI);
  
  for (int i = 0; i < RSI->GetN(); i++) RSI->GetY()[i] *= 1.0;
  for (int i = 0; i < RSI_4pi->GetN(); i++) RSI_4pi->GetY()[i] *= 1.0/pow(4*TMath::Pi(), 6);
  
  /*
  Lmono->SetLineColor(kBlue-8);
  Lmono->SetLineWidth(3);
  Lmono->SetLineStyle(2);
  */
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
  

  RSI->SetTitle("");
  RSI->Draw("AL");
  RSI->SetMinimum(1e-47);
  RSI->SetMaximum(1e-30);
  RSI->GetXaxis()->SetTitle(labelX);
  RSI->GetYaxis()->SetTitle(labelY);
  RSI->GetXaxis()->SetTitleSize(.05);
  RSI->GetYaxis()->SetTitleSize(.05);
  RSI->GetXaxis()->SetLabelSize(.04);
  RSI->GetYaxis()->SetLabelSize(.04);
  RSI->GetXaxis()->SetTitleOffset(1.1);
  RSI->GetYaxis()->SetTitleOffset(1.4);
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
  
  //TLatex* tex2 = new TLatex(0.2,0.65,"Scalar: m_{q}#frac{(#bar{#chi}#chi) (#bar{q}q)}{#Lambda^{3}}");
  TLatex* tex2 = new TLatex(0.2,0.63,"#hat{O}_{S}: m_{q}#frac{(#bar{#chi}#chi) (#bar{q}q)}{#Lambda^{3}}");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetTextColor(kPink+4);
  tex2->SetTextSize(0.03);
  tex2->SetLineWidth(0.001);
  tex2->Draw();

  TLatex* tex1 = new TLatex(0.2,0.7,"Spin Independent");
  tex1->SetNDC();
  tex1->SetTextFont(42);
  tex1->SetTextAlign(11);
  tex1->SetTextSize(0.03);
  tex1->SetLineWidth(0.001);
  tex1->Draw();

  //TLegend* leg = new TLegend(0.7, 0.65, 0.83, 0.89);//(xmin, ymin, xmax, ymax)
  TLegend *leg = new TLegend(0.52, 0.76, 0.72, 0.82, NULL,"brNDC");
  leg->AddEntry(RSI, "Razor-b DM" ,"l");
  //leg->AddEntry(RSI_4pi, "Razor-b DM, g_{eff} = 4#pi","l");
  //leg->AddEntry(Lmono, "CMS Monojet" ,"l");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->Draw();
  
  leg = new TLegend(0.73, 0.65, 0.955, 0.92);
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
   TString lumiText = "18.84 fb^{-1} (8 TeV)";
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
   /*
   C->SaveAs("xsec/SI_SigmaLimit_TOYS_SEP_razorB.pdf");
   C->SaveAs("xsec/SI_SigmaLimit_TOYS_SEP_razorB.png");
   C->SaveAs("xsec/SI_SigmaLimit_TOYS_SEP_razorB.C");
   */
   C->SaveAs("xsec/SI_SigmaLimit_TOYS_razorB_March4_bugfixed.pdf");
   C->SaveAs("xsec/SI_SigmaLimit_TOYS_razorB_March4_bugfixed.png");
   C->SaveAs("xsec/SI_SigmaLimit_TOYS_razorB_March4_bugfixed.C");
   
  return 0;
};
