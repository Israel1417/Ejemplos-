#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia uif para saber si un numero ingresado 
	* por el usuario es multiplo de dos.
	*/
	int main(int argc, char *argv[]) {
	
	int numeroIngresado = 0;
	int residuo = 0;
		
		printf("Ingresa un n�mero por favor: ");
		scanf("%d",&numeroIngresado);
		residuo = numeroIngresado%2
		
		if(residuo== 0){
			printf("N�mero %i es multiplo de 2",numeroIngresado);	
		}else{
				printf("N�mero %i no es multiplo de 2",numeroIngresado);	
		}
		
		
		return 0;
	}

