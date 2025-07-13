// Práctica con operadores matemáticos
#include <stdio.h>
#include <cs50.h>

// Función principal
int main(){
    int a = 10 * 10;
    int b = 90 / 3;
    printf("%d\n%d\n", a, b);
    printf("%d\n", 9 + 10); // Una operación matemática puede ser impresa tanto hecha anteriormente
                         // y guardada dentro de una variable, como typeada dentro de una función
    printf("%d\n", a / b);
}
