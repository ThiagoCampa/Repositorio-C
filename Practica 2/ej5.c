//scriba un programa que pida ingresar un número y a continuación escriba en la
//consola si el mismo es par o impar

#include <stdio.h>
int main(){
    int num;

    printf("ingrese un numero entero: ");
    scanf("%d", &num);

 if (num % 2== 0){
    printf("este es un numero par.\n");
 } else {
    printf("este es un numero impar.");
 }
    
    return 0;
    
}