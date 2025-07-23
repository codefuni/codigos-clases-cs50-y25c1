#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

// Definición de estructura
typedef struct {
    string titulo;
    float precio;
    bool disponible;
} Pelicula;

// Función para mostrar las películas de un género
void mostrar_peliculas(Pelicula genero[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("%i. %s - $%.2f - %s\n",
               i,
               genero[i].titulo,
               genero[i].precio,
               genero[i].disponible ? "Disponible" : "Rentada");
    }
}

int main(void)
{
    // Catálogo de películas [3 géneros][3 películas]
    Pelicula catalogo[3][3] = {
        {{"Misión Imposible", 3.50, true}, {"Rápidos y Furiosos", 4.00, true}, {"John Wick", 5.00, true}},    // Acción
        {{"La Máscara", 2.50, true}, {"Superbad", 3.00, true}, {"Ligeramente Embarazada", 3.50, true}},      // Comedia
        {{"El Padrino", 3.75, true}, {"Forrest Gump", 4.25, true}, {"La La Land", 4.00, true}}               // Drama
    };

    while (true)
    {
        printf("\n=== Menú de Géneros ===\n");
        printf("1. Acción\n");
        printf("2. Comedia\n");
        printf("3. Drama\n");
        printf("4. Salir\n");

        int opcion = get_int("Seleccione un género: ");

        if (opcion == 4)
        {
            printf("Gracias por usar el sistema de renta.\n");
            break;
        }

        int fila = opcion - 1;

        printf("\nPelículas disponibles en el género seleccionado:\n");
        mostrar_peliculas(catalogo[fila], 3);

        int seleccion = get_int("Seleccione la película que desea rentar (por número): ");

        if (catalogo[fila][seleccion].disponible)
        {
            catalogo[fila][seleccion].disponible = false;
            printf("¡Has rentado \"%s\" por $%.2f!\n",
                   catalogo[fila][seleccion].titulo,
                   catalogo[fila][seleccion].precio);
        }
        else
        {
            printf("Lo sentimos, esa película ya está rentada.\n");
        }
    }
}
