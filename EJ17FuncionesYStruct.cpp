
/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

struct complejo
{
	float real, imaginaria;
}z1,z2;

void pedirDatos();
complejo suma(complejo, complejo);
void muestraComplejo(complejo);

int main() {

	pedirDatos();
	complejo x = suma(z1, z2);
	muestraComplejo(x);


	system("pause");
	return 0;
}
void pedirDatos()
{
	cout << "Digite los datos para el primer numero Complejo: " << endl;
	cout << "Parte Real: "; 
	cin >> z1.real;
	cout << "Parte Imaginaria: ";
	cin >> z1.imaginaria;

	cout << "\n Digite los datos para el segundo numero Complejo: " << endl;
	cout << "Parte Real: ";
	cin >> z2.real;
	cout << "Parte Imaginaria: ";
	cin >> z2.imaginaria;
}
complejo suma(complejo z1, complejo z2) {

	z1.real += z2.real;

	z1.imaginaria += z2.imaginaria;

	return z1;
}
void muestraComplejo(complejo x) {
	cout << "\nResultado de la suma: " << x.real << " , " << x.imaginaria << endl;
}
*/