#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia de control if en donde compararemos tres numeros ingresados por el usuario para saber cual es mayor y el menor
	*/
	int main(int argc, char *argv[]) {
		
		int numeroUno = 0;
		int numeroDos = 0;
		int numeroTres= 0;
		int bandera=0;
		
		while(bandera>=0){
		
		printf("Ingresa el n%cmero uno: ",163);
		scanf("%d",&numeroUno);
		printf("Ingresa el n%cmero dos: ",163);
		scanf("%d",&numeroDos);
		printf("Ingresa el n%cmero tres: ",163);
		scanf("%d",&numeroTres);
		
		
		
		if(numeroUno > numeroDos && numeroUno > numeroTres){
			if(numeroDos > numeroTres){
			printf("\n %i \n %i \n %i \n", numeroUno, numeroDos, numeroTres);
			printf("El n%cmero %i es mayor que todos, el n%cmero %i es menor que el n%cmero %i pero mayor que el n%cmero %i \n", 163, numeroUno, 163, numeroDos, 163, numeroUno, 163, numeroTres);
			}else if(numeroDos < numeroTres){
				printf("\n %i \n %i \n %i \n", numeroUno, numeroTres, numeroDos);
				printf("El n%cmero %i es mayor que todos, el n%cmero %i es menor que el n%cmero %i, pero mayor que el n%cmero %i \n", 163, numeroUno, 163, numeroTres, 163, numeroUno, 163, numeroDos);
			}else{
				printf("El n%cmero %i es mayor, el resto de los n%cmeros son iguales", 163, numeroUno, 163);
			}
		}else if(numeroDos > numeroUno && numeroDos > numeroTres){
				printf("Entre aqui.");
			if(numeroUno > numeroTres){
				printf("Entre aqui. 1");
				printf("\n %i \n %i \n %i \n", numeroDos, numeroUno, numeroTres);
				printf("El n%cmero %i es mayor que todos, el n%cmero %i es menor que el n%cmero %i pero mayor al n%cmero %i \n", 163, numeroDos, 163, numeroUno, 163, numeroDos, 163, numeroTres);
			}else if(numeroUno < numeroTres){
				printf("Entre aqui.2");
				printf("\n %i \n %i \n %i \n", numeroDos, numeroTres, numeroUno);
			
			//	printf("El n%cmero %i es mayor de todos, el n%mero %i es menor que el n%cmero %i, pero mayor al n%cmero %i \n", 163, numeroDos, 163, numeroTres, 163, numeroDos, 163, numeroUno);
				printf("El n%cmero %i es mayor de todos, el n%cmero %i es menor que el n%cmero %i, pero mayor al n%cmero %i \n", 163,  numeroDos, 163, numeroTres, 163, numeroDos, 163, numeroUno);

			}else{
				printf("El n%cmero %i es mayor, el resto de los n%cmeros son iguales", 163, numeroDos, 163);
			}
		}else if(numeroTres > numeroUno && numeroTres > numeroDos){
			if(numeroUno > numeroDos){
				printf("\n %i \n %i \n %i \n", numeroTres, numeroUno, numeroDos);
				printf("El n%cmero %i es mayor que todos, el n%cmero %i es menor que el n%cmero %i, pero mayor que el n%cmero %i \n", 163, numeroTres, 163, numeroUno, 163, numeroTres, 163, numeroDos);
			}else if(numeroUno < numeroDos){
				printf("\n %i \n %i \n %i \n", numeroTres, numeroDos, numeroUno);
				printf("El n%cmero %i es mayor que todos, el n%cmero %i es menor que el n%cmero %i, pero mayor que el n%cmero %i \n", 163, numeroTres, 163, numeroDos, 163, numeroTres, 163, numeroUno);
			}else{
				printf("El n%cmero %i es mayor, el resto de los n%cmeros son iguales", 163, numeroTres,163);
			}
		}else{
			printf("\n %i \n %i \n %i \n", numeroUno, numeroDos, numeroTres);
			printf("Todos los n%cmeros son iguales \n", 163);
		}
		
		printf("Si deseas continuar ingresa [0], si deseas salir ingresa [-1]");
		scanf("%d", &bandera);
		
	}

		
			
		return 0;
	}

