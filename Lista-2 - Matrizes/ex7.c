#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 7
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
sim ́etrica.*/
int main()
{
    int i, j, l, c, simetrica = 1;

    printf("Entre com o tamanho da linha e coluna da matriz:");
    scanf("%d%d", &l, &c);
    int matriz[l][c];

    printf("Entre com a matriz:\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
            }
        }
    }

    if(simetrica == 1){
        printf("As matrizes sao simetricas!");
    }
    else{
        printf("As matrizes nao sao simetricas!");
    }

    return 0;
}
