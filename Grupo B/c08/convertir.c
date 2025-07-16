#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string cadena = get_string("Introduce algo: ");
    for (int i = 0; i < strlen(cadena); i++)
    {
        printf("%c", tolower(cadena[i]));
    }
    printf("\n");
}
