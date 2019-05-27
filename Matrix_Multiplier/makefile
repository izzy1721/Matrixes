result: main.o callOps.o ops.o
	g++ -o result main.o callOps.o ops.o

main.o: main.cpp Matrix.h library.h
	g++ -c main.cpp

callOps.o: callOps.cpp Matrix.h library.h
	g++ -c callOps.cpp

ops.o: ops.cpp Matrix.h library.h
	g++ -c ops.cpp
