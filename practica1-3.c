#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int matrizA[5][5];
    int matrizB[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizA[i][j] = rand() % 11;
            matrizB[i][j] = rand() % 11;
        }
    }

    printf("\nMatriz A: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma matrices A y B: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}