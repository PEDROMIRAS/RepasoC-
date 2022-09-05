/* Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int numero,factorial=1;
	cout << "Inserte la cantida de elementos:"; cin >> numero;

	for (int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}
	cout << "El factorial del numero es:" << factorial << endl;
	return 0;
}



*/