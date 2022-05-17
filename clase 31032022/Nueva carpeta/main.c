#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		float calificacion;
	
	printf("\t ----- Calificaciones Chiditas-----");
	
	printf("\n Introdusca la calificacion:");
		scanf("%f",&calificacion);
		
		
		while(calificacion < 0 || calificacion >10){
		
			printf("\n\t --ERROR DE CAPTURA: \n Por cuestiones de normatividad, la calificacion asentada esta fuera de las reglas establecidas por esta institucion");
			printf("\n INTRODUCION UNICAMENTE VALORES REALES: ");
			scanf("%f",&calificacion);
		}
		
	
	if(calificacion >= 6){
		printf("\nAprobado");
	}else{
		
		printf("\nUsted esta REPROBADO");
	}
	
	
	return 0;
}
