CXX = $(shell root-config --cxx)
LD = $(shell root-config --ld)

INC = $(shell pwd)
Repo = $(shell git rev-parse --show-toplevel)
Aux = $(Repo)/Aux
HggRazor = $(Repo)/HggRazor
CommonTools = $(HggRazor)/CommonTools

CPPFLAGS := $(shell root-config --cflags) -I$(INC)/include -I$(CommonTools)/include -I$(Aux)/include
LDFLAGS := $(shell root-config --glibs) $(STDLIBDIR) -lRooFit -lRooFitCore

CPPFLAGS += -g -std=c++11

TARGET = MakeFit

SRC = app/testapp.cc src/makeInvertedANFit_v2.cc $(Aux)/src/CommandLineInput.cc

OBJ = $(SRC:.cc=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(LD) $(CPPFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)
	@echo $@
	@echo $<
	@echo $^

%.o : %.cc
	$(CXX) $(CPPFLAGS) -o $@ -c $<
	@echo $@
	@echo $<
clean :
	rm -f *.o app/*.o src/*.o $(CommonTools)/src/*.o $(Aux)/src/*.o $(TARGET) *~