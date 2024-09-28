#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 57
Enunciado: Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x2 e armazene o resultado em uma matriz 2x2.*/

int main() {
    int A[2][3], B[3][2], C[2][2];
    int i, j, k;

    printf("Digite os elementos da matriz A (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz resultante C (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

