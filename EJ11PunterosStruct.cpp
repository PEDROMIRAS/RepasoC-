/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mejorPromedio(alumno *);


struct alumno
{
	char nombre[30];
	int edad;
	float promedio;

}al[3],*p_alumno=al;

int main() {
	pedirDatos();
	mejorPromedio(p_alumno);

	system("pause");
	return 0;
}
void pedirDatos() {
	for (int i = 0; i < 3; i++)
	{
		cout << "Digete su nombre: ";
		cin.getline((p_alumno+i)->nombre,30,'\n');
		cout << "Digite su edad: ";
		cin >> (p_alumno+i)->edad;
		cout << "Digite el promedio: ";
		cin >> (p_alumno + i)->promedio;
	}
}
void mejorPromedio(alumno*p_alumno) {
	float mayor = 0.0;
	int pos = 0;
	for (int i = 0; i < 3 ; i++)
	{
		if ((p_alumno+i)->promedio>mayor)
		{
			mayor = (p_alumno)->promedio;
			pos = i;
		}
	}
	cout << "El alumno con mejor promedio es : \n";
	cout << "Nombre: " << (p_alumno + pos)->nombre << endl;
	cout << "Edad: " << (p_alumno + pos)->edad << endl;
	cout << "Promedio: " << (p_alumno + pos)->promedio << endl;
}

*/