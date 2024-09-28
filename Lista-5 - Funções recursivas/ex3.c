#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 3: Crie uma fun ̧c ̃ao recursiva para encontrar o m ́aximo elemento em um array.*/
/*
int max(int vetor[10], int *maior, int i){
    i++;
    if(i == 10){
     
        return *maior;
    }
    else{
        if(vetor[i] > *maior){
            maior = &(vetor[i]);
        }

        return max(vetor[10], maior, i);
    }
}

int main() {
    int i, array[10], *maior;

    printf("Preencha o vetor de 10 valores->\n");

    for(i = 0; i < 10; i++){
        printf("Elemento %d:", i+1);
        scanf("%d", &array[i]);
    }

    maior = &(array[0]);

    printf("A maior eh %d", max(array[10], maior, 0));
    return 0;
}
*/

int max(int vetor[], int i){
    
    if(i == 0){
        return vetor[0];
    }
    else{
        int retorno = max(vetor, i-1);

        if(vetor[i] > retorno){
            return vetor[i];
        }
        else{
            return retorno;
        }
    }
}

int main(){
    int array[10], cont;

    printf("Preencha o array: de 10 elementos ->\n");

    for(cont = 0; cont < 10; cont++){
        printf("Entre com o valor do elemento %d: ", cont+1);
        scanf("%d", &array[cont]);
    }

    printf("%d", max(array, 9));

    return 0;
}