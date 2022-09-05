/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
void pedirDatos();
void comprobarOrdenamiento(int vec[], int);

int vec[100], tam;

int main() {
	pedirDatos();
	comprobarOrdenamiento(vec, tam);

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Digite el numero de elementos del vector: ";
	cin >> tam;

	for (int i = 0; i < tam; i++) {
		cout << i + 1 << ". Digite un numero: ";
		cin >> vec[i];
	}
}

void comprobarOrdenamiento(int vec[], int tam) {
	char band = 'F';

	//1 2 3 4 5
	int i = 0;
	while ((band == 'F') && (i < tam - 1)) {
		if (vec[i] > vec[i + 1]) {
			band = 'V';
		}
		i++;
	}

	if (band == 'F') {
		cout << "\nEl arreglo esta ordenado en forma creciente";
	}
	else {
		cout << "\nEl arreglo NO esta ordenado";
	}
}

*/
