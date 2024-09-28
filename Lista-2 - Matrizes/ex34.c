#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 34
Enunciado: Escreva um programa em C que preencha uma matriz 3x3 com
n umeros primos e depois substitua os n ́umeros primos por 1.*/
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
    int matriz[3][3], i, j, pri = 1, k;

    printf("Entre com os elementos da matriz 3x3\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = primo(pri);
            pri = matriz[i][j] + 1;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for(k = 2; k < sqrt(matriz[i][j]); k++){
                if((matriz[i][j] % k) == 0){
                    printf("Nao eh primo");
                    exit(0);
                }
            }
            matriz[i][j] = 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
