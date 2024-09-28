#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 48
Enunciado: Escreva um programa em C que preencha uma matriz 4x4 com
n ́umeros aleat ́orios e depois calcule a m ́edia dos elementos acima da diagonal
principal.*/

int main() {
    int matriz[4][4];
    int i, j;
    int soma = 0;
    int count = 0;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            soma += matriz[i][j];
            count++;
        }
    }

    if (count > 0) {
        double media = (double)soma / count;
        printf("A media dos elementos acima da diagonal principal eh: %.f\n", media);
    } else {
        printf("Nao há elementos acima da diagonal principal.\n");
    }

    return 0;
}