//Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida

#include <stdio.h> 
#include <stdlib.h> 

void main() 
{
     for (int k = 1; k <= 10; k++) 
     { if (k % 2 == 1) 
        { 
          printf("@ @ \n");  // reinglon impar muestra dos @, renglon par muestra 1 @
        }
      else
      {
          printf("@ \n");
      }
     }
     system("pause"); 
}