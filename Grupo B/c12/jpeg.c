#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE; // Se define el tipo de dato BYTE

int main(int argc, char *argv[])
{
    FILE *imagen = fopen(argv[1], "rb"); // Abrir la imagen

    if (!imagen)
    {
        return 1;
    }

    BYTE buffer[3]; // Buffer que guarda los 3 primeros bytes

    fread(buffer, sizeof(BYTE), 3, imagen);

    // Comprobar la cabecera
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff)
    {
        printf("Probablemente es un JPEG\n");
    }
    else
    {
        printf("Definitivamente no es un JPEG\n");
    }

    fclose(imagen); // Cerrar la imagen
}
