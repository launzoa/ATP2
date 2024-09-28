#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 41
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Toeplitz.*/

int main()
{
    int matriz[3][3], i, j;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 1, j = 1; i < 3; i++, j++) {
        if(matriz[i][j] != matriz[i-1][j-1]){
            printf("Nao eh matriz de Toeplitz");
            exit(0);
        }
    }

    for (i = 1, j = 2; j < 3; i++, j++) {
        if(matriz[i][j] != matriz[i-1][j-1]){
            printf("Nao eh matriz de Toeplitz");
            exit(0);
        }
    }

    for (i = 2, j = 1; i < 3; i++, j++) {
        if(matriz[i][j] != matriz[i-1][j-1]){
            printf("Nao eh matriz de Toeplitz");
            exit(0);
        }
    }

    printf("Eh matriz de Toeplitz");
    
    return 0;
}
