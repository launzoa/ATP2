#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 20: Desenvolva uma fun ̧c ̃ao recursiva para encontrar a raiz quadrada de um

n ́umero inteiro utilizando o m ́etodo de busca bin ́aria.*/

int raiz_recursiva(int x, int comeco, int fim)
{
    if (comeco > fim) {
        return fim;
    }

    int meio = (comeco + fim) / 2;
    int quadrado = meio * meio;

    if (quadrado == x) {
        return meio;
    } else if (quadrado < x) {
        return raiz_recursiva(x, meio + 1, fim);
    } else {
        return raiz_recursiva(x, comeco, meio - 1);
    }
}

int raiz(int x)
{
    if (x < 2) {
        return x;
    }

    return raiz_recursiva(x, 1, x / 2);
}

int main()
{      
    int n;

    printf("Entre com o numero ->\n");
    printf("n: ");
    scanf("%d", &n);

    printf("A raiz quadrada eh: %d", raiz(n));
    return 0;
}
