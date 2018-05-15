/*
 * Función de Euler
 * Hallar la cantidad de num naturales menores o iguales a 91919
 */
#include <iostream>
using namespace std;

bool EsPrimo(int n){

    for (int i = 2; i < n; ++i)
        if(n % i == 0) return false;
    return true;
}
bool SonCoprimos(int a,int b){

    int menor;

    if(a>b) menor = b;
    else menor = a;

    for (int i = 2; i <= menor; ++i)
        if(a % i == 0 && b % i == 0) return false;

    return true;
}

int FuncionEuler(int n){
    int contador = 0;

    if(EsPrimo(n)){
        contador = n-1;
    }else{
        for (int i = 1; i <= n; ++i)
            if(SonCoprimos(i,n)) contador++;
    }
    return contador;

}

int main() {
    cout << "Hello, Curso de Verano!" << endl;

    cout << FuncionEuler(91919);
    return 0;
}