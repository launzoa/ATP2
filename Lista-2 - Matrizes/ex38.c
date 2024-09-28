#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 38
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Hankel.*/

int main()
{
    int matriz[3][3], matriz_h[3][3], i, j;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]); 
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz_h[i][j] = i + j + 2;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if(matriz_h[i][j] != matriz[i][j]){
                printf("Nao eh matriz Hankel!");
                exit(0);
            }
        }
    }

    printf("Eh matriz Hankel!");
    
    return 0;
}
