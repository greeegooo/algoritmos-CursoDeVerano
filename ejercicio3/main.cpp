#include <iostream>
using namespace std;
/*
 Se tiene un archivo desordenado(alumnos.dat), con los siguientes campos:
 nroLegajo, apellido y nombre, codCarrera. Y un archivo de carreras(carreras), ordenado
 por cierto criterio y cuenta solamente con 7 carreras, con los siguientes campos:
 codCarrera, y carrera. Emitir un listado de alumnos ordenados por carreras,
 emitir el total de inscriptos por carrera y total general.

Ingeniería en Sistemas de Información -> K
Ingeniería Electrónica -> R
Ingeniería Mecánica -> S
Ingeniería Química -> V
Ingeniería Eléctrica -> Q
Ingeniería Industrial -> I
Ingeniería Civil -> O
 */
typedef char char40[41];

struct trAlumno{
    int nroLegajo;
    char40 apeNom;
    char carrera;
};

struct trCarrera{
    char codCarrera;
    char40 carrera;
};
struct Nodo{
    trAlumno info;
    Nodo* sgte;
};
int main() {

    FILE* fAlumnos = fopen("alumnos.dat","wb");
    FILE* fCarreras = fopen("carreras.dat","wb");
    trAlumno rAlumno;
    trCarrera rCarrera;

    //Ingreso los datos
    int n = 1;
    while(n != 0){
        cout << "Ingrese 3 enteros: " << endl;
        cin >> registro.cmpClv;
        cin >> registro.cmp2;
        cin >> registro.cmp3;
        fwrite(&registro, sizeof(rDatos),1,f);

        cout << "Quiere ingresar mas datos?: " << endl;
        cin >> n;
    }

    fclose(fAlumnos);
    fclose(fCarreras);


}