#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 19
Enunciado: Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x2 e armazene o resultado em uma matriz 2x2.*/
int main()
{
    int matriz_1[2][3], matriz_2[3][2], matriz[3][3], i , j, k, temp = 0;

    printf("Entre com a matriz 2x3 ->\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }
    
    printf("Entre com a matriz 3x2 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 3; k++){
                temp += matriz_1[i][k] * matriz_2[k][j]; 
            }
        
            matriz[i][j] = temp;
            temp = 0;
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){  
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
