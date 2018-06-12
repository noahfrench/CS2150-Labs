# Noah French (njf5cu)
# Lab 9
# 11/17/17
# Filename: Makefile
# File Description: Makefile for linkedlist.c

CXX	= clang

CSSFLAGS	= -Wall -g

OFILES = linkedlist.o

.SUFFIXES: .o .c

main:	$(OFILES)
	$(CXX) $(OFILES)

clean:
	-rm -f *.o *~ a.out

linkedlist.o: linkedlist.c
