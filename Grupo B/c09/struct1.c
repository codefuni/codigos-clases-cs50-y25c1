#include <cs50.h>
#include <stdio.h>

// Definir el struct (el tipo de dato)
typedef struct
{
    int edad;
    string nombre;
    float altura;
} Persona;

int main()
{
    // Crear variable del tipo Persona
    Persona p1;

    // Asignarle valores a los campos
    p1.edad = get_int("Edad: ");
    p1.nombre = get_string("Nombre: ");
    p1.altura = get_float("Altura: ");

    // Imprimir en pantalla los datos de la Persona
    printf("A continuación los datos de la persona\n");
    printf("%d\n", p1.edad);
    printf("%s\n", p1.nombre);
    printf("%.2f\n", p1.altura);

    return 0;
}
