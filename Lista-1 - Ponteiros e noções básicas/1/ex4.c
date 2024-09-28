#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 4: Declare um array de 8 n ́umeros de ponto flutuante e inicialize-
o com os valores dos primeiros 8 n ́umeros da sequˆencia de Fibonacci. Imprima
todos os elementos do array.*/
int main(){
    
    float fibonacci[8];
    int fi=0,bo=1,i;
    fibonacci[0] = 1;

    for(i=1; i<8; i++){
        fibonacci[i] = fi + bo;
        fi = bo;
        bo = fibonacci[i];
    }
    
    printf("Os 8 primeiro numeros do fibonacci sao: ");

    for(i = 0; i < 8; i++){
        printf("primo '%d': %f\n", i+1,fibonacci[i]);
    }
    
    return 0;
}