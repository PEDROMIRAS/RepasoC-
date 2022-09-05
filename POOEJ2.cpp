/*
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Tiempo
{
public:
	Tiempo(int, int, int);
	Tiempo(int);
	void mostrarTiempo();

private:

	int hora, min, seg;

};

Tiempo::Tiempo(int hora_, int min_, int seg_) {
	hora = hora_;
	min = min_;
	seg = seg_;
}
Tiempo::Tiempo(int tiempoSeg) {
	hora = tiempoSeg / 3600;
	tiempoSeg = tiempoSeg % 3600;
	min = tiempoSeg / 60;
	seg= tiempoSeg % 60;
	
}
void Tiempo::mostrarTiempo() {
	cout << "El tiempo es : " << hora << "h" << ":" << min << "m" << ":" << seg << "s" << endl;
}
int main() {
	Tiempo t1(16, 23, 30);
	Tiempo t2(55410);
	t1.mostrarTiempo();
	t2.mostrarTiempo();

	system("pause");
	return 0;
}
*/