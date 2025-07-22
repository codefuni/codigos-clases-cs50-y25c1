#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    printf("%i\n", fibonacci(4));

    return 0;
}

// Calcula el numero de fibonacci en la posicion n (0, 1, ..., n)
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}
