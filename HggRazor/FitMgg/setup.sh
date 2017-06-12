cmsenv
source /afs/cern.ch/work/c/cpena/public/myRootHacked6V2/bin/thisroot.sh
cd include
make
cd ..
make
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD/include
