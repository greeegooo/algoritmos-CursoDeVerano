#include <iostream>

using namespace std;

struct Alumno{
    int Id;
    char Nombre[21];
    char Apellido[21];
};
int main() {

    cout << "Hello, World!" << endl;

    Alumno buffer;

    cout << "Ingrese los siguientes valores" << endl;
    cout << "Id: "; cin >> buffer.Id;
    cout << "Nombre: "; cin >> buffer.Nombre;
    cout << "Apellido: "; cin >> buffer.Apellido;


    return 0;
}