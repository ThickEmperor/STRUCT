#include <stdio.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
} Persona;

Persona array_personas[2]; //variable global persona

char cargar_datos(Persona array_personas[2]) //Función para cargar datos
{
	int c;
	char respuesta1='n';
	FILE *aarchivo;
	aarchivo = fopen("archivo.bin", "rb");
	if(aarchivo == NULL)
	{
		printf("Archivo inexistente o error en la apertura.\n");
		printf("Desea cargar datos manualmente? [Y/N]\n");
		scanf("%c",&respuesta1);
		if (respuesta1=='n'||respuesta1=='N')
		{
			return 0;
		} else{
			for (size_t i = 0; i < 2; i++)
			{
				printf("\n");
				array_personas[i].id_persona = i+1;
				while ((c = getc(stdin)) != '\n' && c != EOF);
				printf("Introduzca su nombre completo:\n");
				fgets(array_personas[i].nombre, 99,stdin);
				printf("Introduzca el sexo de la persona [H/M]:\n");
				array_personas[i].sexo = getc(stdin);
				while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
				printf("Introduzca la direccion:\n");
				fgets(array_personas[i].direccion, 99,stdin);
				printf("Introduzca la religion:\n");
				fgets(array_personas[i].religion, 49,stdin);
				printf("Introduzca la escolaridad:\n");
				fgets(array_personas[i].escolaridad, 19,stdin);
				printf("Introduzca la edad:\n");
				scanf("%hu", &array_personas[i].edad);
			}
		}
	}
	fclose(aarchivo);

	return 0;
}
char modificar_persona(Persona array_personas[2]) //funcion para modificar a una persona
{
	int opcion=0,c;
	char respuesta;
	do
	{
		printf("\nIntroduzca el id de la persona que desea modificar [1-10]: ");
		scanf("%d",&opcion );
		printf("\nPersona #%d\n",opcion );
		while ((c = getc(stdin)) != '\n' && c != EOF);
		printf("Introduzca su nombre completo:\n");
		fgets(array_personas[opcion-1].nombre, 99,stdin);
		printf("Introduzca el sexo de la persona [H/M]:\n");
		array_personas[opcion-1].sexo = getc(stdin);
		while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
		printf("Introduzca la direccion:\n");
		fgets(array_personas[opcion-1].direccion, 99,stdin);
		printf("Introduzca la religion:\n");
		fgets(array_personas[opcion-1].religion, 49,stdin);
		printf("Introduzca la escolaridad:\n");
		fgets(array_personas[opcion-1].escolaridad, 19,stdin);
		printf("Introduzca la edad:\n");
		scanf("%hu", &array_personas[opcion-1].edad);
		while ((c = getc(stdin)) != '\n' && c != EOF);
		printf("La persona #%d ha sido modificada exitosamente\n",opcion );
		printf("Desea modificar otra persona? [Y/N]\n");
		scanf("%c",&respuesta);
	}
	while(respuesta=='y'||respuesta=='Y');
	return 0;
}
char mostrar_personas(Persona array_personas[10]) //funcion para mostrar la lista de personas
{
	for (size_t i = 0; i < 2; i++)
	{
		printf("\nPersona #%lu\nNombre:%sSexo:%c\nDireccion: %sReligion: %sEscolaridad: %sEdad: %hu\n", array_personas[i].id_persona, array_personas[i].nombre, array_personas[i].sexo, array_personas[i].direccion, array_personas[i].religion, array_personas[i].escolaridad, array_personas[i].edad);
		printf("______________________");
	}
	return 0;
}
char guardar_datos(Persona array_personas[10]) //funcion para guardar datos
{
	FILE *aarchivo;
	printf("\nGuardando datos en archivo.bin\n");
	aarchivo = fopen("archivo.bin", "wb");
	if(aarchivo == NULL)
	{
		printf("Error al abrir archivo.\n");
		return 1;
	}
	fwrite(array_personas, sizeof(Persona), 2, aarchivo);
	printf("Guardado en file: archivo.bin\n");
	return 0;
}

int main() //función principal
{
  int opcion,c;
  FILE *aarchivo;
	char respuesta;

	do
	{
	printf("\nSelecciona una opcion\n" );
  printf("\n1.-Cargar datos de archivo.\n");
  printf("2.-Modificar datos de una persona.\n");
  printf("3.-Mostrar la lista de personas.\n");
  printf("4.-Guardar datos en archivo.\n");
  scanf("%d",&opcion);
    switch(opcion)
    {
      case 1://cargar datos

				opcion=0;
				cargar_datos(array_personas); //se llama a función cargar datos
				printf("Que desea hacer ahora? \n");
				printf("1.-Modificar datos de una persona. \n");
				printf("2.-Mostrar lista de personas.\n");
				printf("3.-Guardar datos en archivo.\n");
				scanf("%d",&opcion);
        switch(opcion)
    		{
          case 1: //cargar datos/modificar persona
						modificar_persona(array_personas); //funcion para modificar persona
          	break;
					case 2: //cargar datos/mostrar lista personas
						mostrar_personas(array_personas); //funcion para mostrar personas
          	break;
					case 3: //cargar datos/guardar datos en archivo
						guardar_datos(array_personas); //funcion para guardar datoss
          	break;
        }
      	break;
      case 2: //case para modificar datos de persona
				opcion=0;
				modificar_persona(array_personas);
				printf("\nQue desea hacer ahora? \n");
				printf("1.-Mostrar lista de personas.\n");
				printf("2.-Guardar datos en archivo\n");
				scanf("%d",&opcion);
        switch(opcion)
    		{
          case 1: //modificar_persona/mostrar personas
						mostrar_personas(array_personas); //funcion para mostrar lista
          	break;
					case 2: //modificar_persona/guardar datos en archivo
						guardar_datos(array_personas); //funcion para guardar datos
          	break;
        }
      	break;
      case 3: //mostrar lista de personas
				opcion=0;
				mostrar_personas(array_personas);
				printf("\n1.-Cargar datos de archivo.\n");
			  printf("2.-Modificar datos de una persona.\n");
				printf("3.-Guardar datos en archivo.\n");
				scanf("%d",&opcion);
				switch(opcion)
				{
					case 1: //mostrar lista/ cargar_datos
						cargar_datos(array_personas); //funcion para mostrar lista
						break;
					case 2: //mostrar lista/ modificar datos de persona
						modificar_persona(array_personas); //funcion para guardar datos
						break;
					case 3: //mostrar lista / guardar_datos
						guardar_datos(array_personas); //funcion para guardar datos
						break;
				}
	      break;
      case 4:
				opcion=0;
				guardar_datos(array_personas);
        break;
    }
	while ((c = getc(stdin)) != '\n' && c != EOF);
	printf("\nDesea hacer salir del programa? [Y/N]\n");
	scanf("%c",&respuesta );
	}
	while(respuesta=='n'||respuesta=='N');
		return 0;
}
