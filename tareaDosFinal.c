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
		int	bandera=0;
		
		while(bandera==0){
		
		
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
				if(numeroTres=numeroCuatro){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
				}if(numeroTres==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
				}if(numeroCuatro==numeroCinco){
					printf("los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
				}
			
			}else if(numeroTres<numeroDos && numeroTres<numeroCuatro && numeroTres<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroTres);
					if(numeroDos==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros %i y %i son iguale\n", 163, numeroDos, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163,numeroCuatro, numeroCinco);
					}
			}else if(numeroCuatro<numeroDos && numeroCuatro<numeroTres && numeroCuatro<numeroCinco){
				printf("El n%cmero %i es menor que todos \n", 163, numeroCuatro);
					if(numeroDos==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
					}
			}else if(numeroCinco<numeroDos && numeroCinco<numeroTres && numeroCinco<numeroCuatro){
				printf("El n%cmero %i es menor que todos \n", 163, numeroCinco);
					if(numeroDos==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n",163, numeroTres, numeroCuatro);
					}
			}else{
				if(numeroDos==numeroTres && numeroDos==numeroCuatro && numeroDos==numeroCinco){
					printf("El resto de los n%cmeros son iguales \n", 163);
				}else{
					if(numeroDos==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}	
				} 
			}
			
		}else if(numeroDos>numeroUno && numeroDos>numeroTres && numeroDos>numeroCuatro && numeroDos>numeroCinco){
			printf("El n%cmero %i es mayor que todos \n", 163, numeroDos);
				if(numeroUno<numeroTres && numeroUno<numeroCuatro && numeroUno<numeroCinco){
					printf("el n%cmero %i es menor que todos, \n", 163, numeroUno);
					if(numeroTres==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163,numeroTres, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}
				}else if(numeroTres<numeroUno && numeroTres<numeroCuatro && numeroTres<numeroCinco){
					printf("El n%cmero %i es menor que todos \n", 163, numeroTres);
						if(numeroUno==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroCuatro==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
						}
				}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
					printf("El n%cmero %i es menor que todos \n", 163, numeroCuatro);
						if(numeroUno==numeroTres){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroTres==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
						}
				}else if(numeroCinco<numeroUno && numeroCinco<numeroTres && numeroCinco<numeroCuatro){
					printf("El n%cmero %i es menor que todos \n", 163, numeroCinco);
						if(numeroUno==numeroTres){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroTres==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
						}
				}else{
					if(numeroUno==numeroTres && numeroUno==numeroCuatro && numeroUno==numeroCinco){
						printf("El resto de los n%cmeros son iguales\n", 163);
					}else{
						if(numeroUno==numeroTres){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroTres==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
						}if(numeroTres==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
						}if(numeroCuatro==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
						}	
					} 
				}
				
		}else if(numeroTres>numeroUno && numeroTres>numeroDos && numeroTres>numeroCuatro && numeroTres>numeroCinco){
			printf("El n%cmero %i es mayor que todos \n", 163, numeroTres);
				if(numeroUno<numeroDos && numeroUno<numeroCuatro && numeroDos<numeroCinco){
					printf("El n%cmero %i es memor que todos \n", 163, numeroUno);
					if(numeroDos==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}
				}else if(numeroDos<numeroUno && numeroDos< numeroCuatro && numeroDos<numeroCinco){
					printf("El n%cmero %i es menor que todos \n", 163, numeroDos);
					if(numeroUno==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
					}if(numeroUno==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}
				}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
					printf("El n%cmero %i es menor que todos\n");
						if(numeroUno==numeroDos){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroDos==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
						}
				}else if(numeroCinco<numeroUno && numeroCinco<numeroDos && numeroCinco<numeroCuatro){
					printf("El n%cmero %i es menor que todos\n");
						if(numeroUno==numeroDos){
							printf("Los n%cmeros %i y %i son iguales\n",163, numeroUno, numeroDos);
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroDos==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
						}
				}else{
					if(numeroUno==numeroDos && numeroUno==numeroCuatro && numeroUno==numeroCinco){
						printf("El resto de los n%cmeros son iguales",163);
					}else{
						if(numeroUno==numeroDos){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroDos==numeroCuatro){
						printf("Los n%cmero %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
						}if(numeroDos==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
						}if(numeroCuatro==numeroCinco){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
						}	
					} 
				}
				
		}else if(numeroCuatro>numeroUno && numeroCuatro>numeroDos && numeroCuatro>numeroTres && numeroCuatro>numeroCinco){
			printf("El n%cmero %i es mayor que todos \n", 163, numeroCuatro);
			if(numeroUno<numeroDos && numeroUno<numeroTres && numeroUno<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroUno);
				if(numeroDos==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
				}if(numeroDos==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
				}if(numeroTres==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
				}
			}else if(numeroDos<numeroUno && numeroDos<numeroTres && numeroDos<numeroCinco ){
				printf("El n%cmero %i es menor que todos", 163, numeroDos);
				if(numeroUno==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroUno==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroTres==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCinco);
				}
			}else if(numeroTres<numeroUno && numeroTres<numeroDos && numeroTres<numeroCinco){
				printf("El n%cmero %i es menor que todos\n", 163, numeroTres);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
				}if(numeroDos==numeroCinco){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
				}
			}else if(numeroCinco<numeroUno && numeroCinco<numeroDos && numeroCinco<numeroTres){
				printf("El n%cmero %i es menor que todos\n", 163, numeroCinco);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroDos==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
				}
			}else{
				if(numeroUno==numeroDos && numeroUno==numeroTres && numeroUno==numeroCinco){
					printf("El resto de los n%cmeros son iguales", 163);
				}else{
					if(numeroUno==numeroDos){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
					}if(numeroUno==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
					}if(numeroUno==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCinco);
					}if(numeroDos==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCinco);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros %i y 5i son iguales\n", 163, numeroTres, numeroCinco);
					}	
					
				} 
			}
			
		}else if(numeroCinco>numeroUno && numeroCinco>numeroDos && numeroCinco>numeroTres && numeroCinco>numeroCuatro){
			printf("El n%cmero %i es mayor que todos\n", 163, numeroCinco);
			if(numeroUno<numeroDos && numeroUno<numeroTres && numeroUno<numeroCuatro){
				printf("El n%cmero %i es menor que todos\n", 163, numeroUno);
				if(numeroDos==numeroTres){
					printf("Los n%cmeros %i y %i son iguales \n", 163, numeroDos, numeroTres);
				}if(numeroDos==numeroCuatro){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
				}if(numeroTres==numeroCuatro){
					printf("Los n%cmeros %i y %i son iguales\n", numeroTres, numeroCuatro);
				}
			}else if(numeroDos<numeroUno && numeroDos<numeroTres && numeroDos<numeroCuatro){
				printf("El n%cmero %i es menor que todos \n", 163, numeroDos);
				if(numeroUno==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroUno==numeroCuatro){
					printf("Los n%cmerso %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
				}if(numeroTres==numeroCuatro){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
				}
			}else if(numeroTres<numeroUno && numeroTres<numeroDos && numeroTres<numeroCuatro){
				printf("El n%cmero %i es menor que todos\n", 163, numeroTres);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroCuatro){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
				}if(numeroDos==numeroCuatro){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
				}
			}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroTres){
				printf("El n%cmero %i es menor que todos\n", 163, numeroCuatro);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroDos==numeroTres){
					printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
				}
			}else{
				if(numeroUno==numeroDos && numeroUno==numeroTres && numeroUno==numeroCuatro){
					printf("El resto de los n%cmeros son iguales\n", 163);
				}else{
					if(numeroUno==numeroDos){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroDos);
					}if(numeroUno==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroTres);
					}if(numeroUno==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
					}if(numeroDos==numeroTres){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroTres, numeroCuatro);
					}
				} 
			}
			
		}else{
			if(numeroUno==numeroDos && numeroUno==numeroTres && numeroUno==numeroCuatro && numeroUno==numeroCinco){
				printf("Todos los n%cmeros son iguales\n", 163);
				}else{
					if(numeroUno==numeroDos){
					printf("Los n%cmeros %i y %i son iguales \n", 163, numeroUno, numeroDos);
					}else if(numeroUno==numeroTres){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroUno, numeroTres);
					}else if(numeroUno==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroUno, numeroCuatro);
					}if(numeroUno==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroUno, numeroCinco);
					}if(numeroDos==numeroTres){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroDos, numeroCuatro);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroDos, numeroCinco);
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroTres, numeroCuatro);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroTres, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales \n", 163, numeroCuatro, numeroCinco);
					}
				} 
			}
			printf("Si deseas continuar ingresa [0], si deseas salir ingresa [1]: ");
			scanf("%d", &bandera);
		}
			
		
		return 0;
	}	
			

