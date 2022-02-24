#include <stdio.h>
#include <stdlib.h>

/*
librerias
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { //funcion principal

			/*SUMA DE DOS NUMERO ENTEROS*/

	//declaracion de variables
	int a;
	int b;
	int resultado;
	
	//presentacion del programa
	printf("--SUMA DE DOS NUMERO ENTEROS--\n");
	
	
	//Lectura de datos apartir de la variable a
	printf("Ingresa el primer numero: ");
		scanf("%i",&a);
		
	//Lectura de datos apartir de la variable b	
	printf("Ingresa el segundo numero: ");
		scanf("%i",&b);
	
	//Operacion o logica programable
	resultado = a+b;
	
	
	//Salida de resultado
	printf("\n %d",resultado);//concotenando el resultado de la operacion
	
	
	return 0;
}
