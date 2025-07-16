# include <cs50.h>
# include <stdio.h>

int main()
{
    int fil = get_int("¿Cuántas filas deseas?: ");
    int col = get_int("¿Cuántas columnas deseas?: ");

    float array[fil][col];

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = get_float("Array[%d][%d]: ", i, j);
        }
    }

    printf("Mostrando los valores almacenados:\n");

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
