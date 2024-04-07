output: main.o accept.o 
	g++ main.o accept.o -o output

main.o: main.cpp
	g++ -c main.cpp

accept.o: accept_functions.cpp accept_functions.h
	g++ -c accept_functions.cpp -o accept.o

clean: 
	rm *.o output