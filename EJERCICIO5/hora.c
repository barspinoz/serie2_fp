/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Se nos pide sumarle un segundo a determinada hora dada por el usuario
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/

#include <stdio.h>

int main() {
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    printf("Ingrese la hora en orden hh/mm/ss: \n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    segundos += 1;

    if (segundos = 60) {
        minutos += 1;
        segundos = 0;

        if (minutos == 60) {
            horas += 1;
            minutos = 0;        
        }
    }

    printf("La hora mas 1 segundo es: %d horas con %d minutos y %d segundos", horas, minutos, segundos);
    
    return 0;
}
