/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Nos piden que dado cinco valores determinar su orden creciente
Este programa se compilo usando clang 19.1.7 para FreeBSD
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
