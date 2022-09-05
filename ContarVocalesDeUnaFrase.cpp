/*9. Realice un programa que lea una cadena de caracteres en la entrada estanda y que 
muestr en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena.

#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
	int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;

	char cad[100];

	cout << "Inserte una frase cualquiera" << endl;
	cin.getline(cad, 100, '\n');
	
	for (int i = 0; i < 100; i++)
	{
		switch (cad[i]) {
		    case 'a':  vocal_a++; break;
		    case 'e':  vocal_e++; break;
		    case 'i':  vocal_i++; break;
		    case 'o':  vocal_o++; break;
		    case 'u':  vocal_u++; break;
        }
	}
	cout << "Vocal a: " << vocal_a << endl;
	cout << "Vocal e: " << vocal_e << endl;
	cout << "Vocal i: " << vocal_i << endl;
	cout << "Vocal o: " << vocal_o << endl;
	cout << "Vocal u: " << vocal_u << endl;

	system("pause");
	return 0;
}


*/

