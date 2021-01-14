#include <stdlib.h>
#include <stdio.h>
int main(int argc, char * argv[]) {

	captura_cadenas(); //<--------para ejecutar una funcion de declara asi: 
	return 0;



}

captura_cadenas(){

char letra; //declara una variable de un solo caracter!
char nombre;


printf("ingresa un caracter: ");

	letra= getchar();

	printf("ingresa tu nombre:");

	fflush(stdin);  //limpia el buffer del telkcado, se hace cuando hay una cadena antes
	gets(nombre);

	 printf("la letra capturada es: %C \n", letra);

	printf("La persona que realizo el código es: %s \n",nombre);

}


captura_numeros(){


 int numero1 = 0;
  int numero2 = 0;
  int resultado = 0;
  float calificacion;
  printf("Captura numero1: ");
  scanf("%i", & numero1);
  printf("Captura numero2: ");
  scanf("%i", & numero2);
  resultado = numero1 + numero2;
  printf("La suma de %i + %i es %i \n", numero1, numero2, resultado);
  
  printf("Captura tu calificacion");

	scanf("%f",&calificacion);
printf("la calificacion final es: %.1f \n", calificacion);	

}
