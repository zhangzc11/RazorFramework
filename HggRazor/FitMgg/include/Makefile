CXX = $(shell root-config --cxx)
LD = $(shell root-config --ld)

INC = $(shell pwd)
Repo = $(shell git rev-parse --show-toplevel)

CPPFLAGS := $(shell root-config --cflags) -I$(INC)/include 
LDFLAGS := $(shell root-config --glibs) $(STDLIBDIR) -lRooFit -lRooFitCore

CPPFLAGS += -g -std=c++11

SRC = ../src/CustomPdfs.cc
SHARED = CustomPdfs.so
INCLUDELIST = CustomPdfs.hh

all: $(SHARED)


rootdict.cc: 
	$(ROOTSYS)/bin/rootcint -f $@ -c $(CINTINCLUDES) -I$(INC) $(INCLUDELIST) 

rootdict.o:
	$(CXX) rootdict.cc $(CPPFLAGS) $(LDFLAGS) -o $@ -I$(INC) -c

CustomPdfs.o:
	$(CXX) $(SRC) $(CPPFLAGS) $(LDFLAGS) -o $@ -I$(INC) -c

$(SHARED): 
	$(CXX) -shared rootdict.o CustomPdfs.o $(LDFLAGS) -o $@ $^

clean :
	rm -f *.o *.so
