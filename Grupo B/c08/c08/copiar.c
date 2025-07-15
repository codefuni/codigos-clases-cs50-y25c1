#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string nombre = get_string("Su nombre: ");

    // Copiar el nombre
    char usuario[100]; // Guardar espacio para 100 caracteres en la memoria
    strcpy(usuario, nombre);

    // Crear el nombre de usuario
    strcat(usuario, "#1808");

    // Saludar y dar el nombre de usuario
    printf("Hola, %s\nSu nombre de usuario es: %s\n", nombre, usuario);
}
