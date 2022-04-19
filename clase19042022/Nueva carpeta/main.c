#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nivel;
	float salario, slanuevo;
	
	printf("\n Tabla de antiguedad:");
	printf("\n 5 anios -> .05 \n 10 anios -> .10 \n 15 anios -> .15 \n 20 anios -> .20");
	
	printf("\n Ingresa el nivel de antiguedad de tu trabajador: ");
		scanf("%d",&nivel);
	
	printf("\n Ingresa el salario de tu empleado: ");
		scanf("%f",&salario);
		
	switch(nivel){
		
		case 5:
			slanuevo=salario+(salario*.05);
			printf("\n\t Tu nuevo salario es de: %f",slanuevo);	
			break;
		case 10:	
			slanuevo=salario+(salario*.10);
			printf("\n\t Tu nuevo salario es de: %f",slanuevo);	
			break;
		case 15:	
			slanuevo=salario+(salario*.15);
			printf("\n\t Tu nuevo salario es de: %f",slanuevo);	
			break;
		case 20:	
			slanuevo=salario+(salario*.20);
			printf("\n\t Tu nuevo salario es de: %f",slanuevo);	
			break;	
			
		default:
			printf("\n Tu salario es de: %f ",salario);
	}	
	
	return 0;
}
