/*
 4 PASOS	
1.-Crear el espacio en memoria para un nodo (new/delete)
pila = NULL;(es como poner un contador a 0)
Nodo *nuevo_nodo=new Nodo();

2.-Cargar el valor dentro del nodo(dato)
nuevo_nodo->dato=10;

3.-Cargar el puntero pila dentro del nodo(*siguiente)
nuevo_nodo->siguiente=pila;

4.-Asignar el nuevo nodo a la pila
pila=nuevo_nodo;

--------------------------------------------------------
struct Nodo{
int dato;
Nodo *siguiente;
};

void agregarPila(Nodo *&pila , int n)
{
Nodo *nuevo_nodo=new Nodo();
nuevo_nodo->dato=n;
nuevo_nodo->siguiente=pila;
pila=nuevo_nodo;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
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

int main() {

	Nodo* pila = NULL;
	int n1, n2;

	cout << "Digite un numero: ";
	cin >> n1;
	agregarPila(pila, n1);

	cout << "Digite un numero: ";
	cin >> n2;
	agregarPila(pila, n2);


	system("pause");
	return 0;
}
void agregarPila(Nodo*& pila, int n)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	cout << "\nElemento " << n << " agregado correctamente a PILA " << "\n"<<endl;

}

*/