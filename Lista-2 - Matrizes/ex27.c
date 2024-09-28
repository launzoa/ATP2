#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 27
Enunciado: Escreva um programa em C que multiplique uma matriz 3x3 por
um escalar.*/

int main()
{
    int matriz[3][3], i, j, n;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Entre com o escalar: ");
    scanf("%d", &n);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= n;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
