/*
(Copyright 2025 Roman Espinosa)
Este software se distribuye bajo los terminos de la GPL de GNU.
*/
/*This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program.
If not, see <https://www.gnu.org/licenses/>.
*/
/*
Hecho por Roman Espinosa Salvador
Ultima revision hecha el 17 de octubre del 2025
Descripcion del problema: Nos piden que dado cinco valores determinar su orden creciente
Este programa se compilo usando gcc 12.2.0 para Debian GNU+Linux
*/
#include <stdio.h>

int main () {
   /*intermediass*/
   int hd = 5; //horas diurnas
   int hv = 8; //horas vespertinas
   int dia = 0;
   /*entradas*/
   int horas = 0;
   int turno = 0;
   /*salidas*/
   int total = 0;

   /*llenar datos*/
   printf("== SELECCIONE SU TURNO ==\nDIURNO(0)\nVESPERTINO(1)\n");
   scanf(" %d", &turno);

   printf("== SELECCIONE EL DIA ==\n LUNES(1) MARTES(2) MIERCOLES(3) JUEVES(4) VIERNES(5) SABADO(6) DOMINGO(7)\n");
   scanf("%d", &dia);

   printf("INGRESE LAS HORAS TRABAJADAS: ");
   scanf("%d", &horas);

   /*aumento de fin de semana*/
   if (dia == 6 || dia == 7) {
      hd += 2;
      hv += 3;
      printf("USTED TRABAJO EN SABADO/DOMIGO, SE AUMENTARA SU SALARIO\n");
   }
   else {
      printf("USTED TRABAJO ENTRE SEMANA\n");
   }

   /*horas trabajadas*/
   switch(turno) {
	case 0: total = horas * hd;
	printf("USTED TRABAJO %d HORAS, SU PAGO ES DE %d \n", horas, total);	
	break;

	case 1: total = horas * hv;
	printf("USTED TRABAJO %d HORAS, SU PAGO ES DE %d PESOS\n", horas, total);
	break;

	default: printf("NADA POR HACER\n");
	break; 
   }
   
   return 0;
}
