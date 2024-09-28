#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 14: Escreva um programa em C que declare um array de 5
inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
dos elementos do array. Imprima o array resultante.*/

int main() {
    
    int vetor[5], i, op;

    for(i = 0; i < 5; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int  *ptr = &vetor[0];
    
    for(i = 0; i < 5; i++){
        printf("Modifique o elemento %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    for(i = 0; i < 5; i++){
        printf("O elemento %d: %d\n", i+1, vetor[i]);
    }
    
    return 0;
}
