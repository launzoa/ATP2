#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 42
Enunciado: Escreva um programa em C que verifique se uma matriz 2x2  ́e
uma matriz de Householder.*/

int main() {
    int matriz[2][2], i, j;
    bool eSimetrica = true, eOrtogonal = true;
    int transposta[2][2], produto[2][2] = {0};

    printf("Digite os elementos da matriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (matriz[0][1] != matriz[1][0]) {
        eSimetrica = false;
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                produto[i][j] += matriz[i][k] * transposta[k][j];
            }
        }
    }

    if (!(produto[0][0] == 1 && produto[1][1] == 1 && produto[0][1] == 0 && produto[1][0] == 0)) {
        eOrtogonal = false;
    }

    if (eSimetrica && eOrtogonal) {
        printf("A matriz é uma matriz de Householder.\n");
    } else {
        printf("A matriz não é uma matriz de Householder.\n");
    }

    return 0;
}

