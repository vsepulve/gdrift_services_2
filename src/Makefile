SRCDIR = ./
BINDIR = ../bin
LIBDIR = ../lib
DATADIR = ../data
TYPE ?= -O3
CPPFLAGS = $(TYPE) -Wall -I../include/ -I/usr/local/include/gdrift++ -L../lib/ -std=c++0x

CPP = g++

%.o: %.cc 
	$(CPP) $(CPPFLAGS) -c $< -o $(LIBDIR)/$@


%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $(LIBDIR)/$@

	
