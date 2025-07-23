#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <cs50.h>

int main(){
    string x = "Hola";
    string y = "hoLA";

int z = strcasecmp(x, y);

    printf("Diferencia:\n");
    printf("%d\n", z);
    printf("\n");
    printf("\n");

    for(int i = 0; i < strlen(x); i++){
        printf("%d\t", x[i]);
    }
    printf("\n");


    for(int j = 0; j < strlen(y); j++){
        printf("%d\t", y[j]);
    }
    printf("\n");




    return 0;

}
