#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 9: Escreva uma fun ̧c ̃ao recursiva para inverter uma string.*/
char inverte_string(char p[], int i){
    
    printf("%c", p[i]);
    
    if(i == 0){
        return p[0];
    }

    return inverte_string(p, i-1);
}

int main() {
    
    char palavra[100];

    printf("Entre com a palavra:\n");
    scanf("%s", palavra);

    inverte_string(palavra, strlen(palavra)-1);

    return 0;
}
