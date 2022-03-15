#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int edad;
	int dinero=500;
	int cuota_pase=1000;
	
	printf("\nIngreso a un BAR");
	printf("\nCadenero: ¿Cual es tu edad?");
	printf("\nAlumn@: tengo 18");
	printf("\nCadenero: me permites tu IFE");	
	printf("\nAlumn@:Le da IFE");
	
	printf("\n Cadenero valida los datos");
	
	/*Validacion de datos con una estructura de control de toma de decision*/
	edad=17;
	
	if(edad>=18  || dinero >= cuota_pase ){
		printf("\nPuedes pasar, Disculpe se ve muy joven");
		printf("\nAlumno: cuanto me queda $%i",dinero-cuota_pase );
		
	}else{
		
		printf("\n\nAlumn@: Pos vamos a casa, ya que, se intento ");
	}
	

	
	/*
	if(Condicion){
		bloque de instruciones
	}
	*/
	
	
	/*
	if(Condicion){ ->si
		bloque de instruciones
	}else{->
		
		bloque de instruciones
	
	}
	*/
	
	
	

	return 0;
}
