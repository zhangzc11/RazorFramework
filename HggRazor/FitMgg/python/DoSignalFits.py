from optparse import OptionParser
import ROOT as rt
import os
import sys
from array import *




if __name__ == '__main__':
    parser = OptionParser()

    (options,args) = parser.parse_args()
     
    for f in args:
        if f.lower().endswith('.root'):
            rootFile = rt.TFile(f)


    xbins = [150,187.5,375,750,10000]
    ybins = {150:[0,0.058,0.108,0.158, 5],
             187.5:[0,0.07,0.12,5],
             375:[0,0.026,5],
             750:[0,5]
             }

    mrlen = len( xbins )
    for ibin , mrlow in enumerate( xbins ):
        if ibin < mrlen-1:
            rsqlen = len( ybins[mrlow] )
            for jbin,rsqlow in enumerate(ybins[mrlow]): 
                if jbin <  rsqlen-1:
                    print mrlow, xbins[ibin+1], rsqlow, ybins[mrlow][jbin+1]
                    outFile = "SignalFitResults/signalFit_MR_"+str(mrlow)+"_"+str(xbins[ibin+1])+"_RSQ_"+str(rsqlow)+"_"+str(ybins[mrlow][jbin+1])+".root"
                    razorcut = "--LowMRcut="+str(mrlow)+" --LowRSQcut="+str(rsqlow)
                    razorcut += " --HighMRcut="+str(xbins[ibin+1])+" --HighRSQcut="+str(ybins[mrlow][jbin+1])
                    command = "./MakeFitRun2 --inputFile=/Users/cmorgoth/Work/data/HggRazorRun2/MC/GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8Jan23_TOTAL.root"
                    command += " --treeName=HggRazor --dataMode=data --category=highres --fitMode=signalFit --outputFile="+outFile+" "+razorcut
                    print outFile,"\n",command
                    os.system( command )
    #w = rootFile.Get("w1")
    #mgg = w.var("mgg")
    #pdf = w.pdf("sideband_fitpdf_dExp_N1N2")
    #function = pdf.asTF(rt.RootfileoArgList(mgg))

    
                            
