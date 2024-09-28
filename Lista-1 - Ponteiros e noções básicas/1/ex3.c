#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/*Exerc ́ıcio 3: Declare um array de 7 inteiros e inicialize-o com os valores dos
primeiros 7 n ́umeros primos. Escreva um programa em C que imprima todos os
elementos do array.*/
int main(){
    
    int vetor[7],cont=0,primo,num=2,i;
    
    while(cont<7){

        primo = 1;

        for(i=2; i<=sqrt(num); i++){
            if((num % i) == 0){
                primo = 0;
            }
        }
        if(primo == 1){
            vetor[cont] = num;
            cont++;
        }
        num++;
    }
    
    printf("Os 7 primeiro numeros primos sao: ");

    for(i = 0; i < 7; i++){
        printf("primo '%d': %d\n", i+1,vetor[i]);
    }
    
    return 0;
}