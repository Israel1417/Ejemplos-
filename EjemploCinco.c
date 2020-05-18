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
		int	bandera=-1;
		
		printf("Ingresa el n%cmero uno: ",163);
		scanf("%d",&numeroUno);
		printf("Ingresa el n%cmero dos: ",163);
		scanf("%d",&numeroDos);
		printf("Ingresa el n%cmero tres: ",163);
		scanf("%d",&numeroTres);
		
	
				
		if(numeroUno > numeroDos && numeroUno > numeroTres){
			printf("El número %i es el mayor de todos \n",numeroUno);
				if(numeroDos > numeroTres){
					printf("El número %i es el menor de todos \n", numeroTres);
				}else if(numeroDos < numeroTres){
					printf("El número %i es el menor de todos \n", numeroDos);
				}else{
					printf("El resto de los números son iguales");
				}
		}else if(numeroDos > numeroUno && numeroDos > numeroTres){
			printf("El número %i es el mayor de todos \n",numeroDos);
				if(numeroUno > numeroTres){
					printf("El número %i es el menor de todos \n", numeroTres);
				}else if(numeroUno < numeroTres){
					printf("El número %i es el menor de todos \n", numeroUno);
				}else{
					printf("El resto de los números son iguales");
				}
		}else if(numeroTres > numeroUno && numeroTres > numeroDos){
			printf("El número %i es el mayor de todos \n",numeroTres);
				if(numeroUno > numeroDos){
					printf("El número %i es el menor de todos \n", numeroDos);
				}else if(numeroUno < numeroDos){
					printf("El número %i es el menor de todos \n", numeroUno);
				}else{
					printf("El resto de los números son iguales");
				}
		}else{
			printf("El número %i es igual que el número %i y es igual que el número %i",numeroUno,numeroDos, numeroTres);
		}
		

		return 0;
	}

