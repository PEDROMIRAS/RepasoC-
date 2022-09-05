/*
* #include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main() {
	int a[5] = { 3,4,1,5,2 };
	int i, dato;
	char band = 'F';
	dato = 5;
	i = 0;
	while ((band=='F')&&(i<5))
	{
		if (a[i]==dato)
		{
			band = 'V';
		}
		i++;
	}
	if (band=='F')
	{
		cout << "El numero a buscar el numero nunca ha existido en el arreglo " << endl;
	}
	else if (band == 'V') {
		cout << "El numero ha sido encontrado en la posicion :" << i - 1 << endl;
    }

	system("pause");
	return 0;
}
*/
