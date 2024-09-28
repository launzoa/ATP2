#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 1: Escreva uma fun ̧c ̃ao recursiva para calcular o fatorial de um n ́umero.*/

int fatorial(int n){
    if(n == 2){
        return 2;
    }
    else{
        return n*fatorial(n-1);
    }
}

int main() {
    
    int numero;

    printf("Entre com o numero: ");
    scanf("%d", &numero);

    printf("%d", fatorial(numero));
    return 0;
}
