#include <iostream>
#include <stdio.h>
#include <string.h>
#define TAMANIO 81 // Tamaño maximo de una palabra

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Declaracion de Funciones
void Introducir_frase (char frase[]){
	
 printf ("Introducir una frase: ");
 gets (frase); 
 /*
 *La función gets() recibe como único argumento la variable en la que debe almacenarse
 * una entrada de usuario que va a ser considerada como una cadena de caracteres.
 */
 fflush (stdin);
 /*
 * realiza la limpieza del buffer de entrada (stdin) standar input. 
 *usualmente quedan almacenados algunos datos en el buffer sobre todo 
 *saltos de linea y espacio y se debería usar antes de cada scanf con el
 * fin de garantizar que el buffer este limpio.
 *
 */

 }
 
 
 
int Comprobar_frase (char frase[]){
 	int longitud=strlen(frase);
 	
 	/*
	 *strlen: Devuelve la longitud de una cadena de texto
	 */
	 //oso
	 /*
	 *frase [0]=o
	 *frase [1]=s
	 *frase [2]=o
	 */
 
 	int i=0;
 
 while (i<=longitud/2 && frase[i]==frase[longitud-1-i]){
 	 i++;
 	 
 	 /*
 	 *Comparacion por caracter en igualdad
 	 *
	 *
	  */
  }
  
 if (i>longitud/2)
 
  	 	return 1;
  	 	
    else{
  		 return 0;
   }
   
   
   
}
 


//Funcion principal
int main(int argc, char** argv) {
	
	char palindroma[81];//declarar la variable
	
  	
	Introducir_frase (palindroma);//Uso de la funcion Introducir frase
	//4
	if (Comprobar_frase (palindroma)){
			printf ("Dicha frase es palindroma.");
	}
 	else{
 		printf ("Dicha frase no es palindroma.");
				
	 }

  	
  	getchar();
 	
	 
	return 0;
}
