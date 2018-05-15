#include <stdio.h>

enum ESTADOS {
    eInicial,
    eDigito,
    eLeng,
    eOtros,
    eDigitoA,
    eLengA,
    eError,
    e404
};


int main() {
    printf("Hello, World!\n");

    enum ESTADOS tablaEstados [7][5] =
            {{eDigito,eLeng,eInicial,eOtros,e404},
             {eDigito,eDigitoA,eDigitoA,eDigitoA,eDigitoA},
             {eLeng,eLeng,eLengA,eLengA,eLengA},
             {eError,eError,eError,eOtros,eError},
             {e404,e404,e404,e404,e404},
             {e404,e404,e404,e404,e404},
             {e404,e404,e404,e404,e404}};


    printf("%d",tablaEstados[0][0] == eDigito);
    return 0;
}