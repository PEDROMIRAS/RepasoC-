/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {

	int numeros[10], *dir_num;

	for (int i = 0; i < 10; i++)
	{
		cout << "Inserte los numeros del array ["<<i<<"]: ";

		cin >> numeros[i];
	}

	dir_num = numeros;

	system("cls");

	for (int i = 0; i < 10; i++)
	{
		if (*dir_num%2==0) {

			cout << "El numero " << *dir_num << " es par"<<endl;

			cout << "La posicion en la que esta guardado es: " << dir_num << endl;
		}
		dir_num++;
	}

	system("pause");
	return 0;
}
*/
