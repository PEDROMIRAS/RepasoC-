/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void sumaMatriz(int**, int**, int, int);
void mostrarMatriz(int**, int, int);

int** puntero_matriz1 , **puntero_matriz2 , nfila, ncol;

int main() {

	pedirDatos();
	sumaMatriz(puntero_matriz1, puntero_matriz2, nfila, ncol);

	mostrarMatriz(puntero_matriz1, nfila, ncol);
	for (int i = 0; i < nfila; i++)
	{
		delete[]puntero_matriz1[i];
	}
	delete[]puntero_matriz1;

	for (int i = 0; i < nfila; i++)
	{
		delete[]puntero_matriz2[i];
	}
	delete[]puntero_matriz2;

	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "Inserte el numero de filas :";
	cin >> nfila;
	cout << "Inserte el numero de columnas :";
	cin >> ncol;

	puntero_matriz1 = new int* [nfila];
	for (int i = 0; i < nfila; i++)
	{
		puntero_matriz1[i] = new int[ncol];

	}
	cout << "\nDigitando elementos de la  primera matriz: "<< endl;
	for (int i = 0; i < nfila; i++)
	{
		for (int j = 0; j < ncol; j++) {
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(puntero_matriz1 + i) + j);
		}
	}
	puntero_matriz2 = new int* [nfila];
	for (int i = 0; i < nfila; i++)
	{
		puntero_matriz2[i] = new int[ncol];

	}
	cout << "\nDigitando elementos de la segunda matriz: " << endl;
	for (int i = 0; i < nfila; i++)
	{
		for (int j = 0; j < ncol; j++) {
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(puntero_matriz2 + i) + j);
		}
	}
}
void sumaMatriz(int** puntero_mtriz1, int** puntero_matriz2, int nfila, int ncol) {
	
	for (int i = 0; i < nfila; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			*(*(puntero_matriz1 + i) + j) += *(*(puntero_matriz2 + i) + j);
		}
	}
}

void mostrarMatriz(int** puntero_matriz1, int nfila, int ncol) {
	cout << "\n\n La suma de las 2 matrices es :\n";
	for (int i = 0; i < nfila; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout << *(*(puntero_matriz1 + i) + j) << " ";
		}
		cout << "\n";
	}
}

*/