// Calculadora en C
#include <cs50.h>
#include <stdio.h>

int main()
{
    char continuar;
    char opción;
    do
    {

        float num1 = get_float("Ingrese el primer número: ");
        float num2 = get_float("Ingrese el segundo número: ");

        opción = get_char("Ingrese la operación a realizar: ");

        switch (opción)
        {
            case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

            case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

            case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

            case '/':
            printf("Resultado: %.2f\n", num1 / num2);
            break;
        }

        // Preguntar al usuario si desea continuar
        continuar = get_char("Desea continuar? (s/n): ");
    } while (continuar != 'n');
}
