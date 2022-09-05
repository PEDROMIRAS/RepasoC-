/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Persona {
private://atributos
	int edad;
	string nombre;
public://metodos
	Persona(int, string);//Constructor
	void leer();
	void correr();
};
//Constructor , sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre) {
	edad = _edad;
	nombre = _nombre;
}
void Persona::leer() {
	cout << "Soy " << nombre << " y estoy leyendo un libro." << endl;

}
void Persona::correr() {
	cout << "Soy " << nombre << " y estoy corriendo una maraton y tengo "<<edad << endl;
}

int main() {
	Persona p1 = Persona(20, "Pedro");
	Persona p2(19, "Maria");
	Persona p3(21, "Juan");
	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();

	system("pause");
	return 0;
}
*/