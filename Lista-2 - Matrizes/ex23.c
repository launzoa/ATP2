#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 23
Enunciado: Escreva um programa em C que calcule o determinante de uma
matriz quadrada 3x3.*/
int main()
{
    int matriz[3][5], i , j, det = 0, pos = 1, neg = 1, det_pos = 0, det_neg = 0;

    printf("Entre com a matriz 3x3 ->\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            matriz[i][j+3] = matriz[i][j];
        }
    }
    int n = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++, n++){
            pos *= matriz[j][n];
        }
        n = i + 1;
        det_pos += pos;
        pos = 1;
    }
    n = 0;

    for(i = 0; i < 3; i++){
        for(j = 2; j >= 0; j--, n++){
            neg *= matriz[j][n];
            printf("%dx", matriz[j][n]);
        }
        printf("\n");
        n = i + 1;
        det_neg += neg;
        neg = 1;
    }
    
    det  = det_pos - det_neg;

    printf("O determinannte da matriz eh: %d", det);


    return 0;
}
