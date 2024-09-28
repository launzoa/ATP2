#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 18: Implemente uma fun ̧c ̃ao recursiva para resolver o problema da Torre de

Hanoi.*/

void hanoi(int n, char origem, char temp, char destino){

    if(n == 1){
        printf("Disco 1 da haste %c para a haste %c\n", origem, destino);
    }
    else{
        hanoi(n-1, origem, destino, temp);
        printf("Disco %d da haste %c para a haste %c\n", n, origem, destino);
        hanoi(n-1, temp, origem, destino);
    }
}


int main()
{      

    hanoi(3, 'O', 'T', 'D');
    system("PAUSE");

    return 0;
}
