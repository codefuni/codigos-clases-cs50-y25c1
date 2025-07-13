// Programa que calcula el número de digitos de un número
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Ingrese un número: ");
    int contador = 0;

    if (num == 0)
    {
        printf("El número de digitos es: 1\n");
    }
    else
    {
        while (num >= 1)
        {
            printf("%d\n", num);
            num /= 10;
            contador++;
        }
        printf("El número de dígitos es: %d\n", contador);
    }
}
