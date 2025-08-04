#include <stdio.h>

int main()
{
    // Crear el archivo
    FILE *archivo = fopen("staff.txt", "r");

    // Comprobar que se pudo crear
    if (!archivo)
    {
        printf("Error al crear el archivo\n");
        return 1;
    }

    // Declarar un buffer
    char linea[100];

    // Leer el contenido del archivo
    while (fgets(linea, sizeof(linea), archivo)) // Lee línea a línea hasta que fgets retorne NULL (negativo en un cond.)
    {
        printf("%s", linea);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
