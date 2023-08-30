//Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
//pantalla.

#include <stdio.h>
int main(){
    int num1, num2, num3;

    printf("escriba el primer numero: ");
    scanf("%d", &num1);
    printf("escriba el segundo numero: ");
    scanf("%d", &num2);
    printf("escriba el tercer numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num1 > num3){
        printf("el numero mayor es: %d", num1);
    } else if (num2 > num1 && num2 > num3){
        printf("el numero mayo es: %d", num2);
    } else if  (num3 > num1 && num3 > num2){
        printf("el numero mayor es: %d", num3);
    } else {
        printf("los tres numeros son iguales");
    }
         
    return 0;

}