/*
#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

void mostrarMatriz(int m[][3], int, int);

void CuadradoMatriz(int m[][3], int, int);

void mostrarCuadrado(int m[][3], int, int);

int main() {
	const int NFILAS = 2;
	const int NCOL = 3;
	int m[NFILAS][NCOL] = { {1,2,3},{4,5,6} };

	mostrarMatriz(m, NFILAS, NCOL);
	CuadradoMatriz(m, NFILAS, NCOL);
	mostrarCuadrado(m, NFILAS, NCOL);

	system("pause");
	return 0;
}
void mostrarMatriz(int m[][3], int nfilas, int ncol) {
	cout << "Mostrando matriz original: \n";
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++) {
			cout << m[i][j] << " ";
		}
		cout << "\n";
	}

}
void CuadradoMatriz(int m[][3], int nfilas, int ncol) {
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++) {
			m[i][j] *= m[i][j];
		}
	}
}
void mostrarCuadrado(int m[][3], int nfilas, int ncol) {
	cout << "Mostrando matriz elevada: \n";
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++) {
			cout << m[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
