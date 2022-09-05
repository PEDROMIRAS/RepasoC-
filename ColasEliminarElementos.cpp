/*
* 3.-PASOS
* 
* 1.-Obtener el valor del nodo
* n=frente->dato;
* 
* 2.-Crear un nodo aux y asignarle el frente de la cola
* Nodo*aux=frente;
* 
* 3.-Eliminar el nodo del frente de la cola 
* if(frente==fin){
* frente=NULL;
* fin=NULL;
* }
* else{
* frente=frente->siguiente;
* }
* delete aux;
* -----------------------------------------------
 void suprimirCola(Nodo*&frente , Nodo *&fin,int &n){
 n=frente->dato;
 Nodo*aux=frente;
 if(frente==fin){
 frente=NULL;
 fin=NULL;
 }
 else{
 frente=frente->siguiente;
 }
 delete aux;
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
void eliminarCola(Nodo*&, Nodo*&, int);

int main() {
	Nodo* frente = NULL;
	Nodo* fin = NULL;

	int dato;

	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente, fin, dato);

	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente, fin, dato);

	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente, fin, dato);

	cout << "\nQuitando los datos de la cola : " << endl;

	while (frente!=NULL)
	{
		eliminarCola(frente, fin, dato);
		if (frente!=NULL)
		{
			cout << dato << " , ";
		}
		else {
			cout << dato << " . " << endl;
		}
	}

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
bool cola_vacia(Nodo* frente) {
	return(frente == NULL) ? true : false;

	
}
void eliminarCola(Nodo*&frente, Nodo*&fin, int n) {
	n = frente->dato;//Paso 1
	Nodo* aux = frente;//Paso 2
	if (frente == fin) {//Paso 3
		frente = NULL;
		fin = NULL;
	}
	else {
		frente = frente->siguiente;
	}
	delete aux;
}
*/

