#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 38: Escreva um programa em C que declare um array de 10
inteiros e passe esse array para uma fun ̧c ̃ao que encontre o maior elemento do
array.*/
int maior(int vetor[]){

    int i, maior;
    maior = vetor[0];
    for(i = 1; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main()
{      
    int vetor[10], i;

    for(i = 0; i < 10; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("O maior elemento eh: %d", maior(vetor));

    return 0;
}
