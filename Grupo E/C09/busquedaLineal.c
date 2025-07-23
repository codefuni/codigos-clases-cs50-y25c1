#include <cs50.h>
#include <stdio.h>
#include <string.h> // Necesario para strcmp

int main(void)
{
    // Definimos dos arreglos "paralelos"
    string nombres[] = {"Goku", "Vegeta", "Gohan", "Trunks"};
    string numeros[] = {"+1-617-495-1000", "+1-949-468-2750", "+1-123-456-7890", "+1-987-654-3210"};

    // Calculamos el tamaño de los arreglos
    int n = sizeof(nombres) / sizeof(nombres[0]);

    // Pedimos al usuario el nombre a buscar
    string nombre_buscado = get_string("¿A quién deseas buscar?: ");

    // Realizamos la búsqueda lineal
    for (int i = 0; i < n; i++)
    {
        // Comparamos el nombre buscado con el nombre actual en el arreglo
        printf("\nComparando con: %s\n", nombres[i]); //  muestra a quién compara

        // strcmp devuelve 0 si las cadenas son iguales
        if (strcmp(nombres[i], nombre_buscado) == 0)
        {
            printf("\nEncontrado: %s\n", numeros[i]);
            return 0; // Se encontró el nombre, terminamos el programa
        }
    }

    // Si el bucle termina y no se encontró el nombre
    printf("No encontrado\n");
    return 1; // Indicamos que no se encontró
}

