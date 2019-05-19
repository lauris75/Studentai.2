CXX=c++
CXXFLAGS=-g -std=c++11 -Wall -pedantic

main: FUN.o Stud.o
	g++ -std=c++11 -o main Studentai1.3v.cpp FUN.o Stud.o
FUN:
	g++ -std=c++11 -c FUN.cpp
Stud:
	g++ -std=c++11 -c Stud.cpp
clean:
	rm *.o main