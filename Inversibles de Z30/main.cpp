#include <iostream>

using namespace std;

bool SonCoprimos(int a,int b){

    int menor;

    if(a>b) menor = b;
    else menor = a;

    for (int i = 2; i <= menor; ++i)
        if(a % i == 0 && b % i == 0) return false;

    return true;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "Inversibles de Z105" << endl;

    cout << "Inv(Z105) = { ";
    for (int i = 1; i <= 105; ++i) {
        if(SonCoprimos(i,105))
            cout << i << ", ";
    }
    cout << "}" << endl;
    return 0;
}