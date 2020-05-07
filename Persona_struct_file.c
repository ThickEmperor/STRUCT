// EstructuraPersona.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <stdio.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
} Persona;

//typedef struct persona Persona;


int main()
{
    Persona array_de_personas[2];
	  Persona una_persona;
    char c;
    FILE *aarchivo;

    aarchivo = fopen("salida.txt", "rb");
    if(aarchivo == NULL)
    {
        printf("Error al abrir archivo.\n");



    for (size_t i = 0; i < 2; i++)
    {
      printf("\n\n\n");
      array_de_personas[i].id_persona = i+1;
      printf("Introduzca su nombre completo:\n");
      fgets(array_de_personas[i].nombre, 99,stdin);
      printf("Introduzca el sexo de la persona [H/M]:\n");
      array_de_personas[i].sexo = getc(stdin);
      while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
      printf("Introduzca la direccion:\n");
      fgets(array_de_personas[i].direccion, 99,stdin);
      printf("Introduzca la religion:\n");
      fgets(array_de_personas[i].religion, 49,stdin);
      printf("Introduzca la escolaridad:\n");
      fgets(array_de_personas[i].escolaridad, 19,stdin);
      printf("Introduzca la edad:\n");
      scanf("%hu", &array_de_personas[i].edad);
      while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada

    aarchivo = fopen("salida.txt", "wb");
    if(aarchivo == NULL)
    {
        printf("Error al abrir archivo.\n");
        return(1);
    }
    }
  fwrite(array_de_personas, sizeof(Persona), 2, aarchivo);

  }
  else
	{
    fread(array_de_personas, sizeof(Persona),2, aarchivo);


    for (size_t i = 0; i < 2; i++)
		{

      fscanf(aarchivo,"%lu", &array_de_personas[i].id_persona);
      fgets(array_de_personas[i].nombre,99,aarchivo);
      fscanf(aarchivo,"%c", &array_de_personas[i].sexo);
      fgets(array_de_personas[i].direccion,99,aarchivo);
      fgets(array_de_personas[i].religion,49,aarchivo);
      fgets(array_de_personas[i].escolaridad,19,aarchivo);
      fscanf(aarchivo,"%hu", &array_de_personas[i].edad);

      printf("\n%lu\n%s\n%c\n%s\n%s\n%s\n%hu", array_de_personas[i].id_persona, array_de_personas[i].nombre, array_de_personas[i].sexo, array_de_personas[i].direccion, array_de_personas[i].religion, array_de_personas[i].escolaridad, array_de_personas[i].edad);
    }

	}


    /*for (size_t i = 0; i < 2; i++) {
      printf("%s\n%c\n%s\n%s\n%s\n%d",array_de_personas[i].nombre,array_de_personas[i].sexo, array_de_personas[i].direccion,array_de_personas[i].religion,array_de_personas[i].escolaridad, array_de_personas[i].edad );
    }*/

    fclose(aarchivo);
}
