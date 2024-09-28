#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 13: Escreva um programa em C que declare um array de 5 inteiros.
Use um ponteiro para acessar e imprimir todos os elementos do array.*/

int main() {
    
    int vetor[5], i;

    for(i=0; i<5; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int *ptr = &vetor[0];
    
    printf("Os elementos do vetor acessados por ponteiro ->\n");

    for(i=0; i < 5; i++){
        printf("%d ", *(ptr+i));
    }

    return 0;
}
