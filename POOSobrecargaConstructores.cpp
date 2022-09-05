/*Sobrecarga de constructores

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Fecha
{
public:
	Fecha(int, int, int);
	Fecha(long);
	void mostrarFecha();

private:
	int dia, mes, anio;
};
//dia/mes/anio ----- aniomesdia

//Constructor 1
Fecha::Fecha(int _dia, int _mes, int _anio) {
	anio = _anio;
	mes = _mes;
	dia = _dia;
}
//Constructor 2
Fecha::Fecha(long fecha) {
	anio = int(fecha / 10000);
	mes = int((fecha - anio * 10000)/ 100);
	dia = int(fecha - anio * 10000 - mes * 100);
}
void Fecha::mostrarFecha()
{
	cout << "La fecha es : " << dia << "/" << mes << "/" << anio << endl;

}

int main() {
	Fecha hoy(5, 9, 2020);
	Fecha ayer(20200904);
	hoy.mostrarFecha();
	ayer.mostrarFecha();

	system("pause");
	return 0;
}
*/