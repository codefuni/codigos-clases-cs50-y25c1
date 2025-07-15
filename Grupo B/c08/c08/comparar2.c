#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// Prototipo
void comparar(string s1, string s2);

int main()
{
    // Pedir al usuario los valores
    string texto1 = get_string("Texto1: ");
    string texto2 = get_string("Texto2: ");

    // Comparar (correctamente)
    comparar(texto1, texto2);
}

// Forma correcta
void comparar(string s1, string s2)
{
    if (strcasecmp(s1, s2) == 0)
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son diferentes\n");
    }
}
