#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 12
Enunciado: Escreva um programa em C que calcule a m ́edia dos elementos de
uma matriz 2x4.*/
int main()
{
    int matriz[2][4], i, j;
    double media = 0;

    printf("Entre com os elementos da matriz 2x4 ->\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            media += matriz[i][j];
        }
    }

    media /= (i*j);

    printf("A media dos elementos eh: %lf", media);
    return 0;
}
