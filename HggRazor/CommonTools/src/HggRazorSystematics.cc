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

  this->h2p = NULL;
  this->h2p_facScaleUp = NULL;
  this->h2p_facScaleDown = NULL;
  this->h2p_renScaleUp = NULL;
  this->h2p_renScaleDown = NULL;
  this->h2p_facRenScaleUp = NULL;
  this->h2p_facRenScaleDown = NULL;
  
  this->NEvents = NULL;
  this->SumScaleWeights = NULL;
  this->SumPdfWeights = NULL;
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

bool HggRazorSystematics::InitMrRsqTH2Poly( int mode )
{
  if ( mode == 0 )
    {
      if ( this->binningMap.size() == 0 )
	{
	  std::cerr << "[ERROR]: Imposible to create TH2Poly; no binning defined yet, please use object->SetBinningMap( yourMap );" << std::endl;
	  return false;
	}
      h2p = new TH2Poly("nominal", "", 150, 10000, 0, 1);
      h2p_facScaleUp      = new TH2Poly("facScaleUp", "", 150, 10000, 0, 1);
      h2p_facScaleDown    = new TH2Poly("facScaleDown", "", 150, 10000, 0, 1);
      h2p_renScaleUp      = new TH2Poly("renScaleUp", "", 150, 10000, 0, 1);
      h2p_renScaleDown    = new TH2Poly("renScaleDown", "", 150, 10000, 0, 1);
      h2p_facRenScaleUp   = new TH2Poly("facRenScaleUp", "", 150, 10000, 0, 1);
      h2p_facRenScaleDown = new TH2Poly("facRenScaleDown", "", 150, 10000, 0, 1);
      //adding bins
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
    }
  else if ( mode == 1 )
    {
      if ( this->binningVect.size() == 0 )
	{
	  std::cerr << "[ERROR]: Imposible to create TH2Poly; no binning defined yet, please use object->SetBinningVect( yourVect );" << std::endl;
	  return false;
	}
      h2p = new TH2Poly("nominal", "", 150, 10000, 0, 1);
      h2p_facScaleUp      = new TH2Poly("facScaleUp", "", 150, 10000, 0, 1);
      h2p_facScaleDown    = new TH2Poly("facScaleDown", "", 150, 10000, 0, 1);
      h2p_renScaleUp      = new TH2Poly("renScaleUp", "", 150, 10000, 0, 1);
      h2p_renScaleDown    = new TH2Poly("renScaleDown", "", 150, 10000, 0, 1);
      h2p_facRenScaleUp   = new TH2Poly("facRenScaleUp", "", 150, 10000, 0, 1);
      h2p_facRenScaleDown = new TH2Poly("facRenScaleDown", "", 150, 10000, 0, 1);
      for ( auto tmp : binningVect )
	{
	  std::cout << "adding bin: " << tmp[0] << "," <<  tmp[1] << "," << tmp[2] << "," << tmp[3] << std::endl;
	  h2p->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
	  h2p_facScaleUp->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
	  h2p_facScaleDown->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
	  h2p_renScaleUp->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
	  h2p_facScaleDown->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
	  h2p_renScaleUp->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
	  h2p_facRenScaleDown->AddBin(tmp[0], tmp[1], tmp[2], tmp[3]);
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
  
  if ( this->NEvents == NULL || this->SumScaleWeights == NULL )
    {
      std::cerr << "[ERROR]: NEvents and/or SumScaleWeights have not been set" << std::endl;
      return;
    }
  
  if ( _debug ) std::cout << "[DEBUG]: Setting N_events and N_facScale" << std::endl;
  float N_events = this->NEvents->GetBinContent(1);
  const int n_facScaleSys = 6;
  float N_facScale[n_facScaleSys];
  for ( int i = 0; i < n_facScaleSys; i++ ) N_facScale[i] = this->SumScaleWeights->GetBinContent( i+1 );
  if ( _debug ) std::cout << "[DEBUG]: Passed N_events and N_facScale" << std::endl;
  
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
	  
	  h2p_facScaleUp->Fill( MR, t1Rsq, this->Lumi*weight*sf_facScaleUp*pileupWeight*N_events/N_facScale[0] );
	  h2p_facScaleDown->Fill( MR, t1Rsq, this->Lumi*weight*sf_facScaleDown*pileupWeight*N_events/N_facScale[1] );
	  
	  h2p_renScaleUp->Fill( MR, t1Rsq, this->Lumi*weight*sf_renScaleUp*pileupWeight*N_events/N_facScale[2] );
	  h2p_renScaleDown->Fill( MR, t1Rsq, this->Lumi*weight*sf_renScaleDown*pileupWeight*N_events/N_facScale[3] );

	  h2p_facRenScaleUp->Fill( MR, t1Rsq, this->Lumi*weight*sf_facRenScaleUp*pileupWeight*N_events/N_facScale[4] );
	  h2p_facRenScaleDown->Fill( MR, t1Rsq, this->Lumi*weight*sf_facRenScaleDown*pileupWeight*N_events/N_facScale[5] );
	}
      else
	{
	  h2p->Fill( MR, 0.999, this->Lumi*weight*pileupWeight );//sm-higgs
	  
	  h2p_facScaleUp->Fill( MR, 0.999, this->Lumi*weight*sf_facScaleUp*pileupWeight*N_events/N_facScale[0] );
	  h2p_facScaleDown->Fill( MR, 0.999, this->Lumi*weight*sf_facScaleDown*pileupWeight*N_events/N_facScale[1] );
	  
	  h2p_renScaleUp->Fill( MR, 0.999, this->Lumi*weight*sf_renScaleUp*pileupWeight*N_events/N_facScale[2] );
	  h2p_renScaleDown->Fill( MR, 0.999, this->Lumi*weight*sf_renScaleDown*pileupWeight*N_events/N_facScale[3] );
	  
	  h2p_facRenScaleUp->Fill( MR, 0.999, this->Lumi*weight*sf_facRenScaleUp*pileupWeight*N_events/N_facScale[4] );
	  h2p_facRenScaleDown->Fill( MR, 0.999, this->Lumi*weight*sf_facRenScaleDown*pileupWeight*N_events/N_facScale[5] );
	}
    }

  if ( _debug ) std::cout << "[DEBUG]: Finishing Loop" << std::endl;
};

