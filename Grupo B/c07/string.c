# include <cs50.h>
# include <stdio.h>

int size_string(string palabra)
{
    int contador = 0;
    while (palabra[contador] != '\0')
    {
        contador++;
    }
    return contador;
}

int main()
{
    // string cadena = "hello";
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d ", cadena[i]);
    // }
    // printf("\n");
    string cadena = get_string("Introduce una frase: ");
    int size = size_string(cadena);
    printf("La longitud es: %d\n", size);
    return 0;
}
