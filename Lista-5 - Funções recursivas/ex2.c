#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 2: Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos primeiros N

n ́umeros naturais.*/

int soma(int n){

    if(n == 1){
        return 1;
    }
    else{
        return n + soma(n-1);
    }
}

int main() {
    
    int numero;

    printf("Entre como numero: ");
    scanf("%d", &numero);
    
    printf("%d", soma(numero));
    return 0;
}
