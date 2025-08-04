#include <stdio.h>

int main()
{
    // Crear el archivo
    FILE *archivo = fopen("saludo.txt", "a");

    // Comprobar que se pudo crear
    if (archivo == NULL)
    {
        printf("Error al crear el archivo\n");
        return 1;
    }

    // Escribir dentro del archivo
    fprintf(archivo, "Hola, de nuevo!\n");

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
