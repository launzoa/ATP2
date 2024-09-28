#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 37: Escreva um programa em C que declare um array de 5 inteiros
e passe esse array para uma fun ̧c ̃ao que calcule a m ́edia dos elementos do array.*/
double media(int vetor[]){
    double media;
    int i;
    for(i = 0; i < 5; i++){
        media += vetor[i];
    }

    return media/5;
}

int main()
{   
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("A media eh: %lf", media(vetor));
    return 0;
}
