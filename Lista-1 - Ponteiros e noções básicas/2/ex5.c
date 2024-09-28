#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Exerc ́ıcio 5: Escreva um programa em C que leia 5 valores inteiros, armazene-
os em um array e depois imprima os valores na ordem inversa.*/

int main() {
    
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Entre com o '%d' numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i = 4; i >= 0; i--){
        printf("O valor do vetor '%d' e: \n", i+1, vetor[i]);
    }
    
    return 0;
}
