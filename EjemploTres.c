#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia de control if en donde compararemos tres numeros para saber cual es mayor, menor � iguales
	*/
	int main(int argc, char *argv[]) {
		
		int numeroUno = 1;
		int numeroDos = 2;
		int numeroTres= 3;
		
		if(numeroUno > numeroDos && numeroUno > numeroTres){
			printf("El n�mero %i es mayor que el n�mero %i y mayor que el n�mero %i",numeroUno,numeroDos, numeroTres);
		}else if(numeroDos > numeroUno && numeroDos > numeroTres){
			printf("El n�mero %i es mayor que el n�mero %i y mayor que el n�mero %i",numeroDos,numeroUno,numeroTres);
		}else if(numeroTres > numeroUno && numeroTres > numeroDos){
			printf("El n�mero %i es mayor que el n�mero %i y mayor que el n�mero %i",numeroTres, numeroUno,numeroDos);
		}else{
			printf("El n�mero %i es igual que el n�mero %i y es igual que el n�mero %i",numeroUno,numeroDos, numeroTres);
		}
		
		
		return 0;
	}

