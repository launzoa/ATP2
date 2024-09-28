#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 16
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
n ́umeros primos.*/
int primo(int n){

    int pri=0;

    for(int cont = 2; cont <= sqrt(n); cont++){
        if((n % cont) == 0){
            return primo(n+1);
        }
        else{
            pri = 1;
        }
    }

    if(pri == 1 || n != 1 || n != 2 || n != 3){
        return n;
    }
}

int main()
{
    int matriz[5][5], i, j, pri=1;

    printf("Matriz 5x5 de numeros primos->\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = primo(pri);
            pri = matriz[i][j] + 1;
        }
        
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
