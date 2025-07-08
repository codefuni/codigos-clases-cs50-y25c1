#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%i ", j + 3 * (i - 1));
        }
        printf("\n");
    }

    // 1 2 3
    // 4 5 6
    // 7 8 9

    return 0;
}
