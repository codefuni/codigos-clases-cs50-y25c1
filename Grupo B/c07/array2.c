// Programa que guarda calificaciones
#include <cs50.h>
#include <stdio.h>

int main()
{
    int calificaciones[5] = {75, 86, 95, 100}; // Declarando e inicializando
    // Si no se especifica un elemento del array, se usa 0 como placeholder

    // Recorriendo el arreglo
    for (int i = 0; i < 5; i++)
    {
        printf("Estudiante: %d, nota: %d\n", i + 1, calificaciones[i]);
    }
}
