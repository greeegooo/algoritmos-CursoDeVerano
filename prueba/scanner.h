//
// Created by Gregorio Michalopulos on 11/6/17.
//

#ifndef PRUEBA_SCANNER_H
#define PRUEBA_SCANNER_H

// -- Librerias --
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// -- Estructuras --

enum ESTADOS {
    eInicial,
    eDigito,
    eLeng,
    eOtros,
    eDigitoA,
    eLengA,
    eError,
    eFin
};

enum TOKEN {
    tInicio,
    tIdentificador,
    tConstanteEntera,
    tError,
    tFin
};

// -- Firma Metodos--
enum TOKEN Scanner(FILE*);
int CualColumna (int);
bool NoDeboParar (enum ESTADOS);
bool EsAceptor (enum ESTADOS);
bool EsCentinela (enum ESTADOS);
enum TOKEN EmitirToken(enum ESTADOS);
enum TOKEN Error(int , FILE*);

#endif //PRUEBA_SCANNER_H
