#include <iostream>
using namespace std;

//Dado un conjunto de valores reales determinar e imprimir el maximo del conjunto.

int main() {
    float valores[10];
    int i;
    float max;


    max = 0;


    cout << "ingrese los 10 elementos enteros \n\n " << endl;
    for (i=0;i<10;i++) {
        cout << endl <<"ingrese el #"<< i<< " de 10" <<endl;
        cin >> valores [i];

        if (valores [i] > max) {
            max= valores [i];
        }


    }
    cout << endl <<"ingrese el #"<< i<< " de 10" <<endl;
    cin >> valores [i];

    cout<< "el mayor es: " << max << endl;

    return 0;
}