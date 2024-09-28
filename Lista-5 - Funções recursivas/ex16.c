#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 16: Desenvolva uma fun ̧c ̃ao recursiva para calcular a sequˆencia de Ackermann.*/

int ackermann(int m, int n){

    if(m == 0){
        return n + 1;
    }
    else{
        if(m > 0 && n == 0){
            return ackermann(m - 1, 1);
        }
        else{
            return ackermann(m - 1, ackermann(m, n - 1));
        }
    }
}


int main()
{   
    int m, n;

    printf("Entre com os valores para m e n ->\n");

    printf("M: ");
    scanf("%d", &m);

    printf("M: ");
    scanf("%d", &n);

    printf("%d", ackermann(m,n));
    return 0;
}
