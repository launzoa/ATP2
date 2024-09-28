#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 25: Escreva um programa em C que leia uma string e conte o n ́umero
de caracteres, palavras e linhas na string.*/

int main() {
    
    int i, palavras = 0, e = 1, caracteres = 0;
    char frase[100];

    printf("Entre com a frase a ser lida: ");
    fgets(frase, 100, stdin);
    
    for(i = 0; i < strlen(frase); i++){
        if(frase[i] != ' ' && frase[i] != '\n'){
            if(e == 1){
                palavras++;
                e = 0;
            }        
            caracteres++;
        }
        else{
            e = 1;
        }
    }

    printf("Quantidade de palavras: %d\n", palavras);
    printf("Quantidade de caracteres: %d", caracteres);
    return 0;
}
