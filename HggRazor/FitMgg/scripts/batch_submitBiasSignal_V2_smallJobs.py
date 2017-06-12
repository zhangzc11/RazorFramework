#!/usr/bin/env python
#this script submit the jobs to lxplus batch to run multiple bins of biasSignal test, the bins are from bin_list.list
# example: cd ../; make; cd scripts; cmsenv; python batch_submitBiasSignalBackground.py bin_list.list
# modify the inputFile and queue to your own situation. Usually you need to modify the queue because the example "cmscaf1nd" is not open to everyone.

import subprocess, time, sys, os, shlex

print "RUNNING BIAS TEST"

#inputFile = "/afs/cern.ch/work/z/zhicaiz/public/RazorInput/DoubleEG_Run2015_CMSSW_7_6_March15_GoodLumi.root"
#inputFile = "/afs/cern.ch/work/z/zhicaiz/public/RazorInput/HggRazor_DoubleEG_2016B_PRv2_GoodLumiGoldenJun16.root"
#inputFile = "/afs/cern.ch/work/z/zhicaiz/public/RazorInput/HggRazor_DoubleEG_Run2_MRSkim_2p3_plus_7p7ifb.root"

#outputDir = "/afs/cern.ch/work/z/zhicaiz/public/BiasSignalTest_result_withTrignoMET_2016data_10ifb_to15ifb_15July_smallJobs/"

#inputFile = "/afs/cern.ch/work/z/zhicaiz/public/RazorInput/HggRazor_DoubleEG_Run2_MRSkim_2p3_12p9ifb.root"

#outputDir = "/afs/cern.ch/work/z/zhicaiz/public/BiasSignalTest_result_2016data_15ifb_29July_smallJobs/"

#inputFile = "/afs/cern.ch/work/z/zhicaiz/public/RazorInput/HggRazor_DoubleEG_2016BCDEFG_GoodLumiGolden_26p394ifb.root"
#outputDir = "/afs/cern.ch/work/z/zhicaiz/public/BiasSignalTest_result_2016BCDEFG_20161011_smallJobs/"


inputFile = "/eos/cms/store/group/phys_susy/razor/Run2Analysis/HggRazorLeptons/V3p13_Mar62016/HggRazorLeptons_DoubleEG_2016_03Feb2017_GoodLumiGolden_35p9ifb.root"

outputDir = "/afs/cern.ch/work/z/zhicaiz/public/BiasSignalTest_Leptons_35p9ifb_05June2017_cmscaf1nd_hacked_smallJobs/"

#outputDir = "/afs/cern.ch/work/z/zhicaiz/public/BiasSignalTest_result_withTrignoMET_2016data_x4_27June2016_FINAL_smallJobs/"
SoverB = ["0.0"]

queue = "cmscaf1nd" # change this to the queue you want to use in lxplus batch

if __name__ == "__main__":
	bin_list_filename = sys.argv[1]
	
	#fitName=["singleExp", "doubleExp", "modExp", "singlePow", "doublePow", "poly2", "poly3"]
	
	pwd = os.getcwd()
	work_directory = pwd.replace("scripts","")
	
	#os.system("rm -rf "+pwd+"/submit_biasSignal")	
	os.system("mkdir -p "+pwd+"/submit_biasSignal_Leptons_2016data_smallJobs")	
	with open(bin_list_filename,"r") as bin_list_file:
		for this_bin in bin_list_file:
			bin_array = shlex.split(this_bin)
			for SoverB_index in range(len(SoverB)):
				os.system("mkdir -p "+outputDir+"trees/"+bin_array[0]+"_"+bin_array[1]+"_"+bin_array[3]+"/SoB_"+SoverB[SoverB_index])
				for f1 in range(len(bin_array)-5):
					for f2 in range(len(bin_array)-5): 
						#if f1%2==0 and f2%2==0 and bin_array[f1+5]=="modExp": 
						if f1%2==0 and f2%2==0:
							for job_idx in range(10):
								env_script_n = pwd + "/submit_biasSignal_Leptons_2016data_smallJobs/" + bin_array[0]+"_"+bin_array[1]+"_"+bin_array[3]+"_SoB_"+SoverB[SoverB_index]+"_"+bin_array[f1+5]+"_"+bin_array[f2+5]+bin_array[1]+"_"+bin_array[3]+"_"+SoverB[SoverB_index]+"_job_"+str(job_idx)+"_jojb_00001.sh"
								env_script_f = open(env_script_n, 'w')
								env_script_f.write("#!/bin/bash\n")
								env_script_f.write("cd " + work_directory + "\n")
								env_script_f.write("ulimit -c 0\n")
								env_script_f.write("eval `scramv1 runtime -sh`\n")
								env_script_f.write("source /afs/cern.ch/work/c/cpena/public/myRootHacked6V2/bin/thisroot.sh \n")
								env_script_f.write("./MakeFitRun2 --inputFile="+inputFile+" --treeName=HggRazorLeptons --LowMRcut="+bin_array[1]+" --HighMRcut="+bin_array[2]+" --LowRSQcut="+bin_array[3]+" --HighRSQcut="+bin_array[4]+" --dataMode=data --category="+bin_array[0]+" --fitMode=biasSignal --signalFraction="+SoverB[SoverB_index]+" --f1="+bin_array[f1+5]+" --f2="+bin_array[f2+5]+" --nToys=1000 --runPeriod=run2 --outputFile="+outputDir+"trees/"+bin_array[0]+ "_" +bin_array[1]+"_"+bin_array[3]+ "/SoB_"+SoverB[SoverB_index]+"/biasTest_"+bin_array[f1+5]+"_"+bin_array[f2+5]+"_job_"+str(job_idx)+".root"+" \n")
								env_script_f.write("rm -rf "+pwd + "/core.*")
								changePermission = subprocess.Popen(['chmod 777 ' + env_script_n], stdout=subprocess.PIPE, shell=True);
								debugout = changePermission.communicate()
								submit_s = 'bsub -q '+queue+' -o ' + pwd + "/submit_biasSignal_2016data_smallJobs/"+bin_array[0]+"_"+bin_array[1]+"_"+bin_array[3]+"_SoB_"+SoverB[SoverB_index]+bin_array[f1+5]+"_"+bin_array[f2+5]+"_job_"+str(job_idx)+".log" + ' "source ' + env_script_n + '"'
								print "[submit_BiasSignal]  '-- " + submit_s
								submitJobs = subprocess.Popen([submit_s], stdout=subprocess.PIPE, shell=True);
								output = (submitJobs.communicate()[0]).splitlines()
								print "[submit_BiasSignal]  '-- " + output[0]		
