/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Encontrar los numeros impares hasta un numero N y multiplicarlos
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>

int main (){
    /*entradas*/
    int tipo = 0;
    float cantidad = 0;

    /*variables intermedias*/
    float dolar = 0;
    float euro = 0;
    float peso = 0;

    /*salidas*/
    float conversion = 0;

    printf("Ingrese la cantidad\n");
    scanf("%f", &cantidad);

    printf("Ingrese el tipo de cambio\n");
    printf("\n 1. de Dolar a Euro \n 2. de Euro a Dolar \n 3. de Peso a Euro \n 4. de Euro a Peso \n 5. de Peso a Dolar \n 6. de Dolar a Peso\n");
    scanf("%d", &tipo);


    switch (tipo) {
        case 1: printf("%.2f Dolares equivalen a:", cantidad);
        euro = 0.85;
        conversion = cantidad * euro;
        printf(" %.2f Euros\n", conversion);
        break;

        case 2: printf("%.2f Euros equivalen a:", cantidad);
        dolar = 1.17;
        conversion = cantidad * dolar;
        printf(" %.2f Euros\n", conversion);
        break;

        case 3: printf("%.2f Pesos equivalen a:", cantidad);
        peso = 0.046;
        conversion = cantidad * peso;
        printf(" %.2f Euros\n", conversion);
        break;

        case 4: printf("%.2f Euros equivalen a:", cantidad);
        euro = 21.6;
        conversion = cantidad * euro;
        printf(" %.2f Pesos\n", conversion);
        break;

        case 5: printf("%.2f Pesos equivalen a:", cantidad);
        peso = 0.054;
        conversion = cantidad * peso;
        printf(" %.2f Dolares\n", conversion);
        break;

        case 6: printf("%.2f Dolares equivalen a:", cantidad);
        dolar = 18.45;
        conversion = cantidad * dolar;
        printf(" %.2f Pesos\n", conversion);
        break;

        default: printf("ERROR\n");
        break;
            
    }

    return 0;
}
