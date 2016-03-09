#ifndef PlotBias_HH
#define PlotBias_HH
//C++ INCLUDES
#include <string>
#include <utility>
#include <map>
#include <fstream>
//ROOT INCLUDES
#include <TH1F.h>
#include <TH2F.h>
#include <TString.h>

struct ProcessStruct
{
  TH2F* h_inc;
  TH2F* h_sr;
};

//Functions
TH2F* Create2DHisto( TTree* tree, float* MRedges, float RsqBinSize = 0.01, TString pName = "dummy", const float lumi = 2300., const float kf = 1.0 );
void CreateDataCard( std::map<TString,ProcessStruct> psMap, float* MRedges, std::vector<float*> RSQbinning, float rsqBinSize = 0.05 );
void GetSRYield( TH2F* h, float* MRedges, std::vector<float*> RSQbinning, float rsqBinSize = 0.05 );

void PlotSignalModel( std::string fname = "", std::string outDir = "bias_plots");

#endif
