#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    string s1 = "hola mundo";
    string s2 = "Hola mundo";

    if (strcmp(s1, s2) == 0)
    {
        printf("Los valores son iguales\n");
    }
    else
    {
        printf("Los valores no son iguales\n");
    }
    return 0;
}
