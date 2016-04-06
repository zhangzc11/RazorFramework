#include <iostream>

//ROOT INCLUDES
#include <TH1.h>
#include <TAxis.h>
//LOCAL INCLUDES
#include "AssortedFunctions.hh"

double GetEffSigma( TH1* hist )
{

  TAxis *xaxis = hist->GetXaxis();
  int nb = xaxis->GetNbins();
  if(nb < 10) {
    std::cout << "effsigma: Not a valid histo. nbins = " << nb << std::endl;
    return 0.;
  }
  
  double bwid = xaxis->GetBinWidth(1);
  if(bwid == 0) {
    std::cout << "effsigma: Not a valid histo. bwid = " << bwid << std::endl;
    return 0.;
  }
  double xmax = xaxis->GetXmax();
  double xmin = xaxis->GetXmin();
  double ave = hist->GetMean();
  double rms = hist->GetRMS();

  double total=0.;
  for(int i=0; i<nb+2; i++) {
    total+=hist->GetBinContent(i);
  }
  //   if(total < 100.) {
  //     std::cout << "effsigma: Too few entries " << total << std::endl;
  //     return 0.;
  //   }
  int ierr=0;
  int ismin=999;
  
  double rlim=0.683*total;
  int nrms=rms/(bwid);    // Set scan size to +/- rms
  if(nrms > nb/10) nrms=nb/10; // Could be tuned...

  double widmin=9999999.;
  for(int iscan=-nrms;iscan<nrms+1;iscan++) { // Scan window centre
    int ibm=(ave-xmin)/bwid+1+iscan;
    double x=(ibm-0.5)*bwid+xmin;
    double xj=x;
    double xk=x;
    int jbm=ibm;
    int kbm=ibm;
    double bin=hist->GetBinContent(ibm);
    total=bin;
    for(int j=1;j<nb;j++){
      if(jbm < nb) {
        jbm++;
        xj+=bwid;
        bin=hist->GetBinContent(jbm);
        total+=bin;
        if(total > rlim) break;
      }
      else ierr=1;
      if(kbm > 0) {
        kbm--;
        xk-=bwid;
        bin=hist->GetBinContent(kbm);
        total+=bin;
        if(total > rlim) break;
      }
      else ierr=1;
    }
    double dxf=(total-rlim)*bwid/bin;
    double wid=(xj-xk+bwid-dxf)*0.5;
    if(wid < widmin) {
      widmin=wid;
      ismin=iscan;
    }   
  }
  if(ismin == nrms || ismin == -nrms) ierr=3;
  if(ierr != 0) std::cout << "effsigma: Error of type " << ierr << std::endl;
  
  return widmin;
  
}
