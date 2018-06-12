# Noah French (njf5cu)
# Lab 11
# 11/29/17
# Filename: Makefile
# File Description Inlab 11 Makefile

CXX	= clang++

CXXFLAGS	= -Wall -O2

OFILES = middleearth.o traveling.o

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)
	doxygen

clean:
	-rm -f *.o *~ a.out

middleearth.o: middleearth.cpp middleearth.h

traveling.o: traveling.cpp middleearth.h
