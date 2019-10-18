//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto3Lib.h"

/**
 * Retorna una estructura que contiene un arreglo de indices(x,y) y la cantidad total de puntos de sillas encontrados.
 * Se dice que una matriz tiene un punto de silla si alguna posición de la matriz es
 * el menor valor de su fila
 * y a la vez el mayor de su columna
 * @param m
 * @param n
 * @param matriz
 * @return
 */
RESULTADOS puntos_de_silla(int m, int n, float matriz[m][n]){
    RESULTADOS r;
    int min;
    int max;
    r.cantidad_resultados_indices = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            min = minimo_fila(m, n, matriz, i);
            max = maximo_columna(m, n, matriz, j);
            if (matriz[i][j]==min && matriz[i][j]==max){
                r.indices[r.cantidad_resultados_indices].x = j;
                r.indices[r.cantidad_resultados_indices].y = i;
                r.cantidad_resultados_indices++;
            }
        }
    }
    return r;
}

int minimo_fila(int m, int n, float matriz[m][n], int fila){
    int min = matriz[fila][0];
    for (int j = 0; j < n; ++j) {
        if (min>matriz[fila][j]){
            min=matriz[fila][j];
        }
    }
    return min;
}

int maximo_columna(int m, int n, float matriz[m][n], int colummna){
    int max = matriz[0][colummna];
    for (int j = 0; j < m; ++j) {
        if (max<matriz[j][colummna]){
            max=matriz[j][colummna];
        }
    }
    return max;
}