/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

bool esPrimo(int numero);
int main() {

    int numero,*dir_num;

	cout << "Escribe un numero y te dire si es primo: ";
	cin >> numero;

	dir_num = &numero;

		if (esPrimo(numero)) {
			cout << "El numero "<<*dir_num<<" es primo"<<endl;
			cout << "Posicion: " << dir_num << endl;

		}
		else {
			cout << "El numero " << *dir_num << " NO es primo" << endl;
			cout << "Posicion: " << dir_num << endl;
		}

	system("pause");
	return 0;
}
bool esPrimo(int numero) {
		// Casos especiales
		if (numero == 0 || numero == 1 || numero == 4) return false;
		for (int x = 2; x < numero / 2; x++) {
			if (numero % x == 0) return false;
		}
		// Si no se pudo dividir por ninguno de los de arriba, sí es primo
		return true;
}
*/
