/**NO ESTA TERMINADO**
* 
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
	char palabra[100];
	int longitud = 10;

	cout << "Inserte una cadena de caracteres:";	cin.getline(palabra,100);
   
	if (longitud<10)
	{
    longitud = strlen(palabra);
	cout << "La cadena de caracteres es:" << palabra << endl;
	
	}
	else {
		cout << "La cadena no presenta la longitud minima" << endl;
	}

	system("pause");
return 0;
}
*/

