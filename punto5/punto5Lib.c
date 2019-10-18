//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto5Lib.h"

RESPUESTA obten_minimo_viable(RESPUESTA a, RESPUESTA b){
    if (a.comida_restante<0.0){
        return b;
    } else if (b.comida_restante<0.0){
        return a;
    }
    if (a.pasos==-1) return b;
    if (b.pasos==-1) return a;
    if (a.pasos<=b.pasos) return a;
    return b;
}

/**
 * Respuesta debe de contener la cantidad mínima de paso y la comida restante
 * La comida consumida es igual a x/5 al aplicar f(x) o g(x) o h(x).
 * La cantidad de comida restante es la cantidad de comida en almacen menos la cantidad de comida consumida
 * Si no es posible convertir a p en q o si se acaba la comida,
 * entonces la cantidad minima de pasos y la comida consumida debe de ser -1
 * @param p
 * @param q
 * @param comida_en_almacen
 * @return
 */
RESPUESTA pasos(int p, int q, double comida_en_almacen){
    RESPUESTA r;
    r.pasos = 0;
    r.comida_restante = comida_en_almacen;
    if (p==q){
        return r;
    } else if (p>q){
        r.pasos = -1;
        r.comida_restante = -1;
        return r;
    }
    double comida_usada = p/5.0;
    RESPUESTA rf = pasos(2*p+3, q, comida_en_almacen-comida_usada);
    RESPUESTA rg = pasos(3*p+2, q, comida_en_almacen-comida_usada);
    RESPUESTA rh = pasos(2*p+5, q, comida_en_almacen-comida_usada);
    
    if (rf.pasos>-1) rf.pasos++;
    if (rg.pasos>-1) rg.pasos++;
    if (rh.pasos>-1) rh.pasos++;

    return obten_minimo_viable(rf, obten_minimo_viable(rg, rh));
}
