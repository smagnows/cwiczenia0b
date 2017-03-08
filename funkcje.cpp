#include <iostream>
#include "overloads.h"
using namespace std;
void dziel(){
	cout << "Podaj liczbe do podzielenia: ";
	double a;
	cin >> a;
	cout << "Brawo, udalo sie podzielic liczbe "<<a<<" przez zero ^^ Wynik to: "<<a/0 << endl;


}
