#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Exerc ́ıcio 25
Enunciado: Escreva um programa em C que implemente o jogo da vida (Game
of Life) de Conway em uma matriz 5x5.*/

/*
1- Toda célula morta com exatamente três vizinhos vivos torna-se viva (nascimento).
2 - Toda célula viva com menos de dois vizinhos vivos morre por isolamento.
3 - Toda célula viva com mais de três vizinhos vivos morre por superpopulação.
4 - Toda célula viva com dois ou três vizinhos vivos permanece viva.*/
int main()
{
    int i , j, k, n, vizinhos;

    int matriz[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    };

    int matriz_ex[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    };

    printf("Entre com o intervalo de vezes para o jogo da vida: ");
    scanf("%d", &n);
    system("cls");

    for(k = 0; k < n; k++){
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j ++){

                vizinhos = 0;

                if(i == 0)
                {
                    //0x0
                    if(j == 0)
                    {

                        if(matriz[1][0] == 1){
                            vizinhos++;
                        }

                        if(matriz[1][1] == 1){
                            vizinhos++;
                        }

                        if(matriz[0][1] == 1){
                            vizinhos++;
                        }

                    }

                    else
                    {
                        //0X4
                        if(j == 4)
                        {
                            if(matriz[0][3] == 1){
                                vizinhos++;
                            }

                            if(matriz[1][3] == 1){
                                vizinhos++;
                            }

                            if(matriz[1][4] == 1){
                                vizinhos++;
                            }
                        }

                        else
                        {
                            if(matriz[i][j-1] == 1){
                                vizinhos++;
                            }

                            if(matriz[i][j+1] == 1){
                                vizinhos++;
                            }

                            if(matriz[i+1][j] == 1){
                                vizinhos++;
                            }

                            if(matriz[i+1][j+1] == 1){
                                vizinhos++;
                            }

                            if(matriz[i+1][j-1] == 1){
                                vizinhos++;
                            }

                        }

                    }

                }

                else{
                    //LINHA 4
                    if(i == 4)
                    {
                        //4X0
                        if(j == 0)
                        {
                            if(matriz[3][0] == 1){
                                vizinhos++;
                            }

                            if(matriz[4][1] == 1){
                                vizinhos++;
                            }

                            if(matriz[3][1] == 1){
                                vizinhos++;
                            }

                        }

                        else
                        {
                            //4X4
                            if(j == 4)
                            {
                                if(matriz[4][3] == 1){
                                    vizinhos++;
                                }

                                if(matriz[3][4] == 1){
                                    vizinhos++;
                                }

                                if(matriz[3][3] == 1){
                                    vizinhos++;
                                }

                            }

                            else
                            {
                                if(matriz[i][j-1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i][j+1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j+1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j-1] == 1){
                                    vizinhos++;
                                }

                            }

                        }

                    }

                    else
                    {   //COLUNA 0
                        if(j == 0)
                        {
                            if(matriz[i][j+1] == 1){
                                vizinhos++;
                            }

                            if(matriz[i+1][j] == 1){
                                vizinhos++;
                            }

                            if(matriz[i-1][j] == 1){
                                vizinhos++;
                            }

                            if(matriz[i+1][j+1] == 1){
                                vizinhos++;
                            }

                            if(matriz[i-1][j+1] == 1){
                                vizinhos++;
                            }

                        }

                        else
                        {
                            //COLUNA 4
                            if(j == 4)
                            {
                                if(matriz[i][j-1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i+1][j] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i+1][j-1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j-1] == 1){
                                    vizinhos++;
                                }

                            }

                            else
                            {
                                if(matriz[i][j+1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i+1][j] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i][j-1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i+1][j+1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i+1][j-1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j+1] == 1){
                                    vizinhos++;
                                }

                                if(matriz[i-1][j-1] == 1){
                                    vizinhos++;
                                }

                            }

                        }

                    }

                }

                if(matriz[i][j] == 1){
                    if(vizinhos != 2 && vizinhos != 3){
                        matriz_ex[i][j] = 0;
                    }
                }
                else{
                    if(vizinhos == 3){
                        matriz_ex[i][j] = 1;
                    }
                }

                printf("%d ", matriz_ex[i][j]);
            }
            printf("\n");
        }
        sleep(2);
        system("cls");

        for(int m = 0; m < 5; m++){
            for(int b = 0; b < 5; b++){
                matriz[m][b] = matriz_ex[m][b];
                matriz_ex[m][b] = matriz[m][b];
            }
        }
    }
    
    return 0;
}
