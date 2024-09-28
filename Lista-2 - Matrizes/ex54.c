#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 54
Enunciado: Escreva um programa em C que calcule a soma dos elementos de
uma diagonal qualquer em uma matriz 4x4.*/

int main() {
    int matriz[4][4];
    int i, soma = 0;
    int escolha;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nEscolha a diagonal para somar:\n");
    printf("1 - Diagonal Principal\n");
    printf("2 - Diagonal Secundária\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        for (i = 0; i < 4; i++) {
            soma += matriz[i][i]; 
        }
        printf("\nA soma dos elementos da diagonal principal é: %d\n", soma);
    }

    else if (escolha == 2) {
        for (i = 0; i < 4; i++) {
            soma += matriz[i][3 - i];
        }
        printf("\nA soma dos elementos da diagonal secundária é: %d\n", soma);
    }
    else {
        printf("Escolha inválida!\n");
    }

    return 0;
}

