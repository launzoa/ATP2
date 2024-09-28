#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 1: Declare um array de 10 inteiros e inicialize-o com valores de 0 a
9. Escreva um programa em C que imprima todos os elementos do array.*/
int main(){
    
    int vetor[10];
    
    for(int i=0; i < 10; i++){
        vetor[i] = i;
    }

    for(int i=0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }

    
    return 0;
}