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
    printf("Índice 0: %d\n", *numeros);
    printf("Índice 1: %d\n", *(numeros + 1));
    printf("Índice 2: %d\n", *(numeros + 2));

    // Liberar la memoria reservada
    free(numeros);
}
