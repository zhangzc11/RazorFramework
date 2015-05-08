#include "create_TGraph.hh"
#include <string>
//ROOT INCLUDES
#include <TMath.h>

const double p_mass = 0.938272046;//mass GeV
const double NU_factor = 2.576721894e27;

TGraph* CreateTGraph(const char* filename){
  
  double mass[10000], xsec[10000];
  std::string buff;
  double weight;
  int ctr = 0;
  std::ifstream myfile(filename);
  if (myfile.is_open()){
    while ( myfile.good() ){
      if(ctr == 0){
	myfile >> buff >> weight;
	std::cout << buff <<  " "  << weight << std::endl;
      }else{
	myfile >> mass[ctr-1] >> xsec[ctr-1];
	xsec[ctr-1] = xsec[ctr-1]*weight;
	if(myfile.eof())break;
	//std::cout << mass[ctr-1] <<  " "  << xsec[ctr-1] << std::endl;
      }
      ctr++;
    }
    myfile.close();
  }else std::cout << "Unable to open file" << std::endl;
  
  std::cout << "ctr: " << ctr << std::endl;
  TGraph* gr = new TGraph(ctr-1,mass,xsec);
  return gr;
  
};

TGraph* CreateTGraphLambda( const char* filename , std::string type)
{
  double mass[10000], lambda[10000];
  std::string buff;
  double weight;
  int ctr = 0;
  double mu;//reduced mass
  std::ifstream myfile(filename);
  if (myfile.is_open()){
    while ( myfile.good() ){
      if(ctr == 0){
	myfile >> buff >> weight;
	std::cout << buff <<  " "  << weight << std::endl;
      }else{
	myfile >> mass[ctr-1] >> lambda[ctr-1];
	mu = p_mass*mass[ctr-1]/( p_mass + mass[ctr-1]);
	lambda[ctr-1] = lambda[ctr-1]*weight*NU_factor;
	//std::cout << "lambda: " <<  lambda[ctr-1] << std::endl;
	if( type == "sd" || type == "SD" ) 
	  {
	    lambda[ctr-1] = pow( 0.33*pow( mu, 2)/( TMath::Pi()*lambda[ctr-1] ), 0.250 );
	    std::cout << "lambda: " <<  lambda[ctr-1] << std::endl;
	  }
	if( type == "si" || type == "SI" )
	  {
	    lambda[ctr-1] =  pow( 9*pow( mu, 2)/( TMath::Pi()*lambda[ctr-1]), 0.250 );
	    std::cout << "lambda: " <<  lambda[ctr-1] << std::endl;
	  }
	
	if(myfile.eof())break;
	//std::cout << mass[ctr-1] <<  " "  << lambda[ctr-1] << std::endl;
      }
      ctr++;
    }
    myfile.close();
  }else std::cout << "Unable to open file" << std::endl;
  
  std::cout << "ctr: " << ctr << std::endl;
  TGraph* gr = new TGraph(ctr-1,mass,lambda);
  return gr;
};
