#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 39
Enunciado: Escreva um programa em C que verifique se duas matrizes 3x3
s ̃ao semelhantes.*/


int main() {
    int A[3][3], B[3][3];
    int i, j;
    int somaA = 0, somaB = 0;
    int freqA[101] = {0}, freqB[101] = {0}; 
    bool saoSemelhantes = true;


    printf("Digite os elementos da matriz A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
            somaA += A[i][j] * (i == j);  
            freqA[A[i][j]]++;  
        }
    }


    printf("Digite os elementos da matriz B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
            somaB += B[i][j] * (i == j); 
            freqB[B[i][j]]++;  
        }
    }

    if (somaA != somaB) {
        saoSemelhantes = false;
    }

    for (i = 0; i <= 100; i++) {
        if (freqA[i] != freqB[i]) {
            saoSemelhantes = false;
            break;
        }
    }

    if (saoSemelhantes) {
        printf("As matrizes A e B sao semelhantes.\n");
    } else {
        printf("As matrizes A e B nao sao semelhantes.\n");
    }

    return 0;
}

