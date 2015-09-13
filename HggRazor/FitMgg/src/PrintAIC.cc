//C++ INCLUDES
#include <iostream>
#include <map>
#include <vector>
//LOCAL INCLUDES
#include "PrintAIC.hh"


void PrintAICTable(std::string MRcut,std::string RSQcut,std::map<std::string, double> delta_aic_map,  std::map<std::string, double> aic_weight_map)
{
	FILE* m_outfile = fopen("FitChoices.tex", "a");

	std::map< std::string, std::string > func_name;
	if( func_name.find("doubleExp") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("doubleExp","double exponential"));
	if( func_name.find("doublePow") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("doublePow","double power"));
	if( func_name.find("singleExp") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("singleExp","single exponential"));
	if( func_name.find("singlePow") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("singlePow","single power"));
	if( func_name.find("poly2") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("poly2","second order poly"));
	if( func_name.find("poly3") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("poly3","third order poly"));
	if( func_name.find("modExp") == func_name.end() ) func_name.insert( std::pair<std::string, std::string>("modExp","modified exponential"));

	std::map< std::string, int > num_par;
	if( num_par.find("doubleExp") == num_par.end() ) num_par.insert( std::pair<std::string, int>("doubleExp",3));
	if( num_par.find("doublePow") == num_par.end() ) num_par.insert( std::pair<std::string, int>("doublePow",3));
	if( num_par.find("singleExp") == num_par.end() ) num_par.insert( std::pair<std::string, int>("singleExp",1));
	if( num_par.find("singlePow") == num_par.end() ) num_par.insert( std::pair<std::string, int>("singlePow",1));
	if( num_par.find("poly2") == num_par.end() ) num_par.insert( std::pair<std::string, int>("poly2",3));
	if( num_par.find("poly3") == num_par.end() ) num_par.insert( std::pair<std::string, int>("poly3",4));
	if( num_par.find("modExp") == num_par.end() ) num_par.insert( std::pair<std::string, int>("modExp",2));

    //print the table to a file
	fprintf(m_outfile,"\\begin{table}[H] \n");
	fprintf(m_outfile,"\\begin{center} \n");
	fprintf(m_outfile,"\\begin{tabular}{|c|c|c|c|} \n");
	fprintf(m_outfile,"\\hline function & \\# of Parameters & $a_i-a_{min}$ & $w_i$ \\\\ \\hline \n");
	for ( auto tmp :func_name) 
      {
		  fprintf(m_outfile,"%s & %2d & %6.2f & %6.2f \\\\ \n",func_name[tmp.first].c_str(), num_par[tmp.first], delta_aic_map[tmp.first], aic_weight_map[tmp.first]);
	 }
	fprintf(m_outfile,"\\hline \n");
	fprintf(m_outfile,"\\end{tabular} \n");
	fprintf(m_outfile,"\\caption{$M_R$ cut = %s \\&\\& $R^2$ cut = %s.} \n", MRcut.c_str(),RSQcut.c_str());
	fprintf(m_outfile,"\\label{tab:FitChoices_%s_%s} \n", MRcut.c_str(),RSQcut.c_str());
	fprintf(m_outfile,"\\end{center} \n");
	fprintf(m_outfile,"\\end{table} \n \n \n");
};

