#include <stdio.h>

void main()
{
    int i = 5, j[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char x = 'a', pal[] = "texto en c";
    int *pi = &i;
    char *pc = &x;

    /*
     1. Mostrar la dirección de “i” y su valor.
     */
    printf("Dirección de \"i\": %p\n", &i);
    /*
    2. Mostrar los mismos valores a través del puntero “pi”.
    */
    
    printf("Valor del puntero pi: %p\n", pi);
    /*
    3. Recorrer el vector “j” mostrando para cada elemento, su dirección y valor.
    */
    for (int i = 0; i < 10; i++)
    {
        printf("Valor de la posición j[%d]: %d\n", i, j[i]);
    }
    /*
     4. Recorra el vector accediendo a través del puntero “pi” y usando álgebra de
     punteros.
     */
    int contador = 0;
    pi = j;
    while (contador < 10)
    {
        printf("Valor de *pi+%d: %d\n", contador, (*pi + contador));
        contador++;
    }
    /*
     5. Repita lo mismo con las variables char, el arreglo y el puntero.
     */
    printf("Dirección de \"x\": %p\n", &x);
    
    printf("Valor del puntero pc: %p\n", pc);

    for (int i = 0; i < 10; i++)
    {
        printf("Valor de la posición pal[%d]: %c\n", i, pal[i]);
    }

    int contadorChar = 0;
    pc = pal;
    while (contadorChar < 10)
    {
        printf("Valor de *pc+%d: %c\n", contadorChar, *(pc+contadorChar));
        contadorChar++;
    }
    /*
     6. Finalmente muestre la dirección donde se almacenan ambos punteros
     */
    printf("Dirección del puntero \"pi\": %p\n", &pi);
    printf("Dirección del puntero \"pc\": %p\n", &pc);
}