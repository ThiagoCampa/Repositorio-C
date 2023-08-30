//Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.

#include <stdio.h>
int main() {
    float lado1, lado2, lado3, perimetro;

    printf("Ingrese el lado 1 del triángulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el lado 2 del triángulo: ");
    scanf("%f", &lado2);

    printf("Ingrese el lado 3 del triángulo: ");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("El perímetro del triángulo es: %.2f\n", perimetro);

    return 0;
}