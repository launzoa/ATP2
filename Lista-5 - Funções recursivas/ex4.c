#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 4: Desenvolva uma fun ̧c ̃ao recursiva para calcular a sequˆencia de Fibonacci

at ́e o en ́esimo termo.*/

int fibonacci(int fi, int bo, int n, int i){
    i++;
    if(i == n){
        if((n % 2) == 0){
            return fi;
        }
        else{
            return bo;
        }
    }
    else{
        if((i % 2) == 0){
            bo += fi;
        }
        else{
            fi += bo;
        }
        return fibonacci(fi, bo, n, i);
    }
}

int main() {
    
    int n;

    printf("Entre com o numero da sequencia do fibonacci: ");
    scanf("%d", &n);

    printf("%d", fibonacci(0,1,n,0));
    return 0;
}
