#include <stdio.h>
#include <stdlib.h>


/**
* Ejemplo de sentencia de control if en donde compararemos dos numeros para saber cual es mayor, menor � igual
*/
int main(int argc, char *argv[]) {
	
	int numeroUno = 64;
	int numeroDos = 64;
	
	if(numeroUno > numeroDos){
		printf("El n�mero %i es mayor que el n�mero %i",numeroUno,numeroDos);
	}else if(numeroUno < numeroDos  ){
		printf("El n�mero %i es menor que el n�mero %i",numeroUno,numeroDos);
	}else{
		printf("El n�mero %i es igual que eln�mero %i",numeroUno,numeroDos);
	}

	
	return 0;
}
