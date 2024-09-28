#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 11: Crie uma fun ̧c ̃ao recursiva para encontrar o maior divisor comum de um

array de n ́umeros.*/

int divisor(int vetor[], int valor, int i, int indice){    
    if((vetor[i] % valor) != 0){
        return 1;
    }   
    else{
        if(i == indice-1){
            return valor;
        }
        else{
            return divisor(vetor, valor, i+1, indice);
        }
    }
}


int mdc(int vetor[], int indice, int valor){

    if(valor == 1){
        return 1;
    }
    else{
        int maior = mdc(vetor, indice, valor-1);

        if(divisor(vetor, valor, 0, indice) == 1){
            return maior;
        }
        else{
            return valor;
        }
    }
   
}

int main() {
    
    int vetor[10], i, tam;

    printf("Entre com o preenchimento do vetor ->\n");

    for(i = 0; i < 10; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    tam = vetor[0];
    printf("MDC: %d", mdc(vetor,10, tam));
    return 0;
}
