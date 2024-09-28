#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 32
Enunciado: Escreva um programa em C que verifique se uma matriz 2x2  ́e
uma matriz de reflex ̃ao.*/

int main()
{
    int matriz[2][2], matriz_t[2][2], matriz_i[2][2], matriz_q[2][2], matriz_i_t[2][2],i, j, valor = 0, k = 0, pos = 1, neg = 1, det;

    printf("Entre com os elementos da matriz 2x2\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++){
                valor += matriz[j][k] * matriz[k][j];
            }
            matriz_q[i][j] = valor;
            valor = 0;

            if(i == j && matriz_q[i][j] != 1){
                printf("Matriz quadrada nao eh igual a identidade, logo, nao eh reflexao!");
                exit(0);
            }
            else{
                if(matriz_q[i][j] != 0){
                    printf("Matriz quadrada nao eh igual a identidade, logo, nao eh reflexao!");
                    exit(0);
                }
            }
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matriz_t[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if(i == j){
                pos *= matriz[i][j];
            }
            else{
                neg *= matriz[i][j];
            }
        }
    }

    det = pos - neg;

    if(det != 0){
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                if((j % 2) == 0){
                    matriz_i[i][j] = matriz[i][1-j];
                }
                else{
                    matriz_i[i][j] = matriz[i][1-j]*-1;
                }
            }
        }

        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                matriz_i_t[i][j] = matriz_i[j][i];
            }
        }

        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                matriz_i_t[i][j] *= 1/det;
            }
        }

        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                if(matriz_i_t[i][j] != matriz_t[i][j]){
                    printf("Nao eh reflexao!");
                    exit(0);
                }
            }
        }

        printf("Eh reflexao!");
    }
    else{
        printf("Determinante = 0 entao nao possui inversa e nao eh reflexao!");
        exit(0);
    }
    return 0;
}
