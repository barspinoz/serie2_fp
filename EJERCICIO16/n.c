/*
(Copyright 2025 Roman Espinosa)
Este software se distribuye bajo los terminos de la GPL de GNU.
*/
/*This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program.
If not, see <https://www.gnu.org/licenses/>.
*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Nos piden que dado dos valores n determinar el maximo y el minimo del conjunto
Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux
*/
#include <stdio.h>

int main () {
    /*entradas*/
    int n[2] = {0,0};
    /*dar valores*/
    printf("INGRESE DOS NUMEROS\n");
    scanf("%d %d", &n[0], &n[1]);
    /*n1 mayor*/
    if (n[0] < n[1]) {
        printf("El maximo es %d y el minimo es %d\n", n[1], n[0]);
    }
    /*n0 mayor*/
    else {
        printf("El maximo es %d y el minimo es %d\n", n[0], n[1]);
    }

    return 0;
}