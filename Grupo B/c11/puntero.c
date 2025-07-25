#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 50;
    // Un puntero es una variable que "apunta" (guarda) a la dirección de memoria de otra
    int *p = &n; // El operador ampersand (&), "referencia" a la dirección de memoria de una variable
    printf("%p\n", p);

    // Si quisiera obtener el valor guardado por la variable a la que guardé la dirección en el puntero,
    // utilizo el operador "*", para "desreferenciar" (acceder al valor guardado)
    printf("Valor de n: %d\n", *p);

}
