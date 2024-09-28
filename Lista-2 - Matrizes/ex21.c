#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 21
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de permuta ̧c ̃ao.*/
int main()
{
    int matriz[3][3], i , j, um = 0, zero = 0;

    printf("Entre com a matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] == 1){
                um += 1;
            }
        }
        if(um != 1 && zero != 2){
            printf("Nao eh uma matriz de permutacao!");
            exit(0);
        }
        um = zero = 0;
    }

    printf("Eh uma matriz de permutacao!");
    return 0;
}
