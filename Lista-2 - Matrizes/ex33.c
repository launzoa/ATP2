#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 33
Enunciado: Escreva um programa em C que encontre o menor elemento em
uma matriz 5x5.*/

int main()
{
    int matriz[5][5], i, j, menor;

    printf("Entre com os elementos da matriz 5x5\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da matriz eh: %d", menor);

    return 0;
}
