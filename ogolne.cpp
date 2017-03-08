/**
* Name: ogolne.cpp
* @author Sebastian Magnowski
*
*/
#include <iostream>
#include <fstream>
#include "variables.h"
#include "overloads.h"
using namespace std;
void welcome(void){ 
	cout << "Witam w konsolowym programie do testowania roznych funkcji debugera i kompilatora g++" << endl;
	cout << "Copyrajt 2017 Sebastian Magnowski" << endl;

}


void wypisz_menu() {
	ifstream menu;
	menu.open("menu.txt");
	string napis;
	while (!menu.eof()) {
		getline(menu, napis);
		//menu >> napis;
		cout << napis << endl;
	}
}

void dzialaj(void) {
	int zakoncz=0, wybor;
	while(!zakoncz) {
		wypisz_menu();
		cout << "Dokonaj wyboru opcji: ";
		cin >> wybor;
		switch(wybor)
		{
			case 0: return;
			break;
			case 1: dziel();
			break;
			case 2: wyciek1();
			break;
			
		}
	}
}
