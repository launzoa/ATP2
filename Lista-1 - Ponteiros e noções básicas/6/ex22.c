#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 22: Escreva um programa em C que conte o n ́umero de elementos
pares e  ́ımpares em um array de 20 inteiros.*/

int main()
{      
    int vetor[20], i, pares = 0, impares = 0;

    for(i = 0; i < 20; i++){
        printf("Entre com o valor do elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int *ptr = &vetor[0];

    for(i = 0; i < 20; i++){
        if((*(ptr + i) % 2) == 0){
            pares++;
        }
        else{
            impares++;
        }
    }

    printf("Quantidade de pares no array eh de: %d\nQuantidade de impares no array eh de: %d", pares, impares);
    return 0;
}
