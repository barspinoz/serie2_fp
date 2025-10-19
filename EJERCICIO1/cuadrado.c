/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
En este problema se hace un cuadrado rectangulo con un numero, es decir, si se pide de 5 quiere decir un cuadrado de 5 x 5
Este programa se compilo usando clang 19.1.7 para FreeBSD
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
