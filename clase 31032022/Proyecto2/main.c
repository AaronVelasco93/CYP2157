#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	//declaracion de mi variable
	int variable;


	//Inicializamos
	variable =1;
		
	while( variable <=10){
		
		printf("hola");
		variable++;
	}
	*/
	
	
	float calificacion;
	
	printf("\t ----- Calificaciones Chiditas-----");
	
	printf("\n Introdusca la calificacion:");
		scanf("%f",calificacion);
	
	if(calificacion >= 6){
		printf("\nAprobado");
	}
	
	
	
	return 0;
}
