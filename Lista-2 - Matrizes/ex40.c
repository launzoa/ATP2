#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 40
Enunciado: Escreva um programa em C que realize a rota ̧c ̃ao de uma matriz
quadrada 5x5 no sentido hor ́ario.*/

int main()
{
    int matriz[5][5], matriz_rotacionada[5][5], i, j;

    printf("Entre com os elementos da matriz 5x5:\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz_rotacionada[i][j] = matriz[4-j][i];
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matriz_rotacionada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
