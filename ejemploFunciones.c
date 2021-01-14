
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alumno {

   int matricula;
   char nombre[20];  



} stAlumno; //mi tipo alumno se llamara stAlumno

stAlumno alumno_dummy();

int main(int argc, char *argv[]){
    char nombre[20];
    int num1,num2;
    int numeros[5]={10,5,3,0,0};
    stAlumno valAlumno1;
    stAlumno valAlumno2;
    int resul= 0;

    stAlumno valAlumno3;

    saludo();
    
    saludoDos("Elliot");

     
    saludoDos("Darlene");

   
    saludoDos("Romero");


        suma(10,3); //mas de un argumento se envia separado por comas 
        num1 = 5;

        num2 = 4;

        suma(num1,num2);

        sumaArreglo(numeros);


        valAlumno1.matricula = 150787;
        strcpy(valAlumno1.nombre, "Elliot Anderson");
        imprimeAlumno(valAlumno1);



        valAlumno2.matricula = 152345;
        strcpy(valAlumno2.nombre, "Darlene Anderson");
        imprimeAlumno(valAlumno2);
        resul =  sumaDos(4,5);

        printf("El valor de resul es %i \n", resul);
        valAlumno3  = alumno_dummy();


    return 0;


}


//funcion que no recibe parametros ni regresa valores


saludo(){


    //codigo de la funcion

    printf("Hola \n");




}


//funcion que recibe parametros pero no regresa valores

saludoDos(char nombre[20]){

    printf("Buenos días : %s \n",nombre);


}



//funcion que recibe  varios parametros pero no regresa valores

suma(int vNum1, int vNum2){

    int vResult;

    vResult = vNum1 + vNum2;


    printf("El resultado de la suma %i mas %i es %i \n", vNum1,vNum2,vResult);


}

//funcion que recibe  arreglo  pero no regresa valores

sumaArreglo(int arreglo[5]){


        int i; //se dlecara así por que se hará un ciclo
        int result = 0;

        for(i=0; i<5 ; i++){

            result = result +arreglo[i];

            /*result += arreglo[i];*/


        }


        printf("El resultado de la suma de los elementos es:  %i", result);



}


//funcionq ue recibe una estructura sin retornar valores


imprimeAlumno(stAlumno vAlumno ){ //lamado a funcion por paso por valor  (le lanzo una copia y el la recibe )

        printf("Alumno %s matricula %i \n", vAlumno.nombre, vAlumno.matricula);


}



sumaDos(){





}



//funcion que no recibe parametros pero  retorna valores


 stAlumno   alumno_dummy(){

    stAlumno valumno;
    valumno.matricula = 12345;
    strcpy(valumno.nombre = "nombre dummy");


    return valumno;


}