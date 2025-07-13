// Programa que guarda calificaciones
#include <cs50.h>
#include <stdio.h>

// Prototipo
void recorrer_array(int array[3][3]);

int main()
{
    // Declarar e inicializar el arreglo
    int arreglo[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    recorrer_array(arreglo);
}

void recorrer_array(int array[3][3]) // Se necesita especificar al menos el número de columnas del array
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
