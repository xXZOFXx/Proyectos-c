#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */

    capturaNumero();
    return 0;
}




capturaNumero(){

    int cUno;
    int cDos;
    int cTres;
    int cCuatro;
    int cCinco;

    int *apUno;
    int *apDos;
    int *apTres;
    int *apCuatro;
    int *apCinco;


    apUno = cUno;
    apDos = cDos;
    apTres = cTres;
    apCuatro = cCuatro;
    apCinco = cCinco;

printf("bienvenido digita numero Uno");
scanf("%i", & cUno);


printf(" Digita numero Dos");
scanf("%i", & cDos);

printf(" Digita Numero Tres");
scanf("%i", & cTres);

printf("Digita  numero cuatro" );
scanf("%i", & cCuatro);


printf("Digita  numero Cinco");
scanf("%i", & cCinco);

}

