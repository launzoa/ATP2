#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 28: Escreva um programa em C que leia uma string e substitua
todas as ocorrˆencias de um caractere por outro.*/

int main() {
    
    char palavra[100], car1, car2;
    int i;

    printf("Entre com a palavra: ");
    scanf("%s", palavra);
    fflush(stdin);

    printf("Entre com o caractere a ser substituido: ");
    scanf("%c", &car1); 
    fflush(stdin);

    printf("Entre com o caractere para substituir: ");
    scanf("%c", &car2);
    fflush(stdin);
    
    printf("Palavra antiga: %s\n", palavra);

    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] == car1){
            palavra[i] = car2;
        }
    }

    printf("Nova palavra: %s", palavra);
    return 0;
}
