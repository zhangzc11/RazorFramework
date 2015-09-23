#ifndef PlotBias_HH
#define PlotBias_HH
//C++ INCLUDES
#include <string>
#include <utility>
#include <map>

void PlotBias( std::string fname , std::string outDir );
std::pair<double,double> GetMeanRms( std::string fname, std::string outDir );
void MakeTable( std::map< std::pair<std::string,std::string>, double > mymap, TString type );

#endif
