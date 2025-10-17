/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Encontrar los numeros impares hasta un numero N y multiplicarlos
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>
#define MAX 100

int main() {
    int n = 0; //variable de entrada, donde el usuario inrgesara un numero
    int multiplicacion = 1; //variable de salida, donde la operacion se efectuara
    int i = 1; //variable intermedia

    printf("Ingrese un numero N: ");
    scanf("%d", &n);
    
    for(i = 3; i <= n; i += 2) {
        multiplicacion *= i;
        printf(" x %d ", i);
    }

    if (n > 1) {
        multiplicacion *= 1;
        if (multiplicacion <= MAX) {
            printf(" = %d \n", multiplicacion);          
        }
        else {
            printf("= \n ERROR. Numero mayor a 100 \n");
        }
    }
    else {
        printf(" = 1 \n");    
    }
    
    return 0;
}
