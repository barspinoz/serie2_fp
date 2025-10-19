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
Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux 12
*/
#include <stdio.h>

int main(){
	/*variables de entrada*/
	int numero[5];
	/*intermedias*/
	int i = 0;
	int j = 0;
	int k = 0;
	/*variables de salida*/
	int m = 0;
	
	/*dar valores*/
	printf("\n Ingrese cinco valores: \n");
	for (i = 0; i < 5; i++) {
		printf("Numero %d: ", i + 1);
		scanf("%d", &numero[i]);	
	}

	/*ordenamiento mediante algoritmo burbuja*/
	for (i = 0; i < 4; i++) {
        m = i;
        for (j = i + 1; j < 5; j++) {
            if (numero[j] < numero[m]) {
                m = j;
            }
        }
		/*intercambio*/
		k = numero[m];
        numero[m] = numero[i];
        numero[i] = k;
	}

	/*imprimir valores*/
	printf("\nValores ordenados: ");
    	for (i = 0; i < 5; i++) {
       		printf("%d ", numero[i]);
    	}
    printf("\n");

	
	return 0;
}//main
