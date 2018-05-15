/*Indicar si el siguiente codigo puede compilar o no y por que
teniendo en cuenta que la funcion b que estara siendo usada dentro de
 la funcion a se declara despues de la funcion a */

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <direct.h>
#define MAX_DIARIO 5
using namespace std;


int main (){
    char nombreMesCRuta[19], nombreArchivoCRuta[31];
    short anio, mes, dia;
    FILE *f;
    int fech = 20170820;
    anio = fech / 10000;
    mes = (fech % 10000) / 100;
    dia = fech % 100;
    //cout <<
    mkdir ("C:\\Ventas");

    //nombreMesCRuta ej: C:\\Ventas\\2017-08
    //nombreArchivoCRuta ej C:\\Ventas\\2017-08\\Dia 10.txt
    sprintf (nombreMesCRuta, "C:\\Ventas\\%d-%d", anio, mes);
    mkdir (nombreMesCRuta);

    sprintf (nombreArchivoCRuta, "%s\\Dia %d.txt", nombreMesCRuta, ++dia);
    cout << nombreArchivoCRuta;//para probar
    f = fopen (nombreArchivoCRuta, "w");
    fclose (f);

    return 0;
}
