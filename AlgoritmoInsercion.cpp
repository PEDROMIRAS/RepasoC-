/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main() {
	int numeros[] = { 4,1,3,5,2 };
	int i, pos, aux;
	for ( i = 0; i < 5; i++)
	{
		pos = i;
		aux = numeros[i];
		while ((pos>0)&&(numeros[pos-1]>aux))
		{
			numeros[pos] = numeros[pos - 1];
			pos--;

		}
		numeros[pos] = aux;
	}
	cout << "Orden ascendente: ";
	for ( i = 0; i < 5; i++)
	{
		cout << numeros[i] << " ";
	}
	cout << "Orden descendente: ";
	for (i = 4; i >=0; i--)
	{
		cout << numeros[i] << " ";
	}

	system("pause");
	return 0;
}
*/
