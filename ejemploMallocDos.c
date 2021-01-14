
#include <stdio.h>
#include <stdlib.h>


typedef struct nodo
{
    /* data */
    int edad;
    char nom[20];
    float monto;
    struct nodo *siguiente;


};


int main(int argc, char const *argv[])
{
    /* code */
   struct nodo *nuevo;

    nuevo = (struct nodo* )malloc(sizeof(struct nodo));


    printf ("INGRESA LA EDAD:");

    scanf("%i", & nuevo -> edad);
    printf("Edad: %i\n", nuevo -> edad);

 

        printf("ingresa monto:");

            scanf("%f", &nuevo ->monto);

         printf("Monto: %f\n", nuevo -> monto);






    return 0;
    

}
