#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 2: Declare um array de 5 caracteres e inicialize-o com as letras
’a’, ’b’, ’c’, ’d’ e ’e’. Imprima os elementos do array.*/
int main(){
    
    char vetor[10];
    vetor[0] = 'a';
    for(int i=1; i < 5; i++){
        vetor[i] = vetor[i-1]+1;
    }

    for(int i=0; i < 5; i++){
        printf("%c\n", vetor[i]);
    }
    
    
    return 0;
}