void HggRazorSystematics::LoopNominal()
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
	  if( processName == "NR" )
	    {
	      h2p->Fill( MR, t1Rsq, this->NR_kf*this->Lumi*weight*pileupWeight );
	    }
	  else if( processName == "signal" )
	    {
	      h2p->Fill( MR, t1Rsq, this->Lumi*weight );
	    }
	  else
	    {
	      h2p->Fill( MR, t1Rsq, this->Lumi*weight*pileupWeight );
	    }
	}
      else
	{
	  if( processName == "NR" )
	    {
	      h2p->Fill( MR, 0.999, this->NR_kf*this->Lumi*weight*pileupWeight );
	    }
	  else if ( processName == "signal" )
	    {
	      h2p->Fill( MR, 0.999, this->Lumi*weight );
	    }
	  else
	    {
	      h2p->Fill( MR, 0.999, this->Lumi*weight*pileupWeight );
	    }
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
	  sel_events += weight*this->Lumi;
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
	  sel_events += weight*this->Lumi;
	  err += weight*this->Lumi*weight*this->Lumi;
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
  if ( h2p_facScaleUp != NULL ) h2p_facScaleUp->Write( this->boxName + "_histo_facScaleUp" );
  if ( h2p_facScaleDown != NULL ) h2p_facScaleDown->Write( this->boxName + "_histo_facScaleDown" );
  if ( h2p_renScaleUp != NULL ) h2p_renScaleUp->Write( this->boxName + "_histo_renScaleUp" );
  if ( h2p_renScaleDown != NULL ) h2p_renScaleDown->Write( this->boxName + "_histo_renScaleDown" );
  if ( h2p_facRenScaleUp != NULL ) h2p_facRenScaleUp->Write( this->boxName + "_histo_facRenScaleUp" );
  if ( h2p_facRenScaleDown != NULL ) h2p_facRenScaleDown->Write( this->boxName + "_histo_facRenScaleDown" );
   
  fout->Close();
  if ( _debug ) std::cout << "[DEBUG]: Finishing WriteOutput" << std::endl;
  return true;
};

float HggRazorSystematics::GetHggBF( )
{
  return hggBF;
};

bool HggRazorSystematics::SetNeventsHisto( TH1F* histo )
{
  if ( histo == NULL )
    {
      std::cerr << "[ERROR]: histogram provided is equal to NULL" << std::endl;
      return false;
    }
  this->NEvents = new TH1F( *histo );
  return true;
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

std::pair<float, float> HggRazorSystematics::GetFacScaleSystematic( float mr, float rsq )
{
  float smhY      = h2p->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) );
  float smhY_Up   = h2p_facScaleUp->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) ) - smhY;
  float smhY_Down = h2p_facScaleDown->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) ) - smhY;
  return std::make_pair( smhY_Up, smhY_Down );
};

std::pair<float, float> HggRazorSystematics::GetRenScaleSystematic( float mr, float rsq )
{
  float smhY      = h2p->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) );
  float smhY_Up   = h2p_renScaleUp->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) ) - smhY;
  float smhY_Down = h2p_renScaleDown->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) ) - smhY;
  return std::make_pair( smhY_Up, smhY_Down );
};

std::pair<float, float> HggRazorSystematics::GetFacRenScaleSystematic( float mr, float rsq )
{
  float smhY      = h2p->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) );
  float smhY_Up   = h2p_facRenScaleUp->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) ) - smhY;
  float smhY_Down = h2p_facRenScaleDown->GetBinContent( h2p->FindBin( mr+10, rsq+0.001 ) ) - smhY;
  return std::make_pair( smhY_Up, smhY_Down );
};
