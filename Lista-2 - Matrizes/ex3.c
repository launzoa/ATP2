#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 3
Enunciado: Escreva um programa em C que verifique se duas matrizes 2x2
s ̃ao iguais.*/
int main()
{
    int i, j, matriz_1[2][2], matriz_2[2][2], iguais = 1;

    printf("Preencha a primeira matriz:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++) {
            printf("Matriz-1 elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    printf("Preencha a segunda matriz:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++) {
            printf("Matriz-2 elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            if(matriz_1[i][j] != matriz_2[i][j]){
                iguais = 0;
            }
        }
    }

    if(iguais == 1){
        printf("As matrizes sao iguais!");
    }
    else{
        printf("As matrizes nao sao iguais!");
    }

    return 0;
}
