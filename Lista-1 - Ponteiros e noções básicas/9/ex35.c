#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 35: Escreva um programa em C que receba um n ́umero inteiro
como argumento na linha de comando e verifique se ele  ́e par ou  ́ımpar.*/

int main(int argc, char *argv[])
{      
    //COMPILADOR -> gcc ex35.c -o ex35.exe
    int i, j, n;

    for(i = 1; i < argc; i++){
        n = atoi(argv[i]);
        if((n % 2) == 0){
            printf("O numero %d eh par\n", n);
        }
        else{
            printf("O numero %d eh impar\n", n);
        }
    }
    
    return 0;
}
