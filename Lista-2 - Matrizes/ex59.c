#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 59
Enunciado: Escreva um programa em C que verifique se uma matriz 2x2  ́e
uma matriz de reflex ̃ao.*/

int main() {
    int matriz[2][2];
    bool eReflexiva = false;

    printf("Digite os elementos da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    if (matriz[0][0] == -matriz[1][1] && matriz[0][1] == matriz[1][0]) {
        eReflexiva = true;
    }

    if (eReflexiva) {
        printf("A matriz é uma matriz de reflexão.\n");
    } else {
        printf("A matriz não é uma matriz de reflexão.\n");
    }

    return 0;
}
