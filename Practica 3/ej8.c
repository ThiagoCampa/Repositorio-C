//Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
//número.

#include <stdio.h>

int main() {
    int n1;

    printf("Ingrese un número: ");
    scanf("%d", &n1);

    printf("Tabla de multiplicar de %d:\n", n1);

    for (int i = 1; i <= 10; i++) {
        int resultado = n1 * i;
        printf("%d x %d = %d\n", n1, i, resultado);
    }

    return 0;
}