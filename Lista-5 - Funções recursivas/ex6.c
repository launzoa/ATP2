#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 6: Implemente uma fun ̧c ̃ao recursiva para imprimir os elementos de um array

na ordem inversa.*/

int inverso(int vetor[], int i){

    if(i == 9){
        return vetor[i];
    }

    int inv = inverso(vetor, i+1);
    
    printf("%d ", inv);
    return vetor[i];
}

int main() {
    int vetor[10],i;

    printf("Preencha o vetor com 10 elementos ->\n");

    for(i = 0; i < 10; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    inverso(vetor, -1);
    return 0;
}
