#ifndef PrintAIC_HH
#define PrintAIC_HH
//C++ INCLUDES
#include <map>
#include <vector>
//ROOT INCLUDES
//ROOFIT INCLUDES
#include <RooWorkspace.h>
#include <RooPlot.h>

//LOCAL INCLUDES

void PrintAICTable(std::string MRcut,std::string RSQcut,std::map<std::string, double> delta_aic_map, std::map<std::string, double> delta_aic_map_2,std::map<std::string, double> delta_aic_map_3, std::map<std::string, double> aic_weight_map, std::map<std::string, double> aic_weight_map_2, std::map<std::string, double> aic_weight_map_3, RooWorkspace *w[]);
void PlotSidebandFit(std::string MRcut,std::string RSQcut, RooWorkspace *w[]);

#endif