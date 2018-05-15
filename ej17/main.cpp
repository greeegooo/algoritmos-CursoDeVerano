/*
 Se dispone de un lote de valores enteros positivos que finaliza con un número negativo. El
lote está dividido en sub lotes por medio de valores cero. Desarrollar un programa que
determine e informe: a) por cada sub lote el promedio de valores, b) el total de sub lotes
procesados, c) el valor máximo del conjunto, indicando en que sub lote se encontró y la
posición relativa del mismo dentro del sub lote, d) valor mínimo de cada sub lote
 */
#include <iostream>

using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

void Enqueu(Nodo*& cFte, Nodo*& cFin, int valor){
    Nodo* p = new Nodo();
    p->info = valor;
    p->sgte = NULL;
    if(cFte == NULL){
        cFte = p;
    }else{
        cFin->sgte = p;
    }
    cFin = p;
}

int Dequeu(Nodo*& cFte, Nodo*& cFin){
    int x;
    Nodo* p = cFte;
    x = p->info;
    cFte = p->sgte;
    if(cFte == NULL){
        cFin = NULL;
    }
    delete p;
    return x;
}
int main() {
    cout << "Hello, World!" << endl;

    Nodo* Fte = NULL;
    Nodo* Fin = NULL;
    int valor;

    //cin >> valor;

    do
    {
        cin >> valor;
        Enqueu(Fte,Fin,valor);
    }while(valor >= 0);


    float promedio = 0;
    int totalSubLotes = 0;
    int valorMax = -1;
    int subLote = 1;
    int subLoteMax = 0;
    int posEnSubLote = 0;
    int valMinSubLote = -1;
    int posEnSubLoteMax = 0;

    cout << endl;
    cout << "Salida de datos: " << endl << endl;

    do{
        valor = Dequeu(Fte,Fin);

        if(valor > 0){
            promedio += valor;
            posEnSubLote++;
            if(valor > valorMax){
                valorMax = valor;
                posEnSubLoteMax = posEnSubLote;
                subLoteMax = subLote;
            }
            if (valMinSubLote == -1 || valor < valMinSubLote){
                valMinSubLote = valor;
            }
        }
        if(valor <= 0){
            cout << "Promedio del sublote " << subLote << " es " << promedio/posEnSubLote << endl;
            cout << "Valor minimo del sublote " << subLote << " es " << valMinSubLote << endl << endl;
            posEnSubLote = 0;
            subLote++;
            promedio = 0;
            totalSubLotes++;
        }


    }while(valor >= 0);

    cout << "Total de sublotes procesados: " << totalSubLotes << endl;
    cout << "El valor máximo del conjunto es " << valorMax
         << ", en la pos " << posEnSubLoteMax
         << " del sublote " << subLoteMax << endl;

    return 0;
}