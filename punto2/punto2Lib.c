//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto2Lib.h"


/**
 * Suma dos numeros complejos.
 * Dado 3+4j y 2+3j debe de retornar 5+7j
 * @param a
 * @param b
 * @return
 */
COMPLEJO suma(COMPLEJO a, COMPLEJO b){
    a.real = a.real + b.real;
    a.imaginaria = a.imaginaria + b.imaginaria;
    return a;
}

/**
 * Resta 2 numeros complejos
 * Dado 3+4j y 2+3j debe de retornar 1+1j
 * @param a
 * @param b
 * @return
 */
struct complejo resta(COMPLEJO a, COMPLEJO b){
    a.real = a.real - b.real;
    a.imaginaria = a.imaginaria - b.imaginaria;
    return a;
}

/**
 * Multiplica 2 numeros complejos
 * Dado 3+4j y 2+3j
 * (3+4j) * (2+3j) -> 2*(3+4j) + 3j*(3+4j) -> 6+8j+9j+12j^2 -> 6+17j-12 -> -6+17j
 * Debe de retornar -6+17j
 * @param a
 * @param b
 * @return
 */
COMPLEJO multiplica(struct complejo a, struct complejo b){
    COMPLEJO res;
    res.real = a.real * b.real - a.imaginaria * b.imaginaria;
    res.imaginaria = a.real * b.imaginaria + a.imaginaria * b.real;
    return res;
}

/**
 * Divide 2 numeros complejos
 * Dado 3+4j y 2+3j
 * (3+4j) / (2+3j) -> ((3+4j)*(2-3j)) / ((2+3j)*(2-3j)) -> (18-1j) / (13+0j) -> (18/13) - (1/13)j
 * Debe de retornar 1.3846... - 0.0769...j
 * @param a
 * @param b
 * @return
 */
COMPLEJO divide(COMPLEJO a, COMPLEJO b){
    COMPLEJO conjugadob = {b.real, -b.imaginaria};
    COMPLEJO r1 = multiplica(a, conjugadob);
    COMPLEJO r2 = multiplica(b, conjugadob);
    r1.real = r1.real / r2.real;
    r1.imaginaria = r1.imaginaria / r2.real;
    return r1;
}