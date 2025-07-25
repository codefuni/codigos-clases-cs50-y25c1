#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros = malloc(5 * sizeof(int)); // Guardamos memoria con malloc

    // Comprobamos que se logró reservar memoria
    if (numeros == NULL)
    {
        printf("Error al reservar memoria\n");
        return 1;
    }

    // Inicializamos algunos elementos
    numeros[0] = 50;
    numeros[1] = 100;
    numeros[2] = 150;

    // Imprimir los valores reservados
    for (int i = 0; i < 5; i++)
    {
        printf("Índice %d: %d\n", i, *(numeros + i));
    }

    // Liberar la memoria reservada
    free(numeros);
}
