/*
(Copyright 2025 Roman Espinosa. Este software se distribuye bajo los terminos de la GPL de GNU)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 

*/
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
