#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 5
Enunciado: Escreva um programa em C que transponha uma matriz 3x2 para
uma matriz 2x3.*/
int main()
{
    int i, j, matriz[3][2];

    printf("Entre com os valores da matriz:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz transposta fica:\n");
     for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
