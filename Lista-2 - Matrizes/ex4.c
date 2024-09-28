#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 4
Enunciado: Escreva um programa em C que multiplique duas matrizes 3x3.*/
int main()
{
    int i, j, k, matriz_1[3][3], matriz_2[3][3], matriz_multiplicada[3][3], multi=0;

    printf("Entre com a primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Matriz - 1 | elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    printf("Entre com a segunda matriz 3x3:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Matriz - 2 | elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++){
       

        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                multi += matriz_1[i][k] * matriz_2[k][j];
            }
            matriz_multiplicada[i][j] = multi;
            multi = 0;
        }
    }

    printf("O resultado da multiplicacao da matriz-1 pela matriz-2 eh:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz_multiplicada[i][j]);
        }
        printf("\n");
    }
    return 0;
}
