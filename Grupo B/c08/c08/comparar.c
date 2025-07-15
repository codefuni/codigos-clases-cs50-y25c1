#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Prototipo
void comparar(string s1, string s2);

int main()
{
    // Pedir al usuario los valores
    string texto1 = get_string("Texto1: ");
    string texto2 = get_string("Texto2: ");
<
    // Comparar los valores
    // (Forma incorrecta: compara las direcciones de memoria)
    if (texto1 == texto2)
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son diferentes\n");
    }

    // Comparar (correctamente)
    comparar(texto1, texto2);
}

// Forma correcta
void comparar(string s1, string s2)
{
    if (strcmp(s1, s2) == 0)
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son diferentes\n");
    }
}
