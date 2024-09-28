#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 12: Escreva um programa em C que preencha um array de 12
inteiros com n ́umeros aleat ́orios entre -20 e 20. Em seguida, conte e imprima
quantos n ́umeros s ̃ao negativos.*/

int main() {
    
    int vetor[12], i, negativos = 0;

    srand(time(NULL));

    for(i = 0; i < 12; i++){
        vetor[i] = (rand() % (20 + 20 + 1))-20;

        if(vetor[i] < 0){
            printf("%d ", vetor[i]);
            negativos++;
        }
    }

    printf("\nQuantidade de numeros negativos: %d", negativos);

    
    return 0;
}
