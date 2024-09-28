#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 37
Enunciado: Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x4 e armazene o resultado em uma matriz 2x4.*/

int main()
{
    int matriz_1[2][3], matriz_2[3][4], matriz[2][4], i, j, k, valor = 0;

    printf("Entre com os elementos da matriz 2x3\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    printf("Entre com os elementos da matriz 3x4\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            for(k = 0; k < 3; k++){
                valor += matriz_1[i][k] * matriz_2[k][j];
            }
            matriz[i][j] = valor;
            valor = 0;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
