//Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.

#include <stdio.h>
int main(){
    int lado1, lado2, lado3, perimetro;
    
    printf("escriba el primer lado: ");
    scanf("%d", &lado1);
    
    printf("esctiba el segundo lado: ");
    scanf("%d", &lado2);
    
    printf("esctiba el tercer lado: ");
    scanf("%d", &lado3);
    
    perimetro = lado1 + lado2 + lado3;
    printf("el perimentro del trinagulo es de: %.2d cm", perimetro);
   
    return 0;
}