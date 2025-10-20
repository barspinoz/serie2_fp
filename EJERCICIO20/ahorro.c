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
Descripcion del problema:  Una persona invierte $1000.00 en una cuenta de ahorro con un 5% de interés.
Se asume que todo el interés se deja en depósito de la cuenta; calcule y despliegue el monto acumulado
de la cuenta al final de cada año, durante 10 años.
Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux
*/
#include <stdio.h>
#include <math.h>

int main () {
    /*entradas*/
    float ahorro = 0;
    float interes = 0;
    float agnos = 0;
    /*salidas*/
    float final = 0;
    /*llenar variables*/
    printf("== CALCULADORA DE INTERES ==\n");
    printf("== INGRESE SU DINERO ==\n");
    scanf("%f", &ahorro);
    printf("== INGRESE EL INTERES ==\n");
    scanf("%f", &interes);
    printf("== INGRESE A CUANTOS AGNOS ==\n");
    scanf("%f", &agnos);
    /*calcular ahorro*/
    interes *= 0.01;
    final = pow(ahorro * (1 + interes), agnos);
    /*imprimir en pantalla*/
    printf("== SU AHORRO ES DE: %f ==\n", final);
    return 0;
}