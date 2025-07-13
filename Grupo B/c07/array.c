// Programa que guarda calificaciones
#include <cs50.h>
#include <stdio.h>

int main()
{
    int calificaciones[4]; // Declaramos el arreglo

    // Inicializamos los elementos del arreglo
    calificaciones[0] = 76;
    calificaciones[1] = 87;
    calificaciones[2] = 95;
    calificaciones[3] = 100;

    // Recorriendo el arreglo
    for (int i = 0; i < 4; i++)
    {
        printf("Estudiante: %d, nota: %d\n", i + 1, calificaciones[i]);
    }

}
