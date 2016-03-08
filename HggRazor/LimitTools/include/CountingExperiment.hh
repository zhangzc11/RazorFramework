#ifndef PlotBias_HH
#define PlotBias_HH
//C++ INCLUDES
#include <string>
#include <utility>
#include <map>
//ROOT INCLUDES
#include <TH1F.h>
#include <TH2F.h>

TH2F* Create2DHisto( TTree* tree, float* MRedges, float RsqBinSize = 0.01, TString pName = "dummy" );

void PlotSignalModel( std::string fname = "", std::string outDir = "bias_plots");

#endif
