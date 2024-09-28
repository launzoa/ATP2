#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*Exerc ́ıcio 10: Escreva um programa em C que preencha um array de 10
inteiros com n ́umeros aleat ́orios entre 50 e 150. Calcule e imprima a m ́edia dos
elementos do array.*/

int main() {
    
    int vetor[10],media=0;

    srand(time(NULL));

    for(int i=0; i<10; i++){
        vetor[i] = (rand() % (150 - 50 + 1)) + 50; 
        media += vetor[i];
    }
    
    printf("A media dos elementos eh: %d\n", media/10);
    
    return 0;
}
