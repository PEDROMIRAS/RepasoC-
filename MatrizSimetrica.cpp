/*
 Desarrollar un programa que determine si una matriz es simétrica o no.
 Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int numeros[100][100], filas, columnas;
	char band = 'F';
	cout << "Inserte el numero de filas:"; cin >> filas; cout << endl;
	cout << "Inserte el numero de columnas:"; cin >> columnas; cout << endl;
	system("cls");
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Inserte un numero[" << i << "][" << j << "]";
			cin >> numeros[i][j];
		}
	}
	system("cls");
	if (filas==columnas)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				if (numeros[i][j]==numeros[j][i])
				{
					band = 'V';
				}
			}
		}
	}
	if (band=='V')
	{
		cout << "La matriz es simetrica" << endl;
	}
	else {
		cout << "La matriz no es simetrica" << endl;
	}

	system("pause");
	return 0;
}

*/


