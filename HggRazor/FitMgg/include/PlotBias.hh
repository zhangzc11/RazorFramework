#ifndef PlotBias_HH
#define PlotBias_HH
//C++ INCLUDES
#include <string>
#include <utility>
#include <map>

void PlotBias( std::string fname , std::string outDir );
std::pair<double,double> GetMeanRms(  std::string fname = "", std::string dataSet = "bias_plots", std::string var = "bias" );
void MakeTable( std::map< std::pair<std::string,std::string>, double > mymap, TString type );
double FitBias( TString fname, TString f1, TString f2 , std::string outDir);

#endif
