#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

typedef struct{
    int edad;
    char nombre[50];
    int altura;
} persona;

int main(){

    persona Clase[3];

    for(int i = 0; i < 3; i++){
        printf("Ingrese su nombre: ");
        scanf("%s", Clase[i].nombre);

        printf("Edad: ");
        scanf("%d", &Clase[i].edad);

        printf("Altura(cm): ");
        scanf("%d", &Clase[i].altura);
    }

    system("clear");


    char persona[50];
    printf("Que persona buscas?\n");
    scanf("%s", persona);
    //string persona = get_string("Que persona buscas?\n");

    for(int i = 0; i < 3; i++){

        //if(strcmp(persona, Clase[i].nombre) == 0){
        if(strcasecmp(persona, Clase[i].nombre) == 0){
            printf("Persona encontrada!\n");
            printf("Nombre: %s\n", Clase[i].nombre);
            printf("Edad: %d\n", Clase[i].edad);
            printf("Altura: %d cm\n", Clase[i].altura);
        } else

        continue;
    }

    printf("No se encuentra registrada.\n");

    return 0;
}
