//C++ INCLUDES
#include <fstream>
//ROOT INCLUDES
#include <TBranch.h>
#include <TCanvas.h>
#include <TPad.h>
#include <TStyle.h>
//LOCAL INCLUDES
#include "PlotCosmetics.hh"

const float lumi = 5;
//Axis
const float axisTitleSize = 0.06;
const float axisTitleOffset = .8;

const float axisTitleSizeRatioX   = 0.18;
const float axisLabelSizeRatioX   = 0.12;
const float axisTitleOffsetRatioX = 0.84;

const float axisTitleSizeRatioY   = 0.15;
const float axisLabelSizeRatioY   = 0.108;
const float axisTitleOffsetRatioY = 0.32;

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

bool MakeStackPlot( THStack* s, TH1F* data, TH1F* mc, TString var, TString outName, TLegend* leg )
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

  TPad *pad1 = new TPad("pad1","pad1", .0, 0.25, 1., 1.);
  pad1->SetBottomMargin(0);
  pad1->SetRightMargin( rightMargin );
  pad1->SetLeftMargin( leftMargin );
  pad1->Draw();
  pad1->cd();
  
  s->SetTitle("");
  s->Draw();
  s->GetXaxis()->SetTitleSize( axisTitleSize );
  s->GetXaxis()->SetTitleOffset( axisTitleOffset );
  s->GetYaxis()->SetTitleSize( axisTitleSize );
  s->GetYaxis()->SetTitleOffset( axisTitleOffset );
    
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
  
  data->Draw("sameE");
  AddCMS( c );

  TPad *pad2 = new TPad("pad2","pad2", .0, .0, 1., 0.25);
  pad2->SetTopMargin(0);
  pad2->SetTopMargin(0.008);
  pad2->SetBottomMargin(0.35);
  pad2->SetRightMargin( rightMargin );
  pad2->SetLeftMargin( leftMargin );
  pad2->SetGridy();
  pad2->Draw();
  pad2->cd();

  std::cout << "deb" << std::endl;
  //TH1F* MC = (TH1F*)s->GetHistogram();
  TH1F* ratio = new TH1F( *data );
  ratio->Divide( mc );
  ratio->SetMarkerStyle( 20 );
  ratio->GetXaxis()->SetTitleSize( axisTitleSizeRatioX );
  ratio->GetXaxis()->SetLabelSize( axisLabelSizeRatioX );
  ratio->GetXaxis()->SetTitleOffset( axisTitleOffsetRatioX );
  ratio->GetYaxis()->SetTitleSize( axisTitleSizeRatioY );
  ratio->GetYaxis()->SetLabelSize( axisLabelSizeRatioY );
  ratio->GetYaxis()->SetTitleOffset( axisTitleOffsetRatioY );  
  ratio->SetMarkerColor( kBlue );
  ratio->SetLineColor( kBlue );
  ratio->GetYaxis()->SetRangeUser( 0., 2.0 );
  ratio->SetTitle("");
  ratio->GetYaxis()->SetTitle("data / mc");
  ratio->GetYaxis()->CenterTitle( true );
  //ratio->GetYaxis()->SetNdivisions( 6, false );
  ratio->SetStats( 0 );
  ratio->Draw("E");

  if( var == "rsq" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 1.0);
      ratio->GetXaxis()->SetRangeUser(0.0, 1.0);
      s->GetXaxis()->SetTitle("R^{2}");
      s->SetMinimum( 1e-1 );
      s->SetMaximum( 1e1*s->GetMaximum() );
      s->GetYaxis()->SetTitle("events / 0.04");
      pad1->SetLogy();
      pad1->Update();
      pad2->Update();
    }
  else if ( var == "mr" )
    {
      s->GetXaxis()->SetRangeUser(0.0, 2000.0);
      ratio->GetXaxis()->SetRangeUser(0.0, 2000.0);
      s->GetXaxis()->SetTitle("M_{R} (GeV)");
      s->GetYaxis()->SetTitle("events / 100 (GeV)");
      s->SetMinimum( 1e-1 );
      s->SetMaximum( 1e1*s->GetMaximum() );
      pad1->SetLogy();
      pad1->Update();
    }
  else if ( var == "mgg" )
    {
      s->GetXaxis()->SetRangeUser( 103., 160. );
      ratio->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
      s->GetYaxis()->SetTitle("events / 1 (GeV)");
      s->SetMinimum( 0 );
      s->SetMaximum( 2*s->GetMaximum() );
    }
  
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
  else if ( process == Process::qcd )
    {
      h->SetFillColor( kOrange - 9 );
      h->SetLineColor( kOrange - 9 );
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
  else if ( process == Process::data )
    {
      h->SetMarkerStyle( 20 );
      h->SetMarkerColor( kBlack );
      h->SetLineColor( kBlack );
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
  else if ( process == Process::qcd )
    {
      leg->AddEntry( h, "fake-fake", "f" );
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
  else if ( process == Process::data )
    {
      leg->AddEntry( h, "data", "lep" );
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
