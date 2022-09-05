/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void ordenarDatos(int *, int);
void mostrarDatos(int*, int);

int nElementos, * elemento;

int main() {

	pedirDatos();
	ordenarDatos(elemento,nElementos);
	mostrarDatos(elemento, nElementos);
	
	delete [] elemento;


	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Inserte el numero de elementos del arreglo: ";
	cin >> nElementos;

	elemento = new int[nElementos];
	for (int i = 0; i < nElementos; i++)
	{
		cout << "Digite un numero[" << i << "]:";
		cin >> *(elemento + i);
	}
}
void ordenarDatos(int*elemento, int nElementos) 
{
	int aux;

	for (int i = 0; i < nElementos; i++)
	{
		for (int j = 0; j < nElementos-1; j++)
		{
			if (*(elemento+j) > *(elemento+j + 1))
			{
				aux = *(elemento+j);
				*(elemento + j )= *(elemento + j+1);
				*(elemento + j + 1 )= aux;
			}
		}
	}
	
}
void mostrarDatos(int* elemento, int nElementos)
{
	cout << "Arreglo ordenado: ";
	for (int i = 0; i < nElementos; i++)
	{
		cout << *(elemento + i) << " " << endl;//elemento[i]

	}
}



*/
