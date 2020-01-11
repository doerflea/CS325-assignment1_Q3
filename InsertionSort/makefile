CXX = g++
CXXFLAGS = -std=c++0x -g

OBJS = main.o insertionSort.o output.o 

SRCS = main.cpp insertionSort.cpp output.cpp 

HEADERS = insertionSort.hpp output.hpp 

insertsort: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o insertsort
clean:
	rm -f ${OBJS}
