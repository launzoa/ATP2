#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 26: Escreva um programa em C que leia duas strings e concatene-
as. Imprima a string resultante.*/

int main() {
    
    char p1[100], p2[100], concatenar[200];
    int i, j;

    printf("Entre com a primeira frase: ");
    fgets(p1, 100, stdin);
    printf("Entre com a segunda frase: ");
    fgets(p2, 100, stdin);
    
    for(i = 0; i < strlen(p1)-1; i++){
        concatenar[i] = p1[i];
    }

    for(j = 0; j < strlen(p2); j++, i++){
        concatenar[i] = p2[j];
    }
    concatenar[i] = '\0';

    printf("As duas frases concatenadas ficaram: %s", concatenar);
    return 0;
}
