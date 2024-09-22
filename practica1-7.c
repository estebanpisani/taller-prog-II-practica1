#include <stdio.h>
/*
Crear un programa que lea un número determinado (¡100) de reales intro-
ducidos por teclado, los almacene en un vector para luego mostrarlos en orden
inverso. Para recorrer el array deberá usar aritmética de punteros en lugar de
ı́ndices del array.
*/
void main(){

    int cantidad = 0;
    int *puntero;
    int input;
    
    
    printf("Ingrese la cantidad de números.\n");
    scanf("%d", &cantidad);

    int vector[cantidad];
    puntero = vector;

    printf("\nAhora va a llenar el array.\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese el numero (%d).\n", i+1);
        scanf("%d", &input);
        *(puntero+i) = input;
    }

    printf("Array ingresado:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("%d ", *(puntero+i));
    }

    printf("\nArray al reves:\n");
    for (int i = (cantidad-1); i >= 0; i--)
    {
        printf("%d ", *(puntero+i));
    }
    printf("\n");
}