#include <stdio.h>
#include <cs50.h>

// Definimos una estructura para representar un píxel con 3 componentes: rojo, verde y azul
typedef struct
{
    int red;
    int green;
    int blue;
} RGB;

int main(void)
{
    // Creamos una imagen simulada de 2x2 píxeles
    RGB imagen[2][2] = {
        { {255, 0, 0}, {0, 255, 0} },     // Fila 0: rojo y verde
        { {0, 0, 255}, {255, 255, 0} }    // Fila 1: azul y amarillo
    };

    // Recorremos la matriz e imprimimos los valores RGB de cada píxel
    printf("Contenido de la imagen 2x2:\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            RGB pixel = imagen[i][j];
            printf("Pixel [%i][%i] → R: %3i, G: %3i, B: %3i\n",
                i, j, pixel.red, pixel.green, pixel.blue);
        }
    }


    return 0;
}
