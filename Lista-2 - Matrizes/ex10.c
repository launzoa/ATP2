#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 10
Enunciado: Escreva um programa em C que encontre o menor elemento em
uma matriz 4x4.*/
int main()
{
    int matriz[4][4], i, j, menor;
    printf("Entre com a matriz 4x4->\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j ++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    menor = matriz[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j ++){
            if(menor < matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    printf("O menor elemento eh: %d", menor);
    return 0;
}
