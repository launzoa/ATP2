#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 12: Desenvolva uma fun ̧c ̃ao recursiva para imprimir todos os n ́umeros primos

at ́e N.*/

int primos_de_primos(int n, int raiz){
    
    if(raiz > sqrt(n)){
        return 1;
    }
    else{
        if((n % raiz) == 0){
            return 0;
        }
        else{
             return primos_de_primos(n, raiz+1);   
        }
    }
}

void primos(int n){

    if(n == 1){
        printf("%d ", n);
    }
    else{
        primos(n-1);
        
        if(primos_de_primos(n, 2) == 1){
            printf("%d ", n);
        }
    }
}

int main() {
    
    int numero;

    printf("Entre com o numero para verificar todos os primos ate ele: ");
    scanf("%d", &numero);

    primos(numero);
    return 0;
}
