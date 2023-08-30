//El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
//esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
//usuario los resultado

#include <stdio.h>
int main(){
    float lado1, lado2, lado3, lado4, diagonalPrincipal, superficie, perimentro;
    
    printf("escriba el primer lado del rectangulo: ");
    scanf("%f", &lado1);

    printf("escriba el segundo lado del rectangulo: ");
    scanf("%f", &lado2);

    printf("escriba el tercer lado del rectangulo: ");
    scanf("%f", &lado3);

    printf("escriba el cuarto lado del rectangulo: ");
    scanf("%f", &lado4);
    
    diagonalPrincipal = (lado1 * lado1) + (lado2 * lado2);
    
    superficie = lado1 * lado2;

    perimentro = lado1 + lado2 + lado3 + lado4;

    printf("la diagonal principal es de: %.2f\n", diagonalPrincipal);
    printf("la superficie es de: %.2f\n", superficie);
    printf("el perimetro es de: %.2f\n", perimentro);

    return 0;
}