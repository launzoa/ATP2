#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 14: Implemente uma fun ̧c ̃ao recursiva para verificar se uma palavra  ́e um

pal ́ındromo.*/

void palindromo(char p[], int tamanho1, int tamanho2, int i, int j){
   if(p[i] == p[j]){
        if(i == tamanho1 && tamanho2 == j){
            printf("eh palindromo!");
        }
        else{
            palindromo(p, tamanho1, tamanho2, i+1, j-1);
        }
   }
   else{
        printf("nao eh palindromo!");
   }
}

int main() {
    
    char palavra[100];
    int tam1, tam2;

    printf("Entre com a palavra: ");
    scanf("%s", palavra);

    if((strlen(palavra) % 2) == 0){
        tam1 = (strlen(palavra)/2)-1;
        tam2 = strlen(palavra)/2;
    }
    else{
        tam1 = tam2 = (strlen(palavra)-1)/2;
    }
    palindromo(palavra, tam1, tam2, 0,  strlen(palavra)-1);

    return 0;
}
