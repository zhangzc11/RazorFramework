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
const float rightMargin  = 0.12;
const float topMargin    = 0.07;
const float bottomMargin = 0.12;
  
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
  
  if( var == "rsq" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 1.0);
    }
  else if ( var == "mr" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 4000.0);
      s->GetXaxis()->SetTitle("M_{R} (GeV)");
    }
    
  if ( var == "mr" || var == "rsq" )
    {
      c->SetLogy();
      
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
  c->SaveAs( outName+".pdf" );
  c->SaveAs( outName+".C" );
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
      h->SetFillColor( kBlue - 7 );
      h->SetLineColor( kBlue - 7 );
    }
  else if ( process == Process::ttH )
    {
      h->SetFillColor( kViolet + 6 );
      h->SetLineColor( kViolet + 6 );
    }
  else if ( process == Process::ggH )
    {
      h->SetFillColor( kGreen + 2 );
      h->SetLineColor( kGreen + 2 );
    }
  else if ( process == Process::vH )
    {
      h->SetFillColor( kMagenta - 3 );
      h->SetLineColor( kMagenta - 3 );
    }
  else if ( process == Process::vbfH )
    {
      h->SetFillColor( kAzure + 7 );
      h->SetLineColor( kAzure + 7 );
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
