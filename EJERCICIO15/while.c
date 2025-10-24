/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 24 de octubre del 2025

Descripcion del problema: Leer 10 valores desde teclado y mostrar la media de los pares y la media de los impares.
Hacer tres versiones, con un bucle: for, while y do-while. Repetir el ejercicio considerando que el numero de
valores se le solicita al usuario.

Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux 12
*/
#include <stdio.h>

int main() {
    int numero = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int contadorPares = 0;
    int contadorImpares = 0;
    int i = 0;
    
    printf("Ingrese 10 valores:\n");
    
    while(i < 10) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numero);
        
        if(numero % 2 == 0) {
            sumaPares += numero;
            contadorPares++;
        }
        else {
            sumaImpares += numero;
            contadorImpares++;
        }
        i++;
    }
    
    printf("\n--- RESULTADOS ---\n");
    if(contadorPares > 0) {
        printf("Media de pares: %.2f\n", (float)sumaPares / contadorPares);
    }
    else {
        printf("No se ingresaron números pares\n");
    }
    
    if(contadorImpares > 0) {
        printf("Media de impares: %.2f\n", (float)sumaImpares / contadorImpares);
    }
    else {
        printf("No se ingresaron números impares\n");
    }
    
    return 0;
}
