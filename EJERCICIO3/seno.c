/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025

Descripcion del problema: Escribir un programa que calcule la función trigonométrica seno en un punto mediante
la expresión de un desarrollo en serie de la misma. El valor de x se pedirá al usuario, pero sólo se aceptarán
valores comprendidos entre 0 y 20 radianes, considerándose erróneos otros valores. Se considerará que valor
obtenido es correcto cuando el último sumando de la serie anterior sea menor que un error residual máximo e.

Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux 12
*/
#include <stdio.h>
#include <math.h>

int main() {
    double x, error_max;
    int iteraciones = 0;
    
    // Solicitar el valor de x (entre 0 y 20 radianes)
    printf("Introduce el valor de x (entre 0 y 20 radianes): ");
    scanf("%lf", &x);
    
    // Validar que x esté en el rango permitido
    if (x < 0 || x > 20) {
        printf("Error: x debe estar entre 0 y 20 radianes.\n");
        return 1;
    }
    
    // Solicitar el error residual máximo
    printf("Introduce el error residual máximo (e): ");
    scanf("%lf", &error_max);
    
    // Calcular sen(x) usando la función de la biblioteca estándar
    double seno_libreria = sin(x);
    
    // Calcular sen(x) usando el desarrollo en serie de Taylor
    double seno_serie = 0.0;
    double termino;
    int i = 0;
    
    do {
        // Calcular el término actual: (-1)^i * x^(2i+1) / (2i+1)!
        termino = pow(-1, i) * pow(x, 2*i+1) / tgamma(2*i+2);
        
        // Agregar el término a la serie
        seno_serie += termino;
        
        // Incrementar contadores
        i++;
        iteraciones++;
        
    } while (fabs(termino) >= error_max);
    
    // Mostrar resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Valor de sen(x) usando sin(x): %.10f\n", seno_libreria);
    printf("Valor de sen(x) usando la serie: %.10f\n", seno_serie);
    printf("Número de iteraciones realizadas: %d\n", iteraciones);
    printf("Diferencia entre ambos métodos: %.10f\n", fabs(seno_libreria - seno_serie));
    
    return 0;
}
