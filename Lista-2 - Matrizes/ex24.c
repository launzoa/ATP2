#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 24
Enunciado: Escreva um programa em C que verifique se duas matrizes 3x3
s ̃ao ortogonais.*/
int main()
{
    int matriz_1[3][3], matriz_2[3][3], matriz_2_t[3][3], i , j, k, veri;

    printf("Entre com a primeira matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    printf("Entre com a segunda matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz_2_t[i][j] = matriz_2[j][i];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            veri = 0;
            for(k = 0; k < 3; k++){
                veri += matriz_1[j][k] * matriz_2_t[k][j];
            }
            if(i == j){
                if(veri != 1){
                    printf("Nao sao matrizes ortogonais!");
                    exit(0);
                }
            }
            else{
                if(veri != 0){
                    printf("Nao sao matrizes ortogonais!");
                    exit(0);
                }
            }
        }
    }
    printf("Sao matrizes ortogonais!");
    return 0;
}
