#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 26
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz esparsa (maioria dos elementos s ̃ao zeros).*/

int main()
{
    int matriz[3][3], i, j, zeros=0;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

     for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if(matriz[i][j] == 0){
                zeros++;
            }
        }
    }

    if(zeros > 4){
        printf("A matriz eh esparsa");
    }
    else{
         printf("A matriz nao eh esparsa");
    }
    return 0;
}
