#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
    char saludo[50] = "mira esta ";
    char laotraparte[6] = "onda?";

    strcat(saludo, laotraparte);
    printf("%s\n", saludo);

    return 0;
}
