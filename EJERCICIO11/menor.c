/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 16 de octubre del 2025
Descripcion del problema: Nos piden que dado cuatro valores determinar el menor
Este programa se compilo usando clang 19.1.7 para FreeBSD
*/
#include <stdio.h>

int main(){
	/*variables de entrada*/
	float a=0;
	float b=0;
	float c=0;
	float d=0;
	
	/*variables de salida*/
	float m=0;
	
	/*dar valores*/
	printf("\n Ingrese cuatro valores: \n");
	scanf(" %f %f %f %f", &a, &b, &c, &d);
	
	/*el menor es b*/
	if(a > b && c > b && d > b) {
		m=b;
	}//if
	
	/*el menor es a*/
	if(b > a && c > a && d > a) {
		m=a;
	}//if
	
	/*el menor es c*/
	if(a > c && b > c && d > c) {
		m=c;
	}//if
	/*el mayor es d*/
	if (a > d && b > d && c > d) {
		m=d;
	}//if
	
	/*resultado*/
	if(a != b && a != c && b != c && a != d && d != b && d != c) {
		printf("\n El menor es: %f \n",m);
	}
	else {
		printf("\n ERROR. Vuelva a ingresar los valores. \n");
	}
	return 0;
}//main
