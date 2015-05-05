CXX = $(shell root-config --cxx)
LD = $(shell root-config --ld)

INC=$(shell pwd)

STDINCDIR :=-I$(INC)/include
STDLIBDIR := 

CPPFLAGS := $(shell root-config --cflags) $(STDINCDIR)
LDFLAGS := $(shell root-config --glibs) $(STDLIBDIR)

CPPFLAGS += -g

TARGET = DM_EFT
TARGETv1 = DM_EFT_VarCoupling
TARGET1 = DM_EFT_MonoB
TARGET1v1 = DM_EFT_MonoB_VarCoupling

SRC = app/DM_EFT.cc src/outTree.cc
SRCv1 = app/DM_EFT_VarCoupling.cc src/outTree.cc

SRC1 = app/DM_EFT_MonoB.cc src/outTree.cc
SRC1v1 = app/DM_EFT_MonoB_VarCoupling.cc src/outTree.cc

OBJ = $(SRC:.cc=.o)
OBJv1 = $(SRCv1:.cc=.o)
OBJ1 = $(SRC1:.cc=.o)
OBJ1v1 = $(SRC1v1:.cc=.o)

all : $(TARGET) $(TARGETv1) $(TARGET1) $(TARGET1v1)

$(TARGET) : $(OBJ)
	$(LD) $(CPPFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)
	@echo $
	@echo $<
	@echo $^

$(TARGETv1) : $(OBJv1)
	$(LD) $(CPPFLAGS) -o $(TARGETv1) $(OBJv1) $(LDFLAGS)
	@echo $
	@echo $<
	@echo $^

$(TARGET1) : $(OBJ1)
	$(LD) $(CPPFLAGS) -o $(TARGET1) $(OBJ1) $(LDFLAGS)
	@echo $
	@echo $<
	@echo $^

$(TARGET1v1) : $(OBJ1v1)
	$(LD) $(CPPFLAGS) -o $(TARGET1v1) $(OBJ1v1) $(LDFLAGS)
	@echo $
	@echo $<
	@echo $^

%.o : %.cc
	$(CXX) $(CPPFLAGS) -o $@ -c $<
	@echo $@	
	@echo $<
clean :
	rm -f *.o src/*.o $(TARGET) $(TARGETv1) $(TARGET1) $(TARGET1v1)*~

