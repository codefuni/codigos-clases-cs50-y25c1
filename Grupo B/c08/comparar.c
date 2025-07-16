# include <stdio.h>
# include <cs50.h>

int main()
{
    string pal1 = "hKla";
    string pal2 = "hola";

    for (int i = 0; i < 4; i++)
    {
        if (!(pal1[i] == pal2[i]))
        {
            printf("No son iguales\n");
            return 1;
        }
    }
    printf("Son iguales\n");
    return 0;
}
