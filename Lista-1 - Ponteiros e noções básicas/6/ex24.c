#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 24: Escreva um programa em C que verifique se todos os ele-
mentos de um array de 5 inteiros s ̃ao positivos.*/

int main()
{      
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Entre com o valor do elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int *ptr = &vetor[0];
    
    for(i = 0; i < 5; i++){
        if(*(ptr + i) < 0){
            printf("Existe um elemento negativo no array!");
            exit(0);
        }
    }
    printf("Todos os elementos no array sao positivos!");
    
    return 0;
}
