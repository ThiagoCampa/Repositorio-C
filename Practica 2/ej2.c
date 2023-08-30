//Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
//pantalla.

#include <stdio.h>
int main(){
    int num1, num2;

    printf("escriba el primer numero: ");
    scanf("%d", &num1);

    printf("escriba el segundo numero: ");
    scanf("%d", &num2);

    if (num1>num2){
        printf("el numero mayor es: %d", num1);
    } else if (num2>num1){
        printf("el numero mayor es: %d", num2);
    } else{
        printf("los numeros son iguales");
    }

    return 0;
 
}