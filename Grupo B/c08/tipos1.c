#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // char valor = '7';
    // if (isalpha(valor))
    // {
    //     printf("El carácter es una letra\n");
    // }
    // else
    // {
    //     printf("El carácter no es una letra\n");
    // }
    string palabra = get_string("Introduce una frase: ");
    for (int i = 0; i < strlen(palabra); i++)
    {
        // if (isalpha(palabra[i]))
        // {
        //     printf("%c", palabra[i]);
        // }
        // if (isdigit(palabra[i]))
        // {
        //     printf("%c", palabra[i]);
        // }
        if (isalnum(palabra[i]))
        {
            printf("%c", palabra[i]);
        }
    }
    printf("\n");
    return 0;
}
