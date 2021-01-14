#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//INVESTIGAR QUE SON DIRECTIVAS!!
int main(int argc, char *argv[]){

    setlocale(LC_CTYPE,"Spanish");

    int numero = 0; //se declara una inicialización 
    char nombre[20] = "Juan";
    printf("El valor del número es %i", numero);
    numero = 10; // se le de clara un valor 

    saludo();
    imprime();
return 0;

}

imprime(){

    printf("\thola \n");
    printf("\tjuan");

}

saludo(){

printf("Bienvenido \n");

}