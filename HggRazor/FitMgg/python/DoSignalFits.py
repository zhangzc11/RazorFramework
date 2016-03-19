from optparse import OptionParser
import ROOT as rt
import os
import sys
from array import *



xbins_hpt = [150,250,500,1000,10000]
ybins_hpt = {150:[0,0.054,0.104,5],
         250:[0,0.038,0.088,5],
         500:[0,0.03,5],
         1000:[0,5]
         }


xbins_hr = [150,187.5,375,750,10000]
ybins_hr = {150:[0,0.058,0.108,0.158, 5],
         187.5:[0,0.07,0.12,5],
         375:[0,0.026,5],
         750:[0,5]
         }

xbins_lr = [150,200,400,800,10000]
ybins_lr = {150:[0,0.064,0.114,0.164, 5],
         200:[0,0.056,0.106,5],
         400:[0,0.02,5],
         800:[0,5]
         }


if __name__ == '__main__':
    parser = OptionParser()

    (options,args) = parser.parse_args()
     
    for f in args:
        if f.lower().endswith('.root'):
            rootFile = rt.TFile(f)

    box = "LowRes"

    if box == "HighPt":
        mrlen = len( xbins_hpt )
        for ibin , mrlow in enumerate( xbins_hpt ):
            if ibin < mrlen-1:
                rsqlen = len( ybins_hpt[mrlow] )
                for jbin,rsqlow in enumerate(ybins_hpt[mrlow]): 
                    if jbin <  rsqlen-1:
                        print mrlow, xbins_hpt[ibin+1], rsqlow, ybins_hpt[mrlow][jbin+1]
                        outFile = "SignalFitResults/"+box+"_signalFit_MR_"+str(mrlow)+"_"+str(xbins_hpt[ibin+1])+"_RSQ_"+str(rsqlow)+"_"+str(ybins_hpt[mrlow][jbin+1])+".root"
                        razorcut = "--LowMRcut="+str(mrlow)+" --LowRSQcut="+str(rsqlow)
                        razorcut += " --HighMRcut="+str(xbins_hpt[ibin+1])+" --HighRSQcut="+str(ybins_hpt[mrlow][jbin+1])
                        command = "./MakeFitRun2 --inputFile=/Users/cmorgoth/Work/data/HggRazorRun2/MC/GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8Jan23_TOTAL.root"
                        command += " --treeName=HggRazor --dataMode=data --category=highres --fitMode=signalFit --outputFile="+outFile+" "+razorcut
                        print outFile,"\n",command
                        os.system( command )
   
    elif box == "HighRes":
        mrlen = len( xbins_hr )
        for ibin , mrlow in enumerate( xbins_hr ):
            if ibin < mrlen-1:
                rsqlen = len( ybins_hr[mrlow] )
                for jbin,rsqlow in enumerate(ybins_hr[mrlow]): 
                    if jbin <  rsqlen-1:
                        print mrlow, xbins_hr[ibin+1], rsqlow, ybins_hr[mrlow][jbin+1]
                        outFile = "SignalFitResults/"+box+"_signalFit_MR_"+str(mrlow)+"_"+str(xbins_hr[ibin+1])+"_RSQ_"+str(rsqlow)+"_"+str(ybins_hr[mrlow][jbin+1])+".root"
                        razorcut = "--LowMRcut="+str(mrlow)+" --LowRSQcut="+str(rsqlow)
                        razorcut += " --HighMRcut="+str(xbins_hr[ibin+1])+" --HighRSQcut="+str(ybins_hr[mrlow][jbin+1])
                        command = "./MakeFitRun2 --inputFile=/Users/cmorgoth/Work/data/HggRazorRun2/MC/GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8Jan23_TOTAL.root"
                        command += " --treeName=HggRazor --dataMode=data --category=highres --fitMode=signalFit --outputFile="+outFile+" "+razorcut
                        print outFile,"\n",command
                        os.system( command )
                        
    elif box == "LowRes":
        mrlen = len( xbins_lr )
        for ibin , mrlow in enumerate( xbins_lr ):
            if ibin < mrlen-1:
                rsqlen = len( ybins_lr[mrlow] )
                for jbin,rsqlow in enumerate(ybins_lr[mrlow]): 
                    if jbin <  rsqlen-1:
                        print mrlow, xbins_lr[ibin+1], rsqlow, ybins_lr[mrlow][jbin+1]
                        outFile = "SignalFitResults/"+box+"_signalFit_MR_"+str(mrlow)+"_"+str(xbins_lr[ibin+1])+"_RSQ_"+str(rsqlow)+"_"+str(ybins_lr[mrlow][jbin+1])+".root"
                        razorcut = "--LowMRcut="+str(mrlow)+" --LowRSQcut="+str(rsqlow)
                        razorcut += " --HighMRcut="+str(xbins_lr[ibin+1])+" --HighRSQcut="+str(ybins_lr[mrlow][jbin+1])
                        command = "./MakeFitRun2 --inputFile=/Users/cmorgoth/Work/data/HggRazorRun2/MC/GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8Jan23_TOTAL.root"
                        command += " --treeName=HggRazor --dataMode=data --category=highres --fitMode=signalFit --outputFile="+outFile+" "+razorcut
                        print outFile,"\n",command
                        os.system( command )
                            
