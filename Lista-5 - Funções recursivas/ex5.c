#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Exerc ́ıcio 5: Escreva uma fun ̧c ̃ao recursiva para verificar se um n ́umero  ́e primo.*/

int verifica_primo(int n, int i){
    if(((n % i) != 0) && i <= sqrt(n)){
        return verifica_primo(n, i+1);
    }
    else{
        if(i > sqrt(n)){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main() {
    int n, primo;

    printf("Entre com o valor: ");
    scanf("%d", &n);
    primo = verifica_primo(n, 2);
    if(primo == 1){
        printf("Eh primo!");
    }
    else{
        printf("Nao eh primo!");
    }
    return 0;
}
