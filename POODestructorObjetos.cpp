/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Perro
{
public:
	Perro(string,string);//Constructor
	~Perro();//Destructor
	void mostrarDatos();
	void jugar();

private:
	string nombre, raza;
};
//Constructor
Perro::Perro(string nombre_,string raza_)
{
	nombre = nombre_;
	raza = raza_;
}
//Destructor
Perro::~Perro()
{
}
void Perro::mostrarDatos() {
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;

}
void Perro::jugar() {
	cout << "El perro " << nombre << " esta jugando" << endl;

}
int main() {
	Perro p1("Manolo", "Bulldog");
	Perro p2("Doggy", "Pug");
	p1.mostrarDatos();
	p1.jugar();
	p1.~Perro();
	system("pause");
	p2.mostrarDatos();


	system("pause");
	return 0;
}
*/
