
/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Animal
{
public:
	Animal(int);
	virtual void comer();
private:
	int edad;
};
class Humano:public Animal
{
public:
	Humano(int , string);
	void comer();
private:
	string nombre;
};
class Perro:public Animal
{
public:
	Perro(int ,string,string);
	void comer();
private:
	string nombre,raza;
    
};
Animal::Animal(int edad_)
{
	edad = edad_;
}
Humano::Humano(int edad_,string nombre_):Animal(edad_)
{
	nombre = nombre_;
}
Perro::Perro(int edad_,string nombre_,string raza_):Animal(edad_)
{
}
void Animal::comer()
{
	cout << "Yo estoy ";
}
void Humano::comer()
{
	Animal::comer();
	cout << "comiendo en la mesa,sentado en una silla" << endl;

}
void Perro::comer()
{
	Animal::comer();
	cout << "comiendo en un bol, en el suelo" << endl;
}

int main() {
	Animal*animales[2];
	animales[0] = new Perro(4, "Manolo", "Pug");
	animales[1] = new Humano(22, "Pedro");
	animales[0]->comer();
	cout << "\n";
	animales[1]->comer();

	system("pause");
	return 0;
}
*/
