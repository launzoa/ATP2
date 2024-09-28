#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 9: Escreva um programa em C que preencha um array de 20 inteiros
com n ́umeros aleat ́orios entre 1 e 100. Em seguida, imprima todos os elementos
do array.*/

int main() {
    
    int vetor[20], i;
    srand(time(NULL));
    for(i = 0; i < 20; i++){

        vetor[i] = rand() % 101;
    }

    printf("Os 20 numeros aleatorios gerados sao: ");

    for(i = 0; i < 20; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
