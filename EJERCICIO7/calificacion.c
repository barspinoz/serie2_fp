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

int main(){
    /*entrada*/
    float calificacion = 0;
    /*salidas*/
    int caso = 0;

    printf("Escriba su calificacion:\n");
    scanf("%f", &calificacion);

    /*categorizar*/
    caso = (int)calificacion;

    /*determinar el estado de aprobacion*/
    switch (caso) {
        case 0: case 1: case 2: case 3: case 4:
            printf("Usted NO APROBO\n");
            break;

        case 5: case 6:
            printf("Usted APROBO\n");
            break;

        case 7: case 8: 
            printf("Usted aprobo NOTABLEMENTE\n");
            break;

        case 9: printf("Usted aprobo de forma SOBRESALIENTE\n");
            break;

        case 10: printf("Usted aprobo de forma EXCELENTE\n");
            break;

        default: printf("Su calificacion NO ES VALIDA\n");
    }

    return 0;
}
