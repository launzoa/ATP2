#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 13: Escreva uma fun ̧c ̃ao recursiva para encontrar o n ́umero de ocorrˆencias de

um elemento em um array.*/
int ocorrencias(char vetor[], char caracter, int indice, int qntd){
    if(indice < 0){
        return qntd;
    }
    else{
        if(vetor[indice] == caracter){
            return ocorrencias(vetor, caracter, indice-1, qntd+1);
        }
        else{
            return ocorrencias(vetor, caracter, indice-1, qntd);
        }
    }
}

int main() {
    
    char palavra[100], c;

    printf("Entre com a palavra: ");
    scanf("%s", palavra);
    printf("Entre com o elemento que voce gostaria de checar a ocorrencia: ");
    fflush(stdin);
    scanf("%c", &c);
    
    printf("Quantidade de ocorrencia(s): %d", ocorrencias(palavra,c, strlen(palavra)-1, 0));
    return 0;
}
