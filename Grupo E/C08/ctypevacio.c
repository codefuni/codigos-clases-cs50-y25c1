#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


int main(void){
    string texto = get_string("Ingrese un texto: ");

    printf("\nHola que desea hacer con el texto\n");
    printf("1. Convertir a mayusculas\n");
    printf("2. Convertir a minusculas\n");


    int opcion = get_int("Ingrese una de las opciones: ");

    for(int i = 0; texto[i] != '\0';i++){
        char c = texto[i];

        if (opcion==1)
            printf("%c", toupper(c));

        else if (opcion==2)
            printf("%c", tolower(c));

        else {
            printf("fin del programa\n");

            break;
        }

    }

    printf("\n");

}
