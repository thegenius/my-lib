hdrdir=/home/wangwei/testspace/my_library/
srcdir=
libdir=
cxx=g++
cxxflags=-c -Wall

test: math_wang.o test.o
	g++ test.o math_wang.o -o test
math_wang.o: math_wang.cpp math_wang.h
	g++ -I $(hdrdir) -c math_wang.cpp 
test.o:test.cpp math_wang.h
	g++ -I $(hdrdir) -c test.cpp

clean:
	rm math_wang.o test.o
