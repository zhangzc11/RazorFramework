//C++ INCLUDES
#include <fstream>
//ROOT INCLUDES
#include <TBranch.h>
#include <TCanvas.h>
#include <TStyle.h>
//LOCAL INCLUDES
#include "PlotCosmetics.hh"

const float lumi = 5;
//Axis
const float axisTitleSize = 0.06;
const float axisTitleOffset = .8;
//Margins
const float leftMargin   = 0.12;
const float rightMargin  = 0.05;
const float topMargin    = 0.07;
const float bottomMargin = 0.12;

//CMS STANDARD
TString CMSText = "CMS";
TString extraText   = "Preliminary";
//TString lumiText = "5 fb^{-1} (13 TeV)";
TString lumiText = "19.8 fb^{-1} (8 TeV)";

bool MakeCustomMrRsq( TH2F* h, TString outName )
{
  TCanvas* c = new TCanvas( "c", "c", 2119, 33, 800, 700 );
  c->SetHighLightColor(2);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetLeftMargin( leftMargin );
  c->SetRightMargin( rightMargin );
  c->SetTopMargin( topMargin );
  c->SetBottomMargin( bottomMargin );
  c->SetFrameBorderMode(0);
  c->SetFrameBorderMode(0);

  gStyle->SetPaintTextFormat("4.3f");
  
  h->SetStats(0);
  h->SetTitle("");
  h->GetXaxis()->SetTitleSize( axisTitleSize );
  h->GetXaxis()->SetTitleOffset( axisTitleOffset );
  h->GetYaxis()->SetTitleSize( axisTitleSize );
  h->GetYaxis()->SetTitleOffset( axisTitleOffset );
  h->SetXTitle("M_{R} (GeV)");
  h->SetYTitle("R^{2} (GeV)");
  h->SetMarkerSize( 1.5 );
  h->Draw("colzTEXTE");
  c->SetLogy();
  c->SetLogx();
  c->SaveAs( outName+".pdf" );
  c->SaveAs( outName+".C" );
  return true;
};

bool MakeStackPlot( THStack* s, TString var, TString outName, TLegend* leg )
{
  TCanvas* c = new TCanvas( "c", "c", 2119, 33, 800, 700 );
  c->SetHighLightColor(2);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetLeftMargin( leftMargin );
  c->SetRightMargin( rightMargin );
  c->SetTopMargin( topMargin );
  c->SetBottomMargin( bottomMargin );
  c->SetFrameBorderMode(0);
  c->SetFrameBorderMode(0);
  
  s->SetTitle("");
  s->Draw();
  s->GetXaxis()->SetTitleSize( axisTitleSize );
  s->GetXaxis()->SetTitleOffset( axisTitleOffset );
  s->GetYaxis()->SetTitleSize( axisTitleSize );
  s->GetYaxis()->SetTitleOffset( axisTitleOffset );
  if( var == "rsq" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 1.0);
      s->GetXaxis()->SetTitle("R^{2}");
      s->SetMinimum( 1e-1 );
      s->SetMaximum( 1e1*s->GetMaximum() );
      s->GetYaxis()->SetTitle("events / 0.04");
      c->SetLogy();
      c->Update();
    }
  else if ( var == "mr" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 2000.0);
      s->GetXaxis()->SetTitle("M_{R} (GeV)");
      s->GetYaxis()->SetTitle("events / 100 (GeV)");
      s->SetMinimum( 1e-1 );
      s->SetMaximum( 1e1*s->GetMaximum() );
      c->SetLogy();
      c->Update();
    }
  else if ( var == "mgg" )
    {
      s->GetXaxis()->SetRangeUser( 103., 160. );
      s->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
      s->GetYaxis()->SetTitle("events / 1 (GeV)");
      s->SetMinimum( 0 );
      s->SetMaximum( 2*s->GetMaximum() );
    }
    
  if ( leg != NULL )
    {
      leg->SetBorderSize(0);
      //leg->SetTextSize(0.03);
      leg->SetLineColor(1);
      leg->SetLineStyle(1);
      leg->SetLineWidth(1);
      leg->SetFillColor(0);
      leg->SetFillStyle(1001);
      leg->Draw();
    }
  AddCMS( c );
  c->SaveAs( outName+".pdf" );
  c->SaveAs( outName+".C" );
  delete c;
  return true;
};

TH1F* GetStyledHisto( TH1F* h, Process process )
{
  TH1F* h_n = new TH1F( *h );
  SetHistoStyle( h_n, process );
  return h_n;
};

bool SetHistoStyle( TH1F* h, Process process )
{
  if ( process == Process::gammaJet )
    {
      h->SetFillColor( kAzure + 7 );
      h->SetLineColor( kAzure + 7 );
    }
  else if ( process == Process::diphoton )
    {
      h->SetFillColor( kAzure - 9 );
      h->SetLineColor( kAzure - 9 );
    }
  else if ( process == Process::ttH )
    {
      h->SetFillColor( kViolet + 6 );
      h->SetLineColor( kViolet + 6 );
    }
  else if ( process == Process::ggH )
    {
      h->SetFillColor( kGreen + 1 );
      h->SetLineColor( kGreen + 1 );
    }
  else if ( process == Process::vH )
    {
      h->SetFillColor( kOrange + 7 );
      h->SetLineColor( kOrange + 7 );
    }
  else if ( process == Process::vbfH )
    {
      h->SetFillColor( kOrange - 2 );
      h->SetLineColor( kOrange - 2 );
    }
  else
    {
      std::cout << "[WARNING]: Setting Style, process not found" << std::endl;
      std::cout << "[WARNING]: Setting Fill Color to kGray" << std::endl;
      h->SetFillColor( kGray );
    }
  return true;
};


bool AddLegend( TH1F* h, TLegend* leg, Process process )
{
  if ( leg == NULL ) return false;

  if ( process == Process::gammaJet )
    {
      leg->AddEntry( h, "#gamma + jets", "f" );
      return true;
    }
  else if ( process == Process::diphoton )
    {
      leg->AddEntry( h, "#gamma#gamma + jets", "f" );
      return true;
    }
  else if ( process == Process::ttH )
    {
      leg->AddEntry( h, "t#bar{t}H + jets", "f" );
      return true;
    }
  else if ( process == Process::ggH )
    {
      leg->AddEntry( h, "ggH + jets", "f" );
      return true;
    }
  else if ( process == Process::vH )
    {
      leg->AddEntry( h, "VH + jets", "f" );
      return true;
    }
  else if ( process == Process::vbfH )
    {
      leg->AddEntry( h, "VBFH + jets", "f" );
      return true;
    }
  else
    {
      std::cout << "[WARNING]: unrecognized process, setting unknown legend" << std::endl;
      leg->AddEntry( h, "unknown", "f" );
      return false;
    }
  
  return true;
};

bool AddCMS( TCanvas* C )
{
  C->cd();
  float lumix = 0.955;
  float lumiy = 0.945;
  float lumifont = 42;
  
  float cmsx = 0.33;
  float cmsy = 0.875;
  float cmsTextFont   = 61;  // default is helvetic-bold
  float extrax = cmsx + 0.078;
  float extray = cmsy - 0.04;
  float extraTextFont = 52;  // default is helvetica-italics
  // ratio of "CMS" and extra text size
  float extraOverCmsTextSize  = 0.76;
  float cmsSize = 0.06;
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
  return true;
};
