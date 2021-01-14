#include <stdio.h>
#include <stdlib.h>
#define TAM 10





int numero[TAM];

int main(int argc, char *argv[]){
    inicializarArreglo();
    imprimeArreglo();
    return 0;
}

inicializarArreglo(){

    int i;
    //inicializar el arreglo
    for(i=0; i<TAM; i++){

        numero[i]=0;

    }

}

imprimeArreglo(){

int i;
for(i=0; i<TAM ; i++){

    printf("El arreglo ocurrencia %i contiene %i\n", i, numero[i]);

}

}