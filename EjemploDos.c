#include <stdio.h>
#include <stdlib.h>


/**
* Ejemplo de sentencia de control if en donde compararemos dos numeros para saber cual es mayor, menor ó igual
*/
int main(int argc, char *argv[]) {
	
	int numeroUno = 64;
	int numeroDos = 64;
	
	if(numeroUno > numeroDos){
		printf("El número %i es mayor que el número %i",numeroUno,numeroDos);
	}else if(numeroUno < numeroDos  ){
		printf("El número %i es menor que el número %i",numeroUno,numeroDos);
	}else{
		printf("El número %i es igual que elnúmero %i",numeroUno,numeroDos);
	}

	
	return 0;
}
