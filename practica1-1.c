#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

int main()
{

	int rows = ROWS;
	int columns = COLUMNS;

	// Versión con arreglos (Memoria STACK)
	/*
	int matriz[rows][columns];

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){

			if(i==j){
				matriz[i][j]= 1;
			} else {
				matriz[i][j]= 0;
			}
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	*/

	/////////Versión en memoria dinámica HEAP////////////////////

	// Reservo espacio para cada FILA
	int **matrizHeap = (int **)malloc(rows * sizeof(int *));
	// Inicializo el primer espacio con la cantidad total de memoria que necesito
	matrizHeap[0] = (int *)malloc(rows * columns * sizeof(int));
	// Inicializo para cada fila una porción del espacio reservado en el primero.
	// De esta manera quedan reservados espacios contiguos en la memoria
	for (int i = 1; i < rows; i++)
	{
		matrizHeap[i] = matrizHeap[0] + columns * i; // Nomenclatura de arreglos
		printf("matrizHeap[%d] = %p\n", i, matrizHeap[i]);
	}
	// Inicializo cada columna
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == j)
			{
				*(matrizHeap[i] + j) = 1; // Nomenclatura de arreglos
			}
			else
			{
				*((matrizHeap[i]) + j) = 0;
			}
			printf("%d ", *((matrizHeap[i]) + j));
			if(j == columns-1){
				printf("\n");
			}
		}
	}
	// Liberar memoria HEAP (una por cada malloc)

	free(matrizHeap[0]);
	free(matrizHeap);

	return 0;
}
