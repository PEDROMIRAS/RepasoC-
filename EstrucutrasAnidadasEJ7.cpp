/*
#include <iostream>
#include <cstdlib>
#include <string.h>
struct etapas
{
	int horas;
	int minutos;
	int segundos;
}et[100];

using namespace std;
int main() {

	int n_etapas, horasT=0, minutosT=0, segundosT=0;

    cout << "Inserte cuantas etapas hay: ";
	cin >> n_etapas;
	for (int i = 0; i < n_etapas; i++)
	{
		cout << "Cuantas horas ha tardado: "; cin >> et[i].horas;
		cout << "Cuantos minutos ha tardado: "; cin >> et[i].minutos;
		cout << "Cuantos segundos ha tardado: "; cin >> et[i].segundos;

		horasT = horasT + et[i].horas;
		minutosT = minutosT + et[i].minutos;
		if (minutosT >= 60)
		{
			minutosT -= 60;
			horasT++;
		}
		segundosT = segundosT + et[i].segundos;
		if (segundosT >= 60)
		{
			segundosT -= 60;
			minutosT++;
		}
	}
	cout << "\nTiempo total empleado\n";
	cout << "Horas empleadas: " << horasT << endl ;
	cout << "Minutos empleados: " << minutosT << endl ;
	cout << "Segundos empleados: " << segundosT << endl ;

	

	system("pause");
	return 0;
}
*/
