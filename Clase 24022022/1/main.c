#include <stdio.h>
#include <stdlib.h>
#define pulgada 2.54

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	/*
	crear un programa que realice la conversion de centimetros a pulgadas
	
	*/
	
	//Declaracion de variables
	int Centimetros;
	float Pulgadas;
	//1 Pulgada equivale a 2.54 cm
	
	
	printf("\n Conversion de Centimetros a Pulgadas");
	
	printf("\n Ingresa los centimentros a convertir: ");
		scanf("%i",&Centimetros);

	   //scanf(cadena_control, argumento)	
	
	Pulgadas = Centimetros*pulgada;
	
	
	printf("\n %d Centimetros son %.3f Pulgadas",Centimetros,Pulgadas);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
