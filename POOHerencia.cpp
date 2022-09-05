/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Persona
{
public:
	Persona(string ,int );
	~Persona();
	void mostrarPersona();

private:
	int edad;
	string nombre;
};
class Alumno : public Persona {
public:
	Alumno(string, int, string, float);
	void mostrarAlumno();

private:
	string codAlumno;
	float notaFinal;
};
Persona::Persona(string nombre_,int edad_ )
{
	edad = edad_;
	nombre = nombre_;
}
Alumno::Alumno(string nombre_, int edad_, string codAlumno_, float notaFinal_) : Persona(nombre_,edad_){
	codAlumno = codAlumno_;
	notaFinal = notaFinal_;
}

Persona::~Persona()
{
}

void Persona::mostrarPersona() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;

}
void Alumno::mostrarAlumno() {
	mostrarPersona();
	cout << "Codigo Alumno: " << codAlumno << endl;
	cout << "Nota Final: " << notaFinal << endl;

}

int main() {
	Alumno al1("Pedro", 22, "214531345", 9.5);
	al1.mostrarAlumno();

	system("pause");
	return 0;
}
*/