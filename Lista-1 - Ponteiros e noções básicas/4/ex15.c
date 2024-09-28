#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 15: Escreva um programa em C que declare um array de 7
inteiros e use um ponteiro para calcular a soma dos elementos do array.*/

int main() {
    
    int vetor[7], i, soma = 0;

    for(i = 0; i < 7; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int *ptr = &vetor[0];

    for(i = 0; i < 7; i++){
        soma += *(ptr + i);
    }

    printf("A soma eh: %d", soma);

    return 0;
}
