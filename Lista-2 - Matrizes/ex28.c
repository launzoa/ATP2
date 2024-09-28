#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 28
Enunciado: Escreva um programa em C que implemente a busca bin ́aria em
uma matriz ordenada 4x4.*/

int main()
{
    int matriz[4][4], i, j, n, busca=0, total, m1, m2;

    printf("Entre com os elementos da matriz 4x4 ordenada\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entre com o elemento da matriz '%dx%d': ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elemento a procurar: ");
    scanf("%d", &n);

    total = (4*4)/2;
    m1 = (total/4)-1;
    m2 = total-((m1*4)+1);

    for(i = 0; i < 5; i++){  
        busca++;
        if(n == matriz[m1][m2]){
            
            printf("Total de buscas para achar o elemento: %d", busca);
            exit(0);
        }
        else{
            if(n > matriz[i][j]){
                total += total/2;
                m1 = (total/4)-1;
                m2 = total-((m1*4)+1);
            }
            else{
                total = total/2;
                m1 = (total/4)-1;
                m2 = total-((m1*4)+1);

            }
        }
    }
    
    return 0;
}
