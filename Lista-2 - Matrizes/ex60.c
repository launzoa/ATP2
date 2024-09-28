#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 60
Enunciado: Escreva um programa em C que realize a rota ̧c ̃ao de uma matriz
quadrada 5x5 no sentido anti-hor ́ario..*/

int main() {
    int matriz[5][5], rotacionada[5][5];
    int i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            rotacionada[4-j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz rotacionada no sentido anti-horario:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d ", rotacionada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
