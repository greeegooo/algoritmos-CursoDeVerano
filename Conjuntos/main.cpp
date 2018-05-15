#include <iostream>
#include <string>
using namespace std;

struct rA{
    int camp1;
    int camp2;
    string camp3;
};

int main() {
    cout << "Hello, World!" << endl;
    cout << "Operaciones con conjuntos" << endl;

    string a = "hola";

    rA x;
    rA y;

    x.camp1 = 10;
    x.camp2 = 12;
    x.camp3 = a;

    y = x;

    cout << y.camp2 << " " << y.camp1 << " " << y.camp3 << endl;
    cout << 'b' - 97 << endl;
    cout << a.at(0) - 97 << endl;
    cout << a;
    return 0;
}