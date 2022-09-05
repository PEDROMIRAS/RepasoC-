/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void pedirDatos();
int contarVocales(char*);


char nombreUsuario[30];

int main() {

	pedirDatos();
	cout << "\nEl numero de vocales del nombre es :" << contarVocales(nombreUsuario) << endl;


	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "Inserte el nombre de usuario: ";
	cin.getline(nombreUsuario,30,'\n');

	_strupr_s(nombreUsuario);


}
int contarVocales(char* nombre) {

	int cont=0;

	while (*nombre)
	{
		switch (*nombre) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cont++;

		}
		nombre++;
	}
	return cont;
}
*/