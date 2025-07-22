#include <stdio.h>

int binaria(int array[], int izq, int der, int objetivo);

int main(void)
{
    int array[5] = {2, 4, 7, 9, 15};
    printf("%i\n", binaria(array, 0, 4, 15));

    return 0;
}

// Obtiene la posicion de un elemento en un arreglo utilizando busqueda binaria
int binaria(int array[], int izq, int der, int objetivo)
{
    if (der < izq)
        return -1;

    int medio = (izq + der) / 2;

    if (array[medio] == objetivo)
        return medio;

    if (array[medio] > objetivo)
    {
        return binaria(array, izq, medio - 1, objetivo);
    }
    else
    {
        return binaria(array, medio + 1, der, objetivo);
    }
}
