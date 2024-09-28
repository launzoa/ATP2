#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Exerc ́ıcio 6: Escreva um programa em C que leia 10 valores inteiros e
calcule a soma de todos os elementos do array.*/

int main() {
    
    int vetor[10],cont,soma=0;

    for(cont=0; cont < 10; cont++){
        printf("Entre com o valor do numero '%d': ", cont+1);
        scanf("%d", &vetor[cont]);
        soma += vetor[cont];
    }  

    printf("O valor da soma de todos os numeros do vetor e: %d", soma);
    
    return 0;
}
