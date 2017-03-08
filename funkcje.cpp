/**
* Name: funkcje.cpp
* @author Sebastian Magnowski
*
*/

#include <iostream>
#include "overloads.h"
using namespace std;
void dziel(){
	cout << "Podaj liczbe do podzielenia: ";
	double a, w;
	cin >> a;
	w = a/0;
	cout << "Brawo, udalo sie podzielic liczbe "<<a<<" przez zero ^^ Wynik to: "<< w << endl;


}

void wyciek1(){
	cout << "Zatem zajmiemy sie tak." << endl;
	struct liczby {
		int *liczba;
		struct liczby *next;
	};
	//typedef struct liczby liczby;
	struct liczby *pierwszy, *aktualny;
	pierwszy = new struct liczby;
	pierwszy->next=NULL;
	aktualny=pierwszy;
	int *l = new int;
	for(int i=0; i<1000; i++) {
		aktualny = new struct liczby;
		*l = i;
		aktualny->liczba=new int;
		aktualny->liczba = l;
		aktualny->next=new liczby;
		aktualny=aktualny->next;
	}


}
