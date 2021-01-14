#include <stdio.h>
#include <stdlib.h>
#define NMATERIAS 5
#define NPARCIALES 3

int m_calificaciones[NMATERIAS][NPARCIALES];

int main(int argc, char *argv[]){

    inicializaArreglo();
    capturaArreglo();
    imprimeArreglo();
   
   

    return 0;
}

inicializaArreglo(){

    int renglon = 0;
    int colmuna = 0;

    for (colmuna = 0; colmuna < NPARCIALES; colmuna++){

        for (renglon = 0; renglon < NMATERIAS; renglon++)
        {

            m_calificaciones[renglon][colmuna] = 0;
        }
    }


}

capturaArreglo(){

    int renglon = 0;
    int colmuna = 0;

    for (colmuna = 0; colmuna < NPARCIALES; colmuna++){

        printf("captura de parcial %i:\n", colmuna + 1);

        for (renglon = 0; renglon < NMATERIAS; renglon++){
            printf("captura calificacion materia  %i:", renglon + 1);
            scanf("%i", &m_calificaciones[renglon][colmuna]);
        }
    }
}

imprimeArreglo(){

    int renglon = 0;
    int colmuna = 0;

    int m1 =0;
    int m2 =0;
    int m3 =0;
    int m4 =0;
    int m5 =0;

    for (renglon = 0; renglon < NMATERIAS; ++renglon)
    {

        for (colmuna = 0; colmuna < NPARCIALES; ++colmuna){

            printf("Materia: %i Parcial: %i  calificación: %i  \t", renglon + 1, colmuna + 1, m_calificaciones[renglon][colmuna]);

            switch (renglon){
                case 0:
                    m1 = m1 + m_calificaciones[renglon][colmuna];
                    printf("m1 = %i",m1);
                    break;
                case 1:
                    m2 = m2 + m_calificaciones[renglon][colmuna];
                    printf("\n2");
                    break;
                case 2:
                    m3 = m3 + m_calificaciones[renglon][colmuna];
                    printf("\n3");
                    break;
                
                case 3:
                    m4 = m4 + m_calificaciones[renglon][colmuna];
                    printf("\n4");
                    break;
                case 4:
                    m5 = m5 + m_calificaciones[renglon][colmuna];
                    printf("\n5");
                    break;
                default:
                    break;

            }
                

        }

        printf("\n");
    }


/*
    printf("El promedio de la materia 1 es %i \n",m1);
    printf("El promedio de la materia 2 es %i \n",m2);
    printf("El promedio de la materia 3 es %i \n",m3);
    printf("El promedio de la materia 4 es %i \n",m4);
    printf("El promedio de la materia 5 es %i \n",m5);

*/

    printf("El promedio de la materia 1 es %d \n",(m1/NPARCIALES));
    printf("El promedio de la materia 2 es %d \n",(m2/NPARCIALES));
    printf("El promedio de la materia 3 es %d \n",(m3/NPARCIALES));
    printf("El promedio de la materia 4 es %d \n",(m4/NPARCIALES));
    printf("El promedio de la materia 5 es %d \n",(m5/NPARCIALES));
    
}



