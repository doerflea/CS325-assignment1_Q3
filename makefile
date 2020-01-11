CXX = g++
CXXFLAGS = -std=c++0x -g

OBJS = main.o insertionSort.o output.o mergeSort.o

SRCS = main.cpp insertionSort.cpp output.cpp mergeSort.cpp

HEADERS = insertionSort.hpp output.hpp mergeSort.hpp

assignment_1: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o assignment_1
clean:
	rm -f ${OBJS}
