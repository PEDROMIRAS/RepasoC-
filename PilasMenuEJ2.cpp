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

void agregarPila(Nodo*&, int);

void sacarPila(Nodo*&, int&);

int main() {
	Nodo* pila = NULL;
	int dato;
	char rpt;
	char repetir = true;
	int opc;
	do
	{
		cout << "MENU: " << endl;
		cout << "1.-Insertar un carcter a la pila. " << endl;
		cout << "2.-Mostar todos los elementos de la pila. " << endl;
		cout << "3.-Salir. " << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
            do
	        {
		      cout << "Digite un numero: ";
		      cin >> dato;

		      agregarPila(pila, dato);

		      cout << "\nDeseas agregar otro elemento a PILA(s/n): ";
		      cin >> rpt;

	        } while ((rpt == 'S') || (rpt == 's'));
			break;

			case 2:
				cout << "\nSacando todos los elementos de Pila: ";

				while (pila != NULL)
				{
					sacarPila(pila, dato);
					if (pila != NULL)
					{
						cout << dato << " , ";
					}
					else {
						cout << dato << " ." << endl;
					}
				}
				break;

			case 3:
				repetir = false;
			break;
		}
	} while (repetir);
	

	system("pause");
	return 0;
}
void agregarPila(Nodo*& pila, int n)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	cout << "\tElemento " << n << " agregado correctamente a PILA " << "\n" << endl;

}
void sacarPila(Nodo*& pila, int& n) {
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;

}
*/