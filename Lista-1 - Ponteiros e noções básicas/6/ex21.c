#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 21: Escreva um programa em C que encontre o maior e o menor
elemento em um array de 10 inteiros.*/

int main()
{      
    int vetor[10], i, maior, menor;

    for(i = 0; i < 10; i++){
        printf("Entre com o valor do elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int *ptr = &vetor[0];

    maior = *ptr;
    menor = *ptr;
    for(i = 1; i < 10; i++){
        if(*(ptr + i) > maior){
            maior = *(ptr + i);
        }
        if(*(ptr + i) < menor){
            menor = *(ptr + i);
        }
    }

    printf("O maior elemento do array eh: %d\nO menor elemento do array eh: %d", maior, menor);
    return 0;
}
