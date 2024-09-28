#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 16: Escreva um programa em C que declare um array de 10
caracteres e use um ponteiro para contar quantos desses caracteres s ̃ao letras
mai ́usculas.*/

int main() {
    
    char array[10], min = 0;
    
    printf("Entre com o array: ");
    scanf("%s", array);

    char *ptr = array;

    for(int i = 0; i < 10; i++){
        if(*(ptr + i) >= 'a' && *(ptr + i) <= 'z'){
            min++;
        }
    }
    
    printf("Quantidade de letras minusculas: %d", min);
    return 0;
}
