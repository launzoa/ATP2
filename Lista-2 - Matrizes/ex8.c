#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 8
Enunciado: Escreva um programa em C que realize a rota ̧c ̃ao de uma matriz
quadrada 4x4 no sentido hor ́ario.*/
int main()
{
    int i, j, k, matriz[4][4], matriz_rotacionada[4][4];

    printf("Entre com os elementos da matriz 4x4:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j = 0; j < 4; j++){
        for(k = 0; k < 4; k++){
            if(j == 0){
                matriz_rotacionada[j][k] = matriz[3-k][j];
            }

            if(j == 1){
                if(k == 0 || k == 3){
                    matriz_rotacionada[j][k] = matriz[3-k][j];
                }
                else{
                    if(k == 1){
                        matriz_rotacionada[j][k] = matriz[k+1][j];
                        
                    }
                    else{
                        matriz_rotacionada[j][k] = matriz[j][k-1];
                    }
                }
            }

            if(j == 2){
                if(k == 0 || k == 3){
                    matriz_rotacionada[j][k] = matriz[3-k][j];
                }
                else{
                    if(k == 1){
                        matriz_rotacionada[j][k] = matriz[j][k+1];
                        
                    }
                    else{
                        matriz_rotacionada[j][k] = matriz[j-1][k];
                    }
                }
            }
            
            if(j == 3){
                matriz_rotacionada[j][k] = matriz[3-k][j];
            }
        }
    }       

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz_rotacionada[i][j]);
        }
        printf("\n");
    }
    return 0;
}
