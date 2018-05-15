//
// Created by Gregorio Michalopulos on 11/6/17.
//
// -- Headers --
#include "scanner.h"

// -- Constantes --

//          | Digito | Letra | Espacios | Otros | Fin
// eInicial |
// eDigito  |
// eLetra   |
// eOtros   |
// eDigitoA |
// eLetraA  |
// eError   |

const enum ESTADOS TABLA_ESTADOS [7][5] = {
        {eDigito , eLeng    , eInicial , eOtros   , eFin    },
        {eDigito , eDigitoA , eDigitoA , eDigitoA , eDigitoA},
        {eLeng   , eLeng    , eLengA   , eLengA   , eLengA  },
        {eError  , eError   , eError   , eOtros   , eError  },
        {eFin    , eFin     , eFin     , eFin     , eFin    },
        {eFin    , eFin     , eFin     , eFin     , eFin    },
        {eFin    , eFin     , eFin     , eFin     , eFin    }};


const int CERO = 0;
const int UNO = 1;
const int DOS = 2;
const int TRES = 3;
const int CUATRO = 4;

const int ESPACIO = 32;
const int ENTER = 10;
const int TAB = 9;

// -- Implementaciones --
int CualColumna (int c){

    int columna;

    if (isdigit(c)) {
        columna = CERO;
    }
    else if (islower(c)) {
        columna = UNO;
    }
    else if (c == ESPACIO || c == ENTER || c == TAB) {
        columna = DOS;
    }
    else if (c == EOF) {
        columna = CUATRO;
    }
    else {
        columna = TRES;
    }

    return columna;
};

bool NoDeboParar(enum ESTADOS estado){
    return estado < 4;
};

bool EsAceptor (enum ESTADOS estado){
    return estado == eDigitoA || estado == eLengA || estado == eFin;
};

bool EsCentinela (enum ESTADOS estado){
    return estado == eDigitoA || estado == eLengA || estado == eError;
};

enum TOKEN EmitirToken(enum ESTADOS estado){
    switch (estado){
        case eDigitoA:
            return tConstanteEntera;
        case eLengA:
            return tIdentificador;
        case eError:
            return tError;
        default:
            return tFin;
    }
};

enum TOKEN Error(int c, FILE* f){
    ungetc(c,f);
    return tError;
};

enum TOKEN Scanner (FILE* f){

    int c = '\0';
    enum ESTADOS estado = eInicial;

    while (NoDeboParar(estado)){
        c = getc(f);
        estado = TABLA_ESTADOS [estado] [CualColumna(c)];
    }

    if(EsAceptor(estado)){
        if(EsCentinela(estado)){
            ungetc(c,f);
        }
        return EmitirToken(estado);
    }else{
        return Error(c,f);
    }
}