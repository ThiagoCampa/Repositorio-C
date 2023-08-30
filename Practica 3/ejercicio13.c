//Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida

#include <stdio.h> 
#include <stdlib.h> 

void main() 
{ 
    for (int a = 10; a >= 1; a--) 
     { for (int x = 1; x <= a; x++) 
         {
            printf("@"); 
         } 
        printf("%d\n", a); 
        } 
system("pause"); 
}