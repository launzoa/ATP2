#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 45
Enunciado: Escreva um programa em C que multiplique uma matriz 3x3 por
sua transposta.*/

int main()
{
    int matriz[3][3], matriz_t[3][3], matriz_multi[3][3], valor, k, i, j;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

     for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz_t[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            valor = 0;
            for(k = 0; k < 3; k++){
                valor += matriz[j][k] * matriz_t[k][j];
            }
            matriz_multi[i][j] = valor;
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz_multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
