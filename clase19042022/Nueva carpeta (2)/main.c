#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int numero;
	int opcion;
	
	
	
	do{
	
		printf("\n 1.- Suma a tu variable 2 numeros");
		printf("\n 2.- Restar a tu variable 3 numeros");
		printf("\n 3.- Obetner el cuadrado de tu variable");
		printf("\n 4.- Salir");
		
		printf("\nIngresa tu opcion");
			scanf("%d",&opcion);
	
			switch(opcion){
				
				case 1:
					printf("\n Ingresa tu numero:");
					scanf("%d",&numero);
					printf("Resultado de la suma de dos numeros a la variable es: %d",numero+2);
					break;	
					
				case 2:
					printf("\n Ingresa tu numero:");
					scanf("%d",&numero);
					printf("Resultado de la resta de tre numeros a la variable es: %d",numero-2);
					break;	
				case 3:
					printf("\n Ingresa tu numero:");
					scanf("%d",&numero);
					printf("Resultado cuadrado de la variable es: %d",numero*numero);
					break;	
		}
	}while(opcion!=4);
	
	
	return 0;
}
