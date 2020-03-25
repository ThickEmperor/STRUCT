#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  TAM 40


int main() {
  char nombre_carp[TAM][TAM], guarda_numerochar[10];
  int numero_carpetas,numero_char[TAM] = {0}, numero ;

  printf("\n\t\t| | F I L E   R E N A M E R\n");
  printf("\n\t\t\tF I L E   R E N A M E R | |\n");
  printf("\n\t\t| | F I L E   R E N A M E R\n");
  printf("\n\t\t\tF I L E   R E N A M E R | |\n");
  printf("\nIntroduzca el numero de archivos a modificar: ");
  scanf("%d",&numero_carpetas );

  printf("\nIntroduzca los nombres de las carpetas\n" );
  for (size_t i = 0; i <= numero_carpetas; i++)
  {
    fgets(nombre_carp[i],TAM, stdin);
  }

  for (size_t i = 0; i <= numero_carpetas; i++)
  {
    for (size_t j = 0; j < TAM; j++)
    {
      if (nombre_carp[i][j]=='.')
      {
        for (size_t k = 0; k < TAM/2; k++)
        {
          guarda_numerochar[k]=nombre_carp[i][j+k+1];
          nombre_carp[i][j+k+1]=0;
        }
        numero_char[i]=atoi(guarda_numerochar);
      }
    }
  }
  printf("Introduzca el número a sumar en los archivos: ");
  scanf("%d",&numero );

  printf("\n\nLas nuevas carpetas son:\n" );
  for (size_t i = 0; i < TAM; i++)
  {
    if (numero_char[i]==0)
      continue;
    printf("%s%d\n",nombre_carp[i],numero_char[i]+numero );
  }

  return 0;
}
