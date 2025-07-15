#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main() {
    char saludo[50] = "Hola ";
    char nombre[] = "Pedro";

    strcat(saludo, nombre);

    printf("%s\n", saludo);// hola pedro
}
