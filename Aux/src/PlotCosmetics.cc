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

bool MakeStackPlot( THStack* s, TString var, TString outName )
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

  s->Draw();
  
  if( var == "rsq" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 1.0);
    }
  else if ( var == "mr" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 3000.0);
    }
    
  if ( var == "mr" || var == "rsq" )
    {
      c->SetLogy();
      
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
      h->SetFillColor( kRed - 4 );
    }
  else if ( process == Process::ttH )
    {
      h->SetFillColor( kBlue - 4 );
    }
  else if ( process == Process::ggH )
    {
      h->SetFillColor( kGreen - 4 );
    }
  else if ( process == Process::vH )
    {
      h->SetFillColor( kViolet - 4 );
    }
  else if ( process == Process::vbfH )
    {
      h->SetFillColor( kAzure - 4 );
    }
  else
    {
      std::cout << "[WARNING]: Setting Style, process not found" << std::endl;
      std::cout << "[WARNING]: Setting Fill Color to kGray" << std::endl;
      h->SetFillColor( kGray );
    }
  return true;
};
