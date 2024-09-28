#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 13
Enunciado: Escreva um programa em C que verifique se uma matriz 4x4  ́e
uma matriz diagonal.*/
int main()
{
    int matriz[4][4], i , j;

    printf("Entre com os elementos da matriz 4x4 ->\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i != j && matriz[i][j] != 0){
                printf("Matriz nao eh diagonal");
                exit(0);
            }
        }
    }
    printf("Matriz eh diagonal!");

    return 0;
}
