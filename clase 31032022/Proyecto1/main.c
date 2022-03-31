#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	int inicio;
	for(inicio=1;inicio<=45;inicio++){
		
		//printf("\n%i",inicio);
		printf("\n Iteracion No = %i ",inicio);
	}
	*/
	
	
	/*
	
	int numero =10;
	
	
	printf("\nNumero= %i",numero++);

	printf("\nNumero= %i",numero);
	
	
	
	printf(" \n-----------------------");
	
	
	int datos =8;
	
	printf("\n Dato = %i",++datos);
	
	printf("\n Dato = %i",datos);
	*/
	/*
	3 X 1 = 3
	3 X 2 = 6
	3 x 3 = 9
	3 X 10 = 30*/
	
	/*
	printf("\n \t-------Tabla de multiplicar------");
	
	int tabla;
	int operacion;
	for (tabla=1;tabla<=10;tabla++){
		operacion=tabla*3;
		printf("\n 3 X %i = %i",tabla,operacion);
	}
	*/
	

	int numero;
	printf("\t\t ----------- Numeros al cuadrado-------------");
	for(numero=1; numero<=10;numero++){
		
		printf("\n%.0f", pow(numero,2) );	
		// pow (variable, potencia);
	}

	/*
	
	//Ejemplo de uso de funcion Pow (elevar al cuadrado)
	//Ejemplo de funcion sqrt (obtener la raiz cuadrada)
	int tirar=9;
	
	int resultado;
	
	//resultado = pow(tirar,2);
	resultado= sqrt(tirar);
	
	printf("%i",resultado);
	*/
	
	
	
	
	return 0;
}
