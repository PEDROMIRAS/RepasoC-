
/* 
Crear una cadena que tenga la siguiente frase : Hola que tal. Luego crear otra cadena para 
preguntarle al usuario su nombre , por ultimo añadir el nombre al final de la primera cadena
y mostrar el mensaje completo "Hola que tal (NombreDeUsuario).

 
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
	char cad1[] = "Hola que tal ";
	char cad2[30];
	char cad3[50];
	
	cout << "¿Cual es tu nombre?" << endl ;
	cin >> cad2;
	strcpy_s(cad3, cad1);
	strcat_s(cad3,cad2);

	cout << cad3 << endl;

	system("pause");
	return 0;
}
*/
