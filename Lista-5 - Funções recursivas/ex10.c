#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 10: Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos d ́ıgitos de um

n ́umero inteiro.*/

int soma(char n[], int tam){
    
    if(tam < 0){
        return 0;
    }
    else{
        char num[2];
        num[0] = n[tam];
        num[1] = '\0';
        return atoi(num) + soma(n, tam-1);
    }

}

int main() {
    
    char n[100];

    printf("Entre com o numero: ");
    scanf("%s", n);

    printf("A soma eh: %d", soma(n, strlen(n)-1));

    return 0;
}
