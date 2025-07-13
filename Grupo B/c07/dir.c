#include <cs50.h>
#include <stdio.h>

int main()
{
    char a = 'c';
    int b = 3;
    char c = '5';
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
}
