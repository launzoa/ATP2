#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 15
Enunciado: Escreva um programa em C que inverta a ordem das linhas de
uma matriz 3x3.*/

int main()
{
    int matriz[3][3], i , j, temp, max = 2;

    printf("Entre com a matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3/2; i++){
        for(j = 0; j < 3; j++){
            temp = matriz[i][j];
            matriz[i][j] = matriz[2][j];
            matriz[max][j] = temp;
        }
        max--;
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
