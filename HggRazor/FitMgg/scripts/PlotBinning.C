#include <iostream>
#include <vector>
#include <fstream>
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TF1.h>
#include <TDirectory.h>
#include <TH2Poly.h>

struct AnaBin
{
  double MR_high;
  double MR_low;
  double Rsq_high;
  double Rsq_low;
  double nevents;
};

const float lumi = 2300.;
const float kf =1.37;

//-----------------------------------
//Plots Real MR-Rsq binning
//If SMH and Signal files are
//given it will create a configCard
//with the SMH Yield and signal Yield
//-----------------------------------

void PlotBinningAndCreateConfigFile( TString fname, std::string categoryMode = "highres", TString signalFile = "", bool _createCF = false )
{
  TFile* fout = new TFile( "test.root", "RECREATE");
  TFile* f = new TFile( fname, "READ");
  assert( f );
  TTree* tree = (TTree*)f->Get("HggRazor");
  
  bool _prepareConfigCard = false;
  TTree* treeSignal;
  TFile* f2;
  if ( signalFile != "" && _createCF )
    {
      f2 = new TFile( signalFile, "READ");
      assert( f2 );
      treeSignal  = (TTree*)f2->Get("HggRazor");
      _prepareConfigCard = true;
    }
  
  TString cut = "mGammaGamma > 103. && mGammaGamma < 160. && pho1passIso == 1 && pho2passIso == 1 && pho1passEleVeto == 1 && pho2passEleVeto == 1 && abs(pho1Eta) <1.48 && abs(pho2Eta)<1.48 && (pho1Pt>40||pho2Pt>40)  && pho1Pt> 25. && pho2Pt>25.";
  TString categoryCutString;
  
  if (categoryMode == "highpt") categoryCutString = " && pTGammaGamma >= 110 ";
  else if (categoryMode == "hzbb") categoryCutString = " && pTGammaGamma < 110 && ( abs(mbbH_L-125.) < 15. || ( abs(mbbH_L-125.) >= 15. && abs(mbbZ_L-91.) < 15 ) )";
  else if (categoryMode == "highres") categoryCutString = " && pTGammaGamma < 110 && abs(mbbH_L-125.) >= 15 && abs(mbbZ_L-91.) >= 15 && sigmaMoverM < 0.0085";
  else if (categoryMode == "lowres") categoryCutString  = " && pTGammaGamma < 110 && abs(mbbH_L-125.) >= 15 && abs(mbbZ_L-91.) >= 15 && sigmaMoverM >= 0.0085 ";
  else if (categoryMode == "inclusive") categoryCutString = "";

  TH2Poly *h2p = new TH2Poly();
  const int nMR = 4;
  int nRsq[nMR];
  std::map<std::pair<float, float>, std::vector<float>> binningMap;
  if (categoryMode == "highpt")
    {
      float  highptMRedges[] = {150.0, 312.5, 625, 1250, 10000};
      nRsq[0] = 7;
      float  highptRSQedges0[7] = {0,0.027,0.052,0.077,0.102,0.127,5.0};
      nRsq[1] = 5;
      float  highptRSQedges1[5] = {0,0.022,0.047,0.072,5.0};
      nRsq[2] = 3;
      float  highptRSQedges2[3] = {0,0.021,5.0};
      nRsq[3] = 2;
      float  highptRSQedges3[2] = {0,5.0};
      
      for ( int i = 0; i < nMR; i++ )
	{
	  std::vector<float> vect;
	  for ( int j = 0; j < nRsq[i]; j++ )
	    {
	      switch (i)
		{
		case 0:
		  vect.push_back(highptRSQedges0[j]);
		  break;
		case 1:
		  vect.push_back(highptRSQedges1[j]);
		  break;
		case 2:
		  vect.push_back(highptRSQedges2[j]);
		  break;
		case 3:
		  vect.push_back(highptRSQedges3[j]);
		  break;
		default:
		  std::cerr << "MR bins exceeds number of defined Rsq binning!! Do nothing" << std::endl;
		  break;
		}
	    }
	  std::pair<float, float> mypair = std::make_pair( highptMRedges[i], highptMRedges[i+1] );
	  std::cout << mypair.first << " " << mypair.second << std::endl;
	  binningMap[mypair] = vect;
	}
      Double_t x1[] = {150, 150, 312.5, 312.5};
      Double_t y11[] = {0, 0.027, 0.027,0};
      Double_t y12[] = {0.027, 0.052, 0.052, 0.027};
      Double_t y13[] = {0.052, 0.077, 0.077, 0.052};
      Double_t y14[] = {0.077, 0.102, 0.102, 0.077};
      Double_t y15[] = {0.102, 0.127, 0.127, 0.102};
      Double_t y16[] = {0.127, 1.0, 1.0, 0.127};
      Double_t x2[] = {312.5, 312.5, 625, 625};
      Double_t y21[] = {0, 0.022, 0.022, 0};
      Double_t y22[] = {0.022, 0.047, 0.047, 0.022};
      Double_t y23[] = {0.047, 0.072, 0.072, 0.047};
      Double_t y24[] = {0.072, 1.0, 1.0, 0.072};
      Double_t x3[] = {625, 625, 1250, 1250};
      Double_t y31[] = {0, 0.021, 0.021, 0};
      Double_t y32[] = {0.021, 1.0, 1.0, 0.021};
      Double_t x4[] = {1250, 1250, 10000, 10000};
      Double_t y41[] = {0, 1.0, 1.0, 0.0};
      //add bins
      h2p->AddBin(4, x1, y11);
      h2p->AddBin(4, x1, y12);
      h2p->AddBin(4, x1, y13);
      h2p->AddBin(4, x1, y14);
      h2p->AddBin(4, x1, y15);
      h2p->AddBin(4, x1, y16);
      
      h2p->AddBin(4, x2, y21);
      h2p->AddBin(4, x2, y22);
      h2p->AddBin(4, x2, y23);
      h2p->AddBin(4, x2, y24);
      
      h2p->AddBin(4, x3, y31);
      h2p->AddBin(4, x3, y32);
      
      h2p->AddBin(4, x4, y41);
    }
  else if (categoryMode == "hzbb")
    {
      std::vector<float> vect;
      vect.push_back( 0.0 );
      vect.push_back( 5.0 );
      std::pair<float, float> mypair = std::make_pair( 150., 10000. );
      std::cout << mypair.first << " " << mypair.second << std::endl;
      binningMap[mypair] = vect;
      
      Double_t x1[] = {150, 150, 10000., 10000.};
      Double_t y11[] = {0, 1.0, 1.0,0};
      //add bins
      h2p->AddBin(4, x1, y11);
    }
  else if (categoryMode == "highres")
    {
      float  highresMRedges[] = {150,237.5,475,950,10000};
      nRsq[0] = 9;
      float  highresRSQedges0[9] = {0,0.028,0.053,0.078,0.103,0.128,0.153,0.178,5.0};
      nRsq[1] = 5;
      float  highresRSQedges1[5] = {0,0.035,0.06,0.085,5.0};
      nRsq[2] = 3;
      float  highresRSQedges2[3] = {0,0.018,5.0};
      nRsq[3] = 2;
      float  highresRSQedges3[2] = {0,5.0};

      for ( int i = 0; i < nMR; i++ )
	{
	  std::vector<float> vect;
	  for ( int j = 0; j < nRsq[i]; j++ )
	    {
	      switch (i)
		{
		case 0:
		  vect.push_back(highresRSQedges0[j]);
		  break;
		case 1:
		  vect.push_back(highresRSQedges1[j]);
		  break;
		case 2:
		  vect.push_back(highresRSQedges2[j]);
		  break;
		case 3:
		  vect.push_back(highresRSQedges3[j]);
		  break;
		default:
		  std::cerr << "MR bins exceeds number of defined Rsq binning!! Do nothing" << std::endl;
		  break;
		}
	    }
	  std::pair<float, float> mypair = std::make_pair( highresMRedges[i], highresMRedges[i+1] );
	  std::cout << mypair.first << " " << mypair.second << std::endl;
	  binningMap[mypair] = vect;
	}
      
      Double_t x1[] = {150, 150, 237.5, 237.5};
      Double_t y11[] = {0, 0.028, 0.028,0};
      Double_t y12[] = {0.028, 0.053, 0.053, 0.028};
      Double_t y13[] = {0.053, 0.078, 0.078, 0.053};
      Double_t y14[] = {0.078, 0.103, 0.103, 0.078};
      Double_t y15[] = {0.103, 0.128, 0.128, 0.103};
      Double_t y16[] = {0.128, 0.153, 0.153, 0.128};
      Double_t y17[] = {0.153, 0.178, 0.178, 0.153};
      Double_t y18[] = {0.178, 1.0, 1.0, 0.178};
      Double_t x2[] = {237.5, 237.5, 475, 475};
      Double_t y21[] = {0.0, 0.035, 0.035, 0.0};
      Double_t y22[] = {0.035, 0.060, 0.060, 0.035};
      Double_t y23[] = {0.060, 0.085, 0.085, 0.060};
      Double_t y24[] = {0.085, 1.0, 1.0, 0.085};
      Double_t x3[] = {475, 475, 950, 950};
      Double_t y31[] = {0.0, 0.018, 0.018, 0.0};
      Double_t y32[] = {0.018, 1.0, 1.0, 0.018};
      Double_t x4[] = {950, 950, 10000, 10000};
      Double_t y41[] = {0.0, 1.0, 1.0, 0.0};
      //add bins
      h2p->AddBin(4, x1, y11);
      h2p->AddBin(4, x1, y12);
      h2p->AddBin(4, x1, y13);
      h2p->AddBin(4, x1, y14);
      h2p->AddBin(4, x1, y15);
      h2p->AddBin(4, x1, y16);
      h2p->AddBin(4, x1, y17);
      h2p->AddBin(4, x1, y18);
      
      h2p->AddBin(4, x2, y21);
      h2p->AddBin(4, x2, y22);
      h2p->AddBin(4, x2, y23);
      h2p->AddBin(4, x2, y24);
      
      h2p->AddBin(4, x3, y31);
      h2p->AddBin(4, x3, y32);
      
      h2p->AddBin(4, x4, y41); 
    }
  else if (categoryMode == "lowres")
    {
      float  lowresMRedges[] = {150,200,400,800,10000};
      nRsq[0] = 7;
      float  lowresRSQedges0[7] = {0,0.049,0.074,0.099,0.124,0.149,5.0};
      nRsq[1] = 6;
      float  lowresRSQedges1[6] = {0,0.023,0.048,0.073,0.098,5.0};
      nRsq[2] = 3;
      float  lowresRSQedges2[3] = {0,0.02,5.0};
      nRsq[3] = 2;
      float  lowresRSQedges3[2] = {0,5.0};

      for ( int i = 0; i < nMR; i++ )
	{
	  std::vector<float> vect;
	  for ( int j = 0; j < nRsq[i]; j++ )
	    {
	      switch (i)
		{
		case 0:
		  vect.push_back(lowresRSQedges0[j]);
		  break;
		case 1:
		  vect.push_back(lowresRSQedges1[j]);
		  break;
		case 2:
		  vect.push_back(lowresRSQedges2[j]);
		  break;
		case 3:
		  vect.push_back(lowresRSQedges3[j]);
		  break;
		default:
		  std::cerr << "MR bins exceeds number of defined Rsq binning!! Do nothing" << std::endl;
		  break;
		}
	    }
	  std::pair<float, float> mypair = std::make_pair( lowresMRedges[i], lowresMRedges[i+1] );
	  std::cout << mypair.first << " " << mypair.second << std::endl;
	  binningMap[mypair] = vect;
	}
      
      Double_t x1[] = {150, 150, 200, 200};
      Double_t y11[] = {0.00, 0.049, 0.049,0.00};
      Double_t y12[] = {0.049, 0.074, 0.074, 0.049};
      Double_t y13[] = {0.074, 0.099, 0.099, 0.074};
      Double_t y14[] = {0.099, 0.124, 0.124, 0.099};
      Double_t y15[] = {0.124, 0.149, 0.149, 0.124};
      Double_t y16[] = {0.149, 1.0, 1.0, 0.149};
      
      Double_t x2[] = {200, 200, 400, 400};
      Double_t y21[] = {0.00, 0.023, 0.023, 0.00};
      Double_t y22[] = {0.023, 0.048, 0.048, 0.023};
      Double_t y23[] = {0.048, 0.073, 0.073, 0.048};
      Double_t y24[] = {0.073, 0.098, 0.098, 0.073};
      Double_t y25[] = {0.098, 1.0, 1.0, 0.098};
      
      Double_t x3[] = {400, 400, 800, 800};
      Double_t y31[] = {0.00, 0.02, 0.02, 0.00};
      Double_t y32[] = {0.02, 1.0, 1.0, 0.02};
      Double_t x4[] = {800, 800, 10000, 10000};
      Double_t y41[] = {0.00, 1.0, 1.0, 0.00};
      //add bins
      h2p->AddBin(4, x1, y11);
      h2p->AddBin(4, x1, y12);
      h2p->AddBin(4, x1, y13);
      h2p->AddBin(4, x1, y14);
      h2p->AddBin(4, x1, y15);
      h2p->AddBin(4, x1, y16);
      
      h2p->AddBin(4, x2, y21);
      h2p->AddBin(4, x2, y22);
      h2p->AddBin(4, x2, y23);
      h2p->AddBin(4, x2, y24);
      h2p->AddBin(4, x2, y25);
      
      h2p->AddBin(4, x3, y31);
      h2p->AddBin(4, x3, y32);
      
      h2p->AddBin(4, x4, y41);
    }
  
  
 
  
  fout->cd();
  cut = cut + categoryCutString;
  TTree* cutTree = tree->CopyTree( cut );
  float MR, t1Rsq, weight, pileupWeight;
  cutTree->SetBranchStatus("*", 0);
  cutTree->SetBranchStatus("weight", 1);
  cutTree->SetBranchStatus("pileupWeight", 1);
  cutTree->SetBranchStatus("MR", 1);
  cutTree->SetBranchStatus("t1Rsq", 1);
  //addresses
  cutTree->SetBranchAddress("weight", &weight);
  cutTree->SetBranchAddress("pileupWeight", &pileupWeight);
  cutTree->SetBranchAddress("MR", &MR);
  cutTree->SetBranchAddress("t1Rsq", &t1Rsq);
  
  //Signal
  TTree* cutTreeSignal;
  float MR_s, t1Rsq_s, weight_s, pileupWeight_s;
  std::cout << "config signal TTree" << std::endl;
  if ( _prepareConfigCard )
    {
      std::cout << "config signal TTree-1" << std::endl;
      cutTreeSignal = treeSignal->CopyTree( cut );
      std::cout << "config signal TTree0" << std::endl;
      cutTreeSignal->SetBranchStatus("*", 0);
      cutTreeSignal->SetBranchStatus("weight", 1);
      cutTreeSignal->SetBranchStatus("pileupWeight", 1);
      cutTreeSignal->SetBranchStatus("MR", 1);
      cutTreeSignal->SetBranchStatus("t1Rsq", 1);
      //addresses
      cutTreeSignal->SetBranchAddress("weight", &weight_s);
      cutTreeSignal->SetBranchAddress("pileupWeight", &pileupWeight_s);
      cutTreeSignal->SetBranchAddress("MR", &MR_s);
      cutTreeSignal->SetBranchAddress("t1Rsq", &t1Rsq_s);
    }
  
  std::cout << "clonning TH2Poly" << std::endl;
  TH2Poly* h2pSignal = (TH2Poly*)h2p->Clone("h2pSignal"); 
  h2p->Sumw2();
  h2pSignal->Sumw2();
  
  //----------------------------------------------------
  // For plotting just modify the loop below accordingly
  //----------------------------------------------------
  long nentries = cutTree->GetEntries();
  for ( long i = 0; i < nentries; i++ )
    {
      cutTree->GetEntry(i);
      //if ( i%10000 == 0 ) std::cout << weight << " " << pileupWeight << " " << MR << " " << t1Rsq << std::endl;
      //if ( t1Rsq < 1.0 ) h2p->Fill( MR, t1Rsq, weight*pileupWeight*lumi*kf );//nonRes
      //else  h2p->Fill( MR, 0.999, weight*pileupWeight*lumi*kf );//nonRes
      
      if ( t1Rsq < 1.0 ) h2p->Fill( MR, t1Rsq, weight*pileupWeight*lumi );//sm-higgs
      else  h2p->Fill( MR, 0.999, weight*pileupWeight*lumi );//sm-higgs
      
      //if ( t1Rsq < 1.0 ) h2p->Fill( MR, t1Rsq, weight*lumi );//no pileup
      //else  h2p->Fill( MR, 0.999, weight*lumi );//no pileup
      //if ( t1Rsq < 1.0 ) h2p->Fill( MR, t1Rsq, 1.0 );
      //else  h2p->Fill( MR, 0.999, 1.0 );
    } 
  
 if ( _prepareConfigCard )
   {
     nentries = cutTreeSignal->GetEntries();
     for ( long i = 0; i < nentries; i++ )
       {
	 cutTreeSignal->GetEntry(i);
	 //if ( i%10000 == 0 ) std::cout << weight << " " << pileupWeight << " " << MR << " " << t1Rsq << std::endl;
	 if ( t1Rsq < 1.0 ) h2pSignal->Fill( MR_s, t1Rsq_s, weight_s*lumi );//sm-higgs
	 else  h2pSignal->Fill( MR_s, 0.999, weight_s*lumi );//sm-higgs
       } 
   }
  
  
  int nbinsT = h2p->GetNumberOfBins();
  for( int j = 1; j <= nbinsT; j++ )
    {
      //std::cout << "SMH bin: " << j << " --> " << h2p->GetBinContent(j) << " +/- " << h2p->GetBinError(j) << std::endl;
      //std::cout << "Signal bin: " << j << " --> " << h2pSignal->GetBinContent(j) << " +/- " << h2pSignal->GetBinError(j) << std::endl;
    }
  
 
  if ( _prepareConfigCard )
    {
      std::string ofsName = categoryMode + "_configCard.txt";
      std::ofstream ofs ( ofsName.c_str(), std::ofstream::out );
      ofs << "#cat\t\tMR_l\t\tMR_h\t\tRsq_l\t\tRsq_h\t\tSMH\t\t\tSMH_Err\t\tSignal\t\tBkg_f" << std::endl;
      for ( auto& tmp : binningMap )
	{
	  for ( int i = 0; i < (int)tmp.second.size() - 1; i++ )
	    {
	      ofs << categoryMode << "\t\t" <<  tmp.first.first << "\t\t" << tmp.first.second << "\t\t" <<  tmp.second.at(i) << "\t\t" << tmp.second.at(i+1)
		  << "\t\t" << h2p->GetBinContent( h2p->FindBin(tmp.first.first+10, tmp.second.at(i)+0.001) ) << "\t\t"
		  << h2p->GetBinError( h2p->FindBin(tmp.first.first+10, tmp.second.at(i)+0.001) ) << "\t\t" 
		  << h2pSignal->GetBinContent( h2p->FindBin(tmp.first.first+10, tmp.second.at(i)+0.001) ) << "\t\t"
		  << "singleExp" << std::endl;
	    }
	}
      ofs.close();
    }
  h2p->SetXTitle("M_{R} (GeV)");
  h2p->SetYTitle("R^{2}");
  h2p->SetTitle("");
  h2p->SetStats(0);
  //h2p->Draw("colz L");
  h2p->Draw("colz text");
  return;
};
