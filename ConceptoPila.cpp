//Una pila es una estructura de datos de entradas ordenadas tales 
//que solo se pueden introducir y eliminar por un extremo , llamado cima.

//insertar(push) añade un elemento a la pila
//quitar(pop) elimina un elemento de la pila

//nodo -> struct 

/*
struct Nodo
{
	int dato;
	Nodo* siguiente;
};

void agregarPila(Nodo*&, int);
void sacarPila(Nodo*&, int&);



void agregarPila(Nodo*& pila, int n)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	cout << "\nElemento " << n << " agregado correctamente a PILA " << "\n" << endl;

}
void sacarPila(Nodo*& pila, int& n) {
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;

}
*/