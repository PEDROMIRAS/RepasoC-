/*
* #include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void calc_agnos(int, int&, int&, int&);

int main() {
	int diasTotal, agno, mes, dia;
	cout << "Inserte el total de dias:";
	cin >> diasTotal;

	calc_agnos(diasTotal, agno, mes, dia);
	

	cout << "Fecha desde 1/1/2000" << endl;
	cout << "Años: " << agno+2000 << endl;
	cout << "Mes: " << mes+1 << endl;
	cout << "Dias: " << dia+1 << endl;



	system("pause");
	return 0;
}
void calc_agnos(int diasTotal, int& agno, int& mes, int& dia)
{
	agno = diasTotal / 365;
	diasTotal %= 365;
	mes = diasTotal / 30;
	dia = diasTotal % 30;

	
}
*/