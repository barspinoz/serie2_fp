# Serie 2 de Fundamentos de Programación

## Facultad de Ingeniería. UNAM

Espinosa Salvador Roman.

# EJERCICIOS

### EJERCICIO 1
Escribir un programa que muestre por pantalla un cuadrado de dígitos para un valor de n solicitado al usuario.

[Código](/EJERCICIO1/cuadrado.c)

![FUNCIONAMIENTO](/caps/caps1/1.gif)

### EJERCICIO 2
Escribir un programa que solicite un número entero N, y que para todo múltiplo X de N menor que 100, calcule el producto de todos los números impares menores que X. El programa deberá mostrar el valor de la suma de todos los productos calculados.

[Código](/EJERCICIO2/impares.c)

### EJERCICIO 3
Escribir un programa que calcule la función trigonométrica seno en un punto mediante la expresión de un desarrollo en serie de la misma. El valor de x se pedirá al usuario, pero sólo se aceptarán valores comprendidos entre 0 y 20 radianes, considerándose erróneos otros valores. Se considerará que valor obtenido es correcto cuando el último sumando de la serie anterior sea menor que un error residual máximo e (solicitado al usuario). El programa debe mostrar:
+ El valor de sen(x) obtenido utilizando la siguiente instrucción en C: sin(x);
+ El valor de sen(x) calculado haciendo uso del desarrollo en serie anterior.
+ El número de iteraciones realizadas para obtener el último valor.

[Código](/EJERCICIO3/seno.c)

### EJERCICIO 4
Diseñar un algoritmo y realizar su implementación que lea tres números A , B , C y visualice en pantalla el valor del más grande. Se supone que los tres valores son diferentes.

[Código](/EJERCICIO4/mayor.c)

### EJERCICIO 5
Hacer un algoritmo al que le damos la hora HH , MM , SS y nos calcule la hora dentro de un segundo. Leeremos las horas minutos y segundos como números enteros. Implementar el algoritmo en lenguaje C.

[Código](/EJERCICIO5/hora.c)

### EJERCICIO 6
Diseñar un programa que permita realizar diferentes tipos de conversiones de monedas. El usuario debe seleccionar un tipo de conversión desde el menú principal. Por ejemplo:
1. Dólares a pesos
2. Pesos a dólares
3. Pesos a euros
4. Euros a pesos
5. Dólares a euros
6. Euros a dólares

[Código](/EJERCICIO6/cambiomonedas.c)

![FUNCIONAMIENTO](/caps/caps6/6.gif)

### EJERCICIO 7
Escribir un programa que lea la calificación de un examen por teclado y devuelva la calificación no numérica correspondiente. La calificación podrá ser: No aprobado (0-4.99), Aprobado (5-6.99), Notable (7- 8.99), Sobresaliente (9-9.99) o Excelente (10). Realizar este ejercicio utilizando la sentencia de control switch.

[Código](/EJERCICIO7/calificacion.c)

### EJERCICIO 8
Repetir el ejercicio anterior pero utilizando la sentencia de control if-else.

[Código](/EJERCICIO8/calificacion_if-else.c)

### EJERCICIO 9
Mejorar el ejercicio anterior de modo que si el usuario introduce un valor menor que cero o un valor mayor que 10 se muestre por pantalla un mensaje de error.

[Código](/EJERCICIO9/calificacion.c)

### EJERCICIO 10
Escribir un programa que lea cuatro números cualesquiera y determine cuál es el mayor. También deberá considerar el caso en el que los números sean iguales.

[Código](/EJERCICIO10/mayor4.c)

### EJERCICIO 11
Escribir un programa que lea cuatro números enteros y determine cuál es el menor. También debe considerar el caso en el que los números sean iguales.

[Código](/EJERCICIO11/menor.c)

### EJERCICIO 12
Escribir un programa que lea cinco números cualesquiera y emita un mensaje indicando si están o no ordenados en orden creciente.

[Código](/EJERCICIO12/ORDEN2.c)

### EJERCICIO 13
Escribir un programa que lea números enteros de teclado hasta que encuentre uno que cumpla las siguientes condiciones:
+ Múltiplo de 2.
+ No múltiplo de 5.
+ Mayor que 100.
+ Menor que 10.000.

### EJERCICIO 14
Escribir un programa que diga si un número es primo o no.

### EJERCICIO 15
Leer 10 valores desde teclado y mostrar la media de los pares y la media de los impares. Hacer tres versiones, con un bucle: for, while y do-while. Repetir el ejercicio considerando que el número de valores se le solicita al usuario.

### EJERCICIO 16
Escribir un programa que pidiendo un valor N seguido de N números, calcule el máximo y mínimo de ese conjunto de N números.

### EJERCICIO 17
Calcula la media de las notas de un conjunto de alumnos. La introducción de datos finaliza cuando el valor de la nota es –1.

### EJERCICIO 18
Los empleados de una fábrica trabajan en dos turnos: diurno y nocturno. Se desea calcular el pago diario de acuerdo con los siguientes puntos:
1. la tarifa de las horas diurnas es de $5,
2. la tarifa de las horas nocturnas es de $8,
3. caso de ser domingo, la tarifa se incrementará en $2 el turno diurno y $3 el turno nocturno.

### EJERCICIO 19
Implementar el algoritmo para imprimir la suma de los números impares menores o iguales a N.

### EJERCICIO 20
Una persona invierte $1000.00 en una cuenta de ahorro con un 5% de interés. Se asume que todo el interés se deja en depósito de la cuenta; calcule y despliegue el monto acumulado de la cuenta al final de cada año, durante 10 años. Utilice la siguiente fórmula para determinar estos montos:

`a = p(1 + r)n`

donde:
+ p es el monto de la inversión original (inversión principal)
+ r tasa de interés anual
+ n número de años
+ a es el monto del depósito al final del año n.
