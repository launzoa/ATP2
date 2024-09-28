#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 6
Enunciado: Escreva um programa em C que calcule a diagonal principal de
uma matriz 5x5.*/

int main()
{
    int matriz[5][5], i, j, soma = 0, multi = 1;

    printf("Entre com os elementos da matriz 5x5\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(i == j){
                soma += matriz[i][j];
                multi *= matriz[i][j];
            }
        }
    }

    printf("A soma da diagonal da matriz eh: %dzn", soma);
    printf("A multiplicacao da diagonal da matriz eh: %d", multi);

    return 0;
}
