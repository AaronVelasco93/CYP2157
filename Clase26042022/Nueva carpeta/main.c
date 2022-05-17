#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
   entero suma(a,b,c){
 	1+2=3
 	
 	return 3
 }
*/

void hola(void){
	printf("\n Esta es la funcion Hola");

}


int suma(int a , int b){

	int resultado;
	resultado = a + b;
	
	return resultado;
}


int RestaDosNumeros(int a, int b){
	int resultadoResta;
	resultadoResta= a-b;
	
	
	return resultadoResta;	
}


void adios(void){
	
	printf("\nEste es un mensaje de despedida");
}





int PintaY( int y){
	
	long int l;
	
	l=y*y;
	return l;
	
}

int PintaX(int x){
	
	int b;
	b=x+10;
	
	printf("%i",b);
	
}

int main(int argc, char *argv[]) {
	
	printf(PintaX(2));


	
/*
	int datoFuncion;
	int numero2;
	
	int resultado;
	
	datoFuncion = PintaX(45);
	
	numero2=10;
	
	resultado=datoFuncion+numero2;
	printf("\n Resultado: %i",resultado);
*/	
	/*
	
	una funcion que me diga de dos numero, cual es el menor y mayor.
	
	
	*/
	
	
	
/*
	int total;
	hola();

	total= suma(2,10);
	printf("\nTotal: %d",total);
*/

/*
	int a =15;
	int b=5;
	int resultado;
	
	
	resultado = a - b;
	
	printf("La resta de %d - %d = %d",a,b,resultado);
	
*/
/*

printf("Resultado: %d",RestaDosNumeros(15,8));
	
		
	*/
	
	
	return 0;
}




/*	
	Declaracion de datos globales
		
	tipo-devuelto nombre-funcion(parametros){
	
	instrucciones a realizar

}
*/
