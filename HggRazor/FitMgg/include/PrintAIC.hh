#ifndef PrintAIC_HH
#define PrintAIC_HH
//C++ INCLUDES
#include <map>
#include <vector>
//ROOT INCLUDES
//ROOFIT INCLUDES
//LOCAL INCLUDES

void PrintAICTable(std::string MRcut,std::string RSQcut,std::map<std::string, double> delta_aic_map,  std::map<std::string, double> aic_weight_map);

#endif
