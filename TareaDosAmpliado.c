#include <stdio.h>
#include <stdlib.h>

	/**
	* Ejemplo de sentencia de control if en donde compararemos cinco números para saber cual es mayor, cuál es el menor y si hay numeros iguales
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
		printf("\n");
		
		
		if(numeroUno > numeroDos && numeroUno > numeroTres && numeroUno > numeroCuatro && numeroUno > numeroCinco){
			printf("El n%cmero uno= %i es mayor que todos\n", 163, numeroUno);
			if(numeroDos<numeroTres && numeroDos<numeroCuatro && numeroDos<numeroCinco){
				printf("El n%cmero dos= %i es menor que todos\n", 163, numeroDos);
				if(numeroTres==numeroCuatro){
					printf("Los n%cmeros tres = %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
				}if(numeroTres==numeroCinco){
					printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
				}if(numeroCuatro==numeroCinco){
					printf("los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
				}
			
			}else if(numeroTres<numeroDos && numeroTres<numeroCuatro && numeroTres<numeroCinco){
				printf("El n%cmero tres= %i es menor que todos\n", 163, numeroTres);
					if(numeroDos==numeroCuatro){
						printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros dos= %i y cinco= %i son iguale\n", 163, numeroDos, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163,numeroCuatro, numeroCinco);
					}
			}else if(numeroCuatro<numeroDos && numeroCuatro<numeroTres && numeroCuatro<numeroCinco){
				printf("El n%cmero cuatro= %i es menor que todos \n", 163, numeroCuatro);
					if(numeroDos==numeroTres){
						printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
					}
			}else if(numeroCinco<numeroDos && numeroCinco<numeroTres && numeroCinco<numeroCuatro){
				printf("El n%cmero cinco= %i es menor que todos \n", 163, numeroCinco);
					if(numeroDos==numeroTres){
						printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n",163, numeroTres, numeroCuatro);
					}
			}else{
				if(numeroDos==numeroTres && numeroDos==numeroCuatro && numeroDos==numeroCinco){
					printf("El resto de los n%cmeros son iguales \n", 163);
				}else{
					if(numeroDos==numeroTres){
						printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
						if(numeroCuatro<numeroCinco){
							printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
						}else if(numeroCinco<numeroCuatro){
							printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
						}
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
						if(numeroTres<numeroCinco){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}else if(numeroCinco<numeroTres){
							printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
						}
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
						if(numeroTres<numeroCuatro){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}else if(numeroCuatro<numeroTres){
							printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
						}
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
						if(numeroDos<numeroCinco){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroCinco<numeroDos){
							printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
						}
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
						if(numeroDos<numeroCuatro){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroCuatro<numeroDos){
							printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
						}
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros %i y %i son iguales\n", 163, numeroCuatro, numeroCinco);
						if(numeroDos<numeroTres){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroTres<numeroDos){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}
					}	
				} 
			}
			
		}else if(numeroDos>numeroUno && numeroDos>numeroTres && numeroDos>numeroCuatro && numeroDos>numeroCinco){
			printf("El n%cmero dos= %i es mayor que todos \n", 163, numeroDos);
				if(numeroUno<numeroTres && numeroUno<numeroCuatro && numeroUno<numeroCinco){
					printf("El n%cmero uno= %i es menor que todos, \n", 163, numeroUno);
					if(numeroTres==numeroCuatro){
						printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163,numeroTres, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}
				}else if(numeroTres<numeroUno && numeroTres<numeroCuatro && numeroTres<numeroCinco){
					printf("El n%cmero tres= %i es menor que todos \n", 163, numeroTres);
						if(numeroUno==numeroCuatro){
							printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroCuatro==numeroCinco){
							printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
						}
				}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
					printf("El n%cmero cuatro= %i es menor que todos \n", 163, numeroCuatro);
						if(numeroUno==numeroTres){
							printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroTres==numeroCinco){
						printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
						}
				}else if(numeroCinco<numeroUno && numeroCinco<numeroTres && numeroCinco<numeroCuatro){
					printf("El n%cmero cinco= %i es menor que todos \n", 163, numeroCinco);
						if(numeroUno==numeroTres){
							printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroTres==numeroCuatro){
							printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
						}
				}else{
					if(numeroUno==numeroTres && numeroUno==numeroCuatro && numeroUno==numeroCinco){
						printf("El resto de los n%cmeros son iguales\n", 163);
					}else{
						if(numeroUno==numeroTres){
							printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
							if(numeroCuatro<numeroCinco){
								printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
							}else if(numeroCinco<numeroCuatro){
								printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
							}
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros %i y %i son iguales\n", 163, numeroUno, numeroCuatro);
							if(numeroTres<numeroCinco){
								printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
							}else if(numeroCinco<numeroTres){
								printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
							}
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
							if(numeroTres<numeroCuatro){
								printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
							}else if(numeroCuatro<numeroTres){
								printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
							}
						}if(numeroTres==numeroCuatro){
							printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
							if(numeroUno<numeroCinco){
								printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
							}else if(numeroCinco<numeroUno){
								printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
							}
						}if(numeroTres==numeroCinco){
							printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
							if(numeroUno<numeroCuatro){
								printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
							}else if(numeroCuatro<numeroUno){
								printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
							}
						}if(numeroCuatro==numeroCinco){
							printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
							if(numeroUno<numeroTres){
								printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
							}else if(numeroTres<numeroUno){
								printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);							
							}
						}	
					} 
				}
				
		}else if(numeroTres>numeroUno && numeroTres>numeroDos && numeroTres>numeroCuatro && numeroTres>numeroCinco){
			printf("El n%cmero tres= %i es mayor que todos \n", 163, numeroTres);
				if(numeroUno<numeroDos && numeroUno<numeroCuatro && numeroDos<numeroCinco){
					printf("El n%cmero uno= %i es memor que todos \n", 163, numeroUno);
					if(numeroDos==numeroCuatro){
						printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}
				}else if(numeroDos<numeroUno && numeroDos< numeroCuatro && numeroDos<numeroCinco){
					printf("El n%cmero dos= %i es menor que todos \n", 163, numeroDos);
					if(numeroUno==numeroCuatro){
						printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
					}if(numeroUno==numeroCinco){
						printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
					}
				}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
					printf("El n%cmero cuatro= %i es menor que todos\n");
						if(numeroUno==numeroDos){
							printf("Los n%cmeros uno=%i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
						}if(numeroDos==numeroCinco){
							printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
						}
				}else if(numeroCinco<numeroUno && numeroCinco<numeroDos && numeroCinco<numeroCuatro){
					printf("El n%cmero cinco= %i es menor que todos\n");
						if(numeroUno==numeroDos){
							printf("Los n%cmeros uno= %i y dos= %i son iguales\n",163, numeroUno, numeroDos);
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
						}if(numeroDos==numeroCuatro){
							printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
						}
				}else{
					if(numeroUno==numeroDos && numeroUno==numeroCuatro && numeroUno==numeroCinco){
						printf("El resto de los n%cmeros son iguales",163);
					}else{
						if(numeroUno==numeroDos){
							printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
							if(numeroCuatro<numeroCinco){
								printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
							}else if(numeroCinco<numeroCuatro){
								printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
							}
						}if(numeroUno==numeroCuatro){
							printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
							if(numeroDos<numeroCinco){
								printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
							}else if(numeroCinco<numeroDos){
								printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
							}
						}if(numeroUno==numeroCinco){
							printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
							if(numeroDos<numeroCuatro){
								printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
							}else if(numeroCuatro<numeroDos){
								printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
							}
						}if(numeroDos==numeroCuatro){
						printf("Los n%cmero dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
							if(numeroUno<numeroCinco){
								printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
							}else if(numeroCinco<numeroUno){
								printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
							}
						}if(numeroDos==numeroCinco){
							printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
							if(numeroUno<numeroCuatro){
								printf("El n%cmero uno= %i es el menor\n", 163, numeroDos);
							}else if(numeroCuatro<numeroUno){
								printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
							}
						}if(numeroCuatro==numeroCinco){
							printf("Los n%cmeros cuatro= %i y cinco= %i son iguales\n", 163, numeroCuatro, numeroCinco);
							if(numeroUno<numeroDos){
								printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
							}else if(numeroDos<numeroUno){
								printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
							}
						}	
					} 
				}
				
		}else if(numeroCuatro>numeroUno && numeroCuatro>numeroDos && numeroCuatro>numeroTres && numeroCuatro>numeroCinco){
			printf("El n%cmero cuatro= %i es mayor que todos \n", 163, numeroCuatro);
			if(numeroUno<numeroDos && numeroUno<numeroTres && numeroUno<numeroCinco){
				printf("El n%cmero uno= %i es menor que todos\n", 163, numeroUno);
				if(numeroDos==numeroTres){
					printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
				}if(numeroDos==numeroCinco){
					printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
				}if(numeroTres==numeroCinco){
					printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
				}
			}else if(numeroDos<numeroUno && numeroDos<numeroTres && numeroDos<numeroCinco ){
				printf("El n%cmero dos= %i es menor que todos", 163, numeroDos);
				if(numeroUno==numeroTres){
					printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroUno==numeroCinco){
					printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroTres==numeroCinco){
					printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
				}
			}else if(numeroTres<numeroUno && numeroTres<numeroDos && numeroTres<numeroCinco){
				printf("El n%cmero tres= %i es menor que todos\n", 163, numeroTres);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroCinco){
					printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
				}if(numeroDos==numeroCinco){
					printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
				}
			}else if(numeroCinco<numeroUno && numeroCinco<numeroDos && numeroCinco<numeroTres){
				printf("El n%cmero cinco= %i es menor que todos\n", 163, numeroCinco);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroTres){
					printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroDos==numeroTres){
					printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
				}
			}else{
				if(numeroUno==numeroDos && numeroUno==numeroTres && numeroUno==numeroCinco){
					printf("El resto de los n%cmeros son iguales", 163);
				}else{
					if(numeroUno==numeroDos){
						printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
						if(numeroTres<numeroCinco){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}else if(numeroCinco<numeroTres){
							printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
						}
					}if(numeroUno==numeroTres){
						printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
						if(numeroDos<numeroCinco){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroCinco<numeroDos){
							printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
						}
					}if(numeroUno==numeroCinco){
						printf("Los n%cmeros uno= %i y cinco= %i son iguales\n", 163, numeroUno, numeroCinco);
						if(numeroDos<numeroTres){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroTres<numeroDos){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}
					}if(numeroDos==numeroTres){
						printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
						if(numeroUno<numeroCinco){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroCinco<numeroUno){
							printf("El n%cmero cinco= %i es el menor\n", 163, numeroCinco);
						}
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros dos= %i y cinco= %i son iguales\n", 163, numeroDos, numeroCinco);
						if(numeroUno<numeroTres){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroTres<numeroUno){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros tres= %i y cinco= %i son iguales\n", 163, numeroTres, numeroCinco);
						if(numeroUno<numeroDos){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroDos<numeroUno){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}
					}	
					
				} 
			}
			
		}else if(numeroCinco>numeroUno && numeroCinco>numeroDos && numeroCinco>numeroTres && numeroCinco>numeroCuatro){
			printf("El n%cmero cinco= %i es mayor que todos\n", 163, numeroCinco);
			if(numeroUno<numeroDos && numeroUno<numeroTres && numeroUno<numeroCuatro){
				printf("El n%cmero uno= %i es menor que todos\n", 163, numeroUno);
				if(numeroDos==numeroTres){
					printf("Los n%cmeros dos= %i y tres= %i son iguales \n", 163, numeroDos, numeroTres);
				}if(numeroDos==numeroCuatro){
					printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
				}if(numeroTres==numeroCuatro){
					printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", numeroTres, numeroCuatro);
				}
			}else if(numeroDos<numeroUno && numeroDos<numeroTres && numeroDos<numeroCuatro){
				printf("El n%cmero dos= %i es menor que todos \n", 163, numeroDos);
				if(numeroUno==numeroTres){
					printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroUno==numeroCuatro){
					printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
				}if(numeroTres==numeroCuatro){
					printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
				}
			}else if(numeroTres<numeroUno && numeroTres<numeroDos && numeroTres<numeroCuatro){
				printf("El n%cmero tres= %i es menor que todos\n", 163, numeroTres);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroCuatro){
					printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
				}if(numeroDos==numeroCuatro){
					printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
				}
			}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos && numeroCuatro<numeroTres){
				printf("El n%cmero cuatro= %i es menor que todos\n", 163, numeroCuatro);
				if(numeroUno==numeroDos){
					printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
				}if(numeroUno==numeroTres){
					printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
				}if(numeroDos==numeroTres){
					printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
				}
			}else{
				if(numeroUno==numeroDos && numeroUno==numeroTres && numeroUno==numeroCuatro){
					printf("El resto de los n%cmeros son iguales\n", 163);
				}else{
					if(numeroUno==numeroDos){
						printf("Los n%cmeros uno= %i y dos= %i son iguales\n", 163, numeroUno, numeroDos);
						if(numeroTres<numeroCuatro){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}else if(numeroCuatro<numeroTres){
							printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
						}
					}if(numeroUno==numeroTres){
						printf("Los n%cmeros uno= %i y tres= %i son iguales\n", 163, numeroUno, numeroTres);
						if(numeroDos<numeroCuatro){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroCuatro<numeroDos){
							printf("El n%cmero cuatro= %i es el menor\n",163, numeroCuatro);
						}
					}if(numeroUno==numeroCuatro){
						printf("Los n%cmeros uno= %i y cuatro= %i son iguales\n", 163, numeroUno, numeroCuatro);
						if(numeroDos<numeroTres){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}else if(numeroTres<numeroDos){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}
					}if(numeroDos==numeroTres){
						printf("Los n%cmeros dos= %i y tres= %i son iguales\n", 163, numeroDos, numeroTres);
						if(numeroUno<numeroCuatro){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroCuatro<numeroUno){
							printf("El n%cmero cuatro= %i es el menor\n", 163, numeroCuatro);
						}
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros dos= %i y cuatro= %i son iguales\n", 163, numeroDos, numeroCuatro);
						if(numeroUno<numeroTres){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroTres<numeroUno){
							printf("El n%cmero tres= %i es el menor\n", 163, numeroTres);
						}
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros tres= %i y cuatro= %i son iguales\n", 163, numeroTres, numeroCuatro);
						if(numeroUno<numeroDos){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroDos<numeroUno){
							printf("El n%cmero dos= %i es el menor\n", 163, numeroDos);
						}
					}
				} 
			}
			
		}else{
			if(numeroUno==numeroDos && numeroUno==numeroTres && numeroUno==numeroCuatro && numeroUno==numeroCinco){
				printf("Todos los n%cmeros son iguales\n", 163);
				}else{
					if(numeroUno==numeroDos){
					printf("Los n%cmeros uno= %i y dos= %i son iguales \n", 163, numeroUno, numeroDos);
						if(numeroTres<numeroCuatro && numeroTres<numeroCinco){
							printf("El n%cmero tres= %i es el menor \n", 163, numeroTres);
						}else if(numeroCuatro<numeroTres && numeroCuatro<numeroCinco){
							printf("El n%cmero custro= %i es el menor \n",163, numeroCuatro);
						}else if(numeroCinco<numeroTres && numeroCinco<numeroCuatro){
							printf("El n%cmero cinco= %i es el menor \n",163, numeroCinco);
						}
					}else if(numeroUno==numeroTres){
						printf("Los n%cmeros uno= %i y tres= %i son iguales \n", 163, numeroUno, numeroTres);
							if(numeroDos<numeroCuatro && numeroDos<numeroCinco){
								printf("El n%cmero dos= %i es el menor \n", 163, numeroDos);
							}else if(numeroCuatro<numeroDos && numeroCuatro<numeroCinco){
								printf("El n%cmero cuatro= %i es el menor \n", 163, numeroCuatro);
							}else if(numeroCinco<numeroDos && numeroCinco<numeroCuatro){
								printf("El n%cmero cinco= %i es el menor \n", 163, numeroCinco);
							}
					}else if(numeroUno==numeroCuatro){
						printf("Los n%cmeros uno= %i y cuatro= %i son iguales \n", 163, numeroUno, numeroCuatro);
						if(numeroDos<numeroTres && numeroDos<numeroCinco){
							printf("El n%cmero dos= %i es el menor \n", 163, numeroDos);
						}else if(numeroTres<numeroDos && numeroTres<numeroCinco){
							printf("El n%cmero tres= %i es el menor \n", 163, numeroTres);
						}else if(numeroCinco<numeroDos && numeroCinco<numeroCuatro){
							printf("El n%cmero cinco= %i es el menor \n", 163, numeroCinco);
						}
					}if(numeroUno==numeroCinco){
						printf("Los n%cmeros uno= %i y cinco= %i son iguales \n", 163, numeroUno, numeroCinco);
						if(numeroDos<numeroTres && numeroDos<numeroTres){
							printf("El n%cmero dos= %i es el menor \n", 163, numeroDos);
						}else if(numeroTres<numeroDos && numeroTres<numeroCuatro){
							printf("El n%cmero tres= %i es el menor \n", 163, numeroTres);
						}else if(numeroCuatro<numeroDos && numeroCuatro<numeroTres){
							printf("El n%cmero cuatro= %i es el menor \n", 163, numeroCuatro);
						}
					}if(numeroDos==numeroTres){
						printf("Los n%cmeros dos= %i y tres= %i son iguales \n", 163, numeroDos, numeroTres);
						if(numeroUno<numeroCuatro && numeroUno<numeroCinco){
							printf("El n%cmero uno= %i es el menor \n", 163, numeroUno);
						}else if(numeroCuatro<numeroUno && numeroCuatro<numeroCinco){
						printf("El n%cmero cuatro= %i es el menor \n", 163, numeroCuatro);
						}else if(numeroCinco<numeroUno && numeroCinco<numeroCuatro){
							printf("El n%cmero cinco= %i es el menor \n", 163, numeroCinco);
						}
					}if(numeroDos==numeroCuatro){
						printf("Los n%cmeros dos= %i y cuatro= %i son iguales \n", 163, numeroDos, numeroCuatro);
						if(numeroUno<numeroTres && numeroUno<numeroCinco){
							printf("El n%cmero uno= %i es el menor \n", 163, numeroUno);
						}else if(numeroTres<numeroUno && numeroTres<numeroCinco){
							printf("El n%cmero tres= %i es el menor \n", 163, numeroTres);
						}else if(numeroCinco<numeroUno && numeroCinco<numeroTres){
							printf("El n%cmero cinco= %i es el menor \n", 163, numeroCinco);
						}
					}if(numeroDos==numeroCinco){
						printf("Los n%cmeros dos= %i y cinco= %i son iguales \n", 163, numeroDos, numeroCinco);
						if(numeroUno<numeroTres && numeroUno<numeroCuatro){
							printf("El n%cmero uno= %i es el menor\n", 163, numeroUno);
						}else if(numeroTres<numeroUno && numeroTres<numeroCuatro){
							printf("El n%cmero tres= %i es el menor \n", 163, numeroTres);
						}else if(numeroCuatro<numeroUno && numeroCuatro<numeroTres){
							printf("El n%cmero cuatro= %i es el menor \n", 163, numeroCuatro);
						}
					}if(numeroTres==numeroCuatro){
						printf("Los n%cmeros tres= %i y cuatro= %i son iguales \n", 163, numeroTres, numeroCuatro);
						if(numeroUno<numeroDos && numeroUno<numeroCinco){
							printf("El n%cmero uno= %i es el menor \n", 163, numeroUno);
						}else if(numeroDos<numeroUno && numeroDos<numeroCinco){
							printf("el n%cmero dos= %i es el menor \n", 163, numeroDos);
						}else if(numeroCinco<numeroUno && numeroCinco<numeroDos){
							printf("El n%cmero cinco= %i es el menor \n", 163, numeroCinco);
						}
					}if(numeroTres==numeroCinco){
						printf("Los n%cmeros tres= %i y cinco= %i son iguales \n", 163, numeroTres, numeroCinco);
						if(numeroUno<numeroDos && numeroUno<numeroCuatro){
							printf("El n%cmero uno= %i es el menor \n", 163, numeroUno);
						}else if(numeroDos<numeroUno && numeroDos<numeroCuatro){
							printf("El n%cmero dos= %i es el menor \n", 163, numeroDos);
						}else if(numeroCuatro<numeroUno && numeroCuatro<numeroDos){
							printf("El n%cmero cuatro= %i es el menor 'n", 163, numeroCuatro);
						}
					}if(numeroCuatro==numeroCinco){
						printf("Los n%cmeros cuatro= %i y cinco= %i son iguales \n", 163, numeroCuatro, numeroCinco);
						if(numeroUno<numeroDos && numeroUno<numeroTres){
							printf("El n%cmero uno= %i es el menor \n", 163, numeroCuatro);
						}else if(numeroDos<numeroUno && numeroDos<numeroTres){
							printf("El n%cmero dos= %i es el menor \n", 163, numeroDos);
						}else if(numeroTres<numeroUno && numeroTres<numeroDos){
							printf("El n%cmero tres= %i es el menor \n", 163, numeroTres);
						}
					}
				} 
			}
			printf("\n");
			printf("Si deseas continuar ingresa [0], si deseas salir ingresa [1]: \n");
			scanf("%d", &bandera);
			printf("\n");
		}
			
		
		return 0;
	}	
			

