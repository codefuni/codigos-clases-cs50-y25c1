// Programa que saluda una determinada cantidad de veces
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Escriba la cantidad de veces que quiere ser saludado: ");
    // Sintaxis: for(int i = partida; condición, cambio)
    for (int i = 0; i < num; i++)
    {
        printf("Hola\n");
    }
}

// Usamos el ciclo for cuando conocemos el número de iteraciones que deseamos
