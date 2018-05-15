#include <iostream>

using namespace std;


int main(){

    cout << "Hello, Curso de Verano!" << endl;
    cout << "Calculadora!" << endl << endl;

    int a,b,opcion;

    cout << "Ingrese dos numeros enteros: " << endl;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << endl;

    cout << "MENU: "
         << "1) +   "
         << "2) -   "
         << "3) *   "
         << "4) /   "
         << "0) End" << endl;
    cout << "Ingrese opcion: ";
    cin >> opcion;

    while (opcion){
        switch (opcion){
            case 1:
                cout << a <<" + "<< b << " = " << a + b << endl;
                break;
            case 2:
                cout << a <<" - "<< b << " = " << a - b << endl;
                break;
            case 3:
                cout << a <<" * "<< b << " = " << a * b << endl;
                break;
            case 4:
                if (!b)
                    cout << a << " / " << b << " = " << " )X Pantalla azul X( " << endl;
                else
                    cout << a <<" / "<< b << " = " << a / b << endl;
                break;
            default:
                cout << "Opción no valida" << endl;
                break;
        }
        cout << endl;
        cout << "MENU: "
             << "1) +   "
             << "2) -   "
             << "3) *   "
             << "4) /   "
             << "0) End" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
    }

    cout << "Good Bye!" << endl;
    return 0;
}
