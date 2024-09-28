#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 27: Escreva um programa em C que leia uma string e verifique
se ela  ́e um pal ́ındromo.*/

int main() {
    
    char palavra[100], p1[50], p2[50];
    int i, j;

    printf("Entre com a palavra: ");
    scanf("%s", palavra);
    

    for(i = 0, j = strlen(palavra)-1; i < strlen(palavra)/2; i++, j--){
        p1[i] = palavra[i];
        p2[i] = palavra[j];
    }
    p1[i] = '\0';
    p2[i] = '\0';
    
    if(strcmp(p1,p2) == 0){
        printf("sao palindromo!");
    }
    else{
        printf("nao sao palindromo!");
    }
    
    return 0;
}
