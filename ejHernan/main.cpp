#include <iostream>

using namespace std;

struct rArchivo{
    int nroRegional;
    int nroEspecialidad;
    int DNI;
};
 struct materia{
     int idMateria;
     int nroEspecialidad;
     char nomMateria[20];
     int nota;
 };
struct trDatosNodo{
    int idAlumno;
    int DNI;
    int nroEspecialidad;
    char apeNom[30];
    materia materias[45];
};
struct Nodo{
    trDatosNodo info;
    Nodo* sgte;
};
int main() {
    cout << "Hello, World!" << endl;

    Nodo* matrix [15][23];

    return 0;
}