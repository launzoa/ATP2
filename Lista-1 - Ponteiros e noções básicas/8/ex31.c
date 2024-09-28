#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 31: Escreva um programa em C que use um array de ponteiros
para armazenar 5 n ́umeros inteiros e encontre o maior valor entre eles.*/

int main()
{     
    int i, maior;
    int *ptr[5];

    for(i = 0; i < 5; i++){
        ptr[i] = malloc(sizeof(int));
    }

    for(i = 0; i < 5; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    maior = ptr[0];

    for(i = 1; i < 5; i++){
        if(ptr[i] > maior){
            maior = ptr[i];
        }
    }

    printf("O maior elemento eh: %d", maior);

    for(i = 1; i < 5; i++){
        free(ptr[i]);
    }

    return 0;
}
