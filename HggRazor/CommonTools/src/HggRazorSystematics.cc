//C++ INCLUDES
#include <iostream>
#include <math.h>
//ROOT INCLUDES
//LOCAL INCLUDES
#include "HggRazorSystematics.hh"

HggRazorSystematics::HggRazorSystematics( ){ };

HggRazorSystematics::HggRazorSystematics( TTree* tree ) : HggTree( tree ), _info( false ), _debug( false )
{

};

HggRazorSystematics::HggRazorSystematics( TTree* tree, TString processName, TString boxName, bool info, bool debug ) : HggTree( tree ), _info( info ), _debug( debug )
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

HggRazorSystematics::~HggRazorSystematics()
{
  if ( _debug ) std::cout << "[DEBUG]: Entering Destructor" << std::endl;
  if ( _debug ) std::cout << "[DEBUG]: Finishing Destructor" << std::endl;
};

void HggRazorSystematics::PrintBinning()
{
  std::cout << "[INFO]: this is the binning for category <" << this->boxName << ">" << std::endl;
  if ( this->binningMap.size() == 0 ) std::cerr << "[WARNING]: no binning defined yet, please use object->SetBinningMap( yourMap );" << std::endl;
  for ( auto tmp : this->binningMap )
    {
      std::cout << "MR: " << tmp.first.first << "-" << tmp.first.second << " GeV --> Rsq: ";
      for ( auto tmp2 : tmp.second ) std::cout << tmp2 << ", ";
      std::cout << "\n";
    }
}

bool HggRazorSystematics::InitMrRsqTH2Poly( )
{
  if ( this->binningMap.size() == 0 )
    {
      std::cerr << "[ERROR]: Imposible to create TH2Poly; no binning defined yet, please use object->SetBinningMap( yourMap );" << std::endl;
      return false;
    }
  
  h2p = new TH2Poly("nominal", "", 150, 10000, 0, 5);
  h2p_facScaleUp      = new TH2Poly("facScaleUp", "", 150, 10000, 0, 5);
  h2p_facScaleDown    = new TH2Poly("facScaleDown", "", 150, 10000, 0, 5);
  h2p_renScaleUp      = new TH2Poly("renScaleUp", "", 150, 10000, 0, 5);
  h2p_renScaleDown    = new TH2Poly("renScaleDown", "", 150, 10000, 0, 5);
  h2p_facRenScaleUp   = new TH2Poly("facRenScaleUp", "", 150, 10000, 0, 5);
  h2p_facRenScaleDown = new TH2Poly("facRenScaleDown", "", 150, 10000, 0, 5);

  /*
  h2p->SetName("nominal");
  h2p_facScaleUp->SetName("facScaleUp");
  h2p_facScaleDown->SetName("facScaleDown");
  h2p_renScaleUp->SetName("renScaleUp");
  h2p_renScaleDown->SetName("renScaleDown");
  h2p_facRenScaleUp->SetName("facRenScaleUp");
  h2p_facRenScaleDown->SetName("facRenScaleDown");
  */
  
  h2p->Sumw2();
  h2p_facScaleUp->Sumw2();
  h2p_facScaleDown->Sumw2();
  h2p_renScaleUp->Sumw2();
  h2p_renScaleDown->Sumw2();
  h2p_facRenScaleUp->Sumw2();
  h2p_facRenScaleDown->Sumw2();
  
  for ( auto tmp : this->binningMap )
    {
      int RsqSize = tmp.second.size();
      for ( int i = 0; i < RsqSize-1; i++ )
	{
	  h2p->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	  h2p_facScaleUp->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	  h2p_facScaleDown->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	  h2p_renScaleUp->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	  h2p_renScaleDown->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	  h2p_facRenScaleUp->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	  h2p_facRenScaleDown->AddBin( tmp.first.first, tmp.second.at(i), tmp.first.second, tmp.second.at(i+1) );
	}
    }
  
  
};

