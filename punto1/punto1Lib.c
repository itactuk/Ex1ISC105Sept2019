//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto1Lib.h"

/**
 * Invierte una cadena.
 * Dado: "Hola" debe de convertila en "aloH"
 * @param cadena
 */
void invierte (char cadena[]){
    invierte_sol_iterativa(cadena);
}

int cant_caracteres(char cadena[]);
void invierte_sol_iterativa(char cadena[]){
    int n = cant_caracteres(cadena);
    char tmp;
    for (int i = 0; i < n/2; ++i) {
        tmp = cadena[i];
        cadena[i] = cadena[n-i-1];
        cadena[n-i-1] = tmp;
    }
}

int cant_caracteres(char cadena[]){
    int c = 0;
    for (int i = 0; cadena[i] != '\0'; ++i) {
        c++;
    }
    return c;
}