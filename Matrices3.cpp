/* Hacer una matriz de tipo entera de 2 * 2, llenarla de números y 
luego copiar todo su contenido hacia otra matriz.

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int  numero[2][2] = { {1,2},{3,4} };
	int matriz2[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matriz2[i][j] = numero[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matriz2[i][j];
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}

*/

