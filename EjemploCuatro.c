#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia de control if en donde compararemos tres numeros para saber cual es mayor y el menor
	*/
	int main(int argc, char *argv[]) {
		
		int numeroUno = 8;
		int numeroDos = 8;
		int numeroTres= 15;
		
		if(numeroUno > numeroDos && numeroUno > numeroTres){
			printf("El n�mero %i es el mayor de todos \n",numeroUno);
				if(numeroDos > numeroTres){
					printf("El n�mero %i es el menor de todos \n", numeroTres);
				}else if(numeroDos < numeroTres){
					printf("El n�mero %i es el menor de todos \n", numeroDos);
				}else{
					printf("El resto de los n�meros son iguales");
				}
		}else if(numeroDos > numeroUno && numeroDos > numeroTres){
			printf("El n�mero %i es el mayor de todos \n",numeroDos);
				if(numeroUno > numeroTres){
					printf("El n�mero %i es el menor de todos \n", numeroTres);
				}else if(numeroUno < numeroTres){
					printf("El n�mero %i es el menor de todos \n", numeroUno);
				}else{
					printf("El resto de los n�meros son iguales");
				}
		}else if(numeroTres > numeroUno && numeroTres > numeroDos){
			printf("El n�mero %i es el mayor de todos \n",numeroTres);
				if(numeroUno > numeroDos){
					printf("El n�mero %i es el menor de todos \n", numeroDos);
				}else if(numeroUno < numeroDos){
					printf("El n�mero %i es el menor de todos \n", numeroUno);
				}else{
					printf("El resto de los n�meros son iguales");
				}
		}else{
			printf("El n�mero %i es igual que el n�mero %i y es igual que el n�mero %i",numeroUno,numeroDos, numeroTres);
		}
		
		
		return 0;
	}

