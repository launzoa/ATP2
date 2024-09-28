#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 58
Enunciado: Escreva um programa em C que calcule a m ́edia dos elementos de
uma matriz 3x3.*/

int main() {
    int matriz[3][3];
    int i, j;
    int soma = 0;
    float media;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j]; 
        }
    }

    media = soma / 9.0; 

    printf("A soma dos elementos é: %d\n", soma);
    printf("A média dos elementos é: %.2f\n", media);

    return 0;
}

