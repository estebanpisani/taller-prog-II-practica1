#include <stdio.h>
/*
Crear un programa que lea un número determinado (¡100) de reales intro-
ducidos por teclado, los almacene en un vector para luego mostrarlos en orden
inverso. Para recorrer el array deberá usar aritmética de punteros en lugar de
ı́ndices del array.
*/

char *mesSegunNum(int numero)
{
    if (numero == 1)
    {
        char *mes = "Enero";
        return mes;
    }
    else if(numero == 2){
        char *mes = "Febrero";
        return mes;
    }
    else if(numero == 3){
        char *mes = "Marzo";
        return mes;
    }
    else if(numero == 4){
        char *mes = "Abril";
        return mes;
    }
    else if(numero == 5){
        char *mes = "Mayo";
        return mes;
    }
    else if(numero == 6){
        char *mes = "Junio";
        return mes;
    }
    else if(numero == 7){
        char *mes = "Julio";
        return mes;
    }
    else{
        char *mes = "Es solo del 1 al 7.\n";
        return mes;
    }
}

void main()
{
    int numero = 0;

    printf("Ingrese el número.\n");
    scanf("%d", &numero);

    printf("Retorno: %s.\n", mesSegunNum(numero));
}