/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void pedirDatos();
void ComprobarSimetria(int m[][100], int, int);
int m[100][100], nfilas, ncol;

int main() {
	pedirDatos();
	ComprobarSimetria(m, nfilas, ncol);

	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Digite el numero de filas: ";
	cin >> nfilas;
	cout << "Digite el numero de columnas: ";
	cin >> ncol;

	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++) {
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}
void ComprobarSimetria(int m[][100], int nfilas, int ncol) {
	int cont = 0;
	if (nfilas == ncol) {

       for (int i = 0; i < nfilas; i++)
	   {
		   for (int j = 0; j < ncol; j++) {
			   if (m[i][j]==m[j][i])
			   {
				   cont++;
			   }
		   }
	   }
	}
	if (cont==nfilas*ncol)
	{
		cout << "La matriz es simetrica" << endl;
	}
	else {
		cout << "La matriz NO es simetrica" << endl;
	}
}
*/
