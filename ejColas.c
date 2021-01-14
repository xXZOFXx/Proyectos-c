#include <stdio.h>
#include <stdlib.h>

/* Ejemplo de implementacion de una cola/lista */

typedef struct alumno
{
	int  matricula;
	char nombre[50];
	struct alumno *siguiente;
} st_alumno; 

int main(int argc, char *argv[]) {
	st_alumno *lista;
	st_alumno *nuevo;
	st_alumno *ultimo;
	char       opcion;   //almacenar respuesta de una pregunta
	
	lista = NULL;
	nuevo = NULL;
	ultimo = NULL;
	
	do
	{
		system("cls");
		//solicitar un nuevo nodo
		nuevo = (struct alumno *)malloc(sizeof(struct alumno));
		//capturar datos del nodo
		printf("Ingresa la matricula: ");
		scanf("%i",&nuevo->matricula);
		printf("Ingresa el nombre   : ");
		fflush(stdin);
		gets(nuevo->nombre);
		nuevo->siguiente = NULL;
		//agregar nodo a la lista
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
		printf("Desea Contunuar (s/n)?: ");
		opcion = getch();
		
	}while(opcion == 's' || opcion == 'S' );
	
	//impresion/procesamiento/vaciado de la pila
	system("cls");
	while(lista != NULL)
	{
		//si hay informacion en la pila
		printf("Matricula: %i\n",lista->matricula);
		printf("Nombre   : %s\n",lista->nombre);
		lista = lista->siguiente;
	}
	return 0;
}
