#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* Ejemplo de implementación de cola/lista/queue */

typedef struct alumno
{
	int matricula;
	char nombre[50];
	struct alumno *siguiente;
}st_alumno; //mi dato personalizado se llama st_alumno UDT

	st_alumno *lista;
	st_alumno *ultimo;	
	
/**************/
int main(int argc, char *argv[]) {

	char opcion; //almacena respuesta a una pregunta

	lista = NULL;
	ultimo = NULL;	
		
	//menu
	do{
		system("clear");
		printf("Menu de Alumno\n");
		printf("1) agregar alumno\n");
		printf("2) buscar alumno\n");
		printf("3) mostrar lista\n");
		printf("0) salir alumno\n");
		
		printf("Seleccione su opcion: ");
		opcion = getchar();
		
		switch(opcion)
		{
			case '1': agregaAlumno();
				break;
			case '2': buscarAlumno();
				break;
			case '3': listaAlumnos();
				break;
		}
	}while(opcion !='0');
	
	return 0;
}

agregaAlumno()
{
	char opcion;
	st_alumno *nuevo;
	nuevo = NULL;
	
	do
	{
		system("clear");
		
		nuevo = (struct alumno *)malloc(sizeof(struct alumno));
		
		//capturar datos del nodo
		printf("Ingresa la matricula: ");
		scanf("%i",&nuevo->matricula);
		printf("Ingresa el nombre:   ");
		fflush(stdin);
		
        fgets(nuevo->nombre, 10, stdin);
		nuevo->siguiente = NULL; 
		
		//agragar nodo a la lista
		if(lista == NULL)
		{
			//la lista esta vacia
			lista = nuevo;
			ultimo = nuevo;
		}
		else
		{	
			//ya hay informacion en la pila
			ultimo->siguiente = nuevo;
			ultimo = nuevo;
		}	
		printf("¿Desea continuar (S/N)?: ");
		opcion = getchar();
	}while(opcion =='s' || opcion =='S');
}

/**************/
buscarAlumno()
{
	return;
}
/**************/
 listaAlumnos()
 {
	//impresion/procesamiento/vaciado de la pila
	system("clear");
	while(lista != NULL)
	{
		// si hay iformacion en la pila
		printf("Matricula: %i\n",lista->matricula);
		printf("Nombre: %s\n",lista->nombre);
		lista = lista->siguiente;
	} 	
	return;
}
