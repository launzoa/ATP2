#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 19: Crie uma fun ̧c ̃ao recursiva para calcular o coeficiente binomial C(n, k).*/

int binomial(int n, int k){

    if(k == 0 || n == k){
        return 1;
    }
    else{
        return binomial(n-1, k-1) + binomial(n - 1, k);
    }
}


int main()
{      
    int n, k;

    printf("Entre com a combinacao binomial ->\n");

    printf("n: ");
    scanf("%d", &n);

    printf("k: ");
    scanf("%d", &k);

    printf("O total de combinacoes sao: %d", binomial(n, k));
    return 0;
}
