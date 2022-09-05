/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void pedirDatos();
void buscarDato(int*, int);

int nElementos, * elemento;

int main() {

	pedirDatos();
	buscarDato(elemento, nElementos);



	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "Inserte el numero de elementos del arreglo: ";
	cin >> nElementos;

	elemento = new int[nElementos];
	for (int i = 0; i < nElementos; i++)
	{
		cout << "Digite un numero[" << i << "]:";
		cin >> *(elemento + i);
	}

}
void buscarDato(int* elemento, int nElementos) {

	int dato, i;
	bool band = false;

	cout << "\nDigite el numero que quiere buscar: ";
	cin >> dato;

	//Busqueda Secuencial
	i = 0;
	while ((band == false) && (i < nElementos)) {
		if (*(elemento + i) == dato) { //Verificar si existe el numero en el arreglo
			band = true; //Si lo encuentra bandera cambia a Verdadero
		}
		i++;
	}

	if (band == false) {
		cout << "El numero " << dato << " NO ha sido encontrado" << endl;
	}
	else {
		cout << "El numero " << dato << " ha sido encontrado en la posicion " << i - 1 << endl;
	}
}

*/
