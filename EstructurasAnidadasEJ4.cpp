/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
struct atleta
{
	char nombre[20];
	char pais[20];
	int numero_medallas;

}atl[50];
int main() {
	int mayor=0, menor=100, n_atletas,posM=0, posm=0;
	cout << "Inserte el numero de atletas: ";
	cin >> n_atletas;
	for (int i = 0; i < n_atletas; i++)
	{
		fflush(stdin);
		cout << i + 1 << ".  Inserte su nombre: ";
		cin.getline(atl[i].nombre, 20, '\n');
		cout << i + 1 << ". Inserte su pais: ";
		cin.getline(atl[i].pais, 20, '\n');
		cout << i + 1 << ". Inserete el numero de medallas que posee: ";
		cin >> atl[i].numero_medallas;
		//Determina el mayor medallas
		if (atl[i].numero_medallas > mayor)
		{
			mayor = atl[i].numero_medallas;
			posM = i;
		}
		//Determina el menor salario
		if (atl[i].numero_medallas < menor)
		{
			menor = atl[i].numero_medallas;
			posm = i;
		}

		cout << "\n";
	}
	cout << "\n.:Datos del atleta con mayor numero de medallas:.\n";
	cout << "Nombre:" << atl[posM].nombre << endl;
	cout << "Pais:" << atl[posM].pais << endl;
	cout << "Medallas: " << atl[posM].numero_medallas << endl;


	cout << "\n.:Datos del empleado con menor numero de medallas:.\n";
	cout << "Nombre:" << atl[posm].nombre << endl;
	cout << "Pais:" << atl[posm].pais << endl;
	cout << "Medallas: " << atl[posm].numero_medallas << endl;

	system("pause");
	r

eturn 0;
}
*/