#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 36
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
n ́umeros aleat ́orios e depois ordene os elementos de cada coluna.*/

int main()
{
    int matriz[5][5], i, j, k, l, menor, indice;

    printf("Entre com os elementos da matriz 5x5\n");
    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
    
    for (i = 0; i < 5; i++) {
        menor = 10;
        l = 0;
        for (j = 0; j < 5; j++) {  
            for (k = l; k < 5; k++){
                if(matriz[k][i] < menor){
                    menor = matriz[k][i];
                    indice = k;
                }
            }
            matriz[indice][i] = matriz[l][i];
            matriz[l][i] = menor;
            menor = 10;
            l++;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
