CC = g++ -Wall -std=c++11 -g

all: main.o ogolne.o funkcje.o
	$(CC) main.o ogolne.o funkcje.o -o jestemPolakiem

main.o: main.cpp 
	$(CC) main.cpp -c -o main.o

ogolne.o: ogolne.cpp variables.h overloads.h
	$(CC) ogolne.cpp -c -o ogolne.o

funkcje.o: funkcje.cpp overloads.h
	$(CC) funkcje.cpp -c -o funkcje.o

clean:
	rm -f *.o jestemPolakiem
