/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Nos piden que dado cinco valores determinar su orden creciente
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>
#define MAX 10000 //maximo
#define MIN 100 //minimo

int main(){
    /*entrada*/
    int n = 0;
    /*intermedias*/
    int m = 0;

    printf("== BIENVENIDO. INGRESE UN NUMERO PARA DETERMINAR SI ES MULTIPLO DE 2. ==\n");
    printf("== OJO, NO DEBE SER MULTIPLO DE 5, MENOR A 100 O MAYOR A 10000. ==\n");

    /*llenar entrada*/
    printf("Ingrese su numero:\n");
    scanf("%d", &n);

    /*verificar */
    if (n % 5 == 0) {
        printf("ERROR. Su numero es multiplo de 5.\n");
    }

    else {
        m = n % 2;

        /*verificar si es multiplo o no*/
        if (n >= MIN  || n <= MAX) {
            switch (m) {
            case 0: printf("Su numero es multiplo de 2.\n");
            break;

            default: printf("Su numero no es multiplo de 2.\n");
            break;    
            }
        }
        else {
            printf("ERROR. Su numero es menor a 100 o es mayor a 10000.\n");
        }
    }
    
    return 0;
}