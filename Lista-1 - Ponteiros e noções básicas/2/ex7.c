#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Exerc ́ıcio 7: Escreva um programa em C que leia 6 valores de ponto flutu-
ante e calcule a m ́edia dos valores.*/

int main() {
    
    float vetor[6],media=0;
    int cont;

    for(cont=0; cont < 6; cont++){
        printf("Entre com o valor do numero '%d': ", cont+1);
        scanf("%f", &vetor[cont]);
        media += vetor[cont];
    }  
    media /= 6;
    printf("O valor da media de todos os numeros do vetor e: %f", media);
    
    return 0;
}
