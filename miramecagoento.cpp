/*
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <stdio.h>
#include <cmath>
#define PI 3.1415926536
using namespace std;

int main()
{

    int distancia1;
    float alcance;
    float angulo;
    float rad, seno;
    srand(time(NULL));
    distancia1 = rand();
    rad = angulo* PI / 180;
    seno = sin(rad);
        int distancia2 = 400 + distancia1 % (601 - 400);

    for (int i = 0; i <= 4; i++) {

        cout << "Introduzca un angulo :" << "\n";
        scanf_s("%f", &angulo);
    }
    alcance = (75 * 75 * seno *2) / 10;


    if ((alcance <= distancia2 + 10) && (alcance >= distancia2 - 10))
    {
        cout << "impacta en la distancia  :" << alcance << "\n";
        system("pause");
        return 0;

    }
    else if ((alcance > distancia2 + 10) && (alcance < distancia2 - 10))
        cout << "no impacta ";

    return 0;
}
*/

