#include <cs50.h>
#include <stdio.h>

// Definir el struct
typedef struct
{
    int edad;
    string nombre;
    string carnet;
} estudiante;

int main ()
{
    // Pedirle al usuario el número de estudiantes
    int n = get_int("Número de estudiantes: ");

    // Declarar el arreglo
    estudiante estudiantes[n];

    // Asignar los valores a los campos de los estudiantes
    for (int i = 0; i < n; i++)
    {
        estudiantes[i].edad = get_int("Edad: ");
        estudiantes[i].nombre = get_string("Nombre: ");
        estudiantes[i].carnet = get_string("Carnet: ");
    }

    // Imprimir los datos de los estudiantes
    printf("A continuación los datos de los estudiantes\n");
    for (int i = 0; i < n; i++)
    {
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Carnet: %s\n", estudiantes[i].carnet);

        printf("\n");
    }

}
