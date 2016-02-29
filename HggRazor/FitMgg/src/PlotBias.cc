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
#include <TF1.h>
//RooFit
#include <RooRealVar.h>
#include <RooWorkspace.h>
#include <RooDataSet.h>
#include <RooPlot.h>
//LOCAL
#include "PlotBias.hh"
#include "HggAux.hh"

/*
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
*/

const float lumi = 2.3;
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
TString lumiText = "2.3 fb^{-1} (13 TeV)";

float lumix = 0.955;
float lumiy = 0.945;
float lumifont = 42;

float cmsx = 0.28;
float cmsy = 0.875;
float cmsTextFont   = 61;  // default is helvetic-bold
float extrax = cmsx + 0.078;
float extray = cmsy - 0.04;
float extraTextFont = 52;  // default is helvetica-italics
// ratio of "CMS" and extra text size
float extraOverCmsTextSize  = 0.76;
float cmsSize = 0.06;

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
  //RooWorkspace* w = (RooWorkspace*)f->Get("w_bias");
  RooWorkspace* w = (RooWorkspace*)f->Get("w_biasSignal");
  //Getting bias RooRealVar
  RooRealVar* bias = w->var( var.c_str() );
  //Getting data_bias RooDataSet
  RooDataSet* data_bias = (RooDataSet*)w->obj( dataSet.c_str() );
  
  //-------------------------------------
  //D e f i n i n g   p l o t   r a n g e
  //-------------------------------------
  double mean = data_bias->meanVar( *bias )->getVal();
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
  std::cout << "f1: "<< f1 << ", f2: " << f2 << ", mean = " << mean <<    std::endl;
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
    //for( const auto& fitf : mymap )
    {
      std::string f1 = GetFitFunctionString( fitf );
      //std::string f1 = fitf.first.first;
      std::stringstream ss;
      ss << f1; 
      ss.precision(1);
      ss.setf ( std::ios::showpoint );
      ss.setf ( std::ios::fixed ); 
      for( const auto& fitf2 : FitFunction() )
	{
	  std::string f2 = GetFitFunctionString( fitf2 );
	  std::pair<std::string, std::string> mypair = std::make_pair( f1, f2 );
	  if ( mymap.find( mypair ) == mymap.end() )
	    {
	      continue;
	    }
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

double FitBias( TString fname = "", TString f1 = "dumm1", TString f2 = "dummy2", std::string outDir = "bias_plots", bool _status = false , std::string fitFunc = "singleGaus")
{
  TFile* f = new TFile( fname , "READ" );

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



  TTree* tree = (TTree*)f->Get("biasTree");
  if ( _status )
    {
      //tree->Draw("biasNorm>>hbias(200,-50, 50)", "status==0 && covStatus==3 && status2==0 && covStatus2==3", "goff");
      tree->Draw("biasNorm>>hbias(600,-30, 30)", "status==0 && covStatus==3 && status2==0 && covStatus2==3", "goff");
    }
  else
    {
      //tree->Draw("biasNorm>>hbias(200,-50, 50)", "", "goff");
      tree->Draw("biasNorm>>hbias(600,-30, 30)", "", "goff");
    }
  
  TH1F* hbias = (TH1F*)gDirectory->Get("hbias");
  double mean_val = hbias->GetMean();
  
  double _max = hbias->GetBinContent( hbias->GetMaximumBin() );
  //double _xlow = hbias->GetBinCenter( hbias->FindFirstBinAbove( 0.5*_max ) );
  //double _xhigh = hbias->GetBinCenter( hbias->GetMaximumBin() ) + ( hbias->GetBinCenter( hbias->GetMaximumBin() ) - _xlow );

  //double _xlow = hbias->GetBinCenter(  hbias->GetMaximumBin() - 2 );
  double _xlow = hbias->GetBinCenter(  hbias->GetMaximumBin() - 4.0 );
  double fit_xlow = 0.1*(hbias->GetMaximumBin()-300.0) - 1.2 ;
  //double _xhigh = hbias->GetBinCenter(  hbias->GetMaximumBin() + 3 );
  double _xhigh = hbias->GetBinCenter(  hbias->GetMaximumBin() + 4.0 );
  double fit_xhigh = 0.1*(hbias->GetMaximumBin()-300.0) + 1.2 ;
  double _xlow2sig = hbias->GetBinCenter( hbias->FindFirstBinAbove( 0.03*_max ) );
  double _xhigh2sig = hbias->GetBinCenter( hbias->GetMaximumBin() ) + ( hbias->GetBinCenter( hbias->GetMaximumBin() ) - _xlow2sig );
  
  /*
  TF1* gaus = new TF1( "gaus", "gaus(0)", _xlow, _xhigh );
  gaus->SetParameter(0,2000.0);
  gaus->SetParameter(1,0.0);
  gaus->SetParameter(2,1.0);
  */
  //TF1* myF = new TF1("myF", "[0]*exp( -(x-[1])*(x-[1])/(2*[2]*[2]) ) + [4]*exp( -(x-[5])*(x-[5])/(2*[3]*[3]) )", -1., 1.5);
  double mu_value = 0.0;
  double sigma_value = 0.0;

  if( fitFunc == "doubleGaus" )
	{
	  TF1* myF = new TF1("myF", "[0]*exp( -(x-[1])*(x-[1])/(2*[2]*[2]) ) + [4]*exp( -(x-[1])*(x-[1])/(2*[3]*[3]) )", -1., 1.5);
	  //myF->SetParameter(0, 300 );
	  myF->SetParameter(0, 0.8*hbias->GetMaximum() );
	  myF->SetParameter(1, hbias->GetMean() );
	//  myF->SetParameter(5, hbias->GetMean() );
	  myF->SetParameter(2, hbias->GetStdDev() );
	  myF->SetParameter(3, 3*hbias->GetStdDev() );
	  //myF->SetParameter(4, 50 );
	  myF->SetParameter(4, 0.2*hbias->GetMaximum() );
	  
	  myF->SetParLimits(2, 0.0, 999);
	  myF->SetParLimits(3, 0.0, 999);
	  myF->SetLineColor( kBlue );
	  myF->SetLineWidth( 3 );
	  
	  hbias->Fit( myF, "LR");
  	  std::cout << "Double gaussian Peak: " << myF->GetMaximumX(-4,4) << std::endl;
	  mu_value = myF->GetMaximumX(-4,4);
	  sigma_value = myF->GetParameter(2); 
	}
  else if (fitFunc == "singleGaus")
	{
	  TF1* myF = new TF1("myF", "[0]*exp( -(x-[1])*(x-[1])/(2*[2]*[2]) )", -1.2, 2.0);
//	  std::cout<<"fit range:  "<<fit_xlow<<"  -  "<<fit_xhigh<<std::endl;
 	  myF->SetParameter(0, hbias->GetMaximum() );
	  myF->SetParameter(1, hbias->GetMean() );
	  myF->SetParameter(2, hbias->GetStdDev() );
	  
	 // myF->SetParLimits(2, 0.0, 999);
	  myF->SetLineColor( kBlue );
	  myF->SetLineWidth( 3 );
	  
	  hbias->Fit( myF, "LR");
	  mu_value = myF->GetParameter(1);
	  sigma_value = myF->GetParameter(2); 

	}
   else if (fitFunc == "crystalBall")
  	{
		
	}
  //hbias->GetXaxis()->SetRangeUser( _xlow2sig, _xhigh2sig );
  hbias->GetXaxis()->SetRangeUser( -4, 4 );
  hbias->GetYaxis()->SetRangeUser( 0, 1.2*_max );
  
  hbias->SetMarkerStyle(20);
  hbias->SetMarkerSize(1.);
  hbias->SetMarkerColor(kBlack);
  hbias->SetLineColor(kBlack);
  hbias->SetStats( kFALSE );

  //cosmetics
  hbias->SetStats(0);
  hbias->SetTitle("");
  hbias->GetXaxis()->SetTitleSize(0.05);
  hbias->GetXaxis()->SetTitleOffset(0.8);
  hbias->GetXaxis()->SetTitleSize( axisTitleSize );
  hbias->GetXaxis()->SetTitleOffset( axisTitleOffset );
  hbias->GetYaxis()->SetTitleSize( axisTitleSize );
  hbias->GetYaxis()->SetTitleOffset( axisTitleOffset );
  hbias->SetXTitle("#delta_{N_{s}}/#sigma_{N_{s}}");
  
  hbias->Draw("e");
  
  
  //TString lumiText;
  //TString lumiText2;
  //lumiText = Form("mean: %.2f", mean_val );
  //lumiText2 = Form("#mu: %.2f #pm %.2f", gaus->GetParameter(1), gaus->GetParError(1) );
  
  TString _mu    = Form("%.1f", 100.0*mu_value );
  //TString _mu    = Form("%.1f", 100.0*myF->GetParameter(1) );
  TString _sigma = Form("%.1f", 100.0*sigma_value );
  TLatex tex2;
  tex2.SetNDC();
  tex2.SetTextFont(52);
  tex2.SetTextAlign(31);
  tex2.SetTextSize(0.05);
  tex2.DrawLatex( 0.89, 0.88, "#mu = " + _mu + " %");
  if(fitFunc == "singleGaus"  )
 {
  tex2.DrawLatex( 0.90, 0.80, "#sigma = " + _sigma + " %");
 } 

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
 
  if( fitFunc == "doubleGaus")
 { 
  c->SaveAs(outDir+ "/doubleGaus_biasFits_" + f1 + "_" + f2 + ".pdf" );
  c->SaveAs(outDir+ "/doubleGaus_biasFits_" + f1 + "_" + f2 + ".png" );
  c->SaveAs(outDir+ "/doubleGaus_biasFits_" + f1 + "_" + f2 + ".C" );
 }  
if (fitFunc == "singleGaus") 
{ 
  c->SaveAs(outDir+ "/biasFits_" + f1 + "_" + f2 + ".pdf" );
  c->SaveAs(outDir+ "/biasFits_" + f1 + "_" + f2 + ".png" );
  c->SaveAs(outDir+ "/biasFits_" + f1 + "_" + f2 + ".C" );
 } 
//return myF->GetParameter(1);
  return mu_value;
};

double crystalball_function(double x, double alpha, double n, double sigma, double mean)
{
          // evaluate the crystal ball function
          if (sigma < 0.)     return 0.;
          double z = (x - mean)/sigma; 
          if (alpha < 0) z = -z; 
          double abs_alpha = std::abs(alpha);
         // double C = n/abs_alpha * 1./(n-1.) * std::exp(-alpha*alpha/2.);
         // double D = std::sqrt(M_PI/2.)*(1.+ROOT::Math::erf(abs_alpha/std::sqrt(2.)));
         // double N = 1./(sigma*(C+D));
         if (z  > - abs_alpha)
            return std::exp(- 0.5 * z * z);
         else {
            //double A = std::pow(n/abs_alpha,n) * std::exp(-0.5*abs_alpha*abs_alpha);
            double nDivAlpha = n/abs_alpha;
            double AA =  std::exp(-0.5*abs_alpha*abs_alpha);
            double B = nDivAlpha -abs_alpha;
            double arg = nDivAlpha/(B-z);
            return AA * std::pow(arg,n);
         }
      }







