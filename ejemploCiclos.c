#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

int i; //index iterador




	//instrucciones
for(i = 0; i <=10; i++ ){

if( (i % 2) == 0 ){
	
	 printf("i = %i y es par \n",i);
	
	} else {

		 printf("i = %i y es non \n",i);


	}

	switch(i){

		case 1: printf("%i - uno \n",i); break;
		case 2:printf("%i - dos \n",i); break;
		case 3: printf("%i - tres \n",i); break;
		case 4: printf("%i - cuatro \n",i); break;
		case 5: printf("%i - cinco \n",i); break;
		case 6: printf("%i - seis \n",i); break;
		case 7: printf("%i - siete \n",i); break;
		case 8: printf("%i - ocho \n",i); break;
		case 9: printf("%i - nueve \n",i); break;
		case 10: printf("%i - diez \n",i); break;
		default: printf("%i - otro \n",i); break;
	}


}


	printf("Ejemplo se ciclo while... \n\n");

	i = 11;

	while(i <= 20){

		printf("i = %i \n", i);
		i++;
	}



	printf("Ejemplo se ciclo do while... \n\n");

	i = 21;

	do{

		printf("i = %i \n", i);
		i++;

	} while(i <= 20);

	return 0;



}
