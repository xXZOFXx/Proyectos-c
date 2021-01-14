
#include <stdio.h>

#include <stdlib.h>
int fflush(FILE *stream);
typedef struct alumno
{
    /* data */

    int matricula;
    char nombre[50];
    struct alumno *anterior;

} st_alumno;

int main(int argc, char const *argv[])
{

    /* code */
    st_alumno *pila;
    st_alumno *nuevo;

    char opcion; //alamcenar respuesta a una prwegunta

    pila = NULL;
    nuevo = NULL;

    do
    {
        system("clear");
        nuevo = (struct alumno *)malloc(sizeof(struct alumno));

        printf("Ingresa La matricula: ");
        scanf("%i", &nuevo->matricula);
        printf("Ingresa nombre");
        fflush(stdin);
        fgets(nuevo->nombre,200, stdin);
        

        nuevo->anterior = NULL;

        //agregar nodo a la pila
        if (pila == NULL)
        {

            //la pila esta vacia
            pila = nuevo;
        }
        else
        {

            //Ya hay información en la pila

            nuevo->anterior = pila;

            pila = nuevo;
        }

        printf("Desea continuar  ? (S/n) ");
        opcion = getchar();

    } while (opcion == 's' || opcion == 'S');

    //se vacia la pila
    system("clear");

    while (pila != NULL)
    {
        //si hay información en la pila
        printf("Matricula :%i \n", pila->matricula);
        printf("Nombre : %s \n", pila->nombre);
        //apuntamos a la pila número 2
        pila = pila->anterior;
    }

    return 0;
}
