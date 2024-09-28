#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 50
Enunciado: Escreva um programa em C que verifique se uma matriz 4x4  ́e
uma matriz de Drazin.*/

int main() {
    int matriz[4][4];
    int transposta[4][4];
    int produto1[4][4];
    int produto2[4][4];
    int i, j, k;
    int igual = 1;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            produto1[i][j] = 0;
            for (k = 0; k < 4; k++) {
                produto1[i][j] += matriz[i][k] * transposta[k][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            produto2[i][j] = 0;
            for (k = 0; k < 4; k++) {
                produto2[i][j] += transposta[i][k] * matriz[k][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (produto1[i][j] != produto2[i][j]) {
                igual = 0;
                break;
            }
        }
        if (!igual) {
            break;
        }
    }

    if (igual) {
        printf("A matriz eh uma matriz de Drazin.\n");
    } else {
        printf("A matriz nao eh uma matriz de Drazin.\n");
    }

    return 0;
}

