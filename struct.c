#include <stdio.h>
#include <string.h>

struct persona{
  char nombre[100];
  int edad;
  char sexo;
  int id_persona;
  char direccion[100], escolaridad[20],religion[50];

} ;




int main() {
  char resp, yn, resp1;
  int b=0,baja,c ;
  struct persona a[30];

  /*printf("\nBuenas tardes, presione enter para ingresar sus datos\n" );

  printf("\nIngrese su id :" );
  scanf("%d",&a.id_persona );
  fflush(stdin);
  printf("\nIngrese su nombre completo:" );
  fgets(a.nombre, 99, stdin);
  printf("\nIngrese su edad:" );
  scanf("%d", &a.edad );
  printf("\nIngrese su estatura :" );
  scanf("%c",&a.estatura );
  fflush(stdin);
  printf("\nIngrese su dirección :" );
  fgets(a.direccion, 99, stdin);
  printf("\nIngrese su religion :" );
  fgets(a.religion, 99, stdin);
  printf("\nIngrese su escolaridad :" );
  fgets(a.escolaridad, 99, stdin);*/

  /*printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" );
  printf("\nConfirme que sus datos sean correctos\n" );
  printf("\nSu id es: %d",a.id_persona );
  printf("\nSu nombre es: %s",a.nombre );
  printf("\nSu edad es: %d",a.edad );
  printf("\nSu estatura es: %c",a.estatura );
  printf("\nSu direccion es: %s",a.direccion );
  printf("\nSu religion es: %s",a.religion );
  printf("\nSu escolaridad es: %s",a.escolaridad );*/
  do {

  printf("\n\tS I S T E M A  C R U D");
  printf("\n\t\tS I S T E M A  C R U D");

  printf("\nIntroduzca la letra en parentesis que corresponda a la accion que desee realizar:");
  printf("\nAlta de persona (a)");
  printf("\nBaja de persona (b)");
  printf("\nCambio de persona (c)");
  printf("\nConsulta de persona (d)\n");
  scanf("%c",&resp );

  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" );
  switch (resp) {

      case 'a':
      c=0;
      if (c>0) {
        b++;
      }
      fflush(stdin);
      printf("\nIngrese su id :" );
      scanf("%d",&a[b].id_persona );
      fflush(stdin);
      printf("\nIngrese su nombre completo:" );
      fgets(a[b].nombre, 99, stdin);

      printf("\nIngrese su edad:" );
      scanf("%d", &a[b].edad );
      fflush(stdin);
      printf("\nIngrese su sexo :" );
      scanf("%c",&a[b].sexo );
      fflush(stdin);
      printf("\nIngrese su dirección :" );
      fgets(a[b].direccion, 99, stdin);
      printf("\nIngrese su religion :" );
      fgets(a[b].religion, 99, stdin);
      printf("\nIngrese su escolaridad :" );
      fgets(a[b].escolaridad, 99, stdin);
      fflush(stdin);
      c++;
      break;

      case 'b':

      printf("\nEste es el número de registros existentes" );
      for (int i = 0; i <= b; i++) {
        printf("\nSu id es: %d",a[i].id_persona );
        printf("\nSu nombre es: %s",a[i].nombre );
        printf("Su edad es: %d",a[i].edad );
        printf("\nSu estatura es: %c",a[i].sexo );
        printf("\nSu direccion es: %s",a[i].direccion );
        printf("Su religion es: %s",a[i].religion );
        printf("\nSu escolaridad es: %s",a[i].escolaridad );

      }
      printf("\nCual desea dar de baja?(0-%d)",b );
      scanf("%d",&baja );
      a[baja].id_persona=0;
      a[baja].nombre[0]= '\0';
      a[baja].direccion[0]= '\0';
      a[baja].religion[0]= '\0';
      a[baja].edad=0;
      a[baja].sexo= '\0';
      a[baja].escolaridad[0]='\0';
      break;
      default:
      printf("%s\n", );
      printf("\nBye" );
      break;
    }




} while(b<10);

  return 0;
}
