#include <stdio.h>
#include <stdio.h>

/**
*Ejemplo de sentencia de control en donde compararemos cinco números para saber cuál es el mayor, menor o si son iguales
*/

int main(){
	
	int numeroUno=15;
	int	numeroDos=15;
	int	numeroTres=15;
	int	numeroCuatro=15;
	int numeroCinco=15;
	
	if(numeroUno>numeroDos && numeroUno>numeroTres &&  numeroUno>numeroCuatro && numeroUno>numeroCinco){
		printf("el n%cmero %i es mayor que el n%cmero %i, mayor que el n%cmero %i, mayor que el n%cmero %i y es mayor que el n%cmero %i", 163, numeroUno, 163, numeroDos, 163, numeroTres, 163, numeroCuatro, 163, numeroCinco);
	}else if(numeroDos>numeroUno && numeroDos>numeroTres && numeroDos > numeroCuatro && numeroDos > numeroCinco){
		printf("el n%cmero %i es mayor que el n%cmero %i, mayor que el n%cmero %i, mayor que el n%cmero %i y es mayor que el n%cmero %i", 163, numeroDos, 163, numeroUno, 163, numeroTres, 163, numeroCuatro, 163, numeroCinco);
	}else if(numeroTres>numeroUno && numeroTres>numeroDos && numeroTres>numeroCuatro){
		printf("El n%cmero %i es mayor que el n%cmero %i, mayor que el n%cmero %i, mayor que el n%cmero %i y es mayor que el n%cmero %i", 163, numeroTres, 163, numeroUno, 163, numeroDos, 163, numeroCuatro, 163, numeroCinco);
	}else if(numeroCuatro>numeroUno && numeroCuatro>numeroDos && numeroCuatro>numeroTres && numeroCuatro>numeroCinco){
		printf("El n%cmero %i es mayor que el n%cmero %i, mayor que el n%cmero %i, mayor que el n%cmero %i y es mayor que el n%cmero %i", 163, numeroCuatro, 163, numeroUno, 163, numeroDos, 163, numeroTres, 163, numeroCinco);
	}else if(numeroCinco>numeroUno && numeroCinco>numeroDos && numeroCinco>numeroTres && numeroCinco>numeroCuatro){
		printf("El n%cmero %i es mayor que el n%cmero %i, mayor que el n%cmero %i, mayor que el n%cmero %i y es mayor que el n%cmero %i", 163, numeroCinco, 163, numeroUno, 163, numeroDos, 163, numeroTres, 163, numeroCuatro);
	}else{
		printf("El n%cmero %i es igual que el n%cmero %i, igual que el n%cmero %i, igual que el n%cmero %i y es igual al n%cmero %i", 163, numeroUno, 163, numeroDos, 163, numeroTres, 163, numeroCuatro, 163, numeroCinco);
	}

	return 0;
}
