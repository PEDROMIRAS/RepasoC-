/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Persona
{
public:
	Persona(string,int);
	~Persona();
	void mostrarPersona();

private:
	int edad;
	string nombre;
};
class Empleado : public Persona
{
public:
	Empleado(string ,int ,float);
	~Empleado();
	void mostrarEmpleado();

private:
	float sueldo;
};
class Estudiante :public Persona{
public:
    Estudiante(string , int ,float);
	~Estudiante();
	void mostrarEstudiante();
private:
	float notaFinal;
};
class Universitario :public Estudiante {
public:
	Universitario(string , int ,float,string);
	~Universitario();
	void mostrarUniversitario();
private:
	string carrera;

};
Persona::Persona(string nombre_,int edad_)
{
	nombre = nombre_;
	edad = edad_;
}
Empleado::Empleado(string nombre_,int edad_,float sueldo_):Persona(nombre_,edad_)
{
	sueldo = sueldo_;
}
Estudiante::Estudiante(string nombre_, int edad_,float notaFinal_) : Persona(nombre_, edad_) 
{
	notaFinal = notaFinal_;
}
Universitario::Universitario(string nombre_, int edad_, float notaFinal_, string carrera_) :Estudiante(nombre_, edad_, notaFinal_) 
{
	carrera = carrera_;
}

void Persona::mostrarPersona() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}
void Empleado::mostrarEmpleado() {
	mostrarPersona();
	cout << "El sueldo del empleado es :" << sueldo << endl;
}
void Estudiante::mostrarEstudiante() {
	mostrarPersona();
	cout << "La nota final del estudiantes : " << notaFinal << endl;
}
void Universitario::mostrarUniversitario()
{
	mostrarEstudiante();
	cout << "El universitario estudia : " << carrera << endl;
}
Persona::~Persona()
{
}
Empleado::~Empleado()
{
}
Estudiante::~Estudiante()
{
}
Universitario::~Universitario()
{
}
int main() {
	Empleado ep1("Juan", 30, 1400);
	cout << "-Empleado_" << endl;
	ep1.mostrarEmpleado();
	cout << "\n";
	Estudiante est1("Carmen", 19, 6.7);
	cout << "-Estudiante-" << endl;
	est1.mostrarEstudiante();
	cout << "\n";
	Universitario u1("Pedro", 22, 8.6, "Ingenieria Informatica");
	cout << "-Universitario-" << endl;
	u1.mostrarUniversitario();
	cout << "\n";

	system("pause");
	return 0;
}
*/