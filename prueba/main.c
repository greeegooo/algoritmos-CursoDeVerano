/*
 * TP0 - 2017
 * Un escáner elemental
 *
 * Grupo 02
 * Canala, Emiliano Nicolás  158.828-0
 * Michalopulos, Gregorio    159.760-7
 * Ramis, Lucía Jazmín       153.177-3
 * Vallejos, Lucas Gabriel   156.145-5
 */
// -- Headers --
#include "scanner.h"

// -- El Main --
int main() {
    // -- Inicializo variables --
    enum TOKEN token = tInicio;
    FILE* fichero = fopen("fichero.txt","r");
    int contadorError = 0;
    int contadorIdentificador = 0;
    int contadorConstanteEntera = 0;

    // LLamo al scanner
    while(token != tFin){
        token = Scanner(fichero);
        switch (token) {
            case tConstanteEntera:
                printf("constante entera\n");
                contadorConstanteEntera++;
                break;
            case tIdentificador:
                printf("identificador\n");
                contadorIdentificador++;
                break;
            case tError:
                printf("error\n");
                contadorError++;
                break;
            default:
                break;
        }
    }

    // -- Imprimo totales --
    printf("----\n");
    printf("Totales:\n");
    printf("identificadores: %d \n",contadorIdentificador);
    printf("constantes enteras: %d \n", contadorConstanteEntera);
    printf("errores: %d \n", contadorError);

    return 0;
}