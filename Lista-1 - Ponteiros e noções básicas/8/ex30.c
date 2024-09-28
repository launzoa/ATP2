#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 30: Escreva um programa em C que use um array de ponteiros
para armazenar 3 strings, ordene as strings em ordem alfab ́etica e as imprima..*/

int main()
{      
    int i, j;
    char *ptr[3], temp[100];

    for(i = 0; i < 3; i++){
        ptr[i] = malloc(sizeof(char) * 100);
    }
    
    for(i = 0; i < 3; i++){
        printf("Elemento %d: ", i+1);
        scanf("%s", ptr[i]);
    }

    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 3; j++){
            if(strcmp(ptr[i], ptr[j]) > 0){
                strcpy(temp, ptr[i]);
                strcpy(ptr[i], ptr[j]);
                strcpy(ptr[j], temp);
            }   
        }
    }

    for(i = 0; i < 3; i++){
        printf("Elemento %d: %s\n", i+1, ptr[i]);
    }

    for(i = 0; i < 3; i++){
        free(ptr[i]);
    }

    return 0;
}
