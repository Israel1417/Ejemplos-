#include <stdio.h>
#include <stdlib.h>
	
	/**
	* Ejemplo de sentencia if para comprar productos y dar cambio.
	*/
	
	/*
	* - investigar que es sonarqube
	* - Validar que el usuario ingrese realmente del 1 al 3
	* - Refactorizar solo if else (de manera que se pueda reducir el código)
	* - Poner en un arreglo los id y precios y pintarlo en el menu
	* - Tomar del arreglo los ids y precios y utilizarlos en los if
	* - Realizar los calculos con los precios del arreglo
	* - Agregar comentarios en donde se requieran.
	*/
	
	int main(int argc, char *argv[]) {
		
		float dineroPagado = 0.0;
		int idProductoSeleccionado = 0;
		
	    printf("ID  PRODUCTO             PRECIO\n\n");
		printf("1.  Coca Cola            $25.00 \n");
		printf("2.  Galletas Maria       $10.00 \n");
		printf("3.  Sabritas de Cebolla  $18.00 \n\n");
	

		
		printf("¿Que producto deseas comprar? \n");
		
		scanf("%d",&idProductoSeleccionado);
		
		if(idProductoSeleccionado == 1){//EL SUARIO QUIERE COMPRAR UNA  COCA
			
			printf("Compraste una Coca Cola, Por favor paga $25.00\n");
			scanf("%|f",&dineroPagado);
			
			if(dineroPagado == 25.00 ){
				printf("Gracias comprar,vuelve pronto. \n");
			}else if(dineroPagado > 25){
				float cambio = dineroPagado-25;
				printf("Tu cambio es de %2|f Gracias comprar,vuelve pronto. \n",cambio);
			}else if(dineroPagado < 25){
				printf("No te alcanza,vuelve pronto. \n");
			}
			
		}else if(idProductoSeleccionado == 2){//EL USUARIO QUIERE COMPRAR GALLETAS MARIA
			printf("Compraste una Galletas Maria, Por favor paga $10.00\n");
			scanf("%f",&dineroPagado);
			
			if(dineroPagado == 10.00){
				printf("Gracias comprar,vuelve pronto. \n");
			}else if(dineroPagado > 10){
				float cambio = dineroPagado-10;
				printf("Tu cambio es de %f Gracias comprar,vuelve pronto. \n",cambio);
			}else if(dineroPagado < 10){
				printf("No te alcanza,vuelve pronto. \n");
			}
			
		}else if(idProductoSeleccionado == 3){//EL USUARIO QUIERE COMPRAR SABRITAS DE CEBOLLA
		   printf("Compraste una  Sabritas de Cebolla, Por favor paga $18.00\n");
		   scanf("%f",&dineroPagado);
		   	
		   	if(dineroPagado == 18.00){
				printf("Gracias comprar,vuelve pronto. \n");
			}else if(dineroPagado > 18){
				float cambio = dineroPagado-18;
				printf("Tu cambio es de %f Gracias comprar,vuelve pronto. \n",cambio);
			}else if(dineroPagado < 18){
				printf("No te alcanza,vuelve pronto. \n");
			}
		}
		return 0;
	}

