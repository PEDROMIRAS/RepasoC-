/*
Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n, suma = 0;

	cout << "Digite la cantidad de elementos que desea sumar: ";
	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i += 2) {
		suma += i;
	}

	cout << "La suma es: " << suma << endl;


	return 0;
}
*/

