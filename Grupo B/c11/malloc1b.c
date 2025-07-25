#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros = malloc(3 * sizeof(int)); // Guardamos memoria con malloc

    // Comprobamos que se logró reservar memoria
    if (numeros == NULL)
    {
        printf("Error al reservar memoria\n");
        return 1;
    }

    // Inicializamos solo el primer elemento
    *numeros = 50;

    // Imprimir los valores reservados
    for (int i = 0; i < 3; i++)
    {
        printf("Índice %d: %d\n", i, *(numeros + i));
    }

    // Liberar la memoria reservada
    free(numeros);
}
