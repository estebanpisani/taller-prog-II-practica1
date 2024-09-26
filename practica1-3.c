#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
    srand(time(NULL));

    int rows = ROWS;
    int columns = COLUMNS;

    // Memoria STACK
    /*
    int matrizA[rows][columns];
    int matrizB[rows][columns];

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
*/

    // Memoria HEAP

    int **matrizA = (int **)malloc(sizeof(int *) * rows);
    matrizA[0] = (int *)malloc(sizeof(int) * columns * rows);

    int **matrizB = (int **)malloc(sizeof(int *) * rows);
    matrizB[0] = (int *)malloc(sizeof(int) * columns * rows);

    for (int i = 1; i < rows; i++)
    {
        matrizA[i] = matrizA[0] + columns * i;
        matrizB[i] = matrizB[0] + columns * i;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            *(matrizA[i] + j) = (rand() % 11);
            *(matrizB[i] + j) = (rand() % 11);
        }
    }

    printf("\nMatriz A: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", *(matrizA[i] + j));
            if (j == columns - 1)
            {
                printf("\n");
            }
        }
    }

    printf("\nMatriz B: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", *(matrizB[i] + j));
            if (j == columns - 1)
            {
                printf("\n");
            }
        }
    }

    printf("\nSuma matrices A y B: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", *(matrizA[i] + j) + *(matrizB[i] + j));
        }
        printf("\n");
    }

    return 0;
}