#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 29: Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings.*/

int main()
{       
    int i;
    int *ptr[5];

    for(i = 0; i < 5; i++){
        ptr[i] = malloc(sizeof(char) * 100);
    }

    for(i = 0; i < 5; i++){
        printf("Elemento %d: ", i+1);
        scanf("%s", ptr[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Elemento %d: %s\n", i+1, ptr[i]);
    }

    for(i = 0; i < 5; i++){
        free(ptr[i]);
    }
    return 0;
}
