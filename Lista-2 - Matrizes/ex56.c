#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 56
Enunciado: Escreva um programa em C que preencha uma matriz 4x4 com
n ́umeros aleat ́orios e depois encontre o terceiro maior elemento.*/

int main() {
    int matriz[4][4];
    int i, j, k;
    int elementos[16];

    srand(time(NULL));

    printf("Matriz 4x4 com numeros aleatorios:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100; 
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    k = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            elementos[k] = matriz[i][j];
            k++;
        }
    }

    int temp;
    for (i = 0; i < 16 - 1; i++) {
        for (j = 0; j < 16 - i - 1; j++) {
            if (elementos[j] < elementos[j + 1]) {
                temp = elementos[j];
                elementos[j] = elementos[j + 1];
                elementos[j + 1] = temp;
            }
        }
    }

    printf("O terceiro maior elemento eh: %d\n", elementos[2]);

    return 0;
}

