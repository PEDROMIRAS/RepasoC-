/*Puntero - Declaracion de Punteros
* 
* &n = La direccion de n
* *n= la variable cuya direccion esta almacenada en n


#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main() {
	int num,*dir_num;
	num = 20;
	dir_num = &num;

	cout << "Numero: " << *dir_num << endl;
	cout << "Direccion de mem: " << dir_num << endl;


	system("pause");
	return 0;
}
*/