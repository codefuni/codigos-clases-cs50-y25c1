#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Guardar el string en un puntero de tipo char
    char *texto = get_string("Texto: ");

    // Reservar memoria para guardar la copia del texto
    int longitud = strlen(texto);
    char *mayus = malloc(longitud + 1);

    // Verificar que la memoria se guardó correctamente
    if (mayus == NULL)
    {
        printf("Error al reservar memoria\n");
        return 1;
    }

    // A este punto tenemos el espacio reservado, solo falta rellenarlo
    strcpy(mayus, texto);

    // Pasar todo a mayúscula
    for (int i = 0; i < longitud; i++)
    {
        mayus[i] = toupper(mayus[i]);
    }

    // Imprimir el texto, ahora en mayúsculas
    printf("%s\n", mayus);

    // Liberar la memoria reservada con malloc
    free(mayus);

    // Finalizar programa
    return 0;
}
