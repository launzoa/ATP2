#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 36: Escreva um programa em C que receba 5 n ́umeros inteiros
como argumentos na linha de comando e imprima o maior deles.*/

int main(int argc, char *argv[])
{      
    //COMPILADOR -> gcc ex36.c -o ex36.exe
    int i, j, n, maior;
    
    maior = atoi(argv[1]);
    for(i = 2; i < argc; i++){
        n = atoi(argv[i]);
        if(n > maior){
            maior = n;
        }
    }

    printf("O numero %d eh o maior\n", maior);

    return 0;
}
