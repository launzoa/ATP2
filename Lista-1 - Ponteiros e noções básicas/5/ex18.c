#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 18: Escreva um programa em C que declare um array de 10
inteiros e use aritm ́etica de ponteiros para calcular a soma de todos os elementos
do array. Imprima a soma.*/

int main()
{      
    int vetor[10], i;

    for(i = 0; i < 10; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int *ptr = &vetor[0];

    for(i = 1; i < 10; i++){
        *(ptr + i) += *(ptr + i - 1);
    }
    
    printf("A soma de todos os elementos do array eh: %d", *(ptr+9));
    return 0;
}
