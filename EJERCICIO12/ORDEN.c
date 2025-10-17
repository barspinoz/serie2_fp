/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Nos piden que dado cinco valores determinar su orden creciente
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>

int main(){
	/*variables de entrada*/
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float e = 0;
	/*intermedias*/
	float i = 0;
	/*variables de salida*/
	float m = 0;
	
	/*dar valores*/
	printf("\n Ingrese cinco valores (no mayores a 10): \n");
	scanf(" %f %f %f %f %f", &a, &b, &c, &d, &e);

	/*verificar*/
	if (a < 0 || a > 10 && b < 0 || b > 10 && c < 0 || c > 10 && d < 0 || d > 10 && e < 0 || e > 10) {
		printf("ERROR 1. Valores no permitidos");
	}
	
	/*el mayor es b*/
	if(a < b && c < b && d < b && e < b) {
		m=b;
	}//if
	
	/*el mayor es a*/
	if(b < a && c < a && d < a && e < a) {
		m=a;
	}//if
	
	/*el mayor es c*/
	if(a < c && b < c && d < c && e < c) {
		m=c;
	}//if

	/*el mayor es d*/
	if (a < d && b < d && c < d && e < d) {
		m=d;
	}//if

	/*el mayor es e*/
	if (a < e && b < e && c < e && d < e) {
		m=e;
	}//if
	
	/*resultado*/
	if(a != b && a != c && b != c && a != d && d != b && d != c) {
		/*imprimir en orden*/
		printf("\nEl orden es:\n");
		for (i = 1; i <= m; i++) {
			printf(" %.f\n", i);
    	}
	}
	else {
		printf("\nERROR 2. Vuelva a ingresar los valores. \n");
	}
	
	return 0;
}//main
