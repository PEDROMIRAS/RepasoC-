
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

void menu();
void insertarCola(Nodo*&, Nodo*&, char);
bool cola_vacia(Nodo*);
void eliminarCola(Nodo*&, Nodo*&, char&);

int main() {

	menu();


	system("pause");
	return 0;
}
void menu() {
	Nodo* frente = NULL;
	Nodo* fin = NULL;

	char dato;
	int opc;
    do
	{
		cout << "\tMENU\n";
        cout << "1.-Insertar un caracter a una cola. "<<endl;
		cout << "2.-Mostar todos los elementos de la cola. "<<endl;
		cout << "3.-Salir. " << endl;
		cout << "Opcion: \n" << endl;
		cin >> opc;

		switch (opc)
		{
		 case 1:
			cout << "\nIngrese el caracter para agregar a la cola: ";
			cin >> dato;
			insertarCola(frente, fin, dato);

			break;

		 case 2:
			cout << "Mostrando los elementos de la cola" << endl;
			while (frente!=NULL)
			{
				eliminarCola(frente, fin, dato);
				if (frente!=NULL)
				{
					cout << dato << " , ";
				}
				else
				{
					cout << dato << " . " << endl;
					 ;
				}
			}
			system("pause");
			break;

		 case 3:
			break;

		}
		system("cls");
	} while (opc!=3);

}
void insertarCola(Nodo*&frente, Nodo*&fin, char n) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	if (cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}

//Comprobar cola
bool cola_vacia(Nodo* frente) {
	return(frente == NULL) ? true : false;
}

//Eliminar o quitar elementos de la cola
void eliminarCola(Nodo*&frente, Nodo*&fin, char&n) {
	n = frente->dato;
	Nodo* aux = frente;
	if (frente==fin)
	{
		frente = NULL;
		fin = NULL;

	}
	else
	{
		frente = frente->siguiente;

	}
	delete aux;
}
*/