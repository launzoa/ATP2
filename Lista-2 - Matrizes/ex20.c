#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 20
Enunciado: Escreva um programa em C que calcule a soma das colunas de
uma matriz 4x3.*/
int main()
{
    int matriz[4][3], i , j, soma[3];
    soma[0] = 0;
    soma[1] = 0;
    soma[2] = 0;

    printf("Entre com a matriz 4x3 ->\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
             soma[j] += matriz[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        printf("A soma da coluna %d eh: %d\n", i+1, soma[i]);
    }
    return 0;
}
