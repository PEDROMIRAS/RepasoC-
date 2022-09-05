/*
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void pedirDatos();
void contarVocales(char*);


char cadenaCaracteres[100];

int main() {

	pedirDatos();
	contarVocales(cadenaCaracteres);

	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "Inserte una frase: ";
	cin.getline(cadenaCaracteres, 100, '\n');

	_strupr_s(cadenaCaracteres);


}

void contarVocales(char* palabra) {
		int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

		while (*palabra) { //mientras nombre sea diferente de nulo '\0'
			switch (*palabra) {
			case 'A': contA++; break;
			case 'E': contE++; break;
			case 'I': contI++; break;
			case 'O': contO++; break;
			case 'U': contU++; break;
			}
			palabra++;
		}

		//Imprimiendo el conteo de cada vocal
		cout << "\nNumero de vocales A: " << contA << endl;
		cout << "Numero de vocales E: " << contE << endl;
		cout << "Numero de vocales I: " << contI << endl;
		cout << "Numero de vocales O: " << contO << endl;
		cout << "Numero de vocales U: " << contU << endl;
}
*/
