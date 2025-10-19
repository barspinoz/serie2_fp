/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Encontrar los numeros impares hasta un numero N y multiplicarlos
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>
#define MAX 100

int main() {
    int n = 0; //variable de entrada, donde el usuario inrgesara un numero
    int multiplicacion = 1; //variable de salida, donde la operacion se efectuara
    int i = 1; //variable intermedia

    printf("Ingrese un numero N: ");
    scanf("%d", &n);
    
    for(i = 3; i <= n; i += 2) {
        multiplicacion *= i;
        printf("1 x %d ", i);
    }

    if (n > 1) {
        multiplicacion *= 1;
        if (multiplicacion <= MAX) {
            printf(" = %d \n", multiplicacion);          
        }
        else {
            printf("= \n ERROR. Numero mayor a 100 \n");
        }
    }
    else {
        printf(" = 1 \n");    
    }
    
    return 0;
}
