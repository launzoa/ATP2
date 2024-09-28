#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 8: Desenvolva uma fun ̧c ̃ao recursiva para calcular o MDC (M ́aximo Divisor

Comum) de dois n ́umeros.*/

int mdc(int n, int m, int i){
    if(i == 1){
        return 1;
    }
    
    int maior = mdc(n, m, i-1);

    if(n % i == 0 && m % i == 0){
        maior = i;
    }

    return maior;

}

int main() {

    int n, m;

    printf("Entre com o valor do primeiro numero: ");
    scanf("%d", &n);

    printf("Entre com o valor do segundo numero: ");
    scanf("%d", &m);

    printf("O maior mdc eh: %d", mdc(n, m, n));
    
    return 0;
}
