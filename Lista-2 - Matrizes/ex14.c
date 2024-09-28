#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 14
Enunciado: Escreva um programa em C que copie os elementos de uma matriz
3x3 para outra matriz.*/

int main()
{
    int matriz_1[3][3], matriz_2[3][3], i, j;

    printf("Entre com os elementos da matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }   
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz_2[i][j] = matriz_1[i][j];
        }   
    }

    printf("Matriz copiada ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz_2[i][j]);
        }  
        printf("\n");
    }
    return 0;
}
