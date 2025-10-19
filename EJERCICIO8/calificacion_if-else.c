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

    /*verificar la calificacion*/    
    if (calificacion < 0 || calificacion > 10) {
        printf("ERROR. Su calificacion NO ES VALIDA.\n");
    }

    /*categorizar*/
    caso = (int)calificacion;

    /*determinar el estado de aprobacion*/
    /*no aprobo*/
    if (caso <= 4) {
        printf("Usted NO APROBO\n");    
    }
    else {
        if (caso == 5 || caso == 6) {
            printf("Usted APROBO\n"); //aprobo
        }
        else {
            if (caso == 7 || caso == 8) {
                printf("Usted aprobo NOTABLEMENTE\n"); //notablemente
            }
            else {
                if (caso == 9) {
                    printf("Usted aprobo de forma SOBRESALIENTE\n"); //sobresaliente
                }
                else {
                    if (caso == 10) {
                        printf("Usted aprobo de forma EXCELENTE\n"); //excelente
                    }
                }
                }
            
        }
    }

    return 0;
}
