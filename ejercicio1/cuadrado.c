/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
En este problema se hace un cuadrado rectangulo con un numero, es decir, si se pide de 5 quiere decir un cuadrado de 5 x 5
*/

#include <stdio.h>

int main (){
  /*variables de entrada*/
  int numero = 0;
  /*variables intermedias*/
  int i = 0;
  int j = 0;

  printf("\n Ingrese un numero \n"); //dar valor a las variables
  scanf("%d", &numero);

  for (i = 1; i <= numero; i++) {
    for (j = 1; j <= numero; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}
