#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 39: Escreva um programa em C que declare um array de 6
inteiros e passe esse array para uma fun ̧c ̃ao que conte quantos elementos s ̃ao
positivos.*/
int positivos(int vetor[]){

    int positivo = 0, i;

    for(i = 0; i < 6; i++){
        if(vetor[i] >= 0){
            positivo++;
        }
    }
    return positivo;
}

int main()
{      
    int vetor[6], i;

    for(i = 0; i < 6; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Quantidade de positivos eh: %d", positivos(vetor));

    return 0;
}
