/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Etapa {
	int horas, min, seg;
}etapa[3], * p_etapa = etapa;

//Prototipos de Funcion
void pedirDatos();
void calcularTiempo(Etapa*);


int main() {


	system("pause");
	return 0;
}
void pedirDatos() {
	for (int i = 0; i < 3; i++)
	{
		cout << "Digite el tiempo que ha durado la etapa  ";
		cout << "Horas: ";
		cin >> (p_etapa)->horas;
		cout << "Minutos:";
		cin >> (p_etapa)->min;
		cout << "Segundos:";
		cin >> (p_etapa)->seg;
		cout << "\n";
	}
}
void calcularTiempo(Etapa* p_etapa) {
	int horasT = 0, minutosT = 0, segundosT = 0;

	for (int i = 0; i < 3; i++) {
		horasT += (p_etapa + i)->horas; //horasT = horasT + puntero_etapa[i].horas
		minutosT += (p_etapa + i)->min;
		if (minutosT >= 60) {//Si los minutos son mayores a 60, significa que ha pasado
			minutosT -= 60;//mas de 1 hora, entonces disminuimos en 60 los minutos
			horasT++;//y aumentamos las horas en 1
		}
		segundosT += (p_etapa + i)->seg;
		if (segundosT >= 60) {//y lo mismo con los segundos
			segundosT -= 60;
			minutosT++;
		}
	}
	//Por ultimo mostramos los totales de tiempos en pantalla
	cout << "\nEl tiempo total es: " << endl;
	cout << "Horas: " << horasT << endl;
	cout << "Minutos: " << minutosT << endl;
	cout << "Segundos: " << segundosT << endl;
}
*/