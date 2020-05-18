#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia uif para saber si un numero ingresado 
	* por el usuario es multiplo de dos.
	*/
	int main(int argc, char *argv[]) {
	
	int numeroIngresado = 0;
	int residuo = 0;
		
		printf("Ingresa un número por favor: ");
		scanf("%d",&numeroIngresado);
		residuo = numeroIngresado%2
		
		if(residuo== 0){
			printf("Número %i es multiplo de 2",numeroIngresado);	
		}else{
				printf("Número %i no es multiplo de 2",numeroIngresado);	
		}
		
		
		return 0;
	}

