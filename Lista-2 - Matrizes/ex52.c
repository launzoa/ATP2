#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 52
Enunciado: Escreva um programa em C que verifique se uma matriz 2x2  ́e
uma matriz de Sylvester.*/

int main() {
    int matriz[2][2];
    int produto[2][2];
    int i, j;

    printf("Digite os elementos da matriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            produto[i][j] = matriz[i][0] * matriz[0][j] + matriz[i][1] * matriz[1][j];
        }
    }

    int idempotente = 1;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (produto[i][j] != matriz[i][j]) {
                idempotente = 0;
                break;
            }
        }
        if (!idempotente) {
            break;
        }
    }

    if (idempotente) {
        printf("A matriz eh uma matriz de Sylvester.\n");
    } else {
        printf("A matriz nao eh uma matriz de Sylvester.\n");
    }

    return 0;
}

