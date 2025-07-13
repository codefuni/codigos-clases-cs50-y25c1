// Programa que guarda calificaciones
#include <cs50.h>
#include <stdio.h>

int main()
{

    int n = get_int("Cuántas calificaciones desea agregar?: ");
    int calificaciones[n];


    for (int i = 0; i < n; i++)
    {
        calificaciones[i] = get_int("Nota: ");
    }

    printf("Estudiante: %d, Nota: %d\n", 3,  calificaciones[2]);

}
