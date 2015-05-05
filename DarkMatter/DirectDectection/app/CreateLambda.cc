#include <iostream>
#include "create_TGraph.hh"
#include <fstream>
#include "TFile.h"
#include "TROOT.h"
#include "TGraph.h"

int main(){
  
  gROOT->Reset();
  
  std::ifstream mfile("lists/ListOfFilesSI.txt");
  std::string fname;
  std::string name_graph[50];
  int offset = 15;
  int rm_txt = 3;
  int ctr = 0;
  int it_f;
  int it_l;
  TGraph* g[50];
  if (mfile.is_open()){
    while ( mfile.good() ){
      mfile >> fname;
      if(mfile.eof())break;
      std::cout << fname << std::endl;
      std::cout<< "POS1: " << fname.find_last_of('/') << std::endl;
      std::cout<< "POS1: " << fname.find("OtherExpLimits/") << std::endl;
      std::cout<< "POS2: " << fname.find(".txt") << std::endl;
      it_f = fname.find_last_of('/') + 1;
      it_l = fname.find(".txt") - fname.find_last_of('/') -1;
      std::cout<< "SUBSTR: " << fname.substr( it_f, it_l ) << std::endl;
      name_graph[ctr] = fname.substr( it_f, it_l );
      g[ctr] = CreateTGraphLambda( fname.c_str(), "SI" );
      ctr++;
    }
    mfile.close();
  }else{
    std::cout << "Unable to open file";
  }
  
  TFile* file = new TFile("SI_Lambda_Graphs.root", "RECREATE");
  std::cout << "here 0" << std::endl;
  for(int i = 0; i < ctr; i++){
    g[i]->Write(name_graph[i].c_str());
  }
  file->Close();
  
  //SD
  std::ifstream mfile1("lists/ListOfFilesSD.txt");
  ctr = 0;
  if (mfile1.is_open()){
    while ( mfile1.good() ){
      mfile1 >> fname;
      if(mfile1.eof())break;
      std::cout << fname << std::endl;
      std::cout<< "POS1: " << fname.find("SD/") << std::endl;
      std::cout<< "POS2: " << fname.find(".txt") << std::endl;
      it_f = fname.find_last_of('/') + 1;
      it_l = fname.find(".txt") - fname.find_last_of('/') -1;
      std::cout<< "SUBSTR: " << fname.substr( it_f, it_l ) << std::endl;
      name_graph[ctr] = fname.substr( it_f, it_l );
      g[ctr] = CreateTGraphLambda( fname.c_str(), "SD");
      ctr++;
    }
    mfile.close();
  }else{
    std::cout << "Unable to open file";
  }
  
  TFile* file1 = new TFile("SD_Lambda_Graphs.root", "RECREATE");
  
  std::cout << "here 0" << std::endl;
  for(int i = 0; i < ctr; i++){
    g[i]->Write(name_graph[i].c_str());
  }
  file1->Close();
  
  return 0;
}
