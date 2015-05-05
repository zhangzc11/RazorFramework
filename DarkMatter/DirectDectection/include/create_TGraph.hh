#ifndef CREATE_TGRAPH_HH
#define CREATE_TGRAPH_HH 1

#include <iostream>
#include <fstream>
#include "TGraph.h"

TGraph* CreateTGraph(const char* );
TGraph* CreateTGraphLambda(const char* , std::string type = "" );


#endif
