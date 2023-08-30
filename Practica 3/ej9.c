//Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 9; i++) {
        printf("Tabla de multiplicar del %d:\n", i);
        
        for (j = 1; j <= 10; j++) {
            int resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);
        }
        
        printf("\n");
    }

    return 0;
}