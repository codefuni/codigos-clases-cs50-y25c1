#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE; // Se define el tipo de dato BYTE

int main(int argc, char *argv[])
{
    FILE *fuente = fopen(argv[1], "rb");
    FILE *destino = fopen(argv[2], "wb");

    BYTE buffer;

    while (fread(&buffer, sizeof(buffer), 1, fuente) != 0)
    {
        fwrite(&buffer, sizeof(buffer), 1, destino);
    }

    fclose(fuente);
    fclose(destino);
}
