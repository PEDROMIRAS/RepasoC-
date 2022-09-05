/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;


int potencia(int , int);

int main() {

	int base, exponente;

	cout << "Digite la base: "; cin >> base;
	cout << "Digite el exponente: "; cin >> exponente;

	cout << "\n La potencia de  " << base << " elevado a " << exponente << " es : " << potencia(base, exponente) << endl;

	system("pause");
	return 0;
}
void pedirDatos() {

}
int potencia(int x, int y) {
	int pot;
	if (y==1)
	{
		pot = x;
	}
	else {
		pot = x * potencia(x, y - 1);
	}
	return pot;
}

*/
