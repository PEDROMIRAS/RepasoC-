/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int numeros[5] = { 1,2,3,4,10 }; //Definimos un arreglo
	int suma = 0, mayor = 0;

	for (int i = 0; i < 5; i++) {
		suma += numeros[i];

		if (numeros[i] > mayor) { //Determinamos cual es el numero mayor, ya que
			mayor = numeros[i];//el unico numero que puede ser la suma de los
		}					  //demas es el numero mayor
	}

	if (mayor == suma - mayor) {//comparamos si el numero mayor es igual a suma menos el numero mayor
		cout << "El numero " << mayor << " es la suma de los demas";
	}
	else {
		cout << "No existe ningun numero que sea la suma de los demas";
	}
	return 0;
}

*/