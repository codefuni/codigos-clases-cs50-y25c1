// Programa que pide repetivamente un número hasta obtener uno positivo
#include <cs50.h>
#include <stdio.h>

int main()
{
    int num; // Declarar la variable que guarda el número

    // Ciclo do while que pregunta hasta obtener un núm positivo
    do
    {
        num = get_int("Ingrese un número: ");
    } while (num <= 0); // Volver a preguntar si el número no es positivo

    printf("Su número: %d es válido\n", num); // Impriir en consola el número
}
