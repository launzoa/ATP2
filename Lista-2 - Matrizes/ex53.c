#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 53
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
n ́umeros aleat ́orios e depois encontre o segundo menor elemento.*/

int main() {

    int matriz[5][5];
    int i, j;
    int menor, segundoMenor;
    int encontradoSegundo = 0;

    
    srand(time(NULL));

    printf("Matriz 5x5 com números aleatórios:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100; 
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    menor = segundoMenor = 100;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] < menor) {
                segundoMenor = menor;
                menor = matriz[i][j];
                encontradoSegundo = 1;
            } else if (matriz[i][j] < segundoMenor && matriz[i][j] != menor) {
                segundoMenor = matriz[i][j];
                encontradoSegundo = 1;
            }
        }
    }

    if (encontradoSegundo) {
        printf("O segundo menor elemento eh: %d\n", segundoMenor);
    } else {
        printf("Nao ha segundo menor elemento (todos os elementos sao iguais).\n");
    }

    return 0;
}
