#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    string persona;
    string numero;
    int edad;
} persona;

int main(){
    persona persona[3] =  {{"Elian", "5840-5460", 17}, {"Mario", "3746-1234", 20}, {"Mateo", "4276-2312", 18}};

    string busqueda = get_string("A quien buscas?\n");
    system("clear");

    for(int i = 0; i < 3; i++){
        if(strcmp(busqueda, persona[i].persona) == 0){
            printf("%s\n", persona[i].persona);
            printf("%s\n", persona[i].numero);
            printf("%d\n", persona[i].edad);
        }
        else
            continue;
    }


    return 0;
}
