#include <stdio.h>
#include <cs50.h>

void saludar(void);

string nombre = "Jorwin";

int main(void)
{
    printf("Hola %s desde la funcion \"main()\"\n", nombre);
    saludar();
    // printf("%s\n", saludo); // error, saludo es una variable local

    if (nombre)
    {
        string apellido = "Navarrete";
        printf("Mi apellido es: %s\n", apellido);
    }

    // printf("Mi apellido es: %s\n", apellido); // error, saludo es una variable de bloque

    return 0;
}

void saludar(void)
{
    string saludo = "desde la funcion \"saludar()\"";
    printf("Hola %s %s\n", nombre, saludo);

    return;
}
