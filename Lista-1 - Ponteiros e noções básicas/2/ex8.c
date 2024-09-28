#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Exerc ́ıcio 8: Escreva um programa em C que leia 8 caracteres e verifique
quantos s ̃ao vogais.*/

int main() {
    
    char carac;
    int cont, vog=0;

    for(cont=0; cont < 8; cont++){
        printf("Entre com o valor do caracter '%d': ", cont+1);
        scanf("%c", &carac);
        fflush(stdin);
        if(carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u'){
            vog++;
        }
    }  

    printf("A quantidade de vogais e: %d", vog);
    
    return 0;
}
