/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Nos piden que dado cinco valores determinar su orden creciente
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>
#define MAX 10000 //maximo
#define MIN 100 //minimo

int main(){
    /*entrada*/
    int n = 0;
    /*intermedias*/
    int m = 0;

    printf("== BIENVENIDO. INGRESE UN NUMERO PARA DETERMINAR SI ES MULTIPLO DE 2. ==\n");
    printf("== OJO, NO DEBE SER MULTIPLO DE 5, MENOR A 100 O MAYOR A 10000. ==\n");

    /*llenar entrada*/
    printf("Ingrese su numero:\n");
    scanf("%d", &n);

    /*verificar */
    if (n % 5 == 0) {
        printf("ERROR. Su numero es multiplo de 5.\n");
        return 1;
    }

    if (n < MIN) {
        printf("ERROR. Su numero es menor a 100.\n");
        return 1;
    }

    if (MAX < n) {
      printf("ERROR. Su numero es mayor a 10000.\n");
      return 1;
    }

    m = n % 2;

    /*verificar si es multiplo o no*/
    switch (m) {
        case 0: printf("Su numero es multiplo de 2.\n");
        break;

        default: printf("Su numero no es multiplo de 2.\n");
        break;    
    }
    
    
    return 0;
}
