#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 47
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de circulante.*/

int main() {
    
    int matriz[3][3];
    bool cir = true;


    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int nextCol = (j + 1) % 3;
            if (matriz[i][j] != matriz[i - 1][nextCol]) {
                cir = false;
                break;
            }
        }
        if (!cir) {
            break;
        }
    }

    if (cir) {
        printf("A matriz eh uma matriz circulante.\n");
    } else {
        printf("A matriz nao eh uma matriz circulante.\n");
    }

    return 0;
}