julia_set: main.o escape.o
	g++ main.o escape.o -o julia_set

main.o: main.cpp
	g++ -c main.cpp

escape.o: escape.cpp escape.h
	g++ -c escape.cpp
clean:
	rm *.o julia_set

target: dependencies


	
