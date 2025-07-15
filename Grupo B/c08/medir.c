#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string contraseña = get_string("Introduzca su contraseña: ");
    int longitud = strlen(contraseña);

    // Validar
    if (longitud >= 8)
    {
        printf("Contraseña segura\n");
    }
    else
    {
        printf("Contraseña no segura\n");
    }
}
