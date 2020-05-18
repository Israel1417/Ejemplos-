#include <stdio.h>
#include <stdlib.h>

	/**
	* Ejemplo de sentencia de control if en donde compararemos cinco números para saber cual es mayor y el menor
	*/
	
	int main (){
		
		int numeroUno=0;
		int numeroDos=0;
		int numeroTres=0;
		int numeroCuatro=0;
		int numeroCinco=0;
		
		printf("Ingresa el n%cmero uno: ",163);
		scanf("%d",&numeroUno);
		printf("Ingresa el n%cmero dos: ",163);
		scanf("%d",&numeroDos);
		printf("Ingresa el n%cmero tres: ",163);
		scanf("%d",&numeroTres);
		printf("Ingresa el n%cmero cuatro: ",163);
		scanf("%d",&numeroCuatro);
		printf("Ingresa el n%cmero cinco: ",163);
		scanf("%d",&numeroCinco);	
		

		if(numeroUno > numeroDos && numeroUno > numeroTres && numeroUno > numeroCuatro && numeroUno > numeroCinco){
			printf("El n%cmero %i es mayor que todos\n", 163, numeroUno);
	
			if(numeroDos<numeroTres && numeroDos<numeroCuatro && numeroDos<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroDos);
			}else if(numeroTres<numeroDos && numeroTres<numeroCuatro && numeroTres<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroTres);
			}else if(numeroCuatro<numeroDos && numeroCuatro<numeroTres && numeroCuatro<numeroCinco){
				printf("El n%cmero %i es menor que todos \n", 163, numeroCuatro);
			}else if(numeroCinco<numeroDos && numeroCinco<numeroTres && numeroCinco<numeroCuatro){
				printf("El n%cmero %i es menor que todos \n", 163, numeroCinco);
			}else{
				printf("El resto de los n%cmeros son iguales \n", 163);
			}
		}else if(numeroDos>numeroUno && numeroDos>numeroTres && numeroDos>numeroCuatro && numeroDos>numeroCinco){
			printf("El n%cmero %i es mayor que todos \n", 163, numeroDos);
			if(numeroUno<numeroTres && numeroUno<numeroCuatro && numeroUno<numeroCinco){
				printf("el n%cmero %i es menor que todos, \n", 163, numeroUno);
				}else if(numeroTres<numeroUno && numeroTres<numeroCuatro && numeroTres<numeroCinco){
					printf("El n%cmero %i es menor que todos \n", 163, numeroTres);
				}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
					printf("El n%cmero %i es menor que todos \n", 163, numeroCuatro);
				}else if(numeroCinco<numeroUno && numeroCinco<numeroTres && numeroCinco<numeroCuatro){
					printf("El n%cmero %i es menor que todos \n", 163, numeroCinco);
				}else{
				printf("El resto de los n%cmeros son iguales", 163);
				}
		}else if(numeroTres>numeroUno && numeroTres>numeroDos && numeroTres>numeroCuatro && numeroTres>numeroCinco){
			printf("El n%cmero %i es mayor que todos \n", 163, numeroTres);
			if(numeroUno<numeroDos && numeroUno<numeroCuatro && numeroDos<numeroCinco){
				printf("El n%cmero %i es memor que todos \n", 163, numeroUno);
			}else if(numeroDos<numeroUno && numeroDos< numeroCuatro && numeroDos<numeroCinco){
				printf("El n%cmero %i es menor que todos \n", 163, numeroDos);
			}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
				printf("El n%cmero %i es menor que todos \n", 163, numeroCuatro);
			}else if(numeroCinco<numeroUno && numeroCinco<numeroDos && numeroCinco<numeroCuatro){
				printf("El n%cmero %i es menor que todos \n", 163, numeroCinco);
			}else{
				printf("El resto de los n%cmeros son iguales", 163);
			}
			
		}else if(numeroCuatro>numeroUno && numeroCuatro>numeroDos && numeroCuatro>numeroTres && numeroCuatro>numeroCinco){
			printf("El n%cmero %i es mayor que todos \n", 163, numeroCuatro);
			if(numeroUno<numeroDos && numeroUno<numeroTres && numeroUno<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroUno);
			}else if(numeroDos<numeroUno && numeroDos<numeroTres && numeroDos<numeroCinco ){
				printf("El n%cmero %i es menor que todos", 163, numeroDos);
			}else if(numeroTres<numeroUno && numeroTres<numeroDos && numeroTres<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroTres);
			}else if(numeroCinco<numeroUno && numeroCinco<numeroDos && numeroCinco<numeroTres){
				printf("El n%cmero %i es menor que todos\n", 163, numeroCinco);
			}else{
				printf("El resto de los n%cmeros son iguales", 163);
			}
		}else if(numeroCinco>numeroUno && numeroCinco>numeroDos && numeroCinco>numeroTres && numeroCinco>numeroCuatro){
			printf("El n%cmero %i es mayor que todos\n", 163, numeroCinco);
			if(numeroUno<numeroDos && numeroUno<numeroTres && numeroUno<numeroCuatro){
				printf("El n%cmero %i es menor que todos\n", 163, numeroUno);
			}else if(numeroDos<numeroUno && numeroDos<numeroTres && numeroDos<numeroCuatro){
				printf("El n%cmero %i es menor que todos \n", 163, numeroDos);
			}else if(numeroTres<numeroUno && numeroTres<numeroDos && numeroTres<numeroCuatro){
				printf("El n%cmero %i es menor que todos\n", 163, numeroTres);
			}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroTres){
				printf("El n%cmero %i es menor que todos\n", 163, numeroCuatro);
			}else{
				printf("El resto de los n%cmeros son iguales", 163);
			}
		}else{
			printf("Todos los n%cmeros son iguales\n", 163);
		}

		return 0;
		
			
	}
