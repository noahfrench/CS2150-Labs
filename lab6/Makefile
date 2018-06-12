# Noah French (njf5cu)
# Lab 6
# 8/20/17
# Filename: Makefile
# File description: It's a Makefile!

CXX 	= clang++

CXXFLAGS	= -Wall -g -O2

OFILES	= hashTable.o wordPuzzle.o timer.o 

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)

clean:
	-rm -f *.o *~ a.out

hashTable.o: hashTable.cpp hashTable.h
wordPuzzle.o: wordPuzzle.cpp hashTable.h
timer.o: timer.cpp timer.h
