# include <cs50.h>
# include <stdio.h>

int main()
{
    // string val1 = get_string("Palabra 1: ");
    // string val2 = get_string("Palabra 2: ");
    // if (val1 == val2)
    // {
    //     printf("Las cadenas son completamente iguales\n");
    // }
    // else
    // {
    //     printf("Las cadenas son diferentes\n");
    // }
    int val1 = get_int("Número 1: ");
    int val2 = get_int("Número 2: ");
    if (val1 == val2)
    {
        printf("Los números son completamente iguales\n");
    }
    else
    {
        printf("Los números son diferentes\n");
    }
    return 0;
}
