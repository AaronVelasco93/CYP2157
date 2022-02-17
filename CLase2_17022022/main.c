#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n1;
	int n2;
	int suma;
	
	printf("\n Introduce el primer numero: ");
		scanf("%d",&n1);
		
	printf("\n Introduce el segundo numero: ");
		scanf("%d",&n2);
	
	suma= n1 +n2;
	printf("\n La suma de: %d + %d = %d ",n1,n2,suma);	
	
	
	
	return 0;
}
