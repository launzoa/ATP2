#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*Exerc ́ıcio 51
Enunciado: Escreva um programa em C que preencha uma matriz 3x3 com
n ́umeros primos e depois calcule o produto dos elementos da diagonal secund ́aria.*/

int main()
{
    int matriz[3][3];
    int i, j, num, count = 0;
    int produto = 1;
    bool ip;

    num = 2;
    while (count < 9) {

        if (num <= 1) {
            ip = false;
        } 
        else if (num <= 3) {
            ip = true;
        } 
        else if (num % 2 == 0 || num % 3 == 0) {
            ip = false;
        } 
        else {
            ip = true;
            for (i = 5; i * i <= num; i += 6) {
                if (num % i == 0 || num % (i + 2) == 0) {
                    ip = false;
                    break;
                }
            }
        }
        
        if (ip) {
            matriz[count / 3][count % 3] = num;
            count++;
        }
        num++;
    }

    printf("Matriz 3x3 com números primos:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        produto *= matriz[i][2 - i];
    }

    printf("O produto dos elementos da diagonal secundaria é: %d\n", produto);

    return 0;
}
