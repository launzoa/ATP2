#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 23: Escreva um programa em C que determine se um array de
10 inteiros  ́e sim ́etrico (um pal ́ındromo).*/

int main()
{      
    int vetor[10], i, j;

    for(i = 0; i < 10; i++){
        printf("Entre com o valor do elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int *ptr = &vetor[0];

    for(i = 0, j = 9; i < 10; i++, j--){
        if(*(ptr + i) != *(ptr + j)){
            printf("Nao eh simetrico");
            exit(0);
        }
    }
    printf("Eh simetrico");
    
    return 0;
}
