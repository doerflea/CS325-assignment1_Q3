CXX = g++
CXXFLAGS = -std=c++0x -g

OBJS = main.o output.o mergeSort.o

SRCS = main.cpp output.cpp mergeSort.cpp

HEADERS = output.hpp mergeSort.hpp

mergesort: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o mergesort
clean:
	rm -f ${OBJS}
