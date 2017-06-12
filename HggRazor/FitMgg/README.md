

# Setup Correctly
export SCRAM_ARCH=slc6_amd64_gcc493

cmsrel CMSSW_7_6_3

cd CMSSW_7_6_3/src

git clone -b hacked git@github.com:zhangzc11/RazorFramework.git

cd RazorFramework/HggRazor/FitMgg

source setup.sh
