#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string texto = get_string("Ingresa un texto: ");

    printf("\nElige una opción:\n");
    printf("1. Convertir a minúsculas\n");
    printf("2. Convertir a MAYÚSCULAS\n");
    printf("3. Verificar si contiene números\n");
    printf("4. Verificar si contiene espacios\n");
    printf("5. Verificar si contiene letras\n");

    int opcion = get_int("Opción: ");

    switch (opcion)
    {
        case 1:
            for (int i = 0; texto[i] != '\0'; i++)
            {
                texto[i] = tolower(texto[i]);
            }
            printf("Texto en minúsculas: %s\n", texto);
            break;

        case 2:
            for (int i = 0; texto[i] != '\0'; i++)
            {
                texto[i] = toupper(texto[i]);
            }
            printf("Texto en MAYÚSCULAS: %s\n", texto);
            break;

        case 3:
        {
            bool tiene_numeros = false;

            for (int i = 0; texto[i] != '\0'; i++)
            {
                if (isdigit(texto[i]))
                {
                    tiene_numeros = true;
                }
            }

            if (tiene_numeros)
            {
                printf("El texto contiene al menos un número.\n");
            }
            else
            {
                printf("El texto NO contiene números.\n");
            }
            break;
        }

        case 4:
        {
            bool tiene_espacios = false;

            for (int i = 0; texto[i] != '\0'; i++)
            {
                if (isspace(texto[i]))
                {
                    tiene_espacios = true;
                }
            }

            if (tiene_espacios)
            {
                printf("El texto contiene al menos un espacio.\n");
            }
            else
            {
                printf("El texto NO contiene espacios.\n");
            }
            break;
        }

        case 5:
        {
            bool tiene_letras = false;

            for (int i = 0; texto[i] != '\0'; i++)
            {
                if (isalpha(texto[i]))
                {
                    tiene_letras = true;
                }
            }

            if (tiene_letras)
            {
                printf("El texto contiene letras.\n");
            }
            else
            {
                printf("El texto NO contiene letras.\n");
            }
            break;
        }

        default:
            printf("Opción inválida.\n");
            break;
    }

    return 0;
}
