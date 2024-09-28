#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 34: Escreva um programa em C que receba uma string como
argumento na linha de comando e conte o n ́umero de caracteres dessa string.*/

int main(int argc, char *argv[])
{      
    //COMPILADOR -> gcc ex34.c -o ex34.exe
    int i, j, soma = 0;

    for(i = 1; i < argc; i++){
        for (j = 0; argv[i][j] != '\0'; j++) {
            soma++;
        }
    }
    printf("O numero de caracteres eh: %d", soma);
    
    return 0;
}
