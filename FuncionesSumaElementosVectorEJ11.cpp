/*
* #include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void pedirDatos();

int vec[100], tam;

int sumaElementos(int vec[], int);

int main() {

	pedirDatos();

	cout << "\nLa suma de los elementos es: " << sumaElementos(vec, tam) << endl;

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Inserte el numero de elementos del vector: ";
	cin >> tam;
	for (int i = 0; i < tam; i++)
	{
		cout << i + 1 << ". Inserte un numero: ";
		cin >> vec[i];
	}
}
int sumaElementos(int vec[], int)
{
	int suma=0;

	for (int i = 0; i < tam; i++)
	{
		suma+= vec[i];

	}
	return suma;

}
*/
