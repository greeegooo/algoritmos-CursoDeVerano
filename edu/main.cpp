#include <iostream>
using namespace std;

//generar e informar todas las combinaciones de 3 letras desde la a hasta la z


int factorial 

int main () {
    cout << "Combinaciones de tres letras desde aaa hasta zzz:" << endl;
    for (char i = 'a'; i <= 'z'; i++)
        for (char j = 'a'; j <= 'z'; j++)
            for (char k = 'a'; k <= 'z'; k++)
                cout << i << j << k << ' ';
    return 0;
}
