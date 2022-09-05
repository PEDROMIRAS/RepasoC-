
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int saldo_inicial = 1000 , opc;
	int ingreso , retirada;
	int saldo_total = 0;
	cout << "Bienvenido a su cajero automatico" << endl;
	cout << "1.Ingresar dinero." << endl;
	cout << "2.Retirar dinero." << endl;
	cout << "3.Salir ." << endl;
	cout << "Seleccione una opcion:" << endl ;
	cin >> opc;

	switch (opc)
	{
	case 1 :
		
		cout << "Cuanto dinero quiere ingresar :"; cin >> ingreso;
		saldo_total = saldo_inicial + ingreso;
		cout << "Su saldo total es :" << saldo_total << endl;
		
		break;
	case 2 :
		
		cout << "Cuanto dinero quiere retirar:"; cin >> retirada;
		if (retirada>saldo_inicial)
		{
			cout << "No dispone de esa cantida.";
		}
		else {
         saldo_total = saldo_inicial - retirada;

         cout << "Su saldo total es:" << saldo_total << endl;
		}
		break;
	case 3 :

		break;

	default:
		cout << "Porfavor seleccione una opcion para continuar:" << endl;
		
		break;
	}

	return 0;
}



*/

