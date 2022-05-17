#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Crear un programa que me defina respecto a dos numero
	-cual es mayor 
	-cual es menor
	*/
	
	/*
		pseudocodigo
		diagrama de flujo
			
	*/
	int a,b;
	
	printf("\nDame un valor del primer Numero:");
		scanf("%i",&a);
	
	printf("\nDame un valor del segundo Numero:");
		scanf("%i",&b);
			
		
	if(a>b){
	
		printf("\n El primer valor: %i es mayor",a);
		printf("\n El segundo valor: %i es menor",b);
	
	}else if(b>a){
		
		printf("\n El segundo valor: %i es mayor",b);
		printf("\n El primer valor: %i es menor",a);
	
	}else {
		printf("\n Los dos valores son iguales");
		printf("\n Primer valor: %i \n Sugundo valor: %i",a,b);
	
	}
	
	
	
	
	return 0;
}
