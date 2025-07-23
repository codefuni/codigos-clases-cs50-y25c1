#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void)
{
    string username;
    username = get_string("hola, como te llamas? ");

    char username2[10]; // +1 por el carácter nulo '\0'
    strcpy(username2, username);

    printf("Original: %s\n", username);
    printf("Copia:    %s\n", username2);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();


    username[0] = 'E';

    printf("Después de modificar:\n");
    printf("Original: %s\n", username);
    printf("Copia:    %s\n", username2);
    getchar();

    if(strcasecmp(username, username2) == 0){
        printf("son iguales\n");
    }
    else
        printf("no son iguales\n");


}
