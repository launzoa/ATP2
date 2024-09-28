#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 11: Escreva um programa em C que preencha um array de 15
inteiros com n ́umeros aleat ́orios entre 0 e 50. Em seguida, encontre e imprima
o maior valor do array.*/

int main() {
    
    int vetor[15], i, maior = 0;
    srand(time(NULL));
    
    for(i = 0; i < 15; i++){
        vetor[i] = (rand() % 51);
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("O maior elemento eh: %d\n", maior);
    
    return 0;
}
