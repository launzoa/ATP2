#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 9
Enunciado: Escreva um programa em C que encontre o maior elemento em
uma matriz 3x3.*/
int main()
{
    int matriz[3][3], i, j, maior;

    printf("Entre com os elementos da matriz 3x3:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da matriz eh: %d", maior);
    return 0;
}
