/* Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int  numero[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Inserte un numero[" << i << "][" << j << "]:";
			cin >> numero[i][j];
		}

	}
	cout << "Matriz Original:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		cout << numero[i][j];
		}
		cout << "\n";
		}
	cout << "Matriz Transpùesta:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		cout << numero[j][i];
		}
		cout << "\n";
		}
		system("pause");
		return 0;
}

*/


