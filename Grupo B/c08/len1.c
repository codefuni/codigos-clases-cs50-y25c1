#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int contar_caracteres(string s)
// {
//     int contador = 0;
//     while (s[contador] != '\0')
//     {
//         contador++;
//     }
//     return contador;
// }

int main()
{
    // string s = "hola";
    // int contador = strlen(s);
    // printf("Longitud de cadena: %d\n", contador);

    string password = get_string("Ingrese su contraseña: ");
    if (strlen(password) >= 8)
    {
        printf("La contraseña es segura\n");
    }
    else
    {
        printf("Su contraseña no es segura\n");
    }
    return 0;
}
