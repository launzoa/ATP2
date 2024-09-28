#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 35
Enunciado: Escreva um programa em C que verifique se uma matriz 4x4  ́e
uma matriz de Cauchy.*/

int main()
{
    int matriz[4][4], i, j;
    double x[4], y[4];

    printf("Entre com os elementos da matriz 4x4\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (int j = 0; j < 4; j++) {
        
        if (matriz[0][j] == 0) {
            printf("Nao pode haver 0 na matriz de Cauchy");
            exit(0);
        }
        y[j] = 1.0 / matriz[0][j];
    }
    
    for (int i = 1; i < 4; i++) {
       
        x[i] = 1.0 / matriz[i][0] + y[0];
        
        for (int j = 0; j < 4; j++) {
            double esperado = 1.0 / (x[i] - y[j]);
            if (fabs(matriz[i][j] - esperado) < 0.0000001) {
                printf("Valor nao satisfaz a matriz de Cauchy");
                exit(0);
            }
        }
    }
    printf("EH UMA matriz de Cauchy");

    return 0;
}
