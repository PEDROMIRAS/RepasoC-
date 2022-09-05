/*

3.-PASOS

1.-Crear espacio en la memoria parea almacenar un nodo.
frente->NULL;
fin->NULL;
nuevo_nodo;

2.-Asignar ese nuevo nodo al dato que queremos insertar.
n=10;
nuevo_nodo->dato=n;
nuevo_nodo->siguiente=NULL;

3.-Asignar los punteros frente fin hacia el nuevo nodo.

*/

/*
void insertarCola(Nodo*& frente, Nodo*& fin, int n) {
	Nodo* nuevo_nodo = new Nodo();//Paso 1

	nuevo_nodo->dato = n;//Paso 2
	nuevo_nodo->siguiente = NULL;

	if (cola_vacia(frente))//Paso 3
	{
		frente = nuevo_nodo;
	}
	else {
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;

}
*/
/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo* siguiente;
};
void insertarCola(Nodo*&, Nodo*&, int);

bool cola_vacia(Nodo*);

int main() {
	Nodo* frente = NULL;
	Nodo* fin = NULL;

	int dato;

	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente, fin, dato);


	system("pause");
	return 0;
}
void insertarCola(Nodo*& frente, Nodo*& fin, int n) {
	Nodo* nuevo_nodo = new Nodo();//Paso 1

	nuevo_nodo->dato = n;//Paso 2
	nuevo_nodo->siguiente = NULL;

	if (cola_vacia(frente))//Paso 3
	{
		frente = nuevo_nodo;
	}
	else {
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	cout << "Elemento " << n << " añadido correctamente a la COLA." << endl;

}
bool cola_vacia(Nodo*frente) {
	return(frente == NULL) ? true : false;

	//if (frente == NULL)
	//{
	//	return true;
	//}
	//else {
	//	return false;
	//}	
}
*/