#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string palabra = get_string("Escriba su palabra: ");
    int n = strlen(palabra);

    // Pasar a mayúscula
    for (int i = 0; i < n; i++)
    {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') // Si el caracter está en el rango de 'a' a 'z', realizar la op.
        {
            printf("%c", palabra[i] - 32);
        }
        else
        {
            printf("%c", palabra[i]); // Si es otro caracter, como un signo, mantenerlo igual
        }
    }

    printf("\n");
}