void HggRazorSystematics::Loop()
{
  if ( _debug ) std::cout << "[DEBUG]: Entering Loop" << std::endl;
  if (fChain == 0)
    {
      std::cerr << "[ERROR]: TTree is NULL;" << std::endl;
      return;
    }
  if ( h2p == NULL )
    {
      std::cerr << "[ERROR]: TH2Poly has not been created; impossible to fill TH2Poly, please use: obj->InitMrRsqTH2Poly();" << std::endl;
      return;
    }
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  double total_in = 0, total_rm = 0;
  
  for (Long64_t jentry=0; jentry < nentries; jentry++ )
    {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      if ( t1Rsq < 1.0 )
	{
	  h2p->Fill( MR, t1Rsq, this->Lumi*weight*pileupWeight );//sm-higgs
	}
      else
	{
	  h2p->Fill( MR, 0.999, this->Lumi*weight*pileupWeight );//sm-higgs
	}
    }

  if ( _debug ) std::cout << "[DEBUG]: Finishing Loop" << std::endl;
};

float HggRazorSystematics::GetHighPtGB( double mr, double r2 )
{
  int mr_bin = -1;
  int r2_bin = -1;
  return 0;
};

float HggRazorSystematics::GetHighResGB( double mr, double r2 )
{
  int mr_bin = -1;
  int r2_bin = -1;
  return 0;
};



float HggRazorSystematics::GetYields( float mr, float rsq, float mgg_l, float mgg_h )
{
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  float sel_events = .0;
  
  for (Long64_t jentry=0; jentry < nentries; jentry++ )
    {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if (  MR > mr && Rsq > rsq
	    && mGammaGamma > mgg_l && mGammaGamma < mgg_h
	    && fabs( pho1Eta ) < 1.48 && fabs( pho2Eta ) < 1.48 && pho1Pt > 25. && pho2Pt > 25.
	    && ( pho1Pt > 40. || pho2Pt > 40. ) && pTGammaGamma > 20. )
	{
	  sel_events += xsecSF;
	}
    }
  if ( _debug ) std::cout << "[DEBUG]: Finishing Loop" << std::endl;
  return sel_events;
};

float HggRazorSystematics::GetYields( float mr, float rsq, float mgg_l, float mgg_h, double& err )
{
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  float sel_events = .0;
  err = .0;
  for (Long64_t jentry=0; jentry < nentries; jentry++ )
    {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if (  MR > mr && Rsq > rsq
	    && mGammaGamma > mgg_l && mGammaGamma < mgg_h
	    && fabs( pho1Eta ) < 1.48 && fabs( pho2Eta ) < 1.48 && pho1Pt > 25. && pho2Pt > 25.
	    && ( pho1Pt > 40. || pho2Pt > 40. ) && pTGammaGamma > 20. )
	{
	  sel_events += xsecSF;
	  err += xsecSF*xsecSF;
	}
    }
  if ( _debug ) std::cout << "[DEBUG]: Finishing Loop" << std::endl;
  err = sqrt(err);
  return sel_events;
};

bool HggRazorSystematics::WriteOutput( TString outName )
{
  if ( _debug ) std::cout << "[DEBUG]: Entering WriteOutput" << std::endl;
  this->fout = new TFile( outName + "_" + this->processName + ".root", "recreate");
  if ( h2p != NULL ) h2p->Write( this->boxName + "_histo" );
  fout->Close();
  if ( _debug ) std::cout << "[DEBUG]: Finishing WriteOutput" << std::endl;
  return true;
};

float HggRazorSystematics::GetHggBF( )
{
  return hggBF;
};

bool HggRazorSystematics::SetFacScaleWeightsHisto( TH1F* histo )
{
  if ( histo == NULL )
    {
      std::cerr << "[ERROR]: histogram provided is equal to NULL" << std::endl;
      return false;
    }
  this->SumScaleWeights = new TH1F( *histo );
  return true;
};

bool HggRazorSystematics::SetPdfWeightsHisto( TH1F* histo )
{
  if ( histo == NULL )
    {
      std::cerr << "[ERROR]: histogram provided is equal to NULL" << std::endl;
      return false;
    }
  this->SumPdfWeights = new TH1F( *histo );
  return true;
};
