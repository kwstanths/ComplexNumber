all: test

FLAGS= -std=c++11

test: test.cpp ComplexNumber.hpp
	g++ ${FLAGS} -o test test.cpp
