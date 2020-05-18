#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia de control if en donde compararemos tres numeros para saber cual es mayor, menor ó iguales
	*/
	int main(int argc, char *argv[]) {
		
		int numeroUno = 1;
		int numeroDos = 2;
		int numeroTres= 3;
		
		if(numeroUno > numeroDos && numeroUno > numeroTres){
			printf("El número %i es mayor que el número %i y mayor que el número %i",numeroUno,numeroDos, numeroTres);
		}else if(numeroDos > numeroUno && numeroDos > numeroTres){
			printf("El número %i es mayor que el número %i y mayor que el número %i",numeroDos,numeroUno,numeroTres);
		}else if(numeroTres > numeroUno && numeroTres > numeroDos){
			printf("El número %i es mayor que el número %i y mayor que el número %i",numeroTres, numeroUno,numeroDos);
		}else{
			printf("El número %i es igual que el número %i y es igual que el número %i",numeroUno,numeroDos, numeroTres);
		}
		
		
		return 0;
	}

