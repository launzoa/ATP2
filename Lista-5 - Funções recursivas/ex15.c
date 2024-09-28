#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 15: Crie uma fun ̧c ̃ao recursiva para gerar todos os subconjuntos de um con-
junto dado.*/

void sub(int conjunto[], int subconjunto[], int tam, int pos, int n){

    if(pos == n){

        printf("{ ");

        for (int i = 0; i < tam; i++) {
            printf("% d ", subconjunto[i]); 
        }

        printf("}, ");

        return;
    }
    subconjunto[tam] = conjunto[pos];

    sub(conjunto, subconjunto, tam+1, pos+1, n);
    sub(conjunto, subconjunto, tam, pos+1, n);
    
}

int main()
{
    int vetor[3] = {1,2,3}, subconjunto[3];

    sub(vetor, subconjunto, 0, 0, 3);

    return 0;
}
