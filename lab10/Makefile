# Noah French (njf5cu)
# Lab 10
# 11/20/17
# Filename: Makefile
# File Description: Huffman Lab Makefile

CXX	= clang++

CXXFLAGS	= -Wall -O2

OFILESENC = heap.o HuffNode.o huffmanenc.o

OFILESDEC = heap.o HuffNode.o huffmandec.o

.SUFFIXES: .o .cpp

all: encoder decoder

encoder: $(OFILESENC)
	 $(CXX) $(OFILESENC) -o encoder

decoder: $(OFILESDEC)
	 $(CXX) $(OFILESDEC) -o decoder

clean:
	-rm -f *.o *~ encoder decoder

heap.o: heap.cpp heap.h HuffNode.h

HuffNode.o: HuffNode.cpp HuffNode.h

huffmanenc.o: huffmanenc.cpp heap.h HuffNode.h

huffmandec.o: huffmandec.cpp heap.h HuffNode.h
