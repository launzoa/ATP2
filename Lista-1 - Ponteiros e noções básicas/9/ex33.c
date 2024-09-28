#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 33: Escreva um programa em C que receba 3 n ́umeros inteiros como
argumentos na linha de comando e imprima a soma deles.*/

int main(int argc, char *argv[])
{      
    //COMPILADOR -> gcc ex33.c -o ex33.exe
    
    int soma = 0, i;

    for(i = 1; i < argc; i++){
        soma += atoi(argv[i]);
    }

    printf("A soma vale: %d", soma);
    
    return 0;
}
