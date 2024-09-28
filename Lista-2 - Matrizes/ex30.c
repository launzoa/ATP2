#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 30
Enunciado: Escreva um programa em C que calcule a m ́edia dos elementos de
uma matriz 4x4.*/

int main()
{
    int matriz[4][4], i, j;
    double media=0;

    printf("Entre com os elementos da matriz 4x4\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            media += matriz[i][j];
        }
    }

    media /= (4*4);

    printf("A media dos elementos eh: %lf", media);

    return 0;
}
