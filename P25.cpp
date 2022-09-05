/* Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int numero, suma=0;
	cout << "Inserte la cantida de elementos:"; cin >> numero;

	for (int i = 1; i <= numero; i++)
	{
		suma += i;
	}
	cout << "La suma es:" << suma << endl;
	return 0;
}



*/
