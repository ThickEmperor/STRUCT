#include <stdio.h>
#include <string.h>


char* voltea_cadena(char arr[]) {

  int largo_cadena = strlen(arr) - 1;
  char temp;


  for (int i = 0; i <= (largo_cadena / 2); i++) {
    temp = arr[i];
    arr[i] = arr[largo_cadena - i];
    arr[largo_cadena - i] = temp;
  }

  return arr;
}


int main()
{
  char str[100] = {0}, * new_str, * str_comparar;
  int numero_palindromos, palabras[100]={0};

  printf("\n\n\n\n\t\t|||Verificación de palindromos|||\n\n\n\n" );
  printf("Ingrese el numero de palabras a comprobar" );
  scanf("%d",&numero_palindromos );

  for (size_t i = 0; i < numero_palindromos; i++)
  {
  printf("\nIngrese un texto: ");
  fflush(stdin);
  fgets(str, 99, stdin);
  str_comparar=str;

  new_str = voltea_cadena(str);

  if (new_str[strlen(new_str)-1]==new_str[1]&&new_str[strlen(new_str)-2]==new_str[2])//compara las cadenas, toma el último número de el string y lo compara con el primero
  {
    palabras[i]=1;
  }

  }

  for (size_t i = 0; i < numero_palindromos; i++) {
    if (palabras[i]==0) {
      printf("no\n");
    }
    if (palabras[i]==1) {
      printf("si\n");
    }
  }

  return 0;
}
