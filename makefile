CXX = g++
CXXFLAGS = -std=c++0x -g

OBJS = main.o insertionSort.o output.o

SRCS = main.cpp insertionSort.cpp output.cpp

HEADERS = insertionSort.hpp output.hpp

assignment_1: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o assignment_1
clean:
	rm -f ${OBJS}
