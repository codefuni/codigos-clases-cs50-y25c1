// Práctica con operadores matemáticos 2
#include <stdio.h>
#include <cs50.h>

// Función principal
int main(){
    int a, b;
    float c, d;
    a = 100;
    b = 30;
    c = 100;
    d = 30;
    printf("%d\n", a / b); // División entera, trunca la parte decimal
    printf("%.20f\n", c / d); // División decimal o flotante, retorna el valor exacta con cierta precisión
}
