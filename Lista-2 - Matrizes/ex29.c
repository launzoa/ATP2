#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 29
Enunciado: Escreva um programa em C que roteie os elementos de uma matriz
3x3 em 90 graus no sentido anti-hor ́ario.*/

int main()
{
    int i, j, k, matriz[3][3], matriz_rotacionada[3][3];

    printf("Entre com os elementos da matriz 3x3:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz_rotacionada[i][j] = matriz[2-j][i];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz_rotacionada[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
