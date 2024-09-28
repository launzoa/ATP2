#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 55
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Cauchy generalizada.*/

int main() {
    float matriz[3][3];
    float x[3], y[3];
    bool cauchy = true;
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        x[i] = 1.0 / matriz[i][0];
        y[i] = 1.0 / matriz[0][i]; 
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (x[i] - y[j] == 0 || matriz[i][j] != 1.0 / (x[i] - y[j])) {
                cauchy = false;
                break;
            }
        }
        if (!cauchy) {
            break;
        }
    }

    if (cauchy) {
        printf("A matriz é uma matriz de Cauchy generalizada.\n");
    } else {
        printf("A matriz NÃO é uma matriz de Cauchy generalizada.\n");
    }

    return 0;
}

