/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Se nos pide sumarle un segundo a determinada hora dada por el usuario
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