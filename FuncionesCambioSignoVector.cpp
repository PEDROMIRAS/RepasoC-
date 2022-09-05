/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int vec[100], tam;
 
int main() {
	pedirDatos();
	cambiarSigno(vec,tam);
	mostrarVector(vec, tam);


	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Indique el tamaño del  vector : ";  cin >> tam;

	for (int i = 0; i < tam; i++)
	{
		cout << i + 1 << ".  Inserte un numero: ";
		cin >> vec[i];
	}

}
void cambiarSigno(int vec[], int tam ) {
	for (int i = 0; i < tam; i++)
	{
		vec[i] *= -1;
	}
}
void mostrarVector(int vec[], int tam) {
	cout << "\nMostrar los elementos del vector con signo cambiado: ";
	for (int i = 0; i < tam; i++)
	{
		cout << vec[i] << " ";
	}
}


*/
