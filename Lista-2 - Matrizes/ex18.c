#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 18
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz identidade.*/
int main()
{
    int matriz[3][3], i , j;

    printf("Entre com a matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int identidade = 1;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                if(matriz[i][j] != 1){
                    identidade = 0;
                }
            }
            else{
                if(matriz[i][j] != 0){
                    identidade = 0;
                }
            }
        }
    }

    if(identidade == 1){
        printf("A matriz eh identidade!");
    }
    else{
        printf("A matriz nao eh identidade!");
    }

    return 0;
}
