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
Descripcion del problema: Nos piden que dado cinco valores determinar su orden creciente
Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux
*/
#include <stdio.h>

int main(){
    /*entradas*/
    int n = 0; //numero maximo
    /*intermedias*/
    int i = 0;
    int j = 0;
    /*salidas*/
    int es_primo = 0;

    /*llenar variables*/
    printf("Ingrese un numero primo:\n");
    scanf("%d", &n);

    /*caso especial para el 1*/
    if (n <= 1) {
        printf("Si es 1 o inferior no es primo\n");
        return 1;
    }
    
    /*buscar primo*/
    
    /*probar cada numero desde 2 hasta n*/
    for (i = 2; i <= n; i++) {
        es_primo = 1; //primo inicialmente
        
        /*verificar si i es primo*/
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                es_primo = 0; //no es primo
                break;
            }
        }
    }
    
    switch (es_primo) {
        case 1: printf("Es primo\n");
        break;

        default: printf("No es primo\n");
        break;
    }
        
    return 0;
}