/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 24 de octubre del 2025
Descripcion del problema: Calcula la media de las notas de un conjunto de alumnos.
La introducción de datos finaliza cuando el valor de la nota es –1.
Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux
*/
#include <stdio.h>

int main() {
    //entradas
    float nota = 0;
    //salidas
    float media = 0;
    float suma = 0;
    int contador = 0;
    
    printf("=== CALCULADORA DE MEDIA DE NOTAS ===\n");
    printf("Introduce las notas de los alumnos (-1 para terminar):\n");
    
    //bucle para introducir notas
    while (1) {
        printf("Nota del alumno %d: ", contador + 1);
        scanf("%f", &nota);
        
        //verificar si el usuario quiere terminar
        if (nota == -1) {
            break;
        }
        
        //validar que la nota este en el rango correcto
        if (nota < 0 || nota > 10) {
            printf("Error: La nota debe estar entre 0 y 10. Inténtalo de nuevo.\n");
            continue;
        }
        
        //sumar la nota válida al total
        suma += nota;
        contador++;
    }
    
    //calcular y mostrar resultados
    if (contador > 0) {
        media = suma / contador;
        printf("\n=== RESULTADOS ===\n");
        printf("Total de alumnos: %d\n", contador);
        printf("Suma total de notas: %.2f\n", suma);
        printf("Media de las notas: %.2f\n", media);
    } else {
        printf("\nNo se introdujeron notas válidas.\n");
    }
    
    return 0;
}