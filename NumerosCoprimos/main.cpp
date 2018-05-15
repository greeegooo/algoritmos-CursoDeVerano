/*
 * NúmerosCoprimos:
 * Dados dos valores ingresados por el usuario, determinar el mcd entre ellos y mostrarlo,
 * si es 1 mostrar mensaje que diga "son coprimos"
 */
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, Curso de Verano!" << endl;

    int a,
        b,
        menor;
    int mcd = 1;

    cout << "Ingrese dos numeros enteros: " << endl;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    if(a > b){
        menor = b;
    }else{
        menor = a;
    }

    for (int i = 2; i <= menor; ++i) {
        if(a % i == 0 && b % i == 0){
            mcd = i;
        }
    }

    if(mcd == 1){
        cout << "SON COPRIMOS" << endl;
    }else{
        cout << "mcd("<<a<<","<<b<<")= "<< mcd << endl;
    }
    return 0;
}