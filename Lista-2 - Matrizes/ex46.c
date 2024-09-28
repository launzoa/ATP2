#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 46
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
n ́umeros aleat ́orios e depois encontre o segundo maior elemento.*/

int main() {
    int matriz[5][5];
    int i, j;
    int maior, segundo_maior;
    int ini = 0;

    srand(time(NULL));

   
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    maior = segundo_maior = -1; 

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                segundo_maior = maior;
                maior = matriz[i][j];
                ini = 1;
            } else if (matriz[i][j] > segundo_maior && matriz[i][j] < maior) {
                segundo_maior = matriz[i][j];
                ini = 1;
            }
        }
    }

    
    if (ini) {
        printf("O segundo maior elemento eh: %d\n", segundo_maior);
    } else {
        printf("Não foi possível encontrar um segundo maior elemento.\n");
    }

    return 0;
}
