#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 17
Enunciado: Escreva um programa em C que encontre a posi ̧c ̃ao (linha e coluna)
de um elemento espec ́ıfico em uma matriz 3x3.*/

int main()
{
    int matriz[3][3], i , j, elemento;

    printf("Entre com a matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Entre com o elemento da matriz: ");
    scanf("%d", &elemento);

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(elemento == matriz[i][j]){
                printf("Linha: %d\nColuna: %d\nEh uma possibilidade\n", i+1, j+1);
            }
        }
    }

    return 0;
}
