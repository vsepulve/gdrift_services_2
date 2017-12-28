SRCDIR = src
BINDIR = bin
LIBDIR = lib
DATADIR = data
TYPE ?= -O3

CPPFLAGS = $(TYPE) -Wall -I./include/ -I/usr/local/include/gdrift++ -L./lib/ -std=c++0x -lrt -pthread

CPP = g++

CREATED_OBJECTS = SimulationConfig.o
#CREATED_OBJECTS += DecoderBlocksCompact.o 
#CREATED_OBJECTS += DecoderBlocksBytes.o RecoderBlocks.o

OBJECTS = $(CREATED_OBJECTS) 
OBJECTS_LOC = $(OBJECTS:%.o=$(LIBDIR)/%.o)

.PHONY: all clean

all: test

%.o: 
	make -C src $@
	
%: $(OBJECTS)
	$(CPP) $(OBJECTS_LOC) -o $(BINDIR)/$@ $(SRCDIR)/$@.cpp $(CPPFLAGS)
	
clean:
	rm -f bin/* lib/*
	
