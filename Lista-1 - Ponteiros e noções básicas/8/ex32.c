#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 32: Escreva um programa em C que use um array de ponteiros
para armazenar 4 strings e encontre a string de maior comprimento.*/

int main()
{     
    int i, maior, indice;
    char *ptr[4];

    for(i = 0; i < 4; i++){
        ptr[i] = malloc(sizeof(char) * 100);
    }

    for(i = 0; i < 4; i++){
        printf("Elemento %d: ", i+1);
        scanf("%s", ptr[i]);
    }

    maior = strlen(ptr[0]);
    indice = 0;

    for(i = 1; i < 4; i++){
        if(strlen(ptr[i]) > maior){
            maior = strlen(ptr[i]);
            indice = i;
        }
    }

    printf("A maior palavra eh: %s ", ptr[indice]);

    for(i = 0; i < 4; i++){
        free(ptr[i]);
    }
    return 0;
}
