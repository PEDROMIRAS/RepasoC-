/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int numeros[100][100], filas, columnas;
	int matriz2[100][100];

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
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << numeros[i][j];
		}
		cout << "\n";
	}
	system("pause");
	system("cls");
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			matriz2[i][j] = numeros[i][j];
		}
	}
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout <<  matriz2[i][j];
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}
*/

