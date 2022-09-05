/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarDatos(Persona*);

struct Persona
{
	char nombre[30];
	int edad;
}persona,*p_persona=&persona;

int main() {
	pedirDatos();
	mostrarDatos(p_persona);


	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "Digite su numbre: ";
	cin.getline(p_persona->nombre, 30, '\n');
	cout << "Digite su edad :";
	cin >> p_persona->edad;

}
void mostrarDatos(Persona *p_persona) 
{
	cout << "\nSu nombre es :" << p_persona->nombre << endl;
	cout << "\nSu edad es :" << p_persona->edad << endl;

}

*/