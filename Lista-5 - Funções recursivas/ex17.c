#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 17: Escreva uma fun ̧c ̃ao recursiva para calcular o n ́umero de caminhos poss ́ıveis

em uma grade NxN.*/

int grade(int n, int cima, int direita, int caminhos){

    if(cima == n || direita == n){
        return 1;
    }
    else{
        caminhos = 0;
        caminhos += grade(n, cima + 1, direita, caminhos);
        caminhos += grade(n, cima, direita + 1, caminhos);
    }
    return caminhos;
}


int main()
{      
    int n;

    printf("Entre com o numero de NxN para a grade ->\n");
    printf("N: ");
    scanf("%d", &n);

    printf("O numero de caminhos possiveis para %dx%d eh: %d", n, n, grade(n, 0, 0, 0));
    return 0;
}
