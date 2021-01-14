//arreglos de dimenciones

#include <stdio.h>
#include <stdlib.h> 
#define TAM 10 /*Ejemplo de asignacion y barrido de un arreglo*/ 
int numero[TAM];
 //declara arreglo entero modular de 10 elementos

int main(int argc, char * argv[]) {
  inicializaArreglo();
  capturaArreglo();
  imprimeArreglo();
  return 0;
}
inicializaArreglo() {
  int i;
  //inicializar el arreglo
  for (i = 0; i < TAM; i++) {
    numero[i] = 0;
  }
}
capturaArreglo() {
  int i;
  //inicia ciclo de captura
  for (i = 0; i < TAM; i++) {
    printf("Indica el valor para el elemento %i: ", i + 1);
    scanf("%i", & numero[i]);
  }
}
imprimeArreglo() {
  int i;
  int suma = 0;
  for (i = 0; i < TAM; i++) {
    printf("El arreglo ocurrencia %i contiene %i\n", i, numero[i]);
    suma = suma + numero[i];
  }
  printf("La suma de los valores es: %i\n", suma);
}