#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 11
Enunciado: Escreva um programa em C que conte quantos elementos pares
existem em uma matriz 3x3.*/

int main()
{
    int matriz[3][3], i, j, pares=0;

    printf("Entre com a matriz 3x3->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j ++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j ++){
            if((matriz[i][j] % 2) == 0){
                pares++;
            }
        }
    }

    printf("A quantidade de numeros pares eh: %d", pares);
    return 0;
}
