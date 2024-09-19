#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int matrizA[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizA[i][j] = rand() % 10;
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

    printf("\nMatriz A Traspuesta: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizA[j][i]);
        }
        printf("\n");
    }

    return 0;
}