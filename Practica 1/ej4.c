//Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
//perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.

#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, hipotenusa, perimetro, superficie;

    // Ingresar los lados del triángulo rectángulo
    printf("Ingrese el lado 1: ");
    scanf("%f", &lado1);
    printf("Ingrese el lado 2: ");
    scanf("%f", &lado2);

    // Calcular la hipotenusa
    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));

    // Calcular el perímetro
    perimetro = lado1 + lado2 + hipotenusa;

    // Calcular la superficie
    superficie = (lado1 * lado2) / 2;

    // Imprimir los resultados
    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Perímetro: %.2f\n", perimetro);
    printf("Superficie: %.2f\n", superficie);

    return 0;
}