#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 22
Enunciado: Escreva um programa em C que preencha uma matriz 4x4 com
n ́umeros aleat ́orios e depois ordene os elementos de cada linha.*/

int main()
{
    int matriz[4][4], i , j, k, l, menor = 10, indice;

    srand(time(NULL));

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for(i = 0; i < 4; i++){
        l = 0;
        for(j = 0; j < 4; j++){
            for(k = l; k < 4; k++){
                if(matriz[i][k] < menor){
                    menor = matriz[i][k];
                    indice = k;
                }
            }
            l++;
            matriz[i][indice] = matriz[i][j];
            matriz[i][j] = menor;
            menor = 10;
        }
    }


    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
