/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Nos piden que dado tres valores A, B y C determinar el mayor
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>

int main(){
	/*variables de entrada*/
	float a=0;
	float b=0;
	float c=0;
	
	/*variables de salida*/
	float m=0;
	
	/*dar valores*/
	printf("\n Ingrese tres valores: \n");
	scanf(" %f %f %f", &a, &b, &c);
	
	/*el mayor es b*/
	if(a < b && c < b) {
		m=b;
	}//if
	
	/*el mayor para a*/
	if(b < a && c < a) {
		m=a;
	}//if
	
	/*el mayor es c*/
	if(a < c && b < c) {
		m=c;
	}
	
	/*resultado*/
	if(a != b && a != c && b != c) {
		printf("\n El mayor es: %f \n",m);
	}
	else {
		printf("\n ERROR. Vuelva a ingresar los valores. \n");
	}
	return 0;
}//main
