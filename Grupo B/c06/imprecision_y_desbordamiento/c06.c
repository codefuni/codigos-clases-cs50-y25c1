// Calculadora en C
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float amount =  get_float("Cambio, en dólares: ");
    printf("%.20f\n", amount);
    int centavos = round(amount * 100);
    printf("%d\n", centavos);
}
