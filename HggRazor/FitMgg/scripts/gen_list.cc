//#include <iostream>

void gen_list()
{
	FILE* m_outfile = fopen("runAICtable.sh", "w+"); 
	std::string MRcut[7] = {"0","50","100","150","200","250","300"};
	std::string RSQcut[3] = {"0","0.025","0.05"};
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<7;i++)
		{
			fprintf(m_outfile,"./MakeFitRun2 --inputFile=DoublePhoton_22Jan2013_Run2012ABCD_v9.root --treeName=SusyHggTree --MRcut=%s --RSQcut=%s --dataMode=data --category=highres --fitMode=AIC2 --outputfile=AIC_output/%s_%s.root --invertedIso=yes \n", MRcut[i].c_str(),RSQcut[j].c_str(), MRcut[i].c_str(),RSQcut[j].c_str());
		}
	}
}
