#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia de control if en donde compararemos tres numeros ingresados por el usuario para saber cual es mayor y el menor
	
	* isivroes@gmail.com
	*/
	int main(int argc, char *argv[]) {
		
		int numeroUno = 0;
		int numeroDos = 0;
		int numeroTres= 0;
		int	bandera= 0;
		
		while(bandera >= 0){
		
		printf("Ingresa el n%cmero uno: ",163);
		scanf("%d",&numeroUno);
		printf("Ingresa el n%cmero dos: ",163);
		scanf("%d",&numeroDos);
		printf("Ingresa el n%cmero tres: ",163);
		scanf("%d",&numeroTres);
		
						
		if(numeroUno > numeroDos && numeroUno > numeroTres){
			printf("El n%cmero %i es el mayor de todos \n", 163, numeroUno);
				if(numeroDos > numeroTres){
					printf("El n%cmero %i es el menor de todos \n", 163, numeroTres);
				}else if(numeroDos < numeroTres){
					printf("El n%cmero %i es el menor de todos \n", 163, numeroDos);
				}else{
					printf("El resto de los n%cmeros son iguales \n", 163);
				}
		}else if(numeroDos > numeroUno && numeroDos > numeroTres){
			printf("El n%cmero %i es el mayor de todos \n", 163, numeroDos);
				if(numeroUno > numeroTres){
					printf("El n%cmero %i es el menor de todos \n", 163, numeroTres);
				}else if(numeroUno < numeroTres){
					printf("El n%cmero %i es el menor de todos \n", 163, numeroUno);
				}else{
					printf("El resto de los n%cmeros son iguales \n", 163);
				}
		}else if(numeroTres > numeroUno && numeroTres > numeroDos){
			printf("El n%cmero %i es el mayor de todos \n", 163, numeroTres);
				if(numeroUno > numeroDos){
					printf("El n%cmero %i es el menor de todos \n", 163, numeroDos);
				}else if(numeroUno < numeroDos){
					printf("El n%cmero %i es el menor de todos \n", 163, numeroUno);
				}else{
					printf("El resto de los n%cmeros son iguales \n", 163);
				}
		}else{
			printf("El n%cmero %i es igual que el n%cmero %i y es igual que el n%cmero %i \n",163, numeroUno, 163, numeroDos, 163, numeroTres);
		}
					
		printf("Si deseas continuar ingresa [0], si deseas salir ingresa [-1] \n");
		scanf("%d", &bandera);
	}
		
		return 0;
	
	}

