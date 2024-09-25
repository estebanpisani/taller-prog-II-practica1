#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef enum
{
    MAYUSCULAS,
    MINUSCULAS
} may_min;

int strLargo(const char *origen)
{
    int contador = 0;
    while (*(origen + contador) != '\0')
    {
        contador++;
    }
    return contador;
} // Cantidad de caracteres

int strVacio(const char *origen)
{
    return *origen != '\0';
} // retorna 1 si tiene al menos un caracter , 0 en otro caso

void strCopia(char *destino, const char *origen)
{
    int contador = 0;
    while (*(origen + contador) != '\0')
    {
        *(destino + contador) = *(origen + contador);
        contador++;
    }
} // Copiador

/* prototipo modificado para permitir argumentos de tipo
string literales , en casi todos los
compiladores un literal string es considerado una constante,
o sea la función no podrá modificarlos pero, en algunos compiladores tales como GCC es posible modificarlos (según
K&R el comportamiento es indefinido)
*/

char *reverse(char *string)
{
    int length = strLargo(string)-1;
    char *aux;
    int count = 0;

    for (int i = length; i >= 0; i--)
    {
        *(aux+count) = *(string + i);
        count++;
    }

    return aux;
} // retorna una cadena que es string invertida

void strIzq(char *destino, const char *origen)
{
    int contador = 0;

    while (*(origen + contador) == ' ')
    {
        contador++;
    }

    while (*(origen + contador) != '\0')
    {
        *destino = *(origen + contador);
        destino++;
        contador++;
    }
} // Saca blancos Izq

void strDer(char *destino, const char *origen)
{
    int contador = strLargo(origen) - 1;

    // Busco último índice sin espacios
    while (*(origen + contador) == ' ')
    {
        contador--;
    }

    for (int i = 0; i <= contador; i++)
    {
        *(destino + i) = *(origen + i);
        if (i == contador)
        {
            *(destino + contador + 1) = '\0';
            break;
        }
    }
} // Saca blancos Der

void strAmbos(char *destino, const char *origen)
{
    strIzq(destino, origen);
    strDer(destino, destino);
}; // Saca blancos Izq . y Der .

void strMayMin(char *destino, const char *origen, may_min m)
{
    int contador = 0;
    if (m == MAYUSCULAS)
    {
        while (*(origen + contador) != '\0')
        {
            if (*(origen + contador) >= 'a' && *(origen + contador) <= 'z')
            {
                *(destino + contador) = (*(origen + contador) - 32);
            }
            else
            {
                *(destino + contador) = (*(origen + contador));
            }
            contador++;
        }
    }
    else if (m == MINUSCULAS)
    {
        while (*(origen + contador) != '\0')
        {
            if (*(origen + contador) >= 'A' && *(origen + contador) <= 'Z')
            {
                *(destino + contador) = (*(origen + contador) + 32);
            }
            else
            {
                *(destino + contador) = (*(origen + contador));
            }
            contador++;
        }
    }
}
// Convierte May . Min .

int main()
{
    char *text1 = " Sera Cierto ?? ";
    int largo = strLargo(text1) + 1;
    char *result = (char *)malloc(largo);
    char *reves;
    if (result == NULL)
        return -1; // sino pudo reservar memoria para result
    printf(" La cadena : ");
    puts(text1);
    printf(" Se encuentra : %s \n", (strVacio(text1) ? "No vacia" : "Vacia"));
    printf("Largo : %d \n", strLargo(text1));
    strCopia(result, text1);
    printf("Copia : [%s]\n", result);
    strIzq(result, text1);
    printf("Sin blancos a la Izq: |");
    puts(result);
    strDer(result, text1);
    printf("Der: [%s]\n", result);
    strAmbos(result, text1);
    printf("Ambos: [%s], sin blancos al principio ni al final.\n", result);
    strMayMin(result, text1, MAYUSCULAS);
    printf("Mayusculas: [%s]\n", result);
    strMayMin(result, text1, MINUSCULAS);
    printf("Minusculas: [%s]\n", result);
    reves = reverse(text1);
    printf("La cadena: %s invertida queda: %s\n", text1, reves);

    return 0;

}