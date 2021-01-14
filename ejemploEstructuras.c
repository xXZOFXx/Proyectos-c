#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Alumno
{
    /* data */

    int matricula;
    char nombre[30];
    int edad;
    char carrera[50];

}; //se a definido vun tipo de estructura

struct Alumno valumno; //valumno contiene 4 elementos o 4 datos

int main(int argc, char *argv[]){

    //inicia libreria

    setlocale(LC_CTYPE, "Spanish");

    //forma de manipulacion con captura de estructura

    /*valumno.matricula = 150787;

    strcpy(valumno.nombre, "Elliot anderson ");
    valumno.edad = 22;
    strcpy(valumno.carrera, "informatica");*/

   captura();

    imprime();
   

    return 0;
}

 captura()
{

    
        /* data */

        printf("ingresa la matricula: ");

        scanf("%i", &valumno.matricula);

        fflush(stdin);

        printf("Ingresa el nombre : ");
        gets(valumno.nombre);

        printf("ingresa la edad :");

        scanf("%i", &valumno.edad);

        

        printf("Ingresa la carrera: ");
        gets(valumno.carrera);

       
   
}

imprime()
{


    printf("matricula %i\n", valumno.matricula);
    printf("Nombre %s\n", valumno.nombre);
    printf("edad %i\n", valumno.edad);
    printf("carrera %s\n", valumno.carrera);

}