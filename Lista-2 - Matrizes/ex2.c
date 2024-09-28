#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 2
Enunciado: Escreva um programa em C que calcule a soma dos elementos de
uma matriz 4x4.*/
int main()
{
    int i,j, matriz[4][4], soma = 0;
    printf("Entre com os elementos da matriz 4x4:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entre com o valor da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    } 

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma dessa matriz 4x4 eh: %d", soma);
    return 0;
}
