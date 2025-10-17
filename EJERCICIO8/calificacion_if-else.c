/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Encontrar los numeros impares hasta un numero N y multiplicarlos
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>

int main(){
    /*entrada*/
    float calificacion = 0;
    /*salidas*/
    int caso = 0;

    printf("Escriba su calificacion:\n");
    scanf("%f", &calificacion);

    /*verificar la calificacion*/    
    if (calificacion < 0 || calificacion > 10) {
        printf("ERROR. Su calificacion NO ES VALIDA.\n");
    }

    /*categorizar*/
    caso = (int)calificacion;

    /*determinar el estado de aprobacion*/
    /*no aprobo*/
    if (caso <= 4) {
        printf("Usted NO APROBO\n");    
    }
    else {
        if (caso == 5 || caso == 6) {
            printf("Usted APROBO\n"); //aprobo
        }
        else {
            if (caso == 7 || caso == 8) {
                printf("Usted aprobo NOTABLEMENTE\n"); //notablemente
            }
            else {
                if (caso == 9) {
                    printf("Usted aprobo de forma SOBRESALIENTE\n"); //sobresaliente
                }
                else {
                    if (caso == 10) {
                        printf("Usted aprobo de forma EXCELENTE\n"); //excelente
                    }
                }
                }
            
        }
    }

    return 0;
}