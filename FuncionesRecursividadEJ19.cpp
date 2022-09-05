/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int factorial(int);
void pedirDatos();

int main() {
	int nElementos;
	do
	{
		cout << "Inserte el numero de elementos: ";
		cin >> nElementos;

	} while (nElementos<=0);

	cout << "\nLa suma es: " << factorial(nElementos)<<endl;

	system("pause");
	return 0;
}
int factorial(int n) {
	int suma = 0;

	if (n == 1)
	{
		suma = 1;
	}
	else {
		suma=n+factorial(n-1);
	}
	return suma;
}
*/
