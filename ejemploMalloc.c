
#include <stdio.h>
#include <stdlib.h>


typedef struct nodo
{
    /* data */
    int num1;
    char nom[20];
    float monto;
    struct nodo *siguiente;


};


int main(int argc, char const *argv[])
{
    /* code */
    int num1;
    char nom[20];
    float monto;


    int *ptr;

        ptr = malloc(40); //reserva memoria de un ciertyo tama;o 




    printf("el tama;o de un int es : %i \n", sizeof(int));
    printf("El tama;o de nom es : %i \n", sizeof(nom));
    printf("El tama;o de monto es : %i \n", sizeof(float));
    printf("El tama;o de struct nodo  es : %i \n", sizeof(struct nodo));


    return 0;
    

}
