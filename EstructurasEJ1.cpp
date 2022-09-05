/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
struct corredor 
{
	char nombre[20];
	int edad;
    char sexo[20];
	char club[30];
}c1;
int main() {
	char cat[20];

	cout << "Nombre: ";
	cin.getline(c1.nombre, 20,'\n');
	cout << "Edad: ";
	cin >> c1.edad;
	cin.ignore();
	cout << "Sexo: ";
	cin.getline(c1.sexo, 20, '\n');
	cout << "Club: ";
	cin.getline(c1.club, 30, '\n');
	if (c1.edad <= 18)
	{
		strcpy_s(cat, "Juvenil");
	}
	else if (c1.edad <= 40) {

		strcpy_s(cat, "Senior");
	}
	else {
		strcpy_s(cat, "Veterano");
	}

	system("cls");

	cout << "\n\nDatos del corredor: " << endl;
	cout << "Nombre: " << c1.nombre << endl;
	cout << "Edad: " << c1.edad << endl;
	cout << "Sexo: " << c1.sexo << endl;
	cout << "Club: " << c1.club << endl;
	cout << "Categoria: " << cat << endl;


	system("pause");
	return 0;
}

*/

