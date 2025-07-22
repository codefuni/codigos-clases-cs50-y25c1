#include <stdio.h>

int factorial(int n);

int main(void)
{
    printf("%i\n", factorial(4));

    return 0;
}

// Calcula el factorial de un numero n
int factorial(int n)
{
    if (n == 1)
        return n;

    return n * factorial(n - 1);
}
