# Noah French (njf5cu)
# Lab 11
# 11/28/17
# Filename: Makefile
# File Description Prelab 11 Makefile

CXX	= clang++

CXXFLAGS	= -Wall -O2

OFILES = middleearth.o topological.o

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)
	doxygen

clean:
	-rm -f *.o *~ a.out

middleearth.o: middleearth.cpp middleearth.h

topological.o: topological.cpp
