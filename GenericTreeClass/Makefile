CXX = $(shell root-config --cxx)
LD = $(shell root-config --ld)

INC = $(shell pwd)
Repo = $(shell git rev-parse --show-toplevel)
Aux = $(Repo)/Aux
HggRazor = $(Repo)/HggRazor
Selection = $(HggRazor)/Selection
CommonTools = $(HggRazor)/CommonTools

CPPFLAGS := $(shell root-config --cflags) -I$(INC)/include -I$(CommonTools)/include -I$(Aux)/include -I$(Selection)/include
LDFLAGS := $(shell root-config --glibs) $(STDLIBDIR)

CPPFLAGS += -g -std=c++11

TARGET1 = ttbar_emu_CR
TARGET3 = PlotFromInclusiveTree

SRC1 = app/ttbar_emu_CR.cc src/ControlSampleEvent.cc src/GenericTreeClass.cc $(CommonTools)/src/HggAux.cc $(Aux)/src/CommandLineInput.cc $(Aux)/src/TChainTools.cc $(Aux)/src/PlotCosmetics.cc $(Aux)/src/BTagCalibrationStandalone.cc
SRC3 = app/PlotFromControlSampleEvent.cc src/ControlSampleEvent.cc src/GenericTreeClass.cc $(CommonTools)/src/HggAux.cc $(Aux)/src/CommandLineInput.cc $(Aux)/src/TChainTools.cc $(Aux)/src/PlotCosmetics.cc $(Aux)/src/BTagCalibrationStandalone.cc

OBJ1 = $(SRC1:.cc=.o)
OBJ3 = $(SRC3:.cc=.o)

all : $(TARGET1) $(TARGET3)

$(TARGET1) : $(OBJ1)
	$(LD) $(CPPFLAGS) -o $(TARGET1) $(OBJ1) $(LDFLAGS)
	@echo $@
	@echo $<
	@echo $^

$(TARGET3) : $(OBJ3)
	$(LD) $(CPPFLAGS) -o $(TARGET3) $(OBJ3) $(LDFLAGS)
	@echo $@
	@echo $<
	@echo $^

%.o : %.cc
	$(CXX) $(CPPFLAGS) -o $@ -c $<
	@echo $@
	@echo $<
clean :
	rm -f *.o app/*.o src/*.o $(CommonTools)/src/*.o $(Aux)/src/*.o $(TARGET3) $(TARGET1) *~
