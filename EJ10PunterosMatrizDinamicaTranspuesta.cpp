/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
void pedirDatos();
void matrizTranspuesta(int**, int , int);


int** puntero_matriz, nfila, ncol;

int main() {
	 
	pedirDatos();
	matrizTranspuesta(puntero_matriz, nfila, ncol);
	for (int i = 0; i < nfila; i++)
	{
		delete[]puntero_matriz[i];
	}
	delete[]puntero_matriz;

	system("pause");
	return 0;
}
void pedirDatos() {

		cout << "Inserte el numero de filas :";
		cin >> nfila;
		cout << "Inserte el numero de columnas :";
		cin >> ncol;

		puntero_matriz = new int* [nfila];
		for (int i = 0; i < nfila; i++)
		{
			puntero_matriz[i] = new int[ncol];

		}
		cout << "\nDigitando elementos de la matriz: \n";
		for (int i = 0; i < nfila; i++)
		{
			for (int j = 0; j < ncol; j++) {
				cout << "Digite un numero[" << i << "][" << j << "]: ";
				cin >> *(*(puntero_matriz + i) + j);
			}
		}
}
void matrizTranspuesta(int**puntero_matriz, int nfila, int ncol) {
	cout << "Matriz Transpuesta: \n";
	for (int i = 0; i < nfila; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout << *(*(puntero_matriz+j)+i)<< " ";
		}
		cout << "\n";
	}
}
*/


