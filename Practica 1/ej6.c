//Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
//valor ingresado, imprimir los resultados

#include <stdio.h>
int main(){
    int num1, num2, suma, resta, producto;

    printf("ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    producto = num1 * num2;
    resta = num1 - num2;

    printf("el resultado de la suma es de: %d\n", suma);
    printf("el resultado del producto es de: %d\n", producto);
    printf("el resultado de la resta es de: %d\n", resta);

    return 0;
}
