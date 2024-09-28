#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 43
Enunciado: Escreva um programa em C que calcule a soma dos elementos
abaixo da diagonal principal de uma matriz 4x4.*/

int main()
{
    int matriz[4][4], i, j, soma = 0, l = 1;

    printf("Entre com os elementos da matriz 4x4\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 1; i < 4; i++) {
        for (j = 0; j < l; j++) {
            soma += matriz[i][j];
        }
        l++;
    }

    printf("A soma dos elementos abaixo da diagonal principal eh: %d", soma);
    return 0;
}
