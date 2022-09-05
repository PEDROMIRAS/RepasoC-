/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

struct persona
{
	char nombre[30];
	int edad;
}p1;

void pedirDatos();

void mostrarDatos(persona);

int main() {
	pedirDatos();

	mostrarDatos(p1);

	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "Inserte un nombre: ";

	cin.getline(p1.nombre, 30, '\n');

	cout << "Inserte la edad: ";

	cin >> p1.edad;

}
void mostrarDatos(persona p)
{
	cout << "\n\nNombre: " << p.nombre << endl;

	cout << "Edad: " << p.edad << endl;

}
*/