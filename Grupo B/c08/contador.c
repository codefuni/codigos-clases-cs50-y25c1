#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string cadena = get_string("Introduce un texto: ");
    int espacios = 0, letras = 0, numeros = 0;
    for (int i = 0; i < strlen(cadena); i++)
    {
        if (isalpha(cadena[i]))
        {
            // No sirve para la ñ
            letras++;
        }
        if (isdigit(cadena[i]))
        {
            numeros++;
        }
        if (isspace(cadena[i]))
        {
            espacios++;
        }
    }
    printf("La cadena tiene %d espacios, %d letras y %d numeros\n", espacios, letras, numeros);
}
