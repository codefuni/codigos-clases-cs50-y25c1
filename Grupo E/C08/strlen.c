#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){

    string contraseña;
    contraseña = get_string("Ingrese una contraseña: ");
    if (strlen(contraseña) >= 8) {
        printf("Contraseña segura.\n");
    } else {
        printf("Contraseña demasiado corta.\n");
    }

    return 0;
}
