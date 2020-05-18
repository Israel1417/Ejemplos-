#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia if para saber si un usuario es mayor o menor de edad en México
	*/
	int main(int argc, char *argv[]) {
	

		int mayoriaEdadMexico = 18;
		int edadIngresada = 0;
		
		printf("Por favor ingresa tu edad: ");
		scanf("%d",&edadIngresada);
		
	
		if(edadIngresada >= mayoriaEdadMexico){
			printf("Eres mayor de edad.");
		}else{
			printf("Eres menor de edad.");
		}
		
		return 0;
	}

