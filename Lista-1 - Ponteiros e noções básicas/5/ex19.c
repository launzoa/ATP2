#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 19: Escreva um programa em C que declare um array de 8
n ́umeros de ponto flutuante e use aritm ́etica de ponteiros para calcular a m ́edia
dos valores.*/

int main()
{      
    int i;
    double vetor[8];

    for(i = 0; i < 8; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%lf", &vetor[i]);
    }

    double *ptr = &vetor[0];

    for(i = 1; i < 8; i++){
        *(ptr + i) += *(ptr + i - 1);
    }
    *(ptr + 7) /= 8;

    printf("A media dos valores eh: %lf", *(ptr+7));

    return 0;
}
