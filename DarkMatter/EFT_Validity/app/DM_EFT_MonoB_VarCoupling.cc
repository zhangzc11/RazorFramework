//C++ INCLUDES
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
//ROOT INCLUDES
#include "TROOT.h"
#include "TFile.h"
#include "TH1F.h"
#include "TString.h"
#include "TGraph.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TMultiGraph.h"
#include "TLatex.h"
#include "TPad.h"
#include "TMath.h"
//LOCAL INCLUDES
#include "outTree.hh"

//return lambda such that Qtr is less than lambda for "fraction" of the events
float FindLambda( float fraction, TH1F* h_qtr_sel,  TH1F* h_qtr_total );
struct dmStruct
{
  std::string type;
  
  double Lambda20;
  double Lambda40;
  double Lambda60;
  double Lambda80;
  
  float mass;
};

const float g_c = 1.0;


const float g_c1 = 1.0;
const float g_c2 = 2.0*TMath::Pi();
const float g_c3 = 3.0*TMath::Pi();
const float g_c4 = 4.0*TMath::Pi();


int main ( ){
  std::ifstream ifs ( "lists/list_DM_MonoB.list", std::ifstream::in );//input root file list
  std::string fname;
  TString RootFileName;
  TString outputDir = "Plots";
  std::map< float, dmStruct> Rmap;
  
  if ( ifs.is_open() )
    {
      while ( ifs.good() )
	{
	  ifs >> fname;
	  if ( ifs.eof() == true ) break;
	  int lp = fname.find( "mDm" ) + 3;
	  int hp = fname.find( "_testMC_0.root" ) - lp;
	  std::string DM_mass = fname.substr( lp, hp );
	  if ( DM_mass == "0p1" ) DM_mass = "0.1";
	  dmStruct aux;
	  aux.type = "monoB";
	  std::stringstream ss;
	  ss << DM_mass;
	  ss >> aux.mass;
	  std::cout << fname << " " << aux.type << " " << aux.mass << std::endl;
	  
	  RootFileName = fname.c_str();
	  TFile* f = new TFile( RootFileName );
	  TH1F* h_qtr_gen = (TH1F*)f->Get( "h_entries" );
	  TTree* tree = (TTree*)f->Get( "outTree" );
	  outTree* out = new outTree( tree );
	  
	  TH1F* h_qtr_sel = out->Loop( );
	  
	  //Filling New Map Entry
	  if ( Rmap.find( aux.mass ) == Rmap.end() )
	    {
	      Rmap[aux.mass] = aux;
	    }
	  //Filling Map Struct
	  Rmap[aux.mass].Lambda20 = FindLambda( 0.80, h_qtr_sel, h_qtr_gen )/g_c1;
	  Rmap[aux.mass].Lambda40 = FindLambda( 0.80, h_qtr_sel, h_qtr_gen )/g_c2;
	  Rmap[aux.mass].Lambda60 = FindLambda( 0.80, h_qtr_sel, h_qtr_gen )/g_c3;
	  Rmap[aux.mass].Lambda80 = FindLambda( 0.80, h_qtr_sel, h_qtr_gen )/g_c4;
	  
	}
    }//end reading file
  else
    {
      std::cerr << "[ERROR]: Unable to Open File" << std::endl;
    }
  
  const int n_mass = 8;
  float r_20[n_mass];
  float r_40[n_mass];
  float r_60[n_mass];
  float r_80[n_mass];
  float x_mass[] = { 0.1, 1.0, 10.0, 100.0, 200.0, 300.0, 400.0, 1000.0 };
  
  const int n_fform = 200;
  float x_mass_fine[n_fform]; 
  float loose_2m[n_fform];
  float loose_2mover4pi[n_fform];
  float step = (1000.0 - 0.0)/100.0;
  
  for ( int i = 100; i < n_fform; i++ ){
    x_mass_fine[i-100] = 1.0 + step*(i-100);
    x_mass_fine[i] = 1000.0 - step*(i-100);
    loose_2m[i-100] = 0.0;
    loose_2m[i] = 2.0*x_mass_fine[i];
    loose_2mover4pi[i-100] = 0.0; 
    loose_2mover4pi[i] = 2.0*x_mass_fine[i]/(4.0*3.141516);
  }

  TGraph* g_2m = new TGraph( n_fform, x_mass_fine, loose_2m );
  TGraph* g_2mover4pi = new TGraph( n_fform, x_mass_fine, loose_2mover4pi );

  int index = 0;
  for ( auto tmp : Rmap ){
    std::cout << "Mass: " << tmp.first << std::endl; 
    r_20[index] = tmp.second.Lambda20;
    r_40[index] = tmp.second.Lambda40;
    r_60[index] = tmp.second.Lambda60;
    r_80[index] = tmp.second.Lambda80;
    index++;
  }

  TGraph* g_v_r20 = new TGraph( n_mass, x_mass, r_20 );
  TGraph* g_v_r40 = new TGraph( n_mass, x_mass, r_40 );
  TGraph* g_v_r60 = new TGraph( n_mass, x_mass, r_60 );
  TGraph* g_v_r80 = new TGraph( n_mass, x_mass, r_80 );

  //Cosmetics V
  g_v_r20->SetLineColor( kBlue-9 );
  g_v_r20->SetLineStyle( 5 );
  g_v_r20->SetLineWidth( 2 );
  
  g_v_r40->SetLineColor( kBlue-9 );
  g_v_r40->SetLineStyle( 4 );
  g_v_r40->SetLineWidth( 2 );
  
  g_v_r60->SetLineColor( kBlue-9 );
  g_v_r60->SetLineStyle( 3 );
  g_v_r60->SetLineWidth( 2 );
  
  g_v_r80->SetLineColor( kBlue-9 );
  g_v_r80->SetLineStyle( 2 );
  g_v_r80->SetLineWidth( 2 );
  
  //Functional constraints Cosmetics
  g_2m->SetLineColor( kGray );
  g_2m->SetLineWidth( 2 );
  g_2m->SetFillStyle(3013);
  g_2m->SetFillColor( kGray );
  
  g_2mover4pi->SetLineColor( kGray+1 );
  g_2mover4pi->SetLineWidth( 2 );
  g_2mover4pi->SetFillColor( kGray+1 );
  
  ///////////////////////
  ////CreatingPLOT V///
  //////////////////////
  
  TFile* f3 = new TFile("inputData/btag/LimitSI.root");//Root file containing Razor TGraphs
  TGraph* Lc = (TGraph*)f3->Get("Lobs");
  TGraph* Lcom = (TGraph*)f3->Get("Lexp");

  TGraph* Lup = (TGraph*)f3->Get("Lup");
  TGraph* Ldown = (TGraph*)f3->Get("Ldown");

  for (int i = 0; i < Lc->GetN(); i++) Lc->GetY()[i] *= g_c;
  for (int i = 0; i < Lcom->GetN(); i++) Lcom->GetY()[i] *= g_c;
  for (int i = 0; i < Lup->GetN(); i++) Lup->GetY()[i] *= g_c;
  for (int i = 0; i < Ldown->GetN(); i++) Ldown->GetY()[i] *= g_c;
  
  TString labelX = "M_{#chi} (GeV)";
  TString labelY = "#Lambda (GeV)";
  int n = Lcom->GetN();
  double* x = Lup->GetX();
  double* yup = Lup->GetY();
  double* ydown = Ldown->GetY();

  TGraph* grshade = new TGraph(2*n);
  for(int i = 0; i < n; i++) {
    grshade->SetPoint(i,x[i],ydown[i]);
    grshade->SetPoint(n+i,x[n-i-1],yup[n-i-1]);
  }
  grshade->SetFillStyle(1001);
  grshade->SetFillColor(kOrange);
  grshade->SetLineColor(kOrange);
  grshade->SetTitle("");
  
  TCanvas *c = new TCanvas("c", "c",2119,33,800,700);
  c->SetHighLightColor(2);
  c->Range(-0.6543224,-1290.871,3.177829,8696.391);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetLogx();
  c->SetLeftMargin(0.16);
  c->SetRightMargin(0.04);
  c->SetTopMargin(0.07);
  c->SetBottomMargin(0.12);
  c->SetFrameBorderMode(0);
  c->SetFrameBorderMode(0);
  c->SetTickx();
  c->SetTicky();
  
  TMultiGraph* mg0 = new TMultiGraph();
  mg0->Add(grshade);
  
  mg0->Draw("af");
  mg0->GetYaxis()->SetRangeUser(1, 4.0e2);
  mg0->GetXaxis()->SetRangeUser(1.0, 1.0e3);
  mg0->GetXaxis()->SetTitle(labelX);
  mg0->GetYaxis()->SetTitle(labelY);
  mg0->GetYaxis()->SetTitleSize( 0.05 );
  mg0->GetXaxis()->SetTitleSize( 0.05 );
  mg0->GetYaxis()->SetLabelSize( 0.04 );
  mg0->GetXaxis()->SetLabelSize( 0.04 );
  mg0->GetXaxis()->SetTitleOffset(1.1);
  mg0->GetYaxis()->SetTitleOffset(1.45);
  g_2mover4pi->Draw( "f" );
  g_2m->Draw( "f" );

  Lc->SetLineWidth(3);
  Lc->SetLineStyle(1);
  Lc->SetLineColor(kBlue);

  Lcom->SetLineColor(kRed-7);
  Lcom->SetLineWidth(3);
  Lcom->SetLineStyle(1);

  Lup->SetLineColor(kRed-7);
  Lup->SetLineWidth(1);
  Lup->SetLineStyle(1);
  
  Ldown->SetLineColor(kRed-7);
  Ldown->SetLineWidth(1);
  Ldown->SetLineStyle(1);
  
  TMultiGraph* mg = new TMultiGraph();
  mg->Add( Lup );
  mg->Add( Lcom );
  mg->Add( Ldown ); 
  mg->Add( Lc );
  mg->Add( g_v_r80 );
  mg->Add( g_v_r60 );
  mg->Add( g_v_r40 );
  mg->Add( g_v_r20 );
  mg->Add( g_2mover4pi );
  mg->Add( g_2m );
  mg->Draw("L");
   
  
  //Legend
  TLegend *leg = new TLegend(0.185,0.5,0.59,0.79,NULL,"brNDC");//(xmin, ymin, xmax, ymax)
  leg->AddEntry("NULL", "Razor-0#mub(b) limit: Scalar EFT operator", "h");
  grshade->SetLineColor(kRed-7);
  grshade->SetLineWidth(3);
  grshade->SetLineStyle(1);
  leg->AddEntry(grshade, "Expected limit, with uncertainty" ,"lf");
  leg->AddEntry(Lc, "Observed limit" ,"l");
  leg->AddEntry(g_2m, "#Lambda < 2M_{#chi}" ,"lf");
  leg->AddEntry(g_2mover4pi, "#Lambda < M_{#chi}/2#pi" ,"lf");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->Draw();

  TLegend* leg2 = new TLegend(0.63,0.51,0.758,0.81,NULL,"brNDC");//(xmin, ymin, xmax, ymax)

  leg2->AddEntry("NULL", "R_{#Lambda} = 80%", "h");
  //leg2->AddEntry(g_v_r20, "g_{eff} = 1" ,"l");
  leg2->AddEntry(g_v_r40, "g_{eff} = 2#pi" ,"l");
  leg2->AddEntry(g_v_r60, "g_{eff} = 3#pi" ,"l");
  leg2->AddEntry(g_v_r80, "g_{eff} = 4#pi" ,"l");

  leg2->SetBorderSize(0);
  leg2->SetTextSize(0.03);
  leg2->SetLineColor(1);
  leg2->SetLineStyle(1);
  leg2->SetLineWidth(1);
  leg2->SetFillColor(0);
  leg2->SetFillStyle(1001);
  leg2->Draw();
  
  float lumix = 0.955;
   float lumiy = 0.945;
   float lumifont = 42;
   
   float cmsx = 0.33;
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
   latex.SetTextSize(0.75*cmsSize);    
   latex.DrawLatex(lumix, lumiy,lumiText);

   latex.SetTextFont(cmsTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(0.75*cmsSize);
   latex.DrawLatex(cmsx - 0.057, cmsy-0.008, CMSText);
   
   latex.SetTextFont(extraTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(extraTextSize);
   //latex.DrawLatex(extrax, extray, extraText);

  
  c->cd();
  c->RedrawAxis();
  c->SetLogx();
  //c->SetLogy();
  c->Update();
  
  /*
  c->SaveAs("PLOTS/test_MonoB_Lambda2Pi.pdf");
  c->SaveAs("PLOTS/test_MonoB_Lambda2Pi.C");
  */
  
  c->SaveAs(outputDir+"/Final_MonoB_R80percent.pdf");
  c->SaveAs(outputDir+"/Final_MonoB_R80percent.C");
  
  
  return 0;
}

float FindLambda( float fraction, TH1F* h_qtr_sel, TH1F* h_qtr_total )
{
  float total_sel = h_qtr_sel->Integral();
  float Lambda = 0.0;
  float eff_sel = h_qtr_sel->Integral()/h_qtr_total->Integral();
  
  for( int i = 2; i <= h_qtr_sel->GetNbinsX(); i++ ){
    float eff_sel_cut = h_qtr_sel->Integral( 1, i, "" )/h_qtr_total->Integral( 1, i, "" );
    float total_sel_cut = h_qtr_sel->Integral( 1, i, "" );
    float R_lambda = total_sel_cut*eff_sel_cut/(total_sel*eff_sel);
    if ( R_lambda > fraction )
      {
	Lambda = (float)50.0*i;
	break;
      }
  }//end bin loop
  
  return Lambda;
};

