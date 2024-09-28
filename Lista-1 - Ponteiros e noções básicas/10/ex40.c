#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 40: Escreva um programa em C que declare um array de 8
inteiros e passe esse array para uma fun ̧c ̃ao que inverta a ordem dos elementos
do array.*/
void inverte(int vetor[]){

    int i, j, temp;

    for(i = 0, j = 7; i < 8/2; i++, j--){
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }

    for(i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
}

int main()
{      
    int vetor[8], i;

    for(i = 0; i < 8; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    inverte(vetor);

    return 0;
}
