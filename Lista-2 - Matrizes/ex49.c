#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 49
Enunciado: Escreva um programa em C que calcule a transposta de uma
matriz 3x4..*/

int main() {
    int matriz[3][4];
    int transposta[4][3];
    int i, j;

    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta 4x3:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}