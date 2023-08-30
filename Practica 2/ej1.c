//Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
//pantalla.

#include <stdio.h>
int main(){

    int num1, num2, numMay;

    printf("escriba el primer numero: ");
    scanf("%d", &num1);
    printf("escriba el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("este numero es el mayor: %d", num1);
    }else if (num2 > num1){
        printf("este numero es el mayor: %d", num2);
    }else {
        printf("los dos numeros son iguales");
    }

    return 0;
}