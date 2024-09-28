#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 17: Escreva um programa em C que declare um array de 5 inteiros
e use aritm ́etica de ponteiros para somar 10 a cada elemento do array. Imprima
o array resultante.*/

int main()
{      
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int *ptr = &vetor[0];

    for(i = 0; i < 5; i++){
        *(ptr + i) += 10;
    }

    for(i = 0; i < 5; i++){
        printf("O elemento %d do array eh: %d\n", i+1, vetor[i]);
    }
    return 0;
}
