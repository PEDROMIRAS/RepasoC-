/*
Realiza un programa que defina dos vectores de caracteres y después almacene 
el contenido de ambos vectores en un nuevo vector, situando en primer lugar los 
elementos del primer vector seguido por los elementos del segundo vector. Muestre el
contenido del nuevo vector en la
salida estándar.

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	char letras1[] = { 'a','b','c','d','e' }, letras2[] = { 'f','g','h','i','j' };
	char letras3[10];
	//Copio el vector letras1 en letras3

	for (int i = 0; i < 5; i++)
	{
		letras3[i] = letras1[i];

	}
	//Copio el vector letras2 en letras3
	for (int i = 5; i < 10; i++)
	{
		letras3[i] = letras2[i-5];

	}
	//Muestro el vector resultado
	for (int i = 0; i < 10; i++)
	{
      cout <<  letras3[i] << endl;
	}
	

	system("pause");
	return 0;
}



*/
