#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 20: Escreva um programa em C que declare um array de 12
caracteres e use aritm ́etica de ponteiros para inverter a ordem dos caracteres no
array.*/

int main()
{      
    int i, j;
    char vetor[12];

    printf("Entre com a string: ");
    scanf("%s", vetor);
    
    char *ptr = vetor;
    char temp;

    for(i = 0, j = 11; i < 12/2; i++, j--){
        temp = vetor[j];
        *(ptr+j) = vetor[i];
        *(ptr+i) = temp;
    }
    vetor[12] = '\0';
    printf("A string ao contrario ficou: %s", vetor);
    return 0;
}
