//C++ INCLUDES
#include <iostream>
#include <math.h>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "GenericTreeClass.hh"

GenericTreeClass::GenericTreeClass( ){ };

GenericTreeClass::GenericTreeClass( TTree* tree ) : ControlSampleEvent( tree ), _info( false ), _debug( false )
{
  std::cout << "[DEBUG]: info: " << _info << " debug" << _debug <<  std::endl;
};

GenericTreeClass::GenericTreeClass( TTree* tree, TString processName, TString boxName, bool info, bool debug ) : ControlSampleEvent( tree ), _info( info ), _debug( debug )
{
  //processName
  if ( processName == "" )
    {
      this->processName = "dummy_process";
    }
  else
    {
      this->processName = processName;
    }
  //boxName
  if ( boxName == "" )
    {
      this->boxName = "dummy_box";
    }
  else
    {
      this->boxName = boxName;
    }
};

GenericTreeClass::~GenericTreeClass()
{
  if ( _debug ) std::cout << "[DEBUG]: Entering Destructor" << std::endl;
  if ( _debug ) std::cout << "[DEBUG]: Finishing Destructor" << std::endl;
};

void GenericTreeClass::CreateGenericHisto( TString histoName, TString varName, int nbins, float x_low, float x_high )
{
  //std::cout << "1D var: " << varName << std::endl;
  TH1F* _h = new TH1F( histoName, histoName, nbins, x_low, x_high );
  std::pair<TString, TString> mypair = std::make_pair(histoName, varName);
  if ( map_1D_Histos.find( mypair ) == map_1D_Histos.end() )
    {
      map_1D_Histos[ mypair ] = _h;
    }
  else
    {
      std::cout << "[WARNING]: trying to create histo with variable already used, DO NOTHING" << std::endl;
    }
};

void GenericTreeClass::PrintStoredHistos()
{
  std::cout << map_1D_Histos.size() << std::endl;
  for ( auto& tmp : map_1D_Histos ) std::cout << tmp.first.first << " nbins: " << tmp.second->GetNbinsX() << std::endl;
};

void GenericTreeClass::CreateGenericHisto( TString histoName, TString varName, int nbins_x, float x_low, float x_high,
				      int nbins_y, float y_low, float y_high )
{
  std::cout << "2D var: " << varName << std::endl;
};

void GenericTreeClass::Loop()
{
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    //std::cout << "lep1" << lep1->Pt() << std::endl;
    for ( auto& tmp : map_1D_Histos )
      {
	float varVal= GetVarVal<float>(tmp.first.second);
	if ( varVal != -666. ) tmp.second->Fill( varVal );
      }
    // if (Cut(ientry) < 0) continue;
  }
  for ( auto& tmp : map_1D_Histos )
    {
      float varVal = GetVarVal<float>(tmp.first.second);
      std::cout << tmp.first.first << " ,varVal->" << varVal << std::endl;
      int _nbins = tmp.second->GetNbinsX();
      float _xlow = tmp.second->GetXaxis()->GetXmin();
      float _xhigh = tmp.second->GetXaxis()->GetXmax();
      if ( varVal == -666. )
	{
	  TString drawCommand = Form(" >> tmp1(%d, %f, %f)", _nbins, _xlow, _xhigh );
	  drawCommand = tmp.first.second + drawCommand;
	  std::cout << "drawCommand->" << drawCommand << std::endl;
	  fChain->Draw(drawCommand, "", "goff");
	  tmp.second = (TH1F*)gDirectory->Get("tmp1");
	}
    }
};
