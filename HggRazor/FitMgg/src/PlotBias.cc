//C++
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
//ROOT
#include <TTree.h>
#include <TFile.h>
#include <TString.h>
#include <TCanvas.h>
#include <TLatex.h>
#include <TStyle.h>
#include <TAxis.h>
//RooFit
#include <RooRealVar.h>
#include <RooWorkspace.h>
#include <RooDataSet.h>
#include <RooPlot.h>
//LOCAL
#include "PlotBias.hh"
#include "HggAux.hh"


//Axis
const float axisTitleSize = 0.06;
const float axisTitleOffset = .8;

const float axisTitleSizeRatioX   = 0.18;
const float axisLabelSizeRatioX   = 0.12;
const float axisTitleOffsetRatioX = 0.84;

const float axisTitleSizeRatioY   = 0.15;
const float axisLabelSizeRatioY   = 0.108;
const float axisTitleOffsetRatioY = 0.52;

//Margins
const float leftMargin   = 0.12;
const float rightMargin  = 0.05;
const float topMargin    = 0.07;
const float bottomMargin = 0.12;

void PlotBias( std::string fname = "", std::string outDir = "bias_plots")
{
  //-----------------------
  //G e t t i n g   F i l e
  //-----------------------
  
  TFile* f = new TFile( fname.c_str() , "READ" );
  //Getting Workspace
  RooWorkspace* w = (RooWorkspace*)f->Get("w_biasSignal");
  //Getting bias RooRealVar
  RooRealVar* bias = w->var("bias");
  //Getting data_bias RooDataSet
  RooDataSet* data_bias = (RooDataSet*)w->obj("data_bias");

  //-------------------------------------
  //D e f i n i n g   p l o t   r a n g e
  //-------------------------------------
  double mean = data_bias->mean( *bias );
  double rms  = data_bias->rmsVar( *bias )->getVal();
  if (rms == .0 ) rms = 0.01;
  double bias_min = mean - 5.*rms;
  double bias_max = mean + 5.*rms;
  bias->setMin( bias_min );
  bias->setMax( bias_max );
  bias->setBins(50);

  //---------------------------------
  //S e t t i n g   u p   C a n v a s 
  //---------------------------------
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
  
  RooPlot* frame = bias->frame();
  frame->SetTitle("");
  frame->GetXaxis()->SetTitleSize( axisTitleSize );
  frame->GetXaxis()->SetTitleOffset( axisTitleOffset );
  frame->GetYaxis()->SetTitleSize( axisTitleSize );
  frame->GetYaxis()->SetTitleOffset( axisTitleOffset );
  data_bias->plotOn(frame)->Draw();

  //------------------------------
  //P l ot  M e a n  a n d   R m s 
  //------------------------------
  TString s_mean = Form("mean = %.2f %%", mean*100.);
  TString s_rms;
  if ( mean < .0 )
    {
      s_rms = Form("rms  =  %.2f %%", rms*100.);
    }
  else
    {
      s_rms = Form("rms  = %.2f %%", rms*100.);
    }
  
  TLatex latex;
  latex.SetNDC();
  latex.SetTextAngle(0);
  latex.SetTextColor(kBlack);    
  latex.SetTextFont(42);
  latex.SetTextAlign(31); 
  latex.SetTextSize(0.04);    
  latex.DrawLatex( 0.9, 0.87, s_mean );
  latex.DrawLatex( 0.9, 0.81, s_rms );

  //-----------------------
  //S a v i n g   P l o t s
  //-----------------------
  //std::string outName = fname;
  std::string findName = "biasTest_";
  int begin_s = fname.find( findName ) + findName.size();
  int end_s   = fname.find( ".root" );
  std::string outName = outDir + "/" +fname.substr( begin_s, end_s - begin_s);
  TString figName = outName;
  c->SaveAs(figName+".pdf");
  c->SaveAs(figName+".png");
  c->SaveAs(figName+".C");
  delete c;
  return;
};

//std::pair<double,double> GetMeanRms( std::string fname = "", std::string dataSet = "bias_plots", std::string var = "bias")
std::pair<double,double> GetMeanRms( std::string fname, std::string dataSet, std::string var )
{ 
  //-----------------------
  //G e t t i n g   F i l e
  //-----------------------
  TFile* f = new TFile( fname.c_str() , "READ" );
  //Getting Workspace
  RooWorkspace* w = (RooWorkspace*)f->Get("w_bias");
  //RooWorkspace* w = (RooWorkspace*)f->Get("w_biasSignal");
  //Getting bias RooRealVar
  RooRealVar* bias = w->var( var.c_str() );
  //Getting data_bias RooDataSet
  RooDataSet* data_bias = (RooDataSet*)w->obj( dataSet.c_str() );
  
  //-------------------------------------
  //D e f i n i n g   p l o t   r a n g e
  //-------------------------------------
  double mean = data_bias->mean( *bias );
  double rms  = data_bias->rmsVar( *bias )->getVal();

  //-----------------------------------
  //G e t t i n g   p a i r   n a m e s 
  //-----------------------------------
  std::string findName = "biasTest_";
  int begin_s = fname.find( findName ) + findName.size();
  int end_s   = fname.find_last_of( "_" );
  std::string f1 = fname.substr( begin_s, end_s - begin_s);
  begin_s = end_s + 1;
  end_s   = fname.find( ".root" );
  std::string f2 = fname.substr( begin_s, end_s - begin_s);
  std::cout << f1 << " f2: " << f2 <<   std::endl;
  f->Close();
  return std::make_pair( mean, rms );
};

void MakeTable( std::map< std::pair<std::string,std::string>, double > mymap, TString type )
{
  int row_ctr = 0;
  std::vector< std::string > row_text;
  std::stringstream ss_fl;//first line for table
  ss_fl << "--";
  for( const auto& fitf : FitFunction() )
    {
      std::string f1 = GetFitFunctionString( fitf );
      std::stringstream ss;
      ss << f1; 
      ss.precision(1);
      ss.setf ( std::ios::showpoint );
      ss.setf ( std::ios::fixed ); 
      for( const auto& fitf2 : FitFunction() )
	{
	  std::string f2 = GetFitFunctionString( fitf2 );
	  if ( row_ctr == 0 ) ss_fl << " & " << f2; 
	  std::pair< std::string, std::string > pair = std::make_pair( f1, f2 );
	  //std::cout << f1 << " " << f2 << " " << mymap[pair] << std::endl;
	  ss << " & " << mymap[pair]*100. << "\\%"; 
	  //std::cout << GetFitFunctionString( fitf )  << " "  << GetFitFunctionString( fitf2 ) << std::endl;
	}
      if ( row_ctr == 0 ) row_text.push_back( ss_fl.str() );
      row_text.push_back( ss.str() );
      row_ctr++;
    }

  std::cout << "\\begin{table}[htb]\n\\caption{Bias test performed in HighRes box. using the set of seven fit functions}\n\\centering\n\\begin{tabular}{|c|c|c|c|c|c|c|c|}\n\\hline" << std::endl;
  int ctr = 0;
  for ( auto tmp : row_text)
    {
      std::cout << tmp << "\\\\" << std::endl;
      if ( ctr == 0 ) std::cout << "\\hline\n";
      ctr++;
    }
  std::cout << "\\hline\n\n\\hline\n\\hline\n\\end{tabular}\n\\end{table}" << std::endl;
   return;
};
