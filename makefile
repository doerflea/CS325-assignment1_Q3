CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
LDFLAGS = -lboost_date_time

OBJS = main.o insertionSort.o output.o

SRCS = main.cpp insertionSort.cpp output.cpp

HEADERS = insertionSort.hpp output.hpp

assignment_1: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o assignment_1
	.PHONY: clean
	clean:
	 -rm ${OBJS}
