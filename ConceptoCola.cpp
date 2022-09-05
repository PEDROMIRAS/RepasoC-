//Una cola es una estructura de datos , caracterizada por ser una secuencia de 
//elementos en la que la operacion de inserccion de datos se realiza por un 
//extremo y la extraccion por el otro.


/*
struct Nodo
{
	int dato;
	Nodo* siguiente;
};
void insertarCola(Nodo*&, Nodo*&, int);

bool cola_vacia(Nodo*);
void eliminarCola(Nodo*&, Nodo*&, int&);

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