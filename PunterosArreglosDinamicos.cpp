/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;

void pedirNotas();
void mostrarNotas();
int numCalif,*calif;

int main() {
	pedirNotas();
	mostrarNotas();

	delete[] calif;//Liberando el espacio en bites utilizado anteriormente.
	system("pause");
	return 0;
}
void pedirNotas() {
	cout << "Inserte el numero de calificaciones :";
	cin >> numCalif;

	calif = new int[numCalif];//Crear arreglo dinamico.

	for (int i = 0; i < numCalif; i++)
	{
		cout << "Ingrese una nota: ";
		cin >> calif[i];
	}

}
void mostrarNotas() {
	cout << "\n\nMostrando notas del Usuario: \n";
	for (int i = 0; i < numCalif; i++)
	{
		cout << calif[i] << endl;
	}
}
*/
