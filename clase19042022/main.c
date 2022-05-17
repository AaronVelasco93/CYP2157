#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("\n\t ---- Dias de la semana------");
	
	printf("\n ¿Que dia de la semana quieres?");
		scanf("%d",&a); 
	switch (a){
		
		case 1:
			printf("\nLunes");
			break;
		case 2:
			printf("\nMartes");
			break;
		case 3:
			printf("\nMiercoles");	
			break;
		case 4:
			printf("Jueves");
			break;	
		case 5:
			printf("\n Viernes");
			break;
		case 6:
			printf("\nSabado");
			break;
		case 7:
			printf("\n Domingo");
			break;
		default:
			printf("Fuera de rango");
			
	}
	
	/*
printf("\n\n----------------------------------");

	if(a==1){
		printf("\nEstas en el caso 1");
	}else if(a==2){
		printf("\nEstas en el caso 2");
	}else if (a==3){
		printf("\nEstas en el caso 3");
	}
	*/
	
	return 0;
}
