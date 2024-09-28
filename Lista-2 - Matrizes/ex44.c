#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 44
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Hankel circular.*/

int main()
{
    int matriz[3][3], i, j, val;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        int val1 = j-1;
        int val2 = j+1;

        if(val1 == -1 || val2 == 3){
            if(val1 == -1){
                val1 = 2;
            }
            else{
                val2 = 0;
            }
        }
        if(matriz[0][j] != matriz[2][val1] || matriz[0][j] != matriz[1][val2]){
            printf("Nao eh matriz de Hankel circular!");
            exit(0);
        }
    }

    printf("Eh matriz de Hankel circular!");

    return 0;
}
