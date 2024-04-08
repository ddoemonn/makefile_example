output: main.o accept.o increment.o
	g++ main.o accept.o increment.o -o output

main.o: main.cpp
	g++ -c main.cpp

increment.o: ./increment/increment.cpp ./increment/increment.h
	g++ -c ./increment/increment.cpp -o increment.o

accept.o: ./accept/accept_functions.cpp ./accept/accept_functions.h
	g++ -c ./accept/accept_functions.cpp -o accept.o

clean: 
	rm *.o output