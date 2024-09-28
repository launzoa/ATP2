#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 7: Crie uma fun ̧c ̃ao recursiva para calcular a potˆencia de um n ́umero.*/

int potencia(int pot, int i){
    if(i == 1){
        return pot;
    }
    else{
        return pot * potencia(pot, i-1);
    }
}

int main() {
    int n,p;

    printf("Entre com o numero: ");
    scanf("%d", &n);

    printf("Entre com a potencia: ");
    scanf("%d", &p);

    printf("A potencia do numero eh: %d", potencia(n,p));
    return 0;
}
