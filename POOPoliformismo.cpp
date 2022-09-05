/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Persona
{
public:
	Persona(string ,int);
	virtual void mostrar();

private:
	string nombre;
	int edad;
};
class Alumno:public Persona
{
public:
	Alumno(string,int,float);
	void mostrar();
private:
	float notaFinal;
};
class Profesor :public Persona
{
public:
	Profesor(string, int, string);
	void mostrar();
private:
	string materia;
};
Persona::Persona(string nombre_,int edad_)
{
	nombre = nombre_;
	edad = edad_;

}
Alumno::Alumno(string nombre_, int edad_,float notaFinal_):Persona(nombre_,edad_)
{
	notaFinal = notaFinal_;
}
Profesor::Profesor(string nombre_, int edad_, string materia_) :Persona(nombre_, edad_) 
{
	materia = materia_;
}
void Persona::mostrar() 
{
	cout << "Nombre :" << nombre << endl;
	cout << "Edad :" << edad << endl;
}
void Alumno::mostrar() {

	Persona::mostrar();
	cout << "La nota final del alumno es :" << notaFinal << endl;
}
void Profesor::mostrar() {
	Persona::mostrar();
	cout << "La materia que imparte el Profesor es: " << materia << endl;
}
int main() {
	Persona* vector[3];

	vector[0] = new Alumno("Pedro", 22, 7.9);
	vector[1] = new Alumno("Jose David", 21, 7.4);
	vector[2] = new Profesor("Javier", 45, "PFIS");

    vector[0]->mostrar();
	cout << "\n";
	vector[1]->mostrar();
	cout << "\n";
	vector[2]->mostrar();
	cout << "\n";

	

	system("pause");
	return 0;
}
*/